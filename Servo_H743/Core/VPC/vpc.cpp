#include "kfifo.h"
#include "objdict.h"
#include "usbd_cdc_if.h"

// 注意! size 必须为 2 的整数幂
#define VPC_FIFO_SIZE 8

struct VPC_Message {
  uint8_t data[8];
};

kfifo<VPC_Message, VPC_FIFO_SIZE> kfifo_vpc;
VPC_Message vpc_rx_m;
uint8_t vpc_is_busy = 0;
int vpc_index;
int vpc_value;
int tx_frames;

extern "C" void VPC_Receive(uint8_t *Buf) {
  memcpy(vpc_rx_m.data, Buf, 8);
  if (kfifo_vpc.is_not_full())
    kfifo_vpc.push(vpc_rx_m);
}

extern "C" void VPC_Loop() {
  while (kfifo_vpc.is_not_empty() && (!vpc_is_busy)) {
    VPC_Message m = kfifo_vpc.top();
    // 解析数据并返回
    switch (m.data[0]) {
    case 'R': {
      // 解析索引
      vpc_index = 0;
      memcpy(&vpc_index, m.data + 1, 3);
      // 读取对象字典中的数据
      if (auto it = objdict.find(vpc_index); it != objdict.end()) {
        memcpy(m.data + 4, it->second, 4);
        // 发送数据
        vpc_is_busy = 1;
        if (CDC_Transmit_HS(m.data, 8) == USBD_OK) {
          tx_frames++;
        }
      }
      break;
    }
    case 'W': {
      vpc_index = 0;
      memcpy(&vpc_index, m.data + 1, 3);
      memcpy(&vpc_value, m.data + 4, 4);
      if (auto it = objdict.find(vpc_index); it != objdict.end()) {
        *((int *)it->second) = vpc_value;
        // 发送数据
        vpc_is_busy = 1;
        if (CDC_Transmit_HS(m.data, 8) == USBD_OK) {
          tx_frames++;
        }
      }
      break;
    }
    case 'S': {
      uint8_t *ptr;
      if (m.data[2] == 0) {
        ptr = (uint8_t *)sample_p1_data;
      } else {
        ptr = (uint8_t *)sample_p2_data;
      }
      int left = m.data[4] + (m.data[5] << 8);
      int right = m.data[6] + (m.data[7] << 8);
      if (left < 0 || left >= right || right > SAMPLE_SIZE) {
        break;
      }
      // vpc_is_busy = 1;
      CDC_Transmit_HS(m.data, 8);
      // if (CDC_Transmit_HS(m.data, 8) == USBD_OK) {
      //   tx_frames++;
      // }
      // while (vpc_is_busy)
      //   ;
      // vpc_is_busy = 1;
      HAL_Delay(1);
      CDC_Transmit_HS(ptr + 4 * left, 4 * (right - left));
      HAL_Delay(10);
    }
    }
  }
}