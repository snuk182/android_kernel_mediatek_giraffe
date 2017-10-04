/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __DISP_INTR_H__
#define __DISP_INTR_H__

#include "disp_hal.h"

typedef enum {
    DISP_LCD_INTERRUPT_EVENTS_START     = 0x01,
    DISP_LCD_TRANSFER_COMPLETE_INT      = 0x01,
    DISP_LCD_REG_COMPLETE_INT           = 0x02,
    DISP_LCD_CDMQ_COMPLETE_INT          = 0x03,
    DISP_LCD_HTT_INT                    = 0x04,
    DISP_LCD_SYNC_INT                   = 0x05,
    DISP_LCD_SCREEN_UPDATE_START_INT    = 0x06,
    DISP_LCD_SCREEN_UPDATE_END_INT      = 0x07,
    DISP_LCD_INTERRUPT_EVENTS_END       = 0x07,
    
    DISP_DSI_INTERRUPT_EVENTS_START     = 0x11,
    DISP_DSI_READ_RDY_INT               = 0x11,
    DISP_DSI_CMD_DONE_INT               = 0x12,
    DISP_DSI_VSYNC_INT                  = 0x13,
    DISP_DSI_TARGET_LINE_INT            = 0x14,
    DISP_DSI_REG_UPDATE_INT             = 0x15,
    DISP_DSI_VMDONE_INT                 = 0x16,
    DISP_DSI_SCREEN_UPDATE_START_INT    = 0x17,
    DISP_DSI_SCREEN_UPDATE_END_INT      = 0x18,
    DISP_DSI_INTERRUPT_EVENTS_END       = 0x18,

    DISP_DPI_INTERRUPT_EVENTS_START     = 0x21,
    DISP_DPI_FIFO_EMPTY_INT             = 0x21,
    DISP_DPI_FIFO_FULL_INT              = 0x22,
    DISP_DPI_OUT_EMPTY_INT              = 0x23,
    DISP_DPI_CNT_OVERFLOW_INT           = 0x24,
    DISP_DPI_LINE_ERR_INT               = 0x25,
    DISP_DPI_VSYNC_INT                  = 0x26,
    DISP_DPI_TARGET_LINE_INT            = 0x27,
    DISP_DPI_REG_UPDATE_INT             = 0x28,
    DISP_DPI_SCREEN_UPDATE_START_INT    = 0x29,
    DISP_DPI_SCREEN_UPDATE_END_INT      = 0x30,
    DISP_DPI_INTERRUPT_EVENTS_END       = 0x30,
} DISP_INTERRUPT_EVENTS;

#define DISP_LCD_INTERRUPT_EVENTS_NUMBER (DISP_LCD_INTERRUPT_EVENTS_END - DISP_LCD_INTERRUPT_EVENTS_START + 1)
#define DISP_DSI_INTERRUPT_EVENTS_NUMBER (DISP_DSI_INTERRUPT_EVENTS_END - DISP_DSI_INTERRUPT_EVENTS_START + 1)
#define DISP_DPI_INTERRUPT_EVENTS_NUMBER (DISP_DPI_INTERRUPT_EVENTS_END - DISP_DPI_INTERRUPT_EVENTS_START + 1)

typedef void (*DISP_INTERRUPT_CALLBACK_PTR)(void *params);

typedef struct{
    DISP_INTERRUPT_CALLBACK_PTR pFunc;
    void *pParam;
}DISP_INTERRUPT_CALLBACK_STRUCT;

DISP_STATUS DISP_SetInterruptCallback(DISP_INTERRUPT_EVENTS eventID, DISP_INTERRUPT_CALLBACK_STRUCT *pCBStruct);

#endif
