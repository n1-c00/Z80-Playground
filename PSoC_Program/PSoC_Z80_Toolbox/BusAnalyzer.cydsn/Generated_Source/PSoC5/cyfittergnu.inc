/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Clk */
.set Clk__0__INTTYPE, CYREG_PICU3_INTTYPE1
.set Clk__0__MASK, 0x02
.set Clk__0__PC, CYREG_PRT3_PC1
.set Clk__0__PORT, 3
.set Clk__0__SHIFT, 1
.set Clk__AG, CYREG_PRT3_AG
.set Clk__AMUX, CYREG_PRT3_AMUX
.set Clk__BIE, CYREG_PRT3_BIE
.set Clk__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Clk__BYP, CYREG_PRT3_BYP
.set Clk__CTL, CYREG_PRT3_CTL
.set Clk__DM0, CYREG_PRT3_DM0
.set Clk__DM1, CYREG_PRT3_DM1
.set Clk__DM2, CYREG_PRT3_DM2
.set Clk__DR, CYREG_PRT3_DR
.set Clk__INP_DIS, CYREG_PRT3_INP_DIS
.set Clk__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Clk__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Clk__LCD_EN, CYREG_PRT3_LCD_EN
.set Clk__MASK, 0x02
.set Clk__PORT, 3
.set Clk__PRT, CYREG_PRT3_PRT
.set Clk__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Clk__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Clk__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Clk__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Clk__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Clk__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Clk__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Clk__PS, CYREG_PRT3_PS
.set Clk__SHIFT, 1
.set Clk__SLW, CYREG_PRT3_SLW

/* Rx_1 */
.set Rx_1__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx_1__0__MASK, 0x40
.set Rx_1__0__PC, CYREG_PRT12_PC6
.set Rx_1__0__PORT, 12
.set Rx_1__0__SHIFT, 6
.set Rx_1__AG, CYREG_PRT12_AG
.set Rx_1__BIE, CYREG_PRT12_BIE
.set Rx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx_1__BYP, CYREG_PRT12_BYP
.set Rx_1__DM0, CYREG_PRT12_DM0
.set Rx_1__DM1, CYREG_PRT12_DM1
.set Rx_1__DM2, CYREG_PRT12_DM2
.set Rx_1__DR, CYREG_PRT12_DR
.set Rx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx_1__MASK, 0x40
.set Rx_1__PORT, 12
.set Rx_1__PRT, CYREG_PRT12_PRT
.set Rx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx_1__PS, CYREG_PRT12_PS
.set Rx_1__SHIFT, 6
.set Rx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx_1__SLW, CYREG_PRT12_SLW

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx_1__0__MASK, 0x80
.set Tx_1__0__PC, CYREG_PRT12_PC7
.set Tx_1__0__PORT, 12
.set Tx_1__0__SHIFT, 7
.set Tx_1__AG, CYREG_PRT12_AG
.set Tx_1__BIE, CYREG_PRT12_BIE
.set Tx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx_1__BYP, CYREG_PRT12_BYP
.set Tx_1__DM0, CYREG_PRT12_DM0
.set Tx_1__DM1, CYREG_PRT12_DM1
.set Tx_1__DM2, CYREG_PRT12_DM2
.set Tx_1__DR, CYREG_PRT12_DR
.set Tx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx_1__MASK, 0x80
.set Tx_1__PORT, 12
.set Tx_1__PRT, CYREG_PRT12_PRT
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx_1__PS, CYREG_PRT12_PS
.set Tx_1__SHIFT, 7
.set Tx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx_1__SLW, CYREG_PRT12_SLW

