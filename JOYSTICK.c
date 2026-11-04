#include "main.h"
#include "stdio.h"
#include "../ECUAL/JOYSTICK/JOYSTICK.h"
 
#define JoyStick1    0
 
UART_HandleTypeDef huart1;
 
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);
 
int main(void)
{
    uint16_t JoyStick1_XY[2] = {0};
    uint8_t MSG[15] = {'\0'};
 
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_USART1_UART_Init();
    JoyStick_Init(JoyStick1);
 
    while (1)
    {
        // Read Joystick1 XY Values
        JoyStick_Read(JoyStick1, JoyStick1_XY);
        // Print X, Y Values Over UART1
      //Insert any necessary uart functions for project 
      /*  sprintf(MSG, "%d,%d\r\n", JoyStick1_XY[0], JoyStick1_XY[1]);
        HAL_UART_Transmit(&huart1, MSG, sizeof(MSG), 100);
        HAL_Delay(10); */
    }
}
