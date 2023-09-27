/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * File Name          : FMC.c
 * Description        : This file provides code for the configuration
 *                      of the FMC peripheral.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "fmc.h"

/* USER CODE BEGIN 0 */
static FMC_SDRAM_CommandTypeDef Command;
void BSP_SDRAM_Initialization_Sequence(uint32_t RefreshCount) {
  __IO uint32_t tmpmrd = 0;

  /* 时钟配置使能,对应STM32初始化SDRAM步骤3 */
  Command.CommandMode = FMC_SDRAM_CMD_CLK_ENABLE;
  Command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
  Command.AutoRefreshNumber = 1;
  Command.ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(&sdramHandle, &Command, SDRAM_TIMEOUT);

  /* 等待指定延迟周期,对应STM32初始化SDRAM步骤4 */
  /* Inserted delay is equal to 1 ms due to systick time base unit (ms) */
  HAL_Delay(1);

  /* PALL（“预充电所有存储区域”）命令,对应STM32初始化SDRAM步骤5 */
  Command.CommandMode = FMC_SDRAM_CMD_PALL;
  Command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
  Command.AutoRefreshNumber = 1;
  Command.ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(&sdramHandle, &Command, SDRAM_TIMEOUT);

  /* 自刷新命令,8个自刷新周期,对应STM32初始化SDRAM步骤6 */
  Command.CommandMode = FMC_SDRAM_CMD_AUTOREFRESH_MODE;
  Command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
  Command.AutoRefreshNumber = 8;
  Command.ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(&sdramHandle, &Command, SDRAM_TIMEOUT);

  /* 配置SDRAM模式寄存器,对应STM32初始化SDRAM步骤7 */
  /* 突发长度：1
     突发传输方式：顺序
     CAS潜伏期：2
     操作模式：标准
     操作模式：突发读/单一写
  */
  tmpmrd = (uint32_t)SDRAM_MODEREG_BURST_LENGTH_1 |
           SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL | SDRAM_MODEREG_CAS_LATENCY_2 |
           SDRAM_MODEREG_OPERATING_MODE_STANDARD |
           SDRAM_MODEREG_WRITEBURST_MODE_SINGLE;

  Command.CommandMode = FMC_SDRAM_CMD_LOAD_MODE;
  Command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
  Command.AutoRefreshNumber = 1;
  Command.ModeRegisterDefinition = tmpmrd;

  /* Send the command */
  HAL_SDRAM_SendCommand(&sdramHandle, &Command, SDRAM_TIMEOUT);

  /* 刷新率设置,对应STM32初始化SDRAM步骤8 */
  HAL_SDRAM_ProgramRefreshRate(&sdramHandle, RefreshCount);
}
/* USER CODE END 0 */

SRAM_HandleTypeDef hsram1;
SDRAM_HandleTypeDef hsdram1;

