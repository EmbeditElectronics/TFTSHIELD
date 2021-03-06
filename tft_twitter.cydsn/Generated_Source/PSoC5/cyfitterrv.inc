    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; RX
RX__0__MASK EQU 0x04
RX__0__PC EQU CYREG_PRT1_PC2
RX__0__PORT EQU 1
RX__0__SHIFT EQU 2
RX__AG EQU CYREG_PRT1_AG
RX__AMUX EQU CYREG_PRT1_AMUX
RX__BIE EQU CYREG_PRT1_BIE
RX__BIT_MASK EQU CYREG_PRT1_BIT_MASK
RX__BYP EQU CYREG_PRT1_BYP
RX__CTL EQU CYREG_PRT1_CTL
RX__DM0 EQU CYREG_PRT1_DM0
RX__DM1 EQU CYREG_PRT1_DM1
RX__DM2 EQU CYREG_PRT1_DM2
RX__DR EQU CYREG_PRT1_DR
RX__INP_DIS EQU CYREG_PRT1_INP_DIS
RX__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
RX__LCD_EN EQU CYREG_PRT1_LCD_EN
RX__MASK EQU 0x04
RX__PORT EQU 1
RX__PRT EQU CYREG_PRT1_PRT
RX__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
RX__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
RX__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
RX__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
RX__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
RX__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
RX__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
RX__PS EQU CYREG_PRT1_PS
RX__SHIFT EQU 2
RX__SLW EQU CYREG_PRT1_SLW

; cs
cs__0__MASK EQU 0x10
cs__0__PC EQU CYREG_PRT6_PC4
cs__0__PORT EQU 6
cs__0__SHIFT EQU 4
cs__AG EQU CYREG_PRT6_AG
cs__AMUX EQU CYREG_PRT6_AMUX
cs__BIE EQU CYREG_PRT6_BIE
cs__BIT_MASK EQU CYREG_PRT6_BIT_MASK
cs__BYP EQU CYREG_PRT6_BYP
cs__CTL EQU CYREG_PRT6_CTL
cs__DM0 EQU CYREG_PRT6_DM0
cs__DM1 EQU CYREG_PRT6_DM1
cs__DM2 EQU CYREG_PRT6_DM2
cs__DR EQU CYREG_PRT6_DR
cs__INP_DIS EQU CYREG_PRT6_INP_DIS
cs__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
cs__LCD_EN EQU CYREG_PRT6_LCD_EN
cs__MASK EQU 0x10
cs__PORT EQU 6
cs__PRT EQU CYREG_PRT6_PRT
cs__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
cs__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
cs__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
cs__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
cs__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
cs__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
cs__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
cs__PS EQU CYREG_PRT6_PS
cs__SHIFT EQU 4
cs__SLW EQU CYREG_PRT6_SLW

; dc
dc__0__MASK EQU 0x08
dc__0__PC EQU CYREG_PRT6_PC3
dc__0__PORT EQU 6
dc__0__SHIFT EQU 3
dc__AG EQU CYREG_PRT6_AG
dc__AMUX EQU CYREG_PRT6_AMUX
dc__BIE EQU CYREG_PRT6_BIE
dc__BIT_MASK EQU CYREG_PRT6_BIT_MASK
dc__BYP EQU CYREG_PRT6_BYP
dc__CTL EQU CYREG_PRT6_CTL
dc__DM0 EQU CYREG_PRT6_DM0
dc__DM1 EQU CYREG_PRT6_DM1
dc__DM2 EQU CYREG_PRT6_DM2
dc__DR EQU CYREG_PRT6_DR
dc__INP_DIS EQU CYREG_PRT6_INP_DIS
dc__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
dc__LCD_EN EQU CYREG_PRT6_LCD_EN
dc__MASK EQU 0x08
dc__PORT EQU 6
dc__PRT EQU CYREG_PRT6_PRT
dc__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
dc__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
dc__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
dc__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
dc__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
dc__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
dc__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
dc__PS EQU CYREG_PRT6_PS
dc__SHIFT EQU 3
dc__SLW EQU CYREG_PRT6_SLW

