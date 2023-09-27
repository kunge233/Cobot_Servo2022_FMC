/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FOC_TIM_ARR 6000
#define FOC_DT 47
#define FOC_CTRL_FREQ 20000
#define LAN9253_IRQ_Pin GPIO_PIN_1
#define LAN9253_IRQ_GPIO_Port GPIOI
#define LAN9253_IRQ_EXTI_IRQn EXTI1_IRQn
#define SYNC0_Pin GPIO_PIN_2
#define SYNC0_GPIO_Port GPIOI
#define SYNC0_EXTI_IRQn EXTI2_IRQn
#define SYNC1_Pin GPIO_PIN_3
#define SYNC1_GPIO_Port GPIOI
#define SYNC1_EXTI_IRQn EXTI3_IRQn
#define SPI6_NSS0_Pin GPIO_PIN_8
#define SPI6_NSS0_GPIO_Port GPIOA
#define FPGA_RST_Pin GPIO_PIN_9
#define FPGA_RST_GPIO_Port GPIOH
#define Z_IRQ_Pin GPIO_PIN_12
#define Z_IRQ_GPIO_Port GPIOH
#define Z_IRQ_EXTI_IRQn EXTI15_10_IRQn
#define IO_TEST_Pin GPIO_PIN_8
#define IO_TEST_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */
#define FPGA_REG(addr) ((uint32_t *)(0x64000000 + (addr << 1)))
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
