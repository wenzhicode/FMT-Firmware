/******************************************************************************
 * Copyright 2021 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#ifndef NCP5623C_H__
#define NCP5623C_H__

#include <rtthread.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NCP5623_LED_OFF     0x00 /**< off */
#define NCP5623_LED_CURRENT 0x20 /**< current register */
#define NCP5623_LED_PWM0    0x40 /**< pwm0 register */
#define NCP5623_LED_PWM1    0x60 /**< pwm1 register */
#define NCP5623_LED_PWM2    0x80 /**< pwm2 register */

#define NCP5623_CMD_SET_COLOR  0x01
#define NCP5623_CMD_SET_BRIGHT 0x02

enum {
	NCP5623_LED_RED = 0,
	NCP5623_LED_GREEN,
	NCP5623_LED_BLUE,
	NCP5623_LED_YELLOW,
    NCP5623_LED_PURPLE,
    NCP5623_LED_CYAN,
	NCP5623_LED_WHITE,
};

rt_err_t drv_ncp5623c_init(const char* dev_name);

#ifdef __cplusplus
}
#endif

#endif