; ss
ss__0__MASK EQU 0x40
ss__0__PC EQU CYREG_PRT12_PC6
ss__0__PORT EQU 12
ss__0__SHIFT EQU 6
ss__AG EQU CYREG_PRT12_AG
ss__BIE EQU CYREG_PRT12_BIE
ss__BIT_MASK EQU CYREG_PRT12_BIT_MASK
ss__BYP EQU CYREG_PRT12_BYP
ss__DM0 EQU CYREG_PRT12_DM0
ss__DM1 EQU CYREG_PRT12_DM1
ss__DM2 EQU CYREG_PRT12_DM2
ss__DR EQU CYREG_PRT12_DR
ss__INP_DIS EQU CYREG_PRT12_INP_DIS
ss__MASK EQU 0x40
ss__PORT EQU 12
ss__PRT EQU CYREG_PRT12_PRT
ss__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
ss__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
ss__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
ss__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
ss__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
ss__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
ss__PS EQU CYREG_PRT12_PS
ss__SHIFT EQU 6
ss__SIO_CFG EQU CYREG_PRT12_SIO_CFG
ss__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
ss__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
ss__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
ss__SLW EQU CYREG_PRT12_SLW

; bck
bck__0__MASK EQU 0x04
bck__0__PC EQU CYREG_PRT6_PC2
bck__0__PORT EQU 6
bck__0__SHIFT EQU 2
bck__AG EQU CYREG_PRT6_AG
bck__AMUX EQU CYREG_PRT6_AMUX
bck__BIE EQU CYREG_PRT6_BIE
bck__BIT_MASK EQU CYREG_PRT6_BIT_MASK
bck__BYP EQU CYREG_PRT6_BYP
bck__CTL EQU CYREG_PRT6_CTL
bck__DM0 EQU CYREG_PRT6_DM0
bck__DM1 EQU CYREG_PRT6_DM1
bck__DM2 EQU CYREG_PRT6_DM2
bck__DR EQU CYREG_PRT6_DR
bck__INP_DIS EQU CYREG_PRT6_INP_DIS
bck__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
bck__LCD_EN EQU CYREG_PRT6_LCD_EN
bck__MASK EQU 0x04
bck__PORT EQU 6
bck__PRT EQU CYREG_PRT6_PRT
bck__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
bck__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
bck__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
bck__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
bck__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
bck__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
bck__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
bck__PS EQU CYREG_PRT6_PS
bck__SHIFT EQU 2
bck__SLW EQU CYREG_PRT6_SLW

; miso
miso__0__MASK EQU 0x40
miso__0__PC EQU CYREG_PRT6_PC6
miso__0__PORT EQU 6
miso__0__SHIFT EQU 6
miso__AG EQU CYREG_PRT6_AG
miso__AMUX EQU CYREG_PRT6_AMUX
miso__BIE EQU CYREG_PRT6_BIE
miso__BIT_MASK EQU CYREG_PRT6_BIT_MASK
miso__BYP EQU CYREG_PRT6_BYP
miso__CTL EQU CYREG_PRT6_CTL
miso__DM0 EQU CYREG_PRT6_DM0
miso__DM1 EQU CYREG_PRT6_DM1
miso__DM2 EQU CYREG_PRT6_DM2
miso__DR EQU CYREG_PRT6_DR
miso__INP_DIS EQU CYREG_PRT6_INP_DIS
miso__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
miso__LCD_EN EQU CYREG_PRT6_LCD_EN
miso__MASK EQU 0x40
miso__PORT EQU 6
miso__PRT EQU CYREG_PRT6_PRT
miso__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
miso__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
miso__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
miso__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
miso__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
miso__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
miso__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
miso__PS EQU CYREG_PRT6_PS
miso__SHIFT EQU 6
miso__SLW EQU CYREG_PRT6_SLW

