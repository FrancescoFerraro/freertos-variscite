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
- options: {callFromInitBoot: 'false', coreID: cm4_1}
- pin_list:
  - {pin_num: BE35, peripheral: DMA__UART2, signal: uart_rx, pin_signal: LVDS0_I2C1_SDA, sw_config: sw_config_0}
  - {pin_num: BE37, peripheral: DMA__UART2, signal: uart_tx, pin_signal: LVDS0_I2C1_SCL, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(sc_ipc_t ipc)                          /*!< Function assigned for the core: Cortex-M4F[cm4_1] */
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


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPI2C2_InitPinsEx:
- options: {callFromInitBoot: 'false', coreID: cm4_1}
- pin_list:
  - {pin_num: BN9, peripheral: DMA__I2C0, signal: i2c_scl, pin_signal: HDMI_TX0_TS_SCL, sw_config: sw_config_2}
  - {pin_num: BN7, peripheral: DMA__I2C0, signal: i2c_sda, pin_signal: HDMI_TX0_TS_SDA, sw_config: sw_config_2}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPI2C2_InitPinsEx
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPI2C2_InitPinsEx(sc_ipc_t ipc)                       /*!< Function assigned for the core: Cortex-M4F[cm4_1] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, LPI2C2_INITPINSEX_I2C0_3V3_SCL_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_OD_IN, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_HDMI_TX0_TS_SCL register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, LPI2C2_INITPINSEX_I2C0_3V3_SDA_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_OD_IN, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_HDMI_TX0_TS_SDA register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPI2C2_DeinitPinsEx:
- options: {callFromInitBoot: 'false', coreID: cm4_1}
- pin_list:
  - {pin_num: BN9, peripheral: LSIO__GPIO2, signal: 'gpio_io, 02', pin_signal: HDMI_TX0_TS_SCL, sw_config: sw_config_0}
  - {pin_num: BN7, peripheral: LSIO__GPIO2, signal: 'gpio_io, 03', pin_signal: HDMI_TX0_TS_SDA, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPI2C2_DeinitPinsEx
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPI2C2_DeinitPinsEx(sc_ipc_t ipc)                     /*!< Function assigned for the core: Cortex-M4F[cm4_1] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, LPI2C2_DEINITPINSEX_I2C0_3V3_SCL_PIN_FUNCTION_ID, 3U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_HDMI_TX0_TS_SCL register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, LPI2C2_DEINITPINSEX_I2C0_3V3_SDA_PIN_FUNCTION_ID, 3U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_HDMI_TX0_TS_SDA register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
