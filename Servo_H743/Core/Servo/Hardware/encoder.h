#ifndef ENCODER_H
#define ENCODER_H

#include "kf.h"
#include "main.h"
#include "sos_filter.h"
#include "stm32h7xx_hal.h"

#define POS_SIZE 32
extern TIM_HandleTypeDef htim5;

class Encoder {
public:
  int d_cnt;

  // 位置相关
  int pos_relative;
  int64_t pos_absolute;

  // 角度相关
  int lines;
  int pole_pairs;
  bool reversed; // 是否换相
  float theta;

  // 速度相关
  int speed_cnt;
  float speed_rpm;
  float speed_rpm_max;
  float speed;
  KF<float> kf_speed;
  SOSFilter speed_filter;
  // Z信号相关
  int pos_zero;

  void init(int lines, int pole_pairs, int speed_rpm_max);
  void reset();
  void get();
  void get_z();

private:
  int k;
  int64_t pos[POS_SIZE];
  int cnt;
  int last_cnt;

  // 位置相关
  int64_t pos_absolute_not_correct;
  int turn_cnt;

  // 角度相关
  int theta_cnt_max;
  float temp_1;

  // 速度相关
  int64_t last_pos;
  float temp_2;

  // Z信号相关
  bool first_get_z;
};

#endif // ENCODER_H
