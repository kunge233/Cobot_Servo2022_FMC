#include "encoder.h"
#include "fast_sin.h"

void Encoder::init(int lines, int pole_pairs, int speed_rpm_max) {
  this->lines = lines;
  this->pole_pairs = pole_pairs;
  this->speed_rpm_max = speed_rpm_max;
  kf_speed.init(0.005, 1.0);
  speed_filter.lowpass_init(1000, 0.000050);
  HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_ALL);
  reset();
};

void Encoder::reset() {
  last_cnt = __HAL_TIM_GET_COUNTER(&htim5);
  pos_relative = 0;
  pos_absolute = 0;
  pos_absolute_not_correct = 0;
  turn_cnt = 0;
  theta_cnt_max = lines / pole_pairs;
  temp_1 = (2 * M_PI) / theta_cnt_max;
  temp_2 = 1.0f / (lines * speed_rpm_max);
  first_get_z = false;
}

void Encoder::get() {
  ////////// 计算编码器增量
  cnt = __HAL_TIM_GET_COUNTER(&htim5);
  // 处理上下溢 31位编码器
  d_cnt = ((cnt << 1) - (last_cnt << 1)) >> 1;
  last_cnt = cnt;

  ////////// 位置计算
  // 将 cnt 转换为相对角度
  pos_relative += d_cnt;
  if (pos_relative >= lines) {
    pos_relative -= lines;
    turn_cnt++;
  } else if (pos_relative < 0) {
    pos_relative += lines;
    turn_cnt--;
  }
  // 用 int64_t 存绝对角度
  pos_absolute += d_cnt;
  pos_absolute_not_correct += d_cnt;

  ////////// 角度计算
  theta = (float)(pos_relative % theta_cnt_max) * temp_1;
  theta = reversed ? 2 * M_PI - theta : theta;

  ////////// 速度计算
  int k_ = k++ & (POS_SIZE - 1);
  int k_sub_10 = (k_ - 10) & (POS_SIZE - 1);
  if (k_sub_10 < 0)
    k_sub_10 += POS_SIZE;
  pos[k_] = pos_absolute_not_correct;
  speed_cnt = pos[k_] - pos[k_sub_10];

  // speed_cnt = pos_absolute_not_correct - last_pos;
  last_pos = pos_absolute_not_correct;
  speed = (float)speed_cnt * FOC_CTRL_FREQ / 10 * 60 * temp_2;
  // 滤波
  // speed = kf_speed.step(speed);
  speed = speed_filter.calc(speed);
  speed_rpm = speed * speed_rpm_max;
}

void Encoder::get_z() {
  if (!first_get_z) {
    get();
    pos_zero = pos_relative;
    first_get_z = true;
  } else {
    pos_relative = pos_zero;
    pos_absolute = turn_cnt * lines + pos_relative;
  }
}