; mosi
mosi__0__MASK EQU 0x20
mosi__0__PC EQU CYREG_PRT6_PC5
mosi__0__PORT EQU 6
mosi__0__SHIFT EQU 5
mosi__AG EQU CYREG_PRT6_AG
mosi__AMUX EQU CYREG_PRT6_AMUX
mosi__BIE EQU CYREG_PRT6_BIE
mosi__BIT_MASK EQU CYREG_PRT6_BIT_MASK
mosi__BYP EQU CYREG_PRT6_BYP
mosi__CTL EQU CYREG_PRT6_CTL
mosi__DM0 EQU CYREG_PRT6_DM0
mosi__DM1 EQU CYREG_PRT6_DM1
mosi__DM2 EQU CYREG_PRT6_DM2
mosi__DR EQU CYREG_PRT6_DR
mosi__INP_DIS EQU CYREG_PRT6_INP_DIS
mosi__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
mosi__LCD_EN EQU CYREG_PRT6_LCD_EN
mosi__MASK EQU 0x20
mosi__PORT EQU 6
mosi__PRT EQU CYREG_PRT6_PRT
mosi__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
mosi__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
mosi__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
mosi__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
mosi__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
mosi__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
mosi__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
mosi__PS EQU CYREG_PRT6_PS
mosi__SHIFT EQU 5
mosi__SLW EQU CYREG_PRT6_SLW

; sclk
sclk__0__MASK EQU 0x80
sclk__0__PC EQU CYREG_PRT6_PC7
sclk__0__PORT EQU 6
sclk__0__SHIFT EQU 7
sclk__AG EQU CYREG_PRT6_AG
sclk__AMUX EQU CYREG_PRT6_AMUX
sclk__BIE EQU CYREG_PRT6_BIE
sclk__BIT_MASK EQU CYREG_PRT6_BIT_MASK
sclk__BYP EQU CYREG_PRT6_BYP
sclk__CTL EQU CYREG_PRT6_CTL
sclk__DM0 EQU CYREG_PRT6_DM0
sclk__DM1 EQU CYREG_PRT6_DM1
sclk__DM2 EQU CYREG_PRT6_DM2
sclk__DR EQU CYREG_PRT6_DR
sclk__INP_DIS EQU CYREG_PRT6_INP_DIS
sclk__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
sclk__LCD_EN EQU CYREG_PRT6_LCD_EN
sclk__MASK EQU 0x80
sclk__PORT EQU 6
sclk__PRT EQU CYREG_PRT6_PRT
sclk__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
sclk__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
sclk__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
sclk__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
sclk__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
sclk__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
sclk__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
sclk__PS EQU CYREG_PRT6_PS
sclk__SHIFT EQU 7
sclk__SLW EQU CYREG_PRT6_SLW

; UART_1_BUART
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB09_10_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB09_10_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB09_CTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB09_ST_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB09_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB09_ST_CTL
UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB09_MSK
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB09_10_ST
UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB09_MSK
UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB09_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB09_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB09_ST
UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB09_10_A0
UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB09_10_A1
UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB09_10_D0
UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB09_10_D1
UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB09_10_F0
UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB09_10_F1
UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB09_A0_A1
UART_1_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB09_A0
UART_1_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB09_A1
UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB09_D0_D1
UART_1_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB09_D0
UART_1_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB09_D1
UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB09_F0_F1
UART_1_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB09_F0
UART_1_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB09_F1
UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB08_09_ST
UART_1_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_1_BUART_sRX_RxSts__3__POS EQU 3
UART_1_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_1_BUART_sRX_RxSts__4__POS EQU 4
UART_1_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_1_BUART_sRX_RxSts__5__POS EQU 5
UART_1_BUART_sRX_RxSts__MASK EQU 0x38
UART_1_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB08_MSK
UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
UART_1_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB08_ST

