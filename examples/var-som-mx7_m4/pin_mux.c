/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/

/* MODULE pin_mux. */

#include "device_imx.h"
#include "pin_mux.h"

void configure_flexcan_pins(CAN_Type* base)
{
    switch((uint32_t)base)
    {
        case CAN1_BASE:
            // CAN1 is not used in VAR-SOM-MX7
            break;
        case CAN2_BASE:
            // CAN2_TX
            IOMUXC_SW_MUX_CTL_PAD_I2C3_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C3_SDA_MUX_MODE(2);
            IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_PE_MASK |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_PS(3)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_DSE(0)  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_HYS_MASK;

            // CAN2_RX
            IOMUXC_SW_MUX_CTL_PAD_I2C3_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C3_SCL_MUX_MODE(2);
            IOMUXC_FLEXCAN2_RX_SELECT_INPUT = IOMUXC_FLEXCAN2_RX_SELECT_INPUT_DAISY(1);
            IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_PE_MASK |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_PS(3)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_DSE(0)  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_HYS_MASK;
            break;
    }
}

void configure_i2c_pins(I2C_Type* base)
{
    switch((uint32_t)base)
    {
        case I2C1_BASE:
            // I2C1 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA_SION_MASK;

            IOMUXC_I2C1_SCL_SELECT_INPUT = IOMUXC_I2C1_SCL_SELECT_INPUT_DAISY(1);
            IOMUXC_I2C1_SDA_SELECT_INPUT = IOMUXC_I2C1_SDA_SELECT_INPUT_DAISY(1);

            IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_HYS_MASK;
            break;
        case I2C2_BASE:
            // I2C2 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA_SION_MASK;

            IOMUXC_I2C2_SCL_SELECT_INPUT = IOMUXC_I2C2_SCL_SELECT_INPUT_DAISY(1);
            IOMUXC_I2C2_SDA_SELECT_INPUT = IOMUXC_I2C2_SDA_SELECT_INPUT_DAISY(1);

            IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_HYS_MASK;
            break;
        case I2C3_BASE:
            // I2C3 is not used in VAR-SOM-MX7
            break;
        case I2C4_BASE:
            // I2C4 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_SYNC = IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_SYNC_MUX_MODE(3) |
                                                 IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_SYNC_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_BCLK = IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_BCLK_MUX_MODE(3) |
                                                 IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_BCLK_SION_MASK;

            IOMUXC_I2C4_SCL_SELECT_INPUT = IOMUXC_I2C4_SCL_SELECT_INPUT_DAISY(3);
            IOMUXC_I2C4_SDA_SELECT_INPUT = IOMUXC_I2C4_SDA_SELECT_INPUT_DAISY(3);

            IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_SYNC = IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_SYNC_PE_MASK  |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_SYNC_PS(3)    |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_SYNC_DSE(0)   |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_SYNC_HYS_MASK;

            IOMUXC_SW_MUX_CTL_PAD_SAI1_RX_BCLK = IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_BCLK_PE_MASK  |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_BCLK_PS(3)    |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_BCLK_DSE(0)   |
                                                 IOMUXC_SW_PAD_CTL_PAD_SAI1_RX_BCLK_HYS_MASK;
            break;
        default:
            break;
    }
}

void configure_uart_pins(UART_Type* base)
{
    switch((uint32_t)base)
    {
        case UART2_BASE:
            // UART2 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_LCD_CLK = IOMUXC_SW_MUX_CTL_PAD_LCD_CLK_MUX_MODE(4);
            IOMUXC_SW_MUX_CTL_PAD_LCD_ENABLE = IOMUXC_SW_MUX_CTL_PAD_LCD_ENABLE_MUX_MODE(4);
            IOMUXC_SW_PAD_CTL_PAD_LCD_CLK = IOMUXC_SW_PAD_CTL_PAD_LCD_CLK_PE_MASK  |
                                            IOMUXC_SW_PAD_CTL_PAD_LCD_CLK_PS(3)    |
                                            IOMUXC_SW_PAD_CTL_PAD_LCD_CLK_HYS_MASK |
                                            IOMUXC_SW_PAD_CTL_PAD_LCD_CLK_DSE(0);
            IOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE = IOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE_PE_MASK  |
                                               IOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE_PS(3)    |
                                               IOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE_HYS_MASK |
                                               IOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE_DSE(0);
            break;
        default:
            break;
    }
}

void configure_ecspi_pins(ECSPI_Type* base)
{
    switch((uint32_t)base)
    {
        case ECSPI1_BASE:
            // ECSPI1 iomux configuration
            /* daisy chain selection */
            IOMUXC_ECSPI1_MISO_SELECT_INPUT = 1;

            /* iomux */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK = IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK_MUX_MODE(0);    /* ECSPI SLK  */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI = IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI_MUX_MODE(0);    /* ECSPI MOSI */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO = IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO_MUX_MODE(0);    /* ECSPI MISO  */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0  = IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0_MUX_MODE(0);     /* ECSPI SS0 */

            /* pad control */
            IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK = IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_PE_MASK  |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_PS(0)    |      /* pull down */
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_DSE(0)   |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI = IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_DSE(0)   |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO = IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0 =  IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_PE_MASK   |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_PS(3)     |      /* pull up */
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_DSE(0)    |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_HYS_MASK;
            break;
        case ECSPI2_BASE:
                // ECSPI1 iomux configuration
                /* daisy chain selection */
                IOMUXC_ECSPI2_MISO_SELECT_INPUT = 0;

                /* iomux */
                IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SCLK = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SCLK_MUX_MODE(0);    /* ECSPI SLK  */
                IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MOSI = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MOSI_MUX_MODE(0);    /* ECSPI MOSI */
                IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MISO = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MISO_MUX_MODE(0);    /* ECSPI MISO  */
                IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SS0  = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SS0_MUX_MODE(0);     /* ECSPI SS0 */

                /* pad control */
                IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK_PE_MASK  |
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK_PS(0)    |      /* pull down */
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK_DSE(0)   |
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK_HYS_MASK;

                IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MOSI = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MOSI_HYS_MASK;

                IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO_DSE(0)   |
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO_HYS_MASK;

                IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0 =  IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0_PE_MASK   |
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0_PS(3)     |      /* pull up */
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0_DSE(0)    |
                                                    IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0_HYS_MASK;
            break;
        default:
            break;
    }
}

void configure_ecspi_slave_pins(ECSPI_Type* base)
{
    switch((uint32_t)base)
    {
        case ECSPI2_BASE:
            /* daisy chain selection */
            IOMUXC_ECSPI2_SCLK_SELECT_INPUT = 0;
            IOMUXC_ECSPI2_MOSI_SELECT_INPUT = 0;
            IOMUXC_ECSPI2_SS0_B_SELECT_INPUT = 0;

            /* iomux */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SCLK = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SCLK_MUX_MODE(0);    /* ECSPI SLK  */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MOSI = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MOSI_MUX_MODE(0);    /* ECSPI MOSI */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MISO = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_MISO_MUX_MODE(0);    /* ECSPI MISO  */
            IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SS0  = IOMUXC_SW_MUX_CTL_PAD_ECSPI2_SS0_MUX_MODE(0);     /* ECSPI SS0 */

            /* pad control */
            IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SCLK_HYS_MASK;
            IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MOSI = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MOSI_HYS_MASK;
            IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO_DSE(0)   |
                                                IOMUXC_SW_PAD_CTL_PAD_ECSPI2_MISO_HYS_MASK;
            IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0  = IOMUXC_SW_PAD_CTL_PAD_ECSPI2_SS0_HYS_MASK;
            break;
        default:
            break;
    }
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
