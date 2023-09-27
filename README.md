# Cobot_Servo2022_FMC
code of Rapid Phase Current Sampling in a Permanent Magnet Synchronous Motor Servo System Utilizing FMC Bus. (cobot conference) Include the code of STM32H743 and that of FPGA(Cyclone IV). Also include the data processing script of MATLAB.

固件分为两部分：
1.FPGA代码，负责接收ADS8363的采样数据，转换存储之后供H743调用
2.H743代码，负责伺服器的整体控制
在h743代码中，通过切换电流采样的函数即可实现电流采样方案的切换，这个函数是current.get()和current.get_fpga()

电流环相关时间采样是通过在H743电流环中断响应函数中，加入IO操作，再用逻辑分析仪捕捉IO输出信号，输出数据。最后用matlab实时脚本处理数据，并绘制出图像
void TIM8_UP_TIM13_IRQHandler(void)
{
  /* USER CODE BEGIN TIM8_UP_TIM13_IRQn 0 */

  /* USER CODE END TIM8_UP_TIM13_IRQn 0 */
  HAL_TIM_IRQHandler(&htim8);
  /* USER CODE BEGIN TIM8_UP_TIM13_IRQn 1 */
  HAL_GPIO_WritePin(IO_TEST_GPIO_Port, IO_TEST_Pin, 1);
  if ((cnt & 1) == 1) {
    servo_step();
  } else {
    // hw_pwm_update
  }
  if (cnt >= 1000) {
    tick = HAL_GetTick();
    cnt = 0;
  }
  cnt++;
  HAL_GPIO_WritePin(IO_TEST_GPIO_Port, IO_TEST_Pin, 0);
  /* USER CODE END TIM8_UP_TIM13_IRQn 1 */
}