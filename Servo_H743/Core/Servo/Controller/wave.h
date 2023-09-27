#ifndef WAVE_H
#define WAVE_H

#include "fast_sin.h"
#include <math.h>

static inline float sine(float A, float w, float x, float phi, float b) {
  return A * fast_sin(w * x + phi) + b;
}

static inline float square(float A, float f, float x, float phi, float b) {
  float integral;
  float theta = modff(f * x + phi, &integral);
  // 1:\theta\in[0-0.5),-1:\theta\in[0.5-1)
  (theta < 0.5f) ? theta = A + b : theta = -A + b;
  return theta;
}

static inline float sawtooth(float k, float f, float x, float phi, float b) {
  float integral;
  float theta = modff(f * x + phi, &integral);
  return k * theta + b;
}

class Wave {
public:
  uint8_t wave_type;
  float amp;
  float freq;
  float phi;
  float offset;
  float f;
  int k;

  void reset() { k = 0; }
  float step() {
    switch (wave_type) {
    case 0:
      f = amp * fast_sin(freq * 2 * M_PI / FOC_CTRL_FREQ * k + phi) + offset;
      break;
    case 1:
      f = modff(freq / FOC_CTRL_FREQ * k + phi, &integral);
      // 1:\theta\in[0-0.5),-1:\theta\in[0.5-1)
      (f < 0.5f) ? f = amp + offset : f = -amp + offset;
      break;
    case 2:
      f = amp * modff(freq / FOC_CTRL_FREQ * k + phi, &integral) + offset;
      break;
    }
    k++;
    return f;
  }

private:
  float integral;
};

#endif // WAVE_H
