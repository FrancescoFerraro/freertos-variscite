/*
 * Copyright 2017-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "board.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/* SPI2_CS0 (number AW1), BB_SPI2_CS0/J20B[17] */
/* Routed pin properties */
#define BOARD_INITPINS_BB_SPI2_CS0_PERIPHERAL                          DMA__SPI2   /*!< Peripheral name */
#define BOARD_INITPINS_BB_SPI2_CS0_SIGNAL                                 spi_cs   /*!< Signal name */
#define BOARD_INITPINS_BB_SPI2_CS0_CHANNEL                                     0   /*!< Signal channel */
#define BOARD_INITPINS_BB_SPI2_CS0_PIN_NAME                             SPI2_CS0   /*!< Routed pin name */
#define BOARD_INITPINS_BB_SPI2_CS0_PIN_FUNCTION_ID                 SC_P_SPI2_CS0   /*!< Pin function id */
#define BOARD_INITPINS_BB_SPI2_CS0_LABEL                  "BB_SPI2_CS0/J20B[17]"   /*!< Label */
#define BOARD_INITPINS_BB_SPI2_CS0_NAME                            "BB_SPI2_CS0"   /*!< Identifier */

/* SPI2_SCK (number AW5), BB_SPI2_SCLK/J20B[18] */
/* Routed pin properties */
#define BOARD_INITPINS_BB_SPI2_SCLK_PERIPHERAL                         DMA__SPI2   /*!< Peripheral name */
#define BOARD_INITPINS_BB_SPI2_SCLK_SIGNAL                               spi_sck   /*!< Signal name */
#define BOARD_INITPINS_BB_SPI2_SCLK_PIN_NAME                            SPI2_SCK   /*!< Routed pin name */
#define BOARD_INITPINS_BB_SPI2_SCLK_PIN_FUNCTION_ID                SC_P_SPI2_SCK   /*!< Pin function id */
#define BOARD_INITPINS_BB_SPI2_SCLK_LABEL                "BB_SPI2_SCLK/J20B[18]"   /*!< Label */
#define BOARD_INITPINS_BB_SPI2_SCLK_NAME                          "BB_SPI2_SCLK"   /*!< Identifier */

/* SPI2_SDI (number AY4), BB_SPI2_MISO/J20B[15] */
/* Routed pin properties */
#define BOARD_INITPINS_BB_SPI2_MISO_PERIPHERAL                         DMA__SPI2   /*!< Peripheral name */
#define BOARD_INITPINS_BB_SPI2_MISO_SIGNAL                               spi_sdi   /*!< Signal name */
#define BOARD_INITPINS_BB_SPI2_MISO_PIN_NAME                            SPI2_SDI   /*!< Routed pin name */
#define BOARD_INITPINS_BB_SPI2_MISO_PIN_FUNCTION_ID                SC_P_SPI2_SDI   /*!< Pin function id */
#define BOARD_INITPINS_BB_SPI2_MISO_LABEL                "BB_SPI2_MISO/J20B[15]"   /*!< Label */
#define BOARD_INITPINS_BB_SPI2_MISO_NAME                          "BB_SPI2_MISO"   /*!< Identifier */

/* SPI2_SDO (number BA1), BB_SPI2_MOSI/J20B[14] */
/* Routed pin properties */
#define BOARD_INITPINS_BB_SPI2_MOSI_PERIPHERAL                         DMA__SPI2   /*!< Peripheral name */
#define BOARD_INITPINS_BB_SPI2_MOSI_SIGNAL                               spi_sdo   /*!< Signal name */
#define BOARD_INITPINS_BB_SPI2_MOSI_PIN_NAME                            SPI2_SDO   /*!< Routed pin name */
#define BOARD_INITPINS_BB_SPI2_MOSI_PIN_FUNCTION_ID                SC_P_SPI2_SDO   /*!< Pin function id */
#define BOARD_INITPINS_BB_SPI2_MOSI_LABEL                "BB_SPI2_MOSI/J20B[14]"   /*!< Label */
#define BOARD_INITPINS_BB_SPI2_MOSI_NAME                          "BB_SPI2_MOSI"   /*!< Identifier */

/* M40_I2C0_SCL (number AM44), FTDI_M40_UART0_RX */
/* Routed pin properties */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PERIPHERAL                   M40__UART0   /*!< Peripheral name */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_SIGNAL                          uart_rx   /*!< Signal name */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_NAME                   M40_I2C0_SCL   /*!< Routed pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_FUNCTION_ID       SC_P_M40_I2C0_SCL   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_LABEL               "FTDI_M40_UART0_RX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_NAME                "FTDI_M40_UART0_RX"   /*!< Identifier */

/* M40_I2C0_SDA (number AU51), FTDI_M40_UART0_TX */
/* Routed pin properties */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PERIPHERAL                   M40__UART0   /*!< Peripheral name */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_SIGNAL                          uart_tx   /*!< Signal name */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_NAME                   M40_I2C0_SDA   /*!< Routed pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_FUNCTION_ID       SC_P_M40_I2C0_SDA   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_LABEL               "FTDI_M40_UART0_TX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_NAME                "FTDI_M40_UART0_TX"   /*!< Identifier */

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 * @param ipc scfw ipchandle.
 *
 */
void BOARD_InitPins(sc_ipc_t ipc);                         /*!< Function assigned for the core: Cortex-M4F[cm4_core0] */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