/* UART */
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set UART_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set UART_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB10_A0
.set UART_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB10_A1
.set UART_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set UART_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB10_D0
.set UART_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB10_D1
.set UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set UART_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB10_F0
.set UART_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB10_F1
.set UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set UART_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B0_UDB08_09_ST
.set UART_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_BUART_sRX_RxSts__3__POS, 3
.set UART_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_BUART_sRX_RxSts__4__POS, 4
.set UART_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_BUART_sRX_RxSts__5__POS, 5
.set UART_BUART_sRX_RxSts__MASK, 0x38
.set UART_BUART_sRX_RxSts__MASK_REG, CYREG_B0_UDB08_MSK
.set UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set UART_BUART_sRX_RxSts__STATUS_REG, CYREG_B0_UDB08_ST
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B0_UDB08_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B0_UDB08_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B0_UDB08_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B0_UDB08_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B0_UDB08_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B0_UDB08_F1
.set UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set UART_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set UART_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB08_A0
.set UART_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB08_A1
.set UART_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set UART_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB08_D0
.set UART_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB08_D1
.set UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set UART_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB08_F0
.set UART_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB08_F1
.set UART_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_BUART_sTX_TxSts__0__POS, 0
.set UART_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_BUART_sTX_TxSts__1__POS, 1
.set UART_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_BUART_sTX_TxSts__2__POS, 2
.set UART_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_BUART_sTX_TxSts__3__POS, 3
.set UART_BUART_sTX_TxSts__MASK, 0x0F
.set UART_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB11_MSK
.set UART_BUART_sTX_TxSts__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set UART_BUART_sTX_TxSts__PER_ST_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_BUART_sTX_TxSts__STATUS_CNT_REG, CYREG_B1_UDB11_ST_CTL
.set UART_BUART_sTX_TxSts__STATUS_CONTROL_REG, CYREG_B1_UDB11_ST_CTL
.set UART_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB11_ST
.set UART_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set UART_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set UART_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set UART_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_IntClock__INDEX, 0x00
.set UART_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_IntClock__PM_ACT_MSK, 0x01
.set UART_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_IntClock__PM_STBY_MSK, 0x01
.set UART_RXInternalInterrupt__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set UART_RXInternalInterrupt__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set UART_RXInternalInterrupt__INTC_MASK, 0x01
.set UART_RXInternalInterrupt__INTC_NUMBER, 0
.set UART_RXInternalInterrupt__INTC_PRIOR_NUM, 7
.set UART_RXInternalInterrupt__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set UART_RXInternalInterrupt__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set UART_RXInternalInterrupt__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_1 */
.set isr_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_1__INTC_MASK, 0x02
.set isr_1__INTC_NUMBER, 1
.set isr_1__INTC_PRIOR_NUM, 6
.set isr_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set isr_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_2 */
.set isr_2__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_2__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_2__INTC_MASK, 0x04
.set isr_2__INTC_NUMBER, 2
.set isr_2__INTC_PRIOR_NUM, 7
.set isr_2__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set isr_2__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_2__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Ctrl_M1 */
.set Ctrl_M1__0__INTTYPE, CYREG_PICU3_INTTYPE2
.set Ctrl_M1__0__MASK, 0x04
.set Ctrl_M1__0__PC, CYREG_PRT3_PC2
.set Ctrl_M1__0__PORT, 3
.set Ctrl_M1__0__SHIFT, 2
.set Ctrl_M1__AG, CYREG_PRT3_AG
.set Ctrl_M1__AMUX, CYREG_PRT3_AMUX
.set Ctrl_M1__BIE, CYREG_PRT3_BIE
.set Ctrl_M1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Ctrl_M1__BYP, CYREG_PRT3_BYP
.set Ctrl_M1__CTL, CYREG_PRT3_CTL
.set Ctrl_M1__DM0, CYREG_PRT3_DM0
.set Ctrl_M1__DM1, CYREG_PRT3_DM1
.set Ctrl_M1__DM2, CYREG_PRT3_DM2
.set Ctrl_M1__DR, CYREG_PRT3_DR
.set Ctrl_M1__INP_DIS, CYREG_PRT3_INP_DIS
.set Ctrl_M1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Ctrl_M1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Ctrl_M1__LCD_EN, CYREG_PRT3_LCD_EN
.set Ctrl_M1__MASK, 0x04
.set Ctrl_M1__PORT, 3
.set Ctrl_M1__PRT, CYREG_PRT3_PRT
.set Ctrl_M1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Ctrl_M1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Ctrl_M1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Ctrl_M1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Ctrl_M1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Ctrl_M1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Ctrl_M1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Ctrl_M1__PS, CYREG_PRT3_PS
.set Ctrl_M1__SHIFT, 2
.set Ctrl_M1__SLW, CYREG_PRT3_SLW

