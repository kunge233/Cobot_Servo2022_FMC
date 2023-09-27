#ifndef LQT_H
#define LQT_H

#include <algorithm>

template <class T> class LQT {
public:
  // LQT
  T K_x;
  T K_d;

  // 鲁棒补偿器
  T f;
  T L;
  T G_sigma;
  T H_1_sigma;
  T H_2_sigma;
  T sigma;
  T v;

  // 输出
  T u_0;
  T u;

  void init(T u_max) {
    this->u_max = u_max;
    reset();
  }
  void reset() {
    // 还原状态
    sigma = 0;
  }
  T step(T x, T x_d) {
    // LQT
    u_0 = K_x * x + K_d * x_d;

    // 鲁棒补偿器
    v = -f * (L * x - sigma);
    u = u_0 + v;
    // 限幅
    u = std::min(u_max, u);
    u = std::max(-u_max, u);
    sigma = G_sigma * sigma + H_1_sigma * x + H_2_sigma * u;

    return u;
  }

private:
  T u_max = T(0.9);
};

#endif // LQT_H
