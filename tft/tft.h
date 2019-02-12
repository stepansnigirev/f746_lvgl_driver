/**
 * @file tft.h
 *
 */

#ifndef DISP_H
#define DISP_H

/*********************
 *      INCLUDES
 *********************/
#include <stdint.h>
#include "lv_misc/lv_color.h"
#include "lv_misc/lv_area.h"

/*********************
 *      DEFINES
 *********************/
#define TFT_HOR_RES 480
#define TFT_VER_RES 272

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
#ifdef __cplusplus
extern "C" {
#endif

void tft_init(void);

#ifdef __cplusplus
} // extern "C"
#endif

/**********************
 *      MACROS
 **********************/

#endif