/* Ctrl_RD */
.set Ctrl_RD__0__INTTYPE, CYREG_PICU3_INTTYPE4
.set Ctrl_RD__0__MASK, 0x10
.set Ctrl_RD__0__PC, CYREG_PRT3_PC4
.set Ctrl_RD__0__PORT, 3
.set Ctrl_RD__0__SHIFT, 4
.set Ctrl_RD__AG, CYREG_PRT3_AG
.set Ctrl_RD__AMUX, CYREG_PRT3_AMUX
.set Ctrl_RD__BIE, CYREG_PRT3_BIE
.set Ctrl_RD__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Ctrl_RD__BYP, CYREG_PRT3_BYP
.set Ctrl_RD__CTL, CYREG_PRT3_CTL
.set Ctrl_RD__DM0, CYREG_PRT3_DM0
.set Ctrl_RD__DM1, CYREG_PRT3_DM1
.set Ctrl_RD__DM2, CYREG_PRT3_DM2
.set Ctrl_RD__DR, CYREG_PRT3_DR
.set Ctrl_RD__INP_DIS, CYREG_PRT3_INP_DIS
.set Ctrl_RD__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Ctrl_RD__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Ctrl_RD__LCD_EN, CYREG_PRT3_LCD_EN
.set Ctrl_RD__MASK, 0x10
.set Ctrl_RD__PORT, 3
.set Ctrl_RD__PRT, CYREG_PRT3_PRT
.set Ctrl_RD__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Ctrl_RD__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Ctrl_RD__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Ctrl_RD__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Ctrl_RD__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Ctrl_RD__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Ctrl_RD__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Ctrl_RD__PS, CYREG_PRT3_PS
.set Ctrl_RD__SHIFT, 4
.set Ctrl_RD__SLW, CYREG_PRT3_SLW

/* Ctrl_WR */
.set Ctrl_WR__0__INTTYPE, CYREG_PICU3_INTTYPE5
.set Ctrl_WR__0__MASK, 0x20
.set Ctrl_WR__0__PC, CYREG_PRT3_PC5
.set Ctrl_WR__0__PORT, 3
.set Ctrl_WR__0__SHIFT, 5
.set Ctrl_WR__AG, CYREG_PRT3_AG
.set Ctrl_WR__AMUX, CYREG_PRT3_AMUX
.set Ctrl_WR__BIE, CYREG_PRT3_BIE
.set Ctrl_WR__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Ctrl_WR__BYP, CYREG_PRT3_BYP
.set Ctrl_WR__CTL, CYREG_PRT3_CTL
.set Ctrl_WR__DM0, CYREG_PRT3_DM0
.set Ctrl_WR__DM1, CYREG_PRT3_DM1
.set Ctrl_WR__DM2, CYREG_PRT3_DM2
.set Ctrl_WR__DR, CYREG_PRT3_DR
.set Ctrl_WR__INP_DIS, CYREG_PRT3_INP_DIS
.set Ctrl_WR__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Ctrl_WR__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Ctrl_WR__LCD_EN, CYREG_PRT3_LCD_EN
.set Ctrl_WR__MASK, 0x20
.set Ctrl_WR__PORT, 3
.set Ctrl_WR__PRT, CYREG_PRT3_PRT
.set Ctrl_WR__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Ctrl_WR__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Ctrl_WR__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Ctrl_WR__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Ctrl_WR__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Ctrl_WR__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Ctrl_WR__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Ctrl_WR__PS, CYREG_PRT3_PS
.set Ctrl_WR__SHIFT, 5
.set Ctrl_WR__SLW, CYREG_PRT3_SLW

/* Ctrl_MREQ */
.set Ctrl_MREQ__0__INTTYPE, CYREG_PICU3_INTTYPE3
.set Ctrl_MREQ__0__MASK, 0x08
.set Ctrl_MREQ__0__PC, CYREG_PRT3_PC3
.set Ctrl_MREQ__0__PORT, 3
.set Ctrl_MREQ__0__SHIFT, 3
.set Ctrl_MREQ__AG, CYREG_PRT3_AG
.set Ctrl_MREQ__AMUX, CYREG_PRT3_AMUX
.set Ctrl_MREQ__BIE, CYREG_PRT3_BIE
.set Ctrl_MREQ__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Ctrl_MREQ__BYP, CYREG_PRT3_BYP
.set Ctrl_MREQ__CTL, CYREG_PRT3_CTL
.set Ctrl_MREQ__DM0, CYREG_PRT3_DM0
.set Ctrl_MREQ__DM1, CYREG_PRT3_DM1
.set Ctrl_MREQ__DM2, CYREG_PRT3_DM2
.set Ctrl_MREQ__DR, CYREG_PRT3_DR
.set Ctrl_MREQ__INP_DIS, CYREG_PRT3_INP_DIS
.set Ctrl_MREQ__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Ctrl_MREQ__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Ctrl_MREQ__LCD_EN, CYREG_PRT3_LCD_EN
.set Ctrl_MREQ__MASK, 0x08
.set Ctrl_MREQ__PORT, 3
.set Ctrl_MREQ__PRT, CYREG_PRT3_PRT
.set Ctrl_MREQ__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Ctrl_MREQ__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Ctrl_MREQ__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Ctrl_MREQ__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Ctrl_MREQ__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Ctrl_MREQ__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Ctrl_MREQ__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Ctrl_MREQ__PS, CYREG_PRT3_PS
.set Ctrl_MREQ__SHIFT, 3
.set Ctrl_MREQ__SLW, CYREG_PRT3_SLW