/* FMC initialization function */
void MX_FMC_Init(void) {
  /* USER CODE BEGIN FMC_Init 0 */

  /* USER CODE END FMC_Init 0 */

  FMC_NORSRAM_TimingTypeDef Timing = {0};
  FMC_SDRAM_TimingTypeDef SdramTiming = {0};

  /* USER CODE BEGIN FMC_Init 1 */

  /* USER CODE END FMC_Init 1 */

  /** Perform the SRAM1 memory initialization sequence
   */
  hsram1.Instance = FMC_NORSRAM_DEVICE;
  hsram1.Extended = FMC_NORSRAM_EXTENDED_DEVICE;
  /* hsram1.Init */
  hsram1.Init.NSBank = FMC_NORSRAM_BANK2;
  hsram1.Init.DataAddressMux = FMC_DATA_ADDRESS_MUX_ENABLE;
  hsram1.Init.MemoryType = FMC_MEMORY_TYPE_PSRAM;
  hsram1.Init.MemoryDataWidth = FMC_NORSRAM_MEM_BUS_WIDTH_16;
  hsram1.Init.BurstAccessMode = FMC_BURST_ACCESS_MODE_DISABLE;
  hsram1.Init.WaitSignalPolarity = FMC_WAIT_SIGNAL_POLARITY_LOW;
  hsram1.Init.WaitSignalActive = FMC_WAIT_TIMING_BEFORE_WS;
  hsram1.Init.WriteOperation = FMC_WRITE_OPERATION_DISABLE;
  hsram1.Init.WaitSignal = FMC_WAIT_SIGNAL_DISABLE;
  hsram1.Init.ExtendedMode = FMC_EXTENDED_MODE_DISABLE;
  hsram1.Init.AsynchronousWait = FMC_ASYNCHRONOUS_WAIT_DISABLE;
  hsram1.Init.WriteBurst = FMC_WRITE_BURST_DISABLE;
  hsram1.Init.ContinuousClock = FMC_CONTINUOUS_CLOCK_SYNC_ONLY;
  hsram1.Init.WriteFifo = FMC_WRITE_FIFO_ENABLE;
  hsram1.Init.PageSize = FMC_PAGE_SIZE_NONE;
  /* Timing */
  Timing.AddressSetupTime = 1;
  Timing.AddressHoldTime = 1;
  Timing.DataSetupTime = 8;
  Timing.BusTurnAroundDuration = 0;
  Timing.CLKDivision = 16;
  Timing.DataLatency = 17;
  Timing.AccessMode = FMC_ACCESS_MODE_A;
  /* ExtTiming */

  if (HAL_SRAM_Init(&hsram1, &Timing, NULL) != HAL_OK) {
    Error_Handler();
  }

  /** Perform the SDRAM1 memory initialization sequence
   */
  hsdram1.Instance = FMC_SDRAM_DEVICE;
  /* hsdram1.Init */
  hsdram1.Init.SDBank = FMC_SDRAM_BANK1;
  hsdram1.Init.ColumnBitsNumber = FMC_SDRAM_COLUMN_BITS_NUM_9;
  hsdram1.Init.RowBitsNumber = FMC_SDRAM_ROW_BITS_NUM_13;
  hsdram1.Init.MemoryDataWidth = FMC_SDRAM_MEM_BUS_WIDTH_16;
  hsdram1.Init.InternalBankNumber = FMC_SDRAM_INTERN_BANKS_NUM_4;
  hsdram1.Init.CASLatency = FMC_SDRAM_CAS_LATENCY_3;
  hsdram1.Init.WriteProtection = FMC_SDRAM_WRITE_PROTECTION_DISABLE;
  hsdram1.Init.SDClockPeriod = FMC_SDRAM_CLOCK_PERIOD_2;
  hsdram1.Init.ReadBurst = FMC_SDRAM_RBURST_ENABLE;
  hsdram1.Init.ReadPipeDelay = FMC_SDRAM_RPIPE_DELAY_0;
  /* SdramTiming */
  SdramTiming.LoadToActiveDelay = 2;
  SdramTiming.ExitSelfRefreshDelay = 11;
  SdramTiming.SelfRefreshTime = 7;
  SdramTiming.RowCycleDelay = 9;
  SdramTiming.WriteRecoveryTime = 4;
  SdramTiming.RPDelay = 3;
  SdramTiming.RCDDelay = 3;

  if (HAL_SDRAM_Init(&hsdram1, &SdramTiming) != HAL_OK) {
    Error_Handler();
  }

  /* USER CODE BEGIN FMC_Init 2 */
  BSP_SDRAM_Initialization_Sequence(REFRESH_COUNT);
  /* USER CODE END FMC_Init 2 */
}

static uint32_t FMC_Initialized = 0;

