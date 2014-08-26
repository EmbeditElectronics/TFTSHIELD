.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* cs */
.set cs__0__MASK, 0x10
.set cs__0__PC, CYREG_PRT6_PC4
.set cs__0__PORT, 6
.set cs__0__SHIFT, 4
.set cs__AG, CYREG_PRT6_AG
.set cs__AMUX, CYREG_PRT6_AMUX
.set cs__BIE, CYREG_PRT6_BIE
.set cs__BIT_MASK, CYREG_PRT6_BIT_MASK
.set cs__BYP, CYREG_PRT6_BYP
.set cs__CTL, CYREG_PRT6_CTL
.set cs__DM0, CYREG_PRT6_DM0
.set cs__DM1, CYREG_PRT6_DM1
.set cs__DM2, CYREG_PRT6_DM2
.set cs__DR, CYREG_PRT6_DR
.set cs__INP_DIS, CYREG_PRT6_INP_DIS
.set cs__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set cs__LCD_EN, CYREG_PRT6_LCD_EN
.set cs__MASK, 0x10
.set cs__PORT, 6
.set cs__PRT, CYREG_PRT6_PRT
.set cs__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set cs__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set cs__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set cs__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set cs__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set cs__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set cs__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set cs__PS, CYREG_PRT6_PS
.set cs__SHIFT, 4
.set cs__SLW, CYREG_PRT6_SLW

/* dc */
.set dc__0__MASK, 0x08
.set dc__0__PC, CYREG_PRT6_PC3
.set dc__0__PORT, 6
.set dc__0__SHIFT, 3
.set dc__AG, CYREG_PRT6_AG
.set dc__AMUX, CYREG_PRT6_AMUX
.set dc__BIE, CYREG_PRT6_BIE
.set dc__BIT_MASK, CYREG_PRT6_BIT_MASK
.set dc__BYP, CYREG_PRT6_BYP
.set dc__CTL, CYREG_PRT6_CTL
.set dc__DM0, CYREG_PRT6_DM0
.set dc__DM1, CYREG_PRT6_DM1
.set dc__DM2, CYREG_PRT6_DM2
.set dc__DR, CYREG_PRT6_DR
.set dc__INP_DIS, CYREG_PRT6_INP_DIS
.set dc__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set dc__LCD_EN, CYREG_PRT6_LCD_EN
.set dc__MASK, 0x08
.set dc__PORT, 6
.set dc__PRT, CYREG_PRT6_PRT
.set dc__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set dc__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set dc__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set dc__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set dc__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set dc__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set dc__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set dc__PS, CYREG_PRT6_PS
.set dc__SHIFT, 3
.set dc__SLW, CYREG_PRT6_SLW

/* ss */
.set ss__0__MASK, 0x40
.set ss__0__PC, CYREG_PRT12_PC6
.set ss__0__PORT, 12
.set ss__0__SHIFT, 6
.set ss__AG, CYREG_PRT12_AG
.set ss__BIE, CYREG_PRT12_BIE
.set ss__BIT_MASK, CYREG_PRT12_BIT_MASK
.set ss__BYP, CYREG_PRT12_BYP
.set ss__DM0, CYREG_PRT12_DM0
.set ss__DM1, CYREG_PRT12_DM1
.set ss__DM2, CYREG_PRT12_DM2
.set ss__DR, CYREG_PRT12_DR
.set ss__INP_DIS, CYREG_PRT12_INP_DIS
.set ss__MASK, 0x40
.set ss__PORT, 12
.set ss__PRT, CYREG_PRT12_PRT
.set ss__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set ss__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set ss__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set ss__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set ss__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set ss__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set ss__PS, CYREG_PRT12_PS
.set ss__SHIFT, 6
.set ss__SIO_CFG, CYREG_PRT12_SIO_CFG
.set ss__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set ss__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set ss__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set ss__SLW, CYREG_PRT12_SLW

