/* MIT License - Copyright (c) 2019-2021 Francis Van Roie
   For full license information read the LICENSE file in the project folder */

#ifndef HASP_DRV_FT6236U_H
#define HASP_DRV_FT6236U_H

#if TOUCH_DRIVER == 6236

#include "hasp_debug.h" // for TAG_DRVR

HASP_ATTRIBUTE_FAST_MEM bool FT6236U_getXY(int16_t* touchX, int16_t* touchY, bool debug);
void FT6236U_init();

#endif
#endif
