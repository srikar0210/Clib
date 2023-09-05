/*******************************************************************************
 * $File: maskarray.h$
 * $Revision: 2$
 * $Author: Paul.Hoogeveen$
 * $Date: vrijdag 17 oktober 2014 13:12:39$
 ******************************************************************************/
#ifndef MASKARRAY_H_
#define MASKARRAY_H_
/*******************************************************************************
* Includes
*******************************************************************************/

/*******************************************************************************
* Definitions
*******************************************************************************/

/*******************************************************************************
* Types
*******************************************************************************/

/*******************************************************************************
* Variables
*******************************************************************************/

/*******************************************************************************
* Functions
*******************************************************************************/
/**	\brief.
 * Zet bit op 0 / 1 in word van array
 * @param[in]		ar			Array
 * @param[in]		ix			Bit-offset
 * @param[in]		val			True = 1
 */
extern void PutBitMask16 (uint16_t * ar, uint16_t ix, bool val);

/**	\brief.
 * Lees bit uit word van array
 * @param[in]		ar		Array
 * @param[in]		ix		Bit-offset
 * \return					True = 1
 */
extern bool GetBitMask16 (const uint16_t * ar, uint16_t ix);

/**	\brief.
 * Zet bit op 0 / 1 in word van array
 * @param[in]		ar			Array
 * @param[in]		ix			Bit-offset
 * @param[in]		val			True = 1
 */
extern void PutBitMask32 (uint32_t * ar, uint16_t ix, bool val);

/**	\brief.
 * Lees bit uit word van array
 * @param[in]		ar		Array
 * @param[in]		ix		Bit-offset
 * \return					True = 1
 */
extern bool GetBitMask32 (const uint32_t * ar, uint16_t ix);

/*******************************************************************************
* Inline functions
*******************************************************************************/

#endif /*MASKARRAY_H_*/
