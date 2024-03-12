//
// Created by Fir on 2024/3/11 011.
//

#include "core.h"

u8g2_t u8g2;

void halInit() {
  HAL::inject(new HALDreamCore);
}

void halDestroy() {
  HAL::destroy();
}

void init() {
  halInit();
}

void start() {
  for (;;) {
    HAL::canvasClear();
    HAL::setDrawType(1);
    HAL::drawEnglish(0, 0, "ok.");
    HAL::drawChinese(0, 16, "门");
    HAL::drawHLine(2, 0, 47);
    HAL::drawVLine(0, 35, 47);
    HAL::drawVLine(0, 32, 12);
    HAL::canvasUpdate();
  }
}