#ifndef CURRENT_H
#define CURRENT_H

#include "main.h"

template <class T, ADC_HandleTypeDef *hadcA, ADC_HandleTypeDef *hadcB,
          ADC_HandleTypeDef *hadcC>
class Current {
public:
  T i_a;
  T i_b;
  T i_c;

  inline void get() {
    HAL_ADCEx_InjectedStart(hadcA);
    HAL_ADCEx_InjectedStart(hadcB);
    HAL_ADCEx_InjectedStart(hadcC);
    HAL_ADCEx_InjectedPollForConversion(hadcA, 1);
    HAL_ADCEx_InjectedPollForConversion(hadcB, 1);
    HAL_ADCEx_InjectedPollForConversion(hadcC, 1);
    // i_x = adc_x / 32768.0f
    i_a = HAL_ADCEx_InjectedGetValue(hadcA, ADC_INJECTED_RANK_1) *
          T(3.0517578125e-05);
    i_b = HAL_ADCEx_InjectedGetValue(hadcB, ADC_INJECTED_RANK_1) *
          T(3.0517578125e-05);
    i_c = HAL_ADCEx_InjectedGetValue(hadcC, ADC_INJECTED_RANK_1) *
          T(3.0517578125e-05);
    // avg = (i_a + i_b + i_c) / 3.0f
    avg = (i_a + i_b + i_c) * T(0.3333333333333333);
    i_a = (i_a - avg);
    i_b = (i_b - avg);
    i_c = (i_c - avg);
  }

  inline void get_fpga() {
    // i_x = adc_x / 16384.0f
    i_a = *(int16_t *)FPGA_REG(0) * T(6.103515625e-05);
    i_b = *(int16_t *)FPGA_REG(2) * T(6.103515625e-05);
    i_c = *(int16_t *)FPGA_REG(3) * T(6.103515625e-05);
    // avg = (i_a + i_b + i_c) / 3.0f
    avg = (i_a + i_b + i_c) * T(0.3333333333333333);
    i_a = (i_a - avg);
    i_b = (i_b - avg);
    i_c = (i_c - avg);
  }

private:
  T avg;
};

#endif // CURRENT_H
