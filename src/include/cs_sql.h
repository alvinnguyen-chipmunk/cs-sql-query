/*******************************************************************************
 *  (C) Copyright 2009 STYL Solutions Co., Ltd. , All rights reserved          *
 *                                                                             *
 *  This source code and any compilation or derivative thereof is the sole     *
 *  property of STYL Solutions Co., Ltd. and is provided pursuant to a         *
 *  Software License Agreement.  This code is the proprietary information      *
 *  of STYL Solutions Co., Ltd and is confidential in nature.  Its use and     *
 *  dissemination by any party other than STYL Solutions Co., Ltd is           *
 *  strictly limited by the confidential information provisions of the         *
 *  Agreement referenced above.                                                *
 ******************************************************************************/

/** @file cs_sql.h
 *  @brief Function prototypes for the C swapper for mysql API
 *         with doxygen format.
 *
 *  This contains the prototypes for the C Template
 *  with doxygen format and eventually any macros, constants,
 *  or global variables will need.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	09/12/2017
 *  @bug 		No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifndef CSEXAMPLE_HELLO_H_INCLUDED
#define CSEXAMPLE_HELLO_H_INCLUDED
#ifdef __cplusplus
extern "C"
{
#endif

/********** Include section ***************************************************/
#include <stdio.h>

/********** Constant and compile switch definition section ********************/
/********** Type definition section *******************************************/
/********** Macro definition section*******************************************/
/********** Function declaration section **************************************/

/** @brief Declare a function as example code.
 *
 *  This is a declaraton of a example function.
 *
 *  @param arg_1 The argument number 1.
 *  @param arg_2 The argument number 2.
 *  @return A integer value.
 */
int helloWorld(int arg_1, int arg_2);

#ifdef __cplusplus
}
#endif
#endif // CSEXAMPLE_HELLO_H_INCLUDED

/** @} */ // End of groupTemplateHello
