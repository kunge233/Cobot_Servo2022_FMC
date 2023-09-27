#ifndef PID_H
#define PID_H

template <class T> class PID {
public:
  T k_p;
  T k_i;
  T k_d;
  T u_p;
  T u_i;
  T u_d;
  T u;
  T u_max;
  bool saturation_flag;

  void init(T k_p, T k_i, T k_d, T u_max) {
    this->k_p = k_p;
    this->k_i = k_i;
    this->k_d = k_d;
    this->u_max = u_max;
    reset();
  }
  void reset() {
    u_i = 0;
    saturation_flag = 0;
    last_error = 0;
  }
  T step(T error) {
    if (saturation_flag == 0) {
      u_i += k_i * error;
    }
    u = k_p * error + u_i + k_d * (error - last_error);
    last_error = error;

    if (u > u_max) {
      u = u_max;
      saturation_flag = 1;
    } else if (u < -u_max) {
      u = -u_max;
      saturation_flag = 1;
    } else {
      saturation_flag = 0;
    }
    return u;
  }
  T step2(T error) {
    u_p = k_p * error;
    float I_max = u_max - u_p;
    if (I_max < 0)
      I_max = 0.0f;
    float I_min = -u_max - u_p;
    if (I_min > 0)
      I_min = 0.0f;
    u_i += k_i * error;
    if (u_i > I_max)
      u_i = I_max;
    if (u_i < I_min)
      u_i = I_min;
    u = u_p + u_i;
    if (u > u_max)
      u = u_max;
    if (u < -u_max)
      u = -u_max;
    return u;
    // Up = obj->Kp * Error;
    // I_max = obj->outMax;
    // I_min = obj->outMin;
    // I_max -= Up;
    // if(I_max < 0.0f) I_max = 0.0f;
    // I_min -= Up;
    // if(I_min > 0.0f) I_min = 0.0f;
    // Ui = MATH_sat(obj->Ui + (obj->Ki*Error),I_max,I_min);
    // obj->Out = MATH_sat(Up + Ui,obj->outMax,obj->outMin);
  }
  T P_PI_Switch_step(T error, T xd) {
    // u_p = k_p, error;
    u_p = k_p * error;
    if (saturation_flag == 0) {
      // u_i += FIX_MUL(k_i, error);
      u_i += k_i * error;
    }
    // u_d = FIX_MUL(k_d, error - lastError);
    u_d = k_d * (error - last_error);
    last_error = error;

    u = u_p + u_i + u_d;

    // Saturate the output	//P PI�л�
    if (u > 0.5 * xd) {
      saturation_flag = 1;
      u = u_p;
    } else if (u < -0.5 * xd) {
      saturation_flag = 1;
      u = u_p;
    } else {
      saturation_flag = 0;
    }

    if (u > u_max) {
      u = u_max;
    } else if (u < -u_max) {
      u = -u_max;
    }
    return u;
  }

  T P_PI_Switch_step2(T error, T xt, T xd) {
    // u_p = k_p, error;
    u_p = k_p * error;
    if (saturation_flag == 0) {
      // u_i += FIX_MUL(k_i, error);
      u_i += k_i * error;
    }
    // u_d = FIX_MUL(k_d, error - lastError);
    u_d = k_d * (error - last_error);
    last_error = error;

    u = u_p + u_i + u_d;

    // Saturate the output	//P PI�л�
    if (xt < 0.98 * xd && xt > -0.98 * xd) {
      saturation_flag = 1;
      u = u_p;
    } else {
      saturation_flag = 0;
    }

    if (u > u_max) {
      u = u_max;
    } else if (u < -u_max) {
      u = -u_max;
    }
    return u;
  }

private:
  T last_error;
};

#endif // PID_H