static void HAL_FMC_MspInit(void) {
  /* USER CODE BEGIN FMC_MspInit 0 */

  /* USER CODE END FMC_MspInit 0 */
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if (FMC_Initialized) {
    return;
  }
  FMC_Initialized = 1;
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Initializes the peripherals clock
  */
    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_FMC;
    PeriphClkInitStruct.PLL2.PLL2M = 12;
    PeriphClkInitStruct.PLL2.PLL2N = 300;
    PeriphClkInitStruct.PLL2.PLL2P = 5;
    PeriphClkInitStruct.PLL2.PLL2Q = 2;
    PeriphClkInitStruct.PLL2.PLL2R = 2;
    PeriphClkInitStruct.PLL2.PLL2RGE = RCC_PLL2VCIRANGE_1;
    PeriphClkInitStruct.PLL2.PLL2VCOSEL = RCC_PLL2VCOWIDE;
    PeriphClkInitStruct.FmcClockSelection = RCC_FMCCLKSOURCE_PLL2;
    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
    {
      Error_Handler();
    }

  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_ENABLE();

  /** FMC GPIO Configuration
  PD5   ------> FMC_NWE
  PD4   ------> FMC_NOE
  PE1   ------> FMC_NBL1
  PE0   ------> FMC_NBL0
  PB7   ------> FMC_NL
  PG15   ------> FMC_SDNCAS
  PD0   ------> FMC_D2
  PD0   ------> FMC_DA2
  PD1   ------> FMC_D3
  PD1   ------> FMC_DA3
  PC8   ------> FMC_NE2
  PG8   ------> FMC_SDCLK
  PF2   ------> FMC_A2
  PF1   ------> FMC_A1
  PF0   ------> FMC_A0
  PG5   ------> FMC_BA1
  PF3   ------> FMC_A3
  PG4   ------> FMC_BA0
  PG2   ------> FMC_A12
  PF5   ------> FMC_A5
  PF4   ------> FMC_A4
  PH2   ------> FMC_SDCKE0
  PE10   ------> FMC_D7
  PE10   ------> FMC_DA7
  PH3   ------> FMC_SDNE0
  PH5   ------> FMC_SDNWE
  PF13   ------> FMC_A7
  PF14   ------> FMC_A8
  PE9   ------> FMC_D6
  PE9   ------> FMC_DA6
  PE11   ------> FMC_D8
  PE11   ------> FMC_DA8
  PD15   ------> FMC_D1
  PD15   ------> FMC_DA1
  PD14   ------> FMC_D0
  PD14   ------> FMC_DA0
  PF12   ------> FMC_A6
  PF15   ------> FMC_A9
  PE12   ------> FMC_D9
  PE12   ------> FMC_DA9
  PE15   ------> FMC_D12
  PE15   ------> FMC_DA12
  PF11   ------> FMC_SDNRAS
  PG0   ------> FMC_A10
  PE8   ------> FMC_D5
  PE8   ------> FMC_DA5
  PE13   ------> FMC_D10
  PE13   ------> FMC_DA10
  PD10   ------> FMC_D15
  PD10   ------> FMC_DA15
  PD9   ------> FMC_D14
  PD9   ------> FMC_DA14
  PG1   ------> FMC_A11
  PE7   ------> FMC_D4
  PE7   ------> FMC_DA4
  PE14   ------> FMC_D11
  PE14   ------> FMC_DA11
  PD8   ------> FMC_D13
  PD8   ------> FMC_DA13
  */
  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_0|GPIO_PIN_1
                          |GPIO_PIN_15|GPIO_PIN_14|GPIO_PIN_10|GPIO_PIN_9
                          |GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_10|GPIO_PIN_9
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_15|GPIO_PIN_8
                          |GPIO_PIN_13|GPIO_PIN_7|GPIO_PIN_14;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_15|GPIO_PIN_8|GPIO_PIN_5|GPIO_PIN_4
                          |GPIO_PIN_2|GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF9_FMC;

  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_3
                          |GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_12|GPIO_PIN_15|GPIO_PIN_11;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

  /* USER CODE BEGIN FMC_MspInit 1 */

  /* USER CODE END FMC_MspInit 1 */
}

void HAL_SRAM_MspInit(SRAM_HandleTypeDef *sramHandle) {
  /* USER CODE BEGIN SRAM_MspInit 0 */

  /* USER CODE END SRAM_MspInit 0 */
  HAL_FMC_MspInit();
  /* USER CODE BEGIN SRAM_MspInit 1 */

  /* USER CODE END SRAM_MspInit 1 */
}

void HAL_SDRAM_MspInit(SDRAM_HandleTypeDef *sdramHandle) {
  /* USER CODE BEGIN SDRAM_MspInit 0 */

  /* USER CODE END SDRAM_MspInit 0 */
  HAL_FMC_MspInit();
  /* USER CODE BEGIN SDRAM_MspInit 1 */

  /* USER CODE END SDRAM_MspInit 1 */
}

static uint32_t FMC_DeInitialized = 0;

