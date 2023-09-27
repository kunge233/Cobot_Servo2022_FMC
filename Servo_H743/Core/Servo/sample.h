#pragma once
#define SAMPLE_SIZE 65536

extern volatile int sample_p1_data[SAMPLE_SIZE];
extern volatile int sample_p2_data[SAMPLE_SIZE];

class Sample {
public:
  int p1_index;
  int p1_in;
  int p1_out;
  int p1_sampling_mode;
  int p1_sampling_completed;
  int p1_sampling_interval;

  int p2_index;
  int p2_in;
  int p2_out;
  int p2_sampling_mode;
  int p2_sampling_completed;
  int p2_sampling_interval;

  Sample() {
    p1_sampling_mode = 0;
    interval_1 = 0;
    interval_2 = 0;
  }
  void save_data();

private:
  int interval_1;
  int interval_2;
};
