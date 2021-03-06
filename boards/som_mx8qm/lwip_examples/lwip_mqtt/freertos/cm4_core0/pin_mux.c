/*
 * Copyright 2017-2020 NXP
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
product: Pins v8.0
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
- options: {callFromInitBoot: 'false', coreID: cm4_core0}
- pin_list for VAR-SOM-MX8:
  - {pin_num: AR47, peripheral: DMA__UART4, signal: uart_rx, pin_signal: M40_GPIO0_00, sw_config: sw_config_0}
  - {pin_num: AU53, peripheral: DMA__UART4, signal: uart_tx, pin_signal: M40_GPIO0_01, sw_config: sw_config_0}
- pin_list for SPEAR-MX8:
  - {pin_num: AM44, peripheral: M40__UART0, signal: uart_rx, pin_signal: M40_I2C0_SCL, sw_config: sw_config_0}
  - {pin_num: AU51, peripheral: M40__UART0, signal: uart_tx, pin_signal: M40_I2C0_SDA, sw_config: sw_config_0}
- pin_list:
  - {pin_num: A9, peripheral: CONN__ENET0, signal: enet_mdc, pin_signal: ENET0_MDC, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: D10, peripheral: CONN__ENET0, signal: enet_mdio, pin_signal: ENET0_MDIO, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: B10, peripheral: CONN__ENET0, signal: enet_refclk_125m_25m, pin_signal: ENET0_REFCLK_125M_25M, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: E43, peripheral: CONN__ENET0, signal: enet_rgmii_rx_ctl, pin_signal: ENET0_RGMII_RX_CTL, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: B44, peripheral: CONN__ENET0, signal: enet_rgmii_rxc, pin_signal: ENET0_RGMII_RXC, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: A47, peripheral: CONN__ENET0, signal: 'enet_rgmii_rxd, 0', pin_signal: ENET0_RGMII_RXD0, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: D44, peripheral: CONN__ENET0, signal: 'enet_rgmii_rxd, 1', pin_signal: ENET0_RGMII_RXD1, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: C45, peripheral: CONN__ENET0, signal: 'enet_rgmii_rxd, 2', pin_signal: ENET0_RGMII_RXD2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: E45, peripheral: CONN__ENET0, signal: 'enet_rgmii_rxd, 3', pin_signal: ENET0_RGMII_RXD3, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: E41, peripheral: CONN__ENET0, signal: enet_rgmii_tx_ctl, pin_signal: ENET0_RGMII_TX_CTL, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: A41, peripheral: CONN__ENET0, signal: enet_rgmii_txc, pin_signal: ENET0_RGMII_TXC, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: A43, peripheral: CONN__ENET0, signal: 'enet_rgmii_txd, 0', pin_signal: ENET0_RGMII_TXD0, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: B42, peripheral: CONN__ENET0, signal: 'enet_rgmii_txd, 1', pin_signal: ENET0_RGMII_TXD1, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: A45, peripheral: CONN__ENET0, signal: 'enet_rgmii_txd, 2', pin_signal: ENET0_RGMII_TXD2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: D42, peripheral: CONN__ENET0, signal: 'enet_rgmii_txd, 3', pin_signal: ENET0_RGMII_TXD3, PULL: PULL_0, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(sc_ipc_t ipc)                          /*!< Function assigned for the core: Cortex-M4F[cm4_core0] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, BOARD_INITPINS_ENET0_MDC_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_MDC register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ENET0_MDIO_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_MDIO register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_BB_ARD_MIK_RST_B_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_REFCLK_125M_25M register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RXC_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RXC register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RXD0_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RXD0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RXD1_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RXD1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RXD2_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RXD2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RXD3_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RXD3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_RX_CTL_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_RX_CTL register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TXC_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TXC register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TXD0_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TXD0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TXD1_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TXD1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TXD2_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TXD2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TXD3_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TXD3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_ETH0_RGMII_TX_CTL_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ENET0_RGMII_TX_CTL register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
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
