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

/* UART0_RTS_B (number AU45), BB_UART2_RX/J20A[28] */
/* Routed pin properties */
#define BOARD_INITPINSEX_BB_UART2_RX_PERIPHERAL                       DMA__UART2   /*!< Peripheral name */
#define BOARD_INITPINSEX_BB_UART2_RX_SIGNAL                              uart_rx   /*!< Signal name */
#define BOARD_INITPINSEX_BB_UART2_RX_PIN_NAME                        UART0_RTS_B   /*!< Routed pin name */
#define BOARD_INITPINSEX_BB_UART2_RX_PIN_FUNCTION_ID            SC_P_UART0_RTS_B   /*!< Pin function id */
#define BOARD_INITPINSEX_BB_UART2_RX_LABEL                "BB_UART2_RX/J20A[28]"   /*!< Label */
#define BOARD_INITPINSEX_BB_UART2_RX_NAME                          "BB_UART2_RX"   /*!< Identifier */

/* UART0_CTS_B (number AW49), BB_UART2_TX/J20A[29] */
/* Routed pin properties */
#define BOARD_INITPINSEX_BB_UART2_TX_PERIPHERAL                       DMA__UART2   /*!< Peripheral name */
#define BOARD_INITPINSEX_BB_UART2_TX_SIGNAL                              uart_tx   /*!< Signal name */
#define BOARD_INITPINSEX_BB_UART2_TX_PIN_NAME                        UART0_CTS_B   /*!< Routed pin name */
#define BOARD_INITPINSEX_BB_UART2_TX_PIN_FUNCTION_ID            SC_P_UART0_CTS_B   /*!< Pin function id */
#define BOARD_INITPINSEX_BB_UART2_TX_LABEL                "BB_UART2_TX/J20A[29]"   /*!< Label */
#define BOARD_INITPINSEX_BB_UART2_TX_NAME                          "BB_UART2_TX"   /*!< Identifier */

/* HDMI_TX0_TS_SCL (number BN9), I2C0_3V3_SCL */
/* Routed pin properties */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_PERIPHERAL                      DMA__I2C0   /*!< Peripheral name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_SIGNAL                            i2c_scl   /*!< Signal name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_PIN_NAME                  HDMI_TX0_TS_SCL   /*!< Routed pin name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_PIN_FUNCTION_ID      SC_P_HDMI_TX0_TS_SCL   /*!< Pin function id */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_LABEL                      "I2C0_3V3_SCL"   /*!< Label */
#define LPI2C2_INITPINSEX_I2C0_3V3_SCL_NAME                       "I2C0_3V3_SCL"   /*!< Identifier */

/* HDMI_TX0_TS_SDA (number BN7), I2C0_3V3_SDA */
/* Routed pin properties */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_PERIPHERAL                      DMA__I2C0   /*!< Peripheral name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_SIGNAL                            i2c_sda   /*!< Signal name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_PIN_NAME                  HDMI_TX0_TS_SDA   /*!< Routed pin name */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_PIN_FUNCTION_ID      SC_P_HDMI_TX0_TS_SDA   /*!< Pin function id */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_LABEL                      "I2C0_3V3_SDA"   /*!< Label */
#define LPI2C2_INITPINSEX_I2C0_3V3_SDA_NAME                       "I2C0_3V3_SDA"   /*!< Identifier */

/* HDMI_TX0_TS_SCL (number BN9), I2C0_3V3_SCL */
/* Routed pin properties */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_PERIPHERAL               HDMI_TX0__I2C0   /*!< Peripheral name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_SIGNAL                          i2c_scl   /*!< Signal name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_PIN_NAME                HDMI_TX0_TS_SCL   /*!< Routed pin name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_PIN_FUNCTION_ID    SC_P_HDMI_TX0_TS_SCL   /*!< Pin function id */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_LABEL                    "I2C0_3V3_SCL"   /*!< Label */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_NAME                     "I2C0_3V3_SCL"   /*!< Identifier */

/* HDMI_TX0_TS_SDA (number BN7), I2C0_3V3_SDA */
/* Routed pin properties */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_PERIPHERAL               HDMI_TX0__I2C0   /*!< Peripheral name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_SIGNAL                          i2c_sda   /*!< Signal name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_PIN_NAME                HDMI_TX0_TS_SDA   /*!< Routed pin name */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_PIN_FUNCTION_ID    SC_P_HDMI_TX0_TS_SDA   /*!< Pin function id */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_LABEL                    "I2C0_3V3_SDA"   /*!< Label */
#define LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_NAME                     "I2C0_3V3_SDA"   /*!< Identifier */

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
void BOARD_InitPinsEx(sc_ipc_t ipc);                       /*!< Function assigned for the core: Cortex-M4F[cm4_core1] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 * @param ipc scfw ipchandle.
 *
 */
void LPI2C2_InitPinsEx(sc_ipc_t ipc);                      /*!< Function assigned for the core: Cortex-M4F[cm4_core1] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 * @param ipc scfw ipchandle.
 *
 */
void LPI2C2_DeinitPinsEx(sc_ipc_t ipc);                    /*!< Function assigned for the core: Cortex-M4F[cm4_core1] */

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
