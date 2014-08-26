/*******************************************************************************
* File Name: dc.c  
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
#include "dc.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 dc__PORT == 15 && ((dc__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: dc_Write
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
void dc_Write(uint8 value) 
{
    uint8 staticBits = (dc_DR & (uint8)(~dc_MASK));
    dc_DR = staticBits | ((uint8)(value << dc_SHIFT) & dc_MASK);
}


/*******************************************************************************
* Function Name: dc_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  dc_DM_STRONG     Strong Drive 
*  dc_DM_OD_HI      Open Drain, Drives High 
*  dc_DM_OD_LO      Open Drain, Drives Low 
*  dc_DM_RES_UP     Resistive Pull Up 
*  dc_DM_RES_DWN    Resistive Pull Down 
*  dc_DM_RES_UPDWN  Resistive Pull Up/Down 
*  dc_DM_DIG_HIZ    High Impedance Digital 
*  dc_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void dc_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(dc_0, mode);
}


/*******************************************************************************
* Function Name: dc_Read
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
*  Macro dc_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 dc_Read(void) 
{
    return (dc_PS & dc_MASK) >> dc_SHIFT;
}


/*******************************************************************************
* Function Name: dc_ReadDataReg
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
uint8 dc_ReadDataReg(void) 
{
    return (dc_DR & dc_MASK) >> dc_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(dc_INTSTAT) 

    /*******************************************************************************
    * Function Name: dc_ClearInterrupt
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
    uint8 dc_ClearInterrupt(void) 
    {
        return (dc_INTSTAT & dc_MASK) >> dc_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
