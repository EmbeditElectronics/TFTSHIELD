/*******************************************************************************
* File Name: cs.h  
* Version 2.0
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_cs_H) /* Pins cs_H */
#define CY_PINS_cs_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "cs_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_0 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 cs__PORT == 15 && ((cs__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    cs_Write(uint8 value) ;
void    cs_SetDriveMode(uint8 mode) ;
uint8   cs_ReadDataReg(void) ;
uint8   cs_Read(void) ;
uint8   cs_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define cs_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define cs_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define cs_DM_RES_UP          PIN_DM_RES_UP
#define cs_DM_RES_DWN         PIN_DM_RES_DWN
#define cs_DM_OD_LO           PIN_DM_OD_LO
#define cs_DM_OD_HI           PIN_DM_OD_HI
#define cs_DM_STRONG          PIN_DM_STRONG
#define cs_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define cs_MASK               cs__MASK
#define cs_SHIFT              cs__SHIFT
#define cs_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define cs_PS                     (* (reg8 *) cs__PS)
/* Data Register */
#define cs_DR                     (* (reg8 *) cs__DR)
/* Port Number */
#define cs_PRT_NUM                (* (reg8 *) cs__PRT) 
/* Connect to Analog Globals */                                                  
#define cs_AG                     (* (reg8 *) cs__AG)                       
/* Analog MUX bux enable */
#define cs_AMUX                   (* (reg8 *) cs__AMUX) 
/* Bidirectional Enable */                                                        
#define cs_BIE                    (* (reg8 *) cs__BIE)
/* Bit-mask for Aliased Register Access */
#define cs_BIT_MASK               (* (reg8 *) cs__BIT_MASK)
/* Bypass Enable */
#define cs_BYP                    (* (reg8 *) cs__BYP)
/* Port wide control signals */                                                   
#define cs_CTL                    (* (reg8 *) cs__CTL)
/* Drive Modes */
#define cs_DM0                    (* (reg8 *) cs__DM0) 
#define cs_DM1                    (* (reg8 *) cs__DM1)
#define cs_DM2                    (* (reg8 *) cs__DM2) 
/* Input Buffer Disable Override */
#define cs_INP_DIS                (* (reg8 *) cs__INP_DIS)
/* LCD Common or Segment Drive */
#define cs_LCD_COM_SEG            (* (reg8 *) cs__LCD_COM_SEG)
/* Enable Segment LCD */
#define cs_LCD_EN                 (* (reg8 *) cs__LCD_EN)
/* Slew Rate Control */
#define cs_SLW                    (* (reg8 *) cs__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define cs_PRTDSI__CAPS_SEL       (* (reg8 *) cs__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define cs_PRTDSI__DBL_SYNC_IN    (* (reg8 *) cs__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define cs_PRTDSI__OE_SEL0        (* (reg8 *) cs__PRTDSI__OE_SEL0) 
#define cs_PRTDSI__OE_SEL1        (* (reg8 *) cs__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define cs_PRTDSI__OUT_SEL0       (* (reg8 *) cs__PRTDSI__OUT_SEL0) 
#define cs_PRTDSI__OUT_SEL1       (* (reg8 *) cs__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define cs_PRTDSI__SYNC_OUT       (* (reg8 *) cs__PRTDSI__SYNC_OUT) 


#if defined(cs__INTSTAT)  /* Interrupt Registers */

    #define cs_INTSTAT                (* (reg8 *) cs__INTSTAT)
    #define cs_SNAP                   (* (reg8 *) cs__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_cs_H */


/* [] END OF FILE */
