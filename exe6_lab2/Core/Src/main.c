/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG(int num){
	  if(num == 0){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, SET);
	  }
	  if(num == 1){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, SET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, SET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, SET);
	  }
	  if(num == 2){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, SET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 3){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 4){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, SET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, SET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 5){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, SET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 6){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, SET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 7){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, SET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, SET);
	  }
	  if(num == 8){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
	  if(num == 9){
		  HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, RESET);
		  HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET);
		  HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET);
		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET);
		  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET);
		  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET);
		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET);
	  }
};
const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {2, 4, 6, 8};
void update7SEG ( int index ){
	switch ( index ){
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, RESET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display7SEG(led_buffer[0]);
			break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, RESET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display7SEG(led_buffer[1]);
			break ;
		case 2:
			// Display the third 7 SEG with led_buffer [2]
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, RESET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display7SEG(led_buffer[2]);
			break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, RESET);
			display7SEG(led_buffer[3]);
			break ;
		default :
			break ;
	 }
}
void updateClockBuffer (int hr, int min){
	if (hr <= 9){
		led_buffer[0] = 0;
		led_buffer[1] = hr;
	}else{
		led_buffer[0] = hr/10;
		led_buffer[1] = hr%10;
	}
	if (min <= 9){
		led_buffer[2] = 0;
		led_buffer[3] = min;
	}else{
		led_buffer[2] = min/10;
		led_buffer[3] = min%10;
	}
}
int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE = 10;
void setTimer0 ( int duration ){
	timer0_counter = duration / TIMER_CYCLE ;
	timer0_flag = 0;
}
void timer_run (){
	if( timer0_counter > 0){
		timer0_counter --;
		if( timer0_counter == 0) timer0_flag = 1;
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT (& htim2 );
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int hour = 15, minute = 8, second = 50;
  setTimer0 (1000) ;
  while (1)
  {
	  if( timer0_flag == 1){
		  	  HAL_GPIO_TogglePin ( led_red_GPIO_Port , led_red_Pin );
		  	  setTimer0 (2000) ;
	  }
	  second ++;
	  if ( second >= 60) {
		  second = 0;
		  minute ++;
	  }
	  if( minute >= 60) {
		  minute = 0;
		  hour ++;
	  }
	  if( hour >=24){
		  hour = 0;
	  }
	  updateClockBuffer (hour, minute);
	  HAL_Delay (1000) ;
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, DOT_Pin|led_red_Pin|en0_Pin|en1_Pin
                          |en2_Pin|en3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, seg0_Pin|seg1_Pin|seg2_Pin|seg3_Pin
                          |seg4_Pin|seg5_Pin|seg6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : DOT_Pin led_red_Pin en0_Pin en1_Pin
                           en2_Pin en3_Pin */
  GPIO_InitStruct.Pin = DOT_Pin|led_red_Pin|en0_Pin|en1_Pin
                          |en2_Pin|en3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : seg0_Pin seg1_Pin seg2_Pin seg3_Pin
                           seg4_Pin seg5_Pin seg6_Pin */
  GPIO_InitStruct.Pin = seg0_Pin|seg1_Pin|seg2_Pin|seg3_Pin
                          |seg4_Pin|seg5_Pin|seg6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
//int count = 0;
void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim ){
	/*if (index_led >= 4) index_led = 0;
	if (count == 0){
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, RESET);
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		update7SEG(index_led++);
	}
	if (count == 25){
		update7SEG(index_led++);
	}
	if (count == 50){
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		update7SEG(index_led++);
	}
	if (count == 75){
		update7SEG(index_led++);
	}
	if (count == 100){
		count = -1;
	}
	count++;*/
	timer_run ();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