; UART_1_IntClock
UART_1_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_1_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_1_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_1_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_1_IntClock__INDEX EQU 0x01
UART_1_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_1_IntClock__PM_ACT_MSK EQU 0x02
UART_1_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_1_IntClock__PM_STBY_MSK EQU 0x02

; UART_1_RXInternalInterrupt
UART_1_RXInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
UART_1_RXInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
UART_1_RXInternalInterrupt__INTC_MASK EQU 0x04
UART_1_RXInternalInterrupt__INTC_NUMBER EQU 2
UART_1_RXInternalInterrupt__INTC_PRIOR_NUM EQU 7
UART_1_RXInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
UART_1_RXInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
UART_1_RXInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

; TFTSHIELD_1_CR_1
TFTSHIELD_1_CR_1_Sync_ctrl_reg__0__MASK EQU 0x01
TFTSHIELD_1_CR_1_Sync_ctrl_reg__0__POS EQU 0
TFTSHIELD_1_CR_1_Sync_ctrl_reg__1__MASK EQU 0x02
TFTSHIELD_1_CR_1_Sync_ctrl_reg__1__POS EQU 1
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB09_10_MSK
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB09_10_MSK
TFTSHIELD_1_CR_1_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
TFTSHIELD_1_CR_1_Sync_ctrl_reg__2__MASK EQU 0x04
TFTSHIELD_1_CR_1_Sync_ctrl_reg__2__POS EQU 2
TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B1_UDB09_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B1_UDB09_ST_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__COUNT_REG EQU CYREG_B1_UDB09_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B1_UDB09_ST_CTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__MASK EQU 0x07
TFTSHIELD_1_CR_1_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
TFTSHIELD_1_CR_1_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B1_UDB09_MSK

; TFTSHIELD_1_SPIM_1_BSPIM
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B1_UDB11_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB11_ST_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__COUNT_REG EQU CYREG_B1_UDB11_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B1_UDB11_ST_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B1_UDB11_MSK
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B1_UDB11_MSK
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB11_ST_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB11_ST_CTL
TFTSHIELD_1_SPIM_1_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B1_UDB11_ST
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__4__MASK EQU 0x10
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__4__POS EQU 4
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__5__MASK EQU 0x20
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__5__POS EQU 5
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__6__MASK EQU 0x40
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__6__POS EQU 6
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__MASK EQU 0x70
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__MASK_REG EQU CYREG_B1_UDB08_MSK
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B1_UDB08_ST
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B1_UDB11_A0_A1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B1_UDB11_A0
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B1_UDB11_A1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B1_UDB11_D0_D1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B1_UDB11_D0
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B1_UDB11_D1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B1_UDB11_F0_F1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B1_UDB11_F0
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B1_UDB11_F1
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB11_MSK_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__0__MASK EQU 0x01
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__0__POS EQU 0
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__1__MASK EQU 0x02
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__1__POS EQU 1
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__2__MASK EQU 0x04
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__2__POS EQU 2
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__3__MASK EQU 0x08
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__3__POS EQU 3
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__4__MASK EQU 0x10
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__4__POS EQU 4
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__MASK EQU 0x1F
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__MASK_REG EQU CYREG_B1_UDB10_MSK
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
TFTSHIELD_1_SPIM_1_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B1_UDB10_ST

; TFTSHIELD_1_SPIM_1_RxInternalInterrupt
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_MASK EQU 0x01
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_NUMBER EQU 0
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_PRIOR_NUM EQU 7
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
TFTSHIELD_1_SPIM_1_RxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; TFTSHIELD_1_SPIM_1_TxInternalInterrupt
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_MASK EQU 0x02
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_NUMBER EQU 1
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_PRIOR_NUM EQU 7
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
TFTSHIELD_1_SPIM_1_TxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 4
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_4D EQU 3
CYDEV_CHIP_MEMBER_5A EQU 4
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_ES0 EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x1000
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000007
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x4000
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
