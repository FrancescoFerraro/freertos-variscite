/*
 * Copyright 2017-2018 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: MIMX8QM6xxxFF
package_id: MIMX8QM6AVUFF
mcu_data: ksdk2_0
processor_version: 0.0.0
board: VAR-SOM-MX8-STK
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "pin_mux.h"
#include "fsl_common.h"
#include "main/imx8qm_pads.h"
#include "svc/pad/pad_api.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', coreID: cm4_0}
- pin_list for VAR-SOM-MX8:
  - {pin_num: AR47, peripheral: DMA__UART4, signal: uart_rx, pin_signal: M40_GPIO0_00, sw_config: sw_config_0}
  - {pin_num: AU53, peripheral: DMA__UART4, signal: uart_tx, pin_signal: M40_GPIO0_01, sw_config: sw_config_0}
- pin_list for SPEAR-MX8:
  - {pin_num: AM44, peripheral: M40__UART0, signal: uart_rx, pin_signal: M40_I2C0_SCL, sw_config: sw_config_0}
  - {pin_num: AU51, peripheral: M40__UART0, signal: uart_tx, pin_signal: M40_I2C0_SDA, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(sc_ipc_t ipc)                          /*!< Function assigned for the core: Cortex-M4F[cm4_0] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, BOARD_DEBUG_UART_RX_PIN_FUNCTION_ID, BOARD_DEBUG_UART_RX_PIN_MUX, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_DEBUG_UART_TX_PIN_FUNCTION_ID, BOARD_DEBUG_UART_TX_PIN_MUX, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
