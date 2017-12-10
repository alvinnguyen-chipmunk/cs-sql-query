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
#include <mysql.h>

/********** Constant and compile switch definition section ********************/
/********** Type definition section *******************************************/
typedef   MYSQL CS_SQL_OBJ;

typedef enum CS_SQL_RETVALUE
{
    CS_SQL_SUCCESS = 0,
    CS_SQL_FAILURE = 1

}CS_SQL_RETVALUE;

typedef enum CS_SQL_ERROR
{
    CS_SQL_ERROR_0 = 0,
    CS_SQL_ERROR_1 = 1

}CS_SQL_ERROR;

/********** Macro definition section*******************************************/
/********** Function declaration section **************************************/

/** @brief Declare a function as example code.
 *
 *  This is a declaration of a example function.
 *
 *  @param arg_1 The argument number 1.
 *  @param arg_2 The argument number 2.
 *  @return A integer value.
 */
int helloWorld(int arg_1, int arg_2);

/** @brief Declare function which allocates a CS_SQL_OBJ object.
     *
     *  Allocates or initializes a CS_SQL_OBJ object. The function allocates, initializes, and returns a new object.
     *  The new object is freed when cs_sql_finalize() is called to close the connection.
     *
     *  @param host     Character array for host's address (IP address)
     *  @param user     Character array for user account of SQL server.
     *  @param passwd   Character array for password of SQL server.
     *
     *  @return CS_SQL_OBJ *    If success
     *  @return NULL            If failure
     */
CS_SQL_OBJ * cs_sql_new(const char *host, const char *user, const char *passwd);

/** @brief Declare function which deallocates a CS_SQL_OBJ object.
     *
     *  Closes a previously opened connection.
     *  cs_sql_finalize() also deallocates the connection handler pointed to by cs_spl_object.
     *
     *  @param cs_spl_object  a CS_SQL_OBJ object
     *
     *  @return None
     */
void cs_sql_finalize(CS_SQL_OBJ * cs_spl_object);

#endif // CSEXAMPLE_HELLO_H_INCLUDED
#ifdef __cplusplus
}
#endif

/** @} */ // End of groupTemplateHello
