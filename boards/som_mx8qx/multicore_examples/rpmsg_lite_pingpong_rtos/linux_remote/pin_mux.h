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

/* UART1_RX (coord L31), UART1_RX */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN_FUNCTION_ID                SC_P_UART1_RX   /*!< Pin function id */

/* UART1_TX (coord H34), UART1_TX */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN_FUNCTION_ID                SC_P_UART1_TX   /*!< Pin function id */

/* SPI3_CS1 (coord K30), I2C3_SCL */
#define LPI2C_INITPINS_I2C3_SCL_PIN_FUNCTION_ID                    SC_P_SPI3_CS1   /*!< Pin function id */

/* MCLK_IN1 (coord M28), I2C3_SDA */
#define LPI2C_INITPINS_I2C3_SDA_PIN_FUNCTION_ID                    SC_P_MCLK_IN1   /*!< Pin function id */

void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 * @param ipc scfw ipchandle.
 *
 */
void BOARD_InitPins(sc_ipc_t ipc);                         /*!< Function assigned for the core: Cortex-M4F[m4] */

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
