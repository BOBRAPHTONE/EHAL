/*--------------------------------------------------------------------------
File   : blueio_board.h

Author : Hoang Nguyen Hoan          Sep. 20, 2014

Desc   : Contains definitions for BlueIO series boards for the IMM-NRF5x 
		 series modules

Copyright (c) 2014, I-SYST inc., all rights reserved

Permission to use, copy, modify, and distribute this software for any purpose
with or without fee is hereby granted, provided that the above copyright
notice and this permission notice appear in all copies, and none of the
names : I-SYST or its contributors may be used to endorse or
promote products derived from this software without specific prior written
permission.

For info or contributing contact : hnhoan at i-syst dot com

THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------
Modified by          Date              Description

----------------------------------------------------------------------------*/

#ifndef __BLUEIO_BOARD_H__
#define __BLUEIO_BOARD_H__

#ifndef BLUEIO_BOARD
#define BLUEIO_BOARD						1
#endif

// LEDs
#define BLUEIO_LED1_PORT					0
#define BLUEIO_LED1_PIN						30
#define BLUEIO_LED1_PINOP					0

#define BLUEIO_LED2_PORT					0
#define BLUEIO_LED2_PIN						29
#define BLUEIO_LED2_PINOP					0

#define BLUEIO_LED3_PORT					0
#define BLUEIO_LED3_PIN						28
#define BLUEIO_LED3_PINOP					0

// Most IMM-NRF5x base boards use P0.30 for Bluetooth connection state LED
#define BLUEIO_CONNECT_LED_PORT				BLUEIO_LED1_PORT
#define BLUEIO_CONNECT_LED_PIN				BLUEIO_LED1_PIN

// IBK-BLUEIO - Blue IO breakout board
#define BLUEIO_LED_BLUE_PORT				BLUEIO_LED1_PORT
#define BLUEIO_LED_BLUE_PIN					BLUEIO_LED1_PIN
#define BLUEIO_LED_BLUE_PINOP				BLUEIO_LED1_PINOP
#define BLUEIO_LED_GREEN_PORT				BLUEIO_LED2_PORT
#define BLUEIO_LED_GREEN_PIN				BLUEIO_LED2_PIN
#define BLUEIO_LED_GREEN_PINOP				BLUEIO_LED2_PINOP
#define BLUEIO_LED_RED_PORT					BLUEIO_LED3_PORT
#define BLUEIO_LED_RED_PIN					BLUEIO_LED3_PIN
#define BLUEIO_LED_RED_PINOP				BLUEIO_LED3_PINOP

// BLUEIO-TAG-BME280 board LEDs
#define BLUEIO_TAG_BME280_LED1_PORT			BLUEIO_LED1_PORT
#define BLUEIO_TAG_BME280_LED1_PIN			BLUEIO_LED1_PIN
#define BLUEIO_TAG_BME280_LED1_PINOP		BLUEIO_LED1_PINOP

#define BLUEIO_TAG_BME280_LED2_PORT			0
#define BLUEIO_TAG_BME280_LED2_PIN			17
#define BLUEIO_TAG_BME280_LED2_PINOP		0

// Buttons
#define BLUEIO_BUT1_PORT					0
#define BLUEIO_BUT1_PIN						2
#define BLUEIO_BUT1_PINOP					0
#define BLUEIO_BUT2_PORT					0
#define BLUEIO_BUT2_PIN						13
#define BLUEIO_BUT2_PINOP					0

// BLUEIO-TAG-BME280 buttons
#define BLUEIO_TAG_BME280_BUT1_PORT			0
#define BLUEIO_TAG_BME280_BUT1_PIN			21	// This pin is default mapped as reset pin on nRF52
#define BLUEIO_TAG_BME280_BUT1_PINOP		0

#define BLUEIO_TAG_BME280_BUT2_PORT			BLUEIO_BUT2_PORT
#define BLUEIO_TAG_BME280_BUT2_PIN			BLUEIO_BUT2_PIN
#define BLUEIO_TAG_BME280_BUT2_PINOP		BLUEIO_BUT2_PINOP

#define BLUEIO_TAG_BME280_I2C_SDA_PORT		0
#define BLUEIO_TAG_BME280_I2C_SDA_PIN		24
#define BLUEIO_TAG_BME280_I2C_SDA_PINOP		0

#define BLUEIO_TAG_BME280_I2C_SCL_PORT		0
#define BLUEIO_TAG_BME280_I2C_SCL_PIN		25
#define BLUEIO_TAG_BME280_I2C_SCL_PINOP		0

// UART pins
#define BLUEIO_UART_RX_PORT					0
#define BLUEIO_UART_RX_PIN					8
#define BLUEIO_UART_RX_PINOP				0
#define BLUEIO_UART_TX_PORT					0
#define BLUEIO_UART_TX_PIN					7
#define BLUEIO_UART_TX_PINOP				0
#define BLUEIO_UART_CTS_PORT				0
#define BLUEIO_UART_CTS_PIN					12
#define BLUEIO_UART_CTS_PINOP				0
#define BLUEIO_UART_RTS_PORT				0
#define BLUEIO_UART_RTS_PIN					11
#define BLUEIO_UART_RTS_PINOP				0


#endif // __BLUEIO_BOARD_H__