static void HAL_FMC_MspDeInit(void) {
  /* USER CODE BEGIN FMC_MspDeInit 0 */

  /* USER CODE END FMC_MspDeInit 0 */
  if (FMC_DeInitialized) {
    return;
  }
  FMC_DeInitialized = 1;
  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_DISABLE();

  /** FMC GPIO Configuration
  PD5   ------> FMC_NWE
  PD4   ------> FMC_NOE
  PE1   ------> FMC_NBL1
  PE0   ------> FMC_NBL0
  PB7   ------> FMC_NL
  PG15   ------> FMC_SDNCAS
  PD0   ------> FMC_D2
  PD0   ------> FMC_DA2
  PD1   ------> FMC_D3
  PD1   ------> FMC_DA3
  PC8   ------> FMC_NE2
  PG8   ------> FMC_SDCLK
  PF2   ------> FMC_A2
  PF1   ------> FMC_A1
  PF0   ------> FMC_A0
  PG5   ------> FMC_BA1
  PF3   ------> FMC_A3
  PG4   ------> FMC_BA0
  PG2   ------> FMC_A12
  PF5   ------> FMC_A5
  PF4   ------> FMC_A4
  PH2   ------> FMC_SDCKE0
  PE10   ------> FMC_D7
  PE10   ------> FMC_DA7
  PH3   ------> FMC_SDNE0
  PH5   ------> FMC_SDNWE
  PF13   ------> FMC_A7
  PF14   ------> FMC_A8
  PE9   ------> FMC_D6
  PE9   ------> FMC_DA6
  PE11   ------> FMC_D8
  PE11   ------> FMC_DA8
  PD15   ------> FMC_D1
  PD15   ------> FMC_DA1
  PD14   ------> FMC_D0
  PD14   ------> FMC_DA0
  PF12   ------> FMC_A6
  PF15   ------> FMC_A9
  PE12   ------> FMC_D9
  PE12   ------> FMC_DA9
  PE15   ------> FMC_D12
  PE15   ------> FMC_DA12
  PF11   ------> FMC_SDNRAS
  PG0   ------> FMC_A10
  PE8   ------> FMC_D5
  PE8   ------> FMC_DA5
  PE13   ------> FMC_D10
  PE13   ------> FMC_DA10
  PD10   ------> FMC_D15
  PD10   ------> FMC_DA15
  PD9   ------> FMC_D14
  PD9   ------> FMC_DA14
  PG1   ------> FMC_A11
  PE7   ------> FMC_D4
  PE7   ------> FMC_DA4
  PE14   ------> FMC_D11
  PE14   ------> FMC_DA11
  PD8   ------> FMC_D13
  PD8   ------> FMC_DA13
  */

  HAL_GPIO_DeInit(GPIOD, GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_0|GPIO_PIN_1
                          |GPIO_PIN_15|GPIO_PIN_14|GPIO_PIN_10|GPIO_PIN_9
                          |GPIO_PIN_8);

  HAL_GPIO_DeInit(GPIOE, GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_10|GPIO_PIN_9
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_15|GPIO_PIN_8
                          |GPIO_PIN_13|GPIO_PIN_7|GPIO_PIN_14);

  HAL_GPIO_DeInit(GPIOB, GPIO_PIN_7);

  HAL_GPIO_DeInit(GPIOG, GPIO_PIN_15|GPIO_PIN_8|GPIO_PIN_5|GPIO_PIN_4
                          |GPIO_PIN_2|GPIO_PIN_0|GPIO_PIN_1);

  HAL_GPIO_DeInit(GPIOC, GPIO_PIN_8);

  HAL_GPIO_DeInit(GPIOF, GPIO_PIN_2|GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_3
                          |GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_12|GPIO_PIN_15|GPIO_PIN_11);

  HAL_GPIO_DeInit(GPIOH, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_5);

  /* USER CODE BEGIN FMC_MspDeInit 1 */

  /* USER CODE END FMC_MspDeInit 1 */
}

void HAL_SRAM_MspDeInit(SRAM_HandleTypeDef* sramHandle){
  /* USER CODE BEGIN SRAM_MspDeInit 0 */

  /* USER CODE END SRAM_MspDeInit 0 */
  HAL_FMC_MspDeInit();
  /* USER CODE BEGIN SRAM_MspDeInit 1 */

  /* USER CODE END SRAM_MspDeInit 1 */
}

void HAL_SDRAM_MspDeInit(SDRAM_HandleTypeDef* sdramHandle){
  /* USER CODE BEGIN SDRAM_MspDeInit 0 */

  /* USER CODE END SDRAM_MspDeInit 0 */
  HAL_FMC_MspDeInit();
  /* USER CODE BEGIN SDRAM_MspDeInit 1 */

  /* USER CODE END SDRAM_MspDeInit 1 */
}
/**
  * @}
  */

/**
  * @}
  */