/* Z80_Clock */
.set Z80_Clock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Z80_Clock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Z80_Clock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Z80_Clock__CFG2_SRC_SEL_MASK, 0x07
.set Z80_Clock__INDEX, 0x01
.set Z80_Clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Z80_Clock__PM_ACT_MSK, 0x02
.set Z80_Clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Z80_Clock__PM_STBY_MSK, 0x02

/* Clock_Ctrl */
.set Clock_Ctrl_Sync_ctrl_reg__0__MASK, 0x01
.set Clock_Ctrl_Sync_ctrl_reg__0__POS, 0
.set Clock_Ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set Clock_Ctrl_Sync_ctrl_reg__1__POS, 1
.set Clock_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set Clock_Ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B1_UDB11_CTL
.set Clock_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B1_UDB11_ST_CTL
.set Clock_Ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B1_UDB11_CTL
.set Clock_Ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B1_UDB11_ST_CTL
.set Clock_Ctrl_Sync_ctrl_reg__MASK, 0x03
.set Clock_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set Clock_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set Clock_Ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B1_UDB11_MSK

/* Ctrl_Reset */
.set Ctrl_Reset__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set Ctrl_Reset__0__MASK, 0x01
.set Ctrl_Reset__0__PC, CYREG_PRT3_PC0
.set Ctrl_Reset__0__PORT, 3
.set Ctrl_Reset__0__SHIFT, 0
.set Ctrl_Reset__AG, CYREG_PRT3_AG
.set Ctrl_Reset__AMUX, CYREG_PRT3_AMUX
.set Ctrl_Reset__BIE, CYREG_PRT3_BIE
.set Ctrl_Reset__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Ctrl_Reset__BYP, CYREG_PRT3_BYP
.set Ctrl_Reset__CTL, CYREG_PRT3_CTL
.set Ctrl_Reset__DM0, CYREG_PRT3_DM0
.set Ctrl_Reset__DM1, CYREG_PRT3_DM1
.set Ctrl_Reset__DM2, CYREG_PRT3_DM2
.set Ctrl_Reset__DR, CYREG_PRT3_DR
.set Ctrl_Reset__INP_DIS, CYREG_PRT3_INP_DIS
.set Ctrl_Reset__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Ctrl_Reset__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Ctrl_Reset__LCD_EN, CYREG_PRT3_LCD_EN
.set Ctrl_Reset__MASK, 0x01
.set Ctrl_Reset__PORT, 3
.set Ctrl_Reset__PRT, CYREG_PRT3_PRT
.set Ctrl_Reset__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Ctrl_Reset__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Ctrl_Reset__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Ctrl_Reset__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Ctrl_Reset__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Ctrl_Reset__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Ctrl_Reset__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Ctrl_Reset__PS, CYREG_PRT3_PS
.set Ctrl_Reset__SHIFT, 0
.set Ctrl_Reset__SLW, CYREG_PRT3_SLW

/* User_Button */
.set User_Button__0__INTTYPE, CYREG_PICU1_INTTYPE2
.set User_Button__0__MASK, 0x04
.set User_Button__0__PC, CYREG_PRT1_PC2
.set User_Button__0__PORT, 1
.set User_Button__0__SHIFT, 2
.set User_Button__AG, CYREG_PRT1_AG
.set User_Button__AMUX, CYREG_PRT1_AMUX
.set User_Button__BIE, CYREG_PRT1_BIE
.set User_Button__BIT_MASK, CYREG_PRT1_BIT_MASK
.set User_Button__BYP, CYREG_PRT1_BYP
.set User_Button__CTL, CYREG_PRT1_CTL
.set User_Button__DM0, CYREG_PRT1_DM0
.set User_Button__DM1, CYREG_PRT1_DM1
.set User_Button__DM2, CYREG_PRT1_DM2
.set User_Button__DR, CYREG_PRT1_DR
.set User_Button__INP_DIS, CYREG_PRT1_INP_DIS
.set User_Button__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set User_Button__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set User_Button__LCD_EN, CYREG_PRT1_LCD_EN
.set User_Button__MASK, 0x04
.set User_Button__PORT, 1
.set User_Button__PRT, CYREG_PRT1_PRT
.set User_Button__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set User_Button__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set User_Button__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set User_Button__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set User_Button__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set User_Button__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set User_Button__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set User_Button__PS, CYREG_PRT1_PS
.set User_Button__SHIFT, 2
.set User_Button__SLW, CYREG_PRT1_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000007
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
