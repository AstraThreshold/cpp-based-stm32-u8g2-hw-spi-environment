//
// Created by Fir on 2024/3/11 011.
//

#ifndef SSD1306_STM32_SPI_DMA_ENVIRONMENT_CORE_SRC_CORE_H_
#define SSD1306_STM32_SPI_DMA_ENVIRONMENT_CORE_SRC_CORE_H_

#ifdef __cplusplus
extern "C" {
#endif

/*---- C ----*/

void init();
void start();

/*---- C ----*/

#ifdef __cplusplus
}

/*---- Cpp ----*/

#include "hal/hal_dreamCore/hal_dreamCore.h"

void halInit();
void halDestroy();

/*---- Cpp ----*/
#endif

#endif //SSD1306_STM32_SPI_DMA_ENVIRONMENT_CORE_SRC_CORE_H_
