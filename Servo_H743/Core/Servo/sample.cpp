#include "sample.h"
#include "objdict.h"

volatile int sample_p1_data[SAMPLE_SIZE]
    __attribute__((section(".bss.ARM.__at_0xC0000000")));
volatile int sample_p2_data[SAMPLE_SIZE]
    __attribute__((section(".bss.ARM.__at_0xC0040000")));

void Sample::save_data() {
  switch (p1_sampling_mode) {
  case 1:
    // sample parameter1
    if ((p1_in - p1_out) < 0) {
      if (interval_1 == 0) {
        sample_p1_data[p1_in++ % SAMPLE_SIZE] = pTable(p1_index);
        interval_1 = p1_sampling_interval;
      } else {
        interval_1--;
      }
    } else {
      // 采集完成
      p1_sampling_mode = 0;
      p1_sampling_completed = 1;
      interval_1 = 0;
    }
    break;
  case 3:
    // sample parameter1 and parameter2
    if ((p1_in - p1_out) < 0) {
      if (interval_1 == 0) {
        sample_p1_data[p1_in % SAMPLE_SIZE] = pTable(p1_index);
        sample_p2_data[p1_in % SAMPLE_SIZE] = pTable(p2_index);
        p1_in++;
        interval_1 = p1_sampling_interval;
      } else {
        interval_1--;
      }
    } else {
      // 采集完成
      p1_sampling_mode = 0;
      p1_sampling_completed = 1;
      interval_1 = 0;
    }
    break;

  default:
    break;
  }
}
