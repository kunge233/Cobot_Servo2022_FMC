#pragma once

/**
 * Second-order sections representation of the IIR filter.
 * IIR滤波器的二阶级联形式
 */
class SOSFilter {
public:
  float b_0, b_1, b_2;
  float a_1, a_2;
  float alpha;
  inline SOSFilter() {}
  inline void init(float b_0, float b_1, float b_2, float a_1, float a_2) {
    this->b_0 = b_0;
    this->b_1 = b_1;
    this->b_2 = b_2;
    this->a_1 = a_1;
    this->a_2 = a_2;
    reset();
  }
  // fc:截止频率Hz  Ts：采样时间s
  inline void lowpass_init(float fc, float Ts) {
    constexpr float pi_times_2 = 6.283185307179586f;
    float b = pi_times_2 * fc * Ts;
    alpha = b / (1 + b); // ***

    b_0 = alpha;
    b_1 = 0;
    b_2 = 0;
    a_1 = alpha - 1;
    a_2 = 0;
    reset();
  }
  inline void reset() {
    x_n_minus_1 = 0;
    x_n_minus_2 = 0;
    y_n_minus_1 = 0;
    y_n_minus_2 = 0;
  }
  inline float calc(float x_n) {
    y_n = (b_0 * x_n) + (b_1 * x_n_minus_1) + (b_2 * x_n_minus_2) -
          (a_1 * y_n_minus_1) - (a_2 * y_n_minus_2);
    x_n_minus_2 = x_n_minus_1;
    x_n_minus_1 = x_n;
    y_n_minus_2 = y_n_minus_1;
    y_n_minus_1 = y_n;
    return y_n;
  }
  inline float calc2(float value) {
    static float out_last = 0; //上一次滤波值
    float out;
    out = out_last + alpha * (value - out_last);
    out_last = out;
    return out;
  }

private:
  float x_n_minus_1, x_n_minus_2;
  float y_n, y_n_minus_1, y_n_minus_2;
};
