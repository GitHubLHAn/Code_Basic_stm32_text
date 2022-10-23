#define AN_H

#include "stm32f1xx_hal.h"

#define LATCH(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, x); // thay doi cac chan nay cho phu hop
#define DATA(x)  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, x); // thay doi cac chan nay cho phu hop
#define SHIFT(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, x); // thay doi cac chan nay cho phu hop

extern void lightOut(unsigned char data);
