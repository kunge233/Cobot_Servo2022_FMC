#ifndef KF_H
#define KF_H

template <class T> class KF {
public:
  T Q;
  T R;

  T x_k;

  void init(T Q, T R) {
    this->Q = Q;
    this->R = R;
    reset();
  }
  void reset() {
    x_k = 0;
    P_k = 1;
  }
  T step(T x) {
    // 预测
    x_k_prior = x_k;
    P_k_prior = P_k + Q;
    // 校正
    K_k = P_k_prior / (P_k_prior + R);
    x_k = x_k_prior + K_k * (x - x_k_prior);
    P_k = (1 - K_k) * P_k_prior;
    return x_k;
  }

private:
  T x_k_prior;
  T P_k;
  T P_k_prior;
  T K_k;
};

#endif // KF_H