/* miso */
.set miso__0__MASK, 0x40
.set miso__0__PC, CYREG_PRT6_PC6
.set miso__0__PORT, 6
.set miso__0__SHIFT, 6
.set miso__AG, CYREG_PRT6_AG
.set miso__AMUX, CYREG_PRT6_AMUX
.set miso__BIE, CYREG_PRT6_BIE
.set miso__BIT_MASK, CYREG_PRT6_BIT_MASK
.set miso__BYP, CYREG_PRT6_BYP
.set miso__CTL, CYREG_PRT6_CTL
.set miso__DM0, CYREG_PRT6_DM0
.set miso__DM1, CYREG_PRT6_DM1
.set miso__DM2, CYREG_PRT6_DM2
.set miso__DR, CYREG_PRT6_DR
.set miso__INP_DIS, CYREG_PRT6_INP_DIS
.set miso__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set miso__LCD_EN, CYREG_PRT6_LCD_EN
.set miso__MASK, 0x40
.set miso__PORT, 6
.set miso__PRT, CYREG_PRT6_PRT
.set miso__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set miso__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set miso__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set miso__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set miso__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set miso__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set miso__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set miso__PS, CYREG_PRT6_PS
.set miso__SHIFT, 6
.set miso__SLW, CYREG_PRT6_SLW

/* mosi */
.set mosi__0__MASK, 0x20
.set mosi__0__PC, CYREG_PRT6_PC5
.set mosi__0__PORT, 6
.set mosi__0__SHIFT, 5
.set mosi__AG, CYREG_PRT6_AG
.set mosi__AMUX, CYREG_PRT6_AMUX
.set mosi__BIE, CYREG_PRT6_BIE
.set mosi__BIT_MASK, CYREG_PRT6_BIT_MASK
.set mosi__BYP, CYREG_PRT6_BYP
.set mosi__CTL, CYREG_PRT6_CTL
.set mosi__DM0, CYREG_PRT6_DM0
.set mosi__DM1, CYREG_PRT6_DM1
.set mosi__DM2, CYREG_PRT6_DM2
.set mosi__DR, CYREG_PRT6_DR
.set mosi__INP_DIS, CYREG_PRT6_INP_DIS
.set mosi__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set mosi__LCD_EN, CYREG_PRT6_LCD_EN
.set mosi__MASK, 0x20
.set mosi__PORT, 6
.set mosi__PRT, CYREG_PRT6_PRT
.set mosi__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set mosi__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set mosi__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set mosi__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set mosi__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set mosi__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set mosi__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set mosi__PS, CYREG_PRT6_PS
.set mosi__SHIFT, 5
.set mosi__SLW, CYREG_PRT6_SLW

/* sclk */
.set sclk__0__MASK, 0x80
.set sclk__0__PC, CYREG_PRT6_PC7
.set sclk__0__PORT, 6
.set sclk__0__SHIFT, 7
.set sclk__AG, CYREG_PRT6_AG
.set sclk__AMUX, CYREG_PRT6_AMUX
.set sclk__BIE, CYREG_PRT6_BIE
.set sclk__BIT_MASK, CYREG_PRT6_BIT_MASK
.set sclk__BYP, CYREG_PRT6_BYP
.set sclk__CTL, CYREG_PRT6_CTL
.set sclk__DM0, CYREG_PRT6_DM0
.set sclk__DM1, CYREG_PRT6_DM1
.set sclk__DM2, CYREG_PRT6_DM2
.set sclk__DR, CYREG_PRT6_DR
.set sclk__INP_DIS, CYREG_PRT6_INP_DIS
.set sclk__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set sclk__LCD_EN, CYREG_PRT6_LCD_EN
.set sclk__MASK, 0x80
.set sclk__PORT, 6
.set sclk__PRT, CYREG_PRT6_PRT
.set sclk__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set sclk__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set sclk__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set sclk__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set sclk__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set sclk__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set sclk__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set sclk__PS, CYREG_PRT6_PS
.set sclk__SHIFT, 7
.set sclk__SLW, CYREG_PRT6_SLW

