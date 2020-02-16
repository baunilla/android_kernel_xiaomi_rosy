/*
 *
 * FocalTech TouchScreen driver.
 *
 * Copyright (c) 2010-2017, FocalTech Systems, Ltd., all rights reserved.
 * Copyright (C) 2019 XiaoMi, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/*********************************/
/* Author: Focaltech Driver Team */
/* Created: 2016-08-08           */
/* Version: v1.0                 */
/*********************************/
#ifndef _LINUX_FOCLATECH_CONFIG_H_
#define _LINUX_FOCLATECH_CONFIG_H_

/*************************/
/* Essential definitions */
/*************************/

/* Chip definition */
#define _FT8006					0x80060807
#define FTS_CHIP_TYPE				_FT8006

/* Nodes for tools */
#define FTS_SYSFS_NODE_EN			1
#define FTS_APK_NODE_EN				1

/* FW upgrade */
#define FTS_AUTO_UPGRADE_EN			1
#define FTS_AUTO_UPGRADE_FOR_LCD_CFG_EN		0
#define FTS_AUTO_CLB_EN				0
#define FTS_GET_VENDOR_ID_NUM			0
#define FTS_VENDOR_1_ID				0x00
#define FTS_VENDOR_2_ID				0x00
#define FTS_VENDOR_3_ID				0x00
#define FTS_UPGRADE_FW_APP			"include/firmware/FT8006m_app_sample.i"
#define FTS_UPGRADE_FW_ALL_WHITE		"include/firmware/FT8006m_white_all.i"
#define FTS_UPGRADE_FW_ALL_BLACK		"include/firmware/FT8006m_black_all.i"
#define FTS_UPGRADE_FW2_APP			"include/firmware/FT8006m_app_sample.i"
#define FTS_UPGRADE_FW3_APP			"include/firmware/FT8006m_app_sample.i"

/************/
/* Tunables */
/************/

/* Linux MultiTouch Protocol; 1* - Protocol B, 0 - Protocol A */
#define FTS_MT_PROTOCOL_B_EN			0

/* Report pressure in multitouch; 1* - enabled, 0 - disabled */
#define FTS_REPORT_PRESSURE_EN			1

/* Pressure type for multitouch; 1 - true pressure, 0* - constant pressure */
#define FTS_FORCE_TOUCH_EN			0

/* Gestures; 1 - enabled, 0* - disabled */
#define FTS_GESTURE_EN				1

/* Glove mode; 1 - enabled, 0* - disabled */
#define FTS_GLOVE_EN				0

/* Cover; 1 - enabled, 0* - disabled */
#define FTS_COVER_EN				0

/* Charger; 1 - enabled, 0* - disabled */
#define FTS_CHARGER_EN				0

/* Proximity sensor; 1 - enabled, 0* - disabled */
#define FTS_PSENSOR_EN				0

/* Power control; 1 - enabled, 0* - disabled */
#define FTS_POWER_SOURCE_CUST_EN		1

#endif /* _LINUX_FOCLATECH_CONFIG_H_ */
