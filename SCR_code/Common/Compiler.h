/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Compiler.h
 *       Module:  -
 *
 *  Description:  Contains Compiler Dependent MACRO Definition     
 *  
 *********************************************************************************************************************/
#ifndef COMPILER_H
#define COMPILER_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* NULL_PTR define with a void pointer to zero definition*/
#define NULL_PTR       ((void *)0)

/* INLINE  define for abstraction of the keyword inline*/
#define INLINE         inline

/* LOCAL_INLINE define for abstraction of the keyword inline in functions with "static" scope.
   Different compilers may require a different sequence of the keywords "static" and "inline" 
   if this is supported at all. */
#define LOCAL_INLINE   static inline

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS

 *********************************************************************************************************************/
#define BIT_BAND_BASE (0x42000000)
#define BIT_BAND_REF_ADD (0x40000000)
#define set_bit_BAND_PREF(REG,BIT) (*(volatile uint32*)(BIT_BAND_BASE +((((uint32)&REG)-BIT_BAND_REF_ADD)*32)+(BIT*4))=1)
#define clear_bit_BAND_PREF(REG,BIT) (*(volatile uint32*)(BIT_BAND_BASE +((((uint32)&REG)-BIT_BAND_REF_ADD)*32)+(BIT*4))=0)

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* COMPILER_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
