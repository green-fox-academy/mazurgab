/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>

UART_HandleTypeDef uart_handle;
GPIO_InitTypeDef led;
GPIO_InitTypeDef led2;
GPIO_InitTypeDef button;
GPIO_InitTypeDef pushbutton;
//TIM_HandleTypeDef tim_handle;

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

#define UART_PUTCHAR int __io_putchar(int ch)

int main(void)
{

    /* Configure the MPU attributes as Write Through */
    MPU_Config();

    /* Enable the CPU Cache */
    CPU_CACHE_Enable();

    HAL_Init();

    /* Configure the System clock to have a frequency of 216 MHz */
    SystemClock_Config();

    BSP_LED_Init(LED_GREEN);


    __HAL_RCC_USART1_CLK_ENABLE();
    uart_handle.Instance = USART1;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;

    BSP_COM_Init(COM1, &uart_handle);


    __HAL_RCC_GPIOA_CLK_ENABLE(); //red led
    led.Pin = GPIO_PIN_0;
    led.Mode = GPIO_MODE_OUTPUT_PP;
    led.Pull = GPIO_PULLDOWN;
    led.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOA, &led);

    __HAL_RCC_GPIOI_CLK_ENABLE(); //green led
    led2.Pin = GPIO_PIN_3;
    led2.Mode = GPIO_MODE_OUTPUT_PP;
    led2.Pull = GPIO_PULLDOWN;
    led2.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOI, &led2);

    // ========= GPIO =============
    __HAL_RCC_GPIOF_CLK_ENABLE();
    button.Pin = GPIO_PIN_9;
    button.Pull = GPIO_PULLDOWN;
    button.Speed = GPIO_SPEED_FAST;
    button.Mode = GPIO_MODE_IT_RISING;
    HAL_GPIO_Init(GPIOF, &button);

    HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0x02, 0x00);
    HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

    __HAL_RCC_GPIOI_CLK_ENABLE(); //built in blue button
    pushbutton.Pin = GPIO_PIN_11;
    pushbutton.Pull = GPIO_PULLDOWN;
    pushbutton.Speed = GPIO_SPEED_FAST;
    pushbutton.Mode = GPIO_MODE_IT_RISING;
    HAL_GPIO_Init(GPIOI, &pushbutton);

    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0x01, 0x00);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

    //HAL_NVIC_SetPriority(EXTI3_IRQn, 0x01, 0x00);
    //HAL_NVIC_EnableIRQ(EXTI3_IRQn);

    while (1) {
    	//HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_SET);
    }
}


UART_PUTCHAR
{
    HAL_UART_Transmit(&uart_handle, (uint8_t*)&ch, 1, 0xFFFF);
    return ch;
}

void EXTI15_10_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(pushbutton.Pin);
}

void EXTI9_5_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(button.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == GPIO_PIN_9){
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
	}else if(GPIO_Pin == GPIO_PIN_11){
		HAL_GPIO_TogglePin(GPIOI, GPIO_PIN_3);
	}
}

static void SystemClock_Config(void)
{
    RCC_ClkInitTypeDef RCC_ClkInitStruct;
    RCC_OscInitTypeDef RCC_OscInitStruct;

    /* Enable HSE Oscillator and activate PLL with HSE as source */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 25;
    RCC_OscInitStruct.PLL.PLLN = 432;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 9;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /* activate the OverDrive to reach the 216 Mhz Frequency */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
        Error_Handler();
    }

    /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
    RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
            | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void)
{
    /* User may add here some code to deal with this error */
    while (1) {
    }
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void)
{
    MPU_Region_InitTypeDef MPU_InitStruct;

    /* Disable the MPU */
    HAL_MPU_Disable();

    /* Configure the MPU attributes as WT for SRAM */
    MPU_InitStruct.Enable = MPU_REGION_ENABLE;
    MPU_InitStruct.BaseAddress = 0x20010000;
    MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
    MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
    MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
    MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
    MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
    MPU_InitStruct.Number = MPU_REGION_NUMBER0;
    MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
    MPU_InitStruct.SubRegionDisable = 0x00;
    MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

    HAL_MPU_ConfigRegion(&MPU_InitStruct);

    /* Enable the MPU */
    HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void)
{
    /* Enable I-Cache */
    SCB_EnableICache();

    /* Enable D-Cache */
    SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
    /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

    /* Infinite loop */
    while (1)
    {
    }
}
#endif

/**
 * @}
 */

/**
 * @}
 */

