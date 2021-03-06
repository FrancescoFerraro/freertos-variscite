/*
 * Copyright 2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file mekmimx8qm.c
 * @brief The mekmimx8qm.c file defines GPIO pins and I2C CMSIS utilities for mekmimx8qm board.
 */

#include "mekmimx8qm.h"

/*
 * Execute the instrument to enter low power.
 */
static void stop(void)
{
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
    __asm("WFI");
}

/*!
 * @brief Configures the system to WAIT power mode.
 *        API name used from Kinetis family to maintain compatibility.
 *
 * @param Power peripheral base address (dummy).
 * @return Configuration error code.
 */
status_t SMC_SetPowerModeWait(void *arg)
{
    stop();

    return kStatus_Success;
}

/*!
 * @brief Configures the system to VLPR power mode.
 *        API name used from Kinetis family to maintain compatibility.
 *
 * @param Power peripheral base address (dummy).
 * @return Configuration error code.
 */
status_t SMC_SetPowerModeVlpr(void *arg)
{
    stop();

    return kStatus_Success;
}

/*! @brief       Get the clock frequency for LPUART4 module.
 *  @details     The Clock Frequecny computation API required by fsl_uart_cmsis.c.
 *  @param[in]   void
 *  @Constraints None
 *  @Reentrant   Yes
 *  @return      uint32_t Returns the clock frequency .
 */
uint32_t LPUART4_GetFreq(void)
{
    return CLOCK_GetIpFreq((clock_ip_name_t)kCLOCK_DMA_Lpuart2);
}

/*! @brief       Get the clock frequency for LPI2C2 module.
 *  @details     The Clock Frequecny computation API required by fsl_i2c_cmsis.c.
 *  @param[in]   void
 *  @Constraints None
 *  @Reentrant   Yes
 *  @return      uint32_t Returns the clock frequency .
 */
uint32_t LPI2C2_GetFreq(void)
{
    return CLOCK_GetIpFreq(kCLOCK_DMA_Lpi2c0);
}

/*! @brief       Get the clock frequency for LPSPI2 module.
 *  @details     The Clock Frequecny computation API required by fsl_spi_cmsis.c.
 *  @param[in]   void
 *  @Constraints None
 *  @Reentrant   Yes
 *  @return      uint32_t Returns the clock frequency .
 */
uint32_t LPSPI2_GetFreq(void)
{
    return CLOCK_GetIpFreq((clock_ip_name_t)kCLOCK_DMA_Lpspi2);
}

void BOARD_InitPins(void)
{
    sc_ipc_t ipc = SystemGetScfwIpcHandle();
    BOARD_InitPinsEx(ipc);
}

void LPI2C2_InitPins(void)
{
    sc_ipc_t ipc = SystemGetScfwIpcHandle();
    LPI2C2_InitPinsEx(ipc);
}

void LPI2C2_DeinitPins(void)
{
    sc_ipc_t ipc = SystemGetScfwIpcHandle();
    LPI2C2_DeinitPinsEx(ipc);
}
