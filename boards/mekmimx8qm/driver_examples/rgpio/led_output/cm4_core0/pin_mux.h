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

/* M40_GPIO0_00 (number AR47), BB_ARD_MIK_UART3_RX/J20A[34] */
/* Routed pin properties */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_PERIPHERAL                 M40__GPIO0   /*!< Peripheral name */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_SIGNAL                        gpio_io   /*!< Signal name */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_CHANNEL                            00   /*!< Signal channel */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_PIN_NAME                 M40_GPIO0_00   /*!< Routed pin name */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_PIN_FUNCTION_ID     SC_P_M40_GPIO0_00   /*!< Pin function id */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_LABEL  "BB_ARD_MIK_UART3_RX/J20A[34]"   /*!< Label */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_NAME            "BB_ARD_MIK_UART3_RX"   /*!< Identifier */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_DIRECTION         kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_GPIO                       M40__GPIO0   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_GPIO_PIN                           0U   /*!< GPIO pin number */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_GPIO_PIN_MASK              (1U << 0U)   /*!< GPIO pin mask */

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
