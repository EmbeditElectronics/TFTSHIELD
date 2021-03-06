/*******************************************************************************
* File Name: cs.c  
* Version 2.0
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "cs.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 cs__PORT == 15 && ((cs__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: cs_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void cs_Write(uint8 value) 
{
    uint8 staticBits = (cs_DR & (uint8)(~cs_MASK));
    cs_DR = staticBits | ((uint8)(value << cs_SHIFT) & cs_MASK);
}


/*******************************************************************************
* Function Name: cs_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  cs_DM_STRONG     Strong Drive 
*  cs_DM_OD_HI      Open Drain, Drives High 
*  cs_DM_OD_LO      Open Drain, Drives Low 
*  cs_DM_RES_UP     Resistive Pull Up 
*  cs_DM_RES_DWN    Resistive Pull Down 
*  cs_DM_RES_UPDWN  Resistive Pull Up/Down 
*  cs_DM_DIG_HIZ    High Impedance Digital 
*  cs_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void cs_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(cs_0, mode);
}


/*******************************************************************************
* Function Name: cs_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro cs_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 cs_Read(void) 
{
    return (cs_PS & cs_MASK) >> cs_SHIFT;
}


/*******************************************************************************
* Function Name: cs_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 cs_ReadDataReg(void) 
{
    return (cs_DR & cs_MASK) >> cs_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(cs_INTSTAT) 

    /*******************************************************************************
    * Function Name: cs_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 cs_ClearInterrupt(void) 
    {
        return (cs_INTSTAT & cs_MASK) >> cs_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