/* rt_cs */
.set rt_cs__0__MASK, 0x04
.set rt_cs__0__PC, CYREG_PRT6_PC2
.set rt_cs__0__PORT, 6
.set rt_cs__0__SHIFT, 2
.set rt_cs__AG, CYREG_PRT6_AG
.set rt_cs__AMUX, CYREG_PRT6_AMUX
.set rt_cs__BIE, CYREG_PRT6_BIE
.set rt_cs__BIT_MASK, CYREG_PRT6_BIT_MASK
.set rt_cs__BYP, CYREG_PRT6_BYP
.set rt_cs__CTL, CYREG_PRT6_CTL
.set rt_cs__DM0, CYREG_PRT6_DM0
.set rt_cs__DM1, CYREG_PRT6_DM1
.set rt_cs__DM2, CYREG_PRT6_DM2
.set rt_cs__DR, CYREG_PRT6_DR
.set rt_cs__INP_DIS, CYREG_PRT6_INP_DIS
.set rt_cs__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set rt_cs__LCD_EN, CYREG_PRT6_LCD_EN
.set rt_cs__MASK, 0x04
.set rt_cs__PORT, 6
.set rt_cs__PRT, CYREG_PRT6_PRT
.set rt_cs__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set rt_cs__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set rt_cs__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set rt_cs__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set rt_cs__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set rt_cs__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set rt_cs__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set rt_cs__PS, CYREG_PRT6_PS
.set rt_cs__SHIFT, 2
.set rt_cs__SLW, CYREG_PRT6_SLW

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* TFTSHIELD_1_CR_1 */
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__0__MASK, 0x01
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__0__POS, 0
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__1__MASK, 0x02
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__1__POS, 1
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB10_11_MSK
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB10_11_MSK
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__2__MASK, 0x04
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__2__POS, 2
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB10_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB10_ST_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB10_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB10_ST_CTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__MASK, 0x07
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set TFTSHIELD_1_CR_1_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB10_MSK

/* TFTSHIELD_1_SPIM_1_BSPIM */
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB13_14_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB13_14_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB13_14_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB13_14_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB13_14_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB13_14_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB13_14_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB13_14_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB13_14_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB13_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_REG, CYREG_B0_UDB13_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B0_UDB13_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__COUNT_REG, CYREG_B0_UDB13_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B0_UDB13_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__PERIOD_REG, CYREG_B0_UDB13_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB13_14_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB13_14_ST
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__MASK_REG, CYREG_B0_UDB13_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB13_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB13_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB13_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B0_UDB13_ST
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB11_12_ST
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__4__MASK, 0x10
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__4__POS, 4
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__5__MASK, 0x20
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__5__POS, 5
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__6__MASK, 0x40
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__6__POS, 6
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__MASK, 0x70
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__MASK_REG, CYREG_B0_UDB11_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__STATUS_REG, CYREG_B0_UDB11_ST
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG, CYREG_B0_UDB13_14_A0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG, CYREG_B0_UDB13_14_A1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG, CYREG_B0_UDB13_14_D0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG, CYREG_B0_UDB13_14_D1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB13_14_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG, CYREG_B0_UDB13_14_F0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG, CYREG_B0_UDB13_14_F1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG, CYREG_B0_UDB13_A0_A1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A0_REG, CYREG_B0_UDB13_A0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A1_REG, CYREG_B0_UDB13_A1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG, CYREG_B0_UDB13_D0_D1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D0_REG, CYREG_B0_UDB13_D0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D1_REG, CYREG_B0_UDB13_D1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB13_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG, CYREG_B0_UDB13_F0_F1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F0_REG, CYREG_B0_UDB13_F0
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F1_REG, CYREG_B0_UDB13_F1
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__0__MASK, 0x01
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__0__POS, 0
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__1__MASK, 0x02
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__1__POS, 1
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB10_11_ST
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__2__MASK, 0x04
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__2__POS, 2
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__3__MASK, 0x08
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__3__POS, 3
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__4__MASK, 0x10
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__4__POS, 4
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__MASK, 0x1F
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__MASK_REG, CYREG_B0_UDB10_MSK
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_CNT_REG, CYREG_B0_UDB10_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_CONTROL_REG, CYREG_B0_UDB10_ST_CTL
.set TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_REG, CYREG_B0_UDB10_ST

/* TFTSHIELD_1_SPIM_1_RxInternalInterrupt */
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_MASK, 0x01
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_NUMBER, 0
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_PRIOR_NUM, 7
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* TFTSHIELD_1_SPIM_1_TxInternalInterrupt */
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_MASK, 0x02
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_NUMBER, 1
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_PRIOR_NUM, 7
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 4
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_PSOC5LP, 5
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_5A, 4
.set CYDEV_CHIP_MEMBER_5B, 5
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_ES0, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
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
.set CYDEV_HEAP_SIZE, 0x1000
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000003
.set CYDEV_PROJ_TYPE, 2
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x4000
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0, 5
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1, 5
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2, 5
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3, 5
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