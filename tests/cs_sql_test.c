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

/** @file cs_sql_test.c
 *  @brief A C test applicaion for chipmunk sql library.
 *
 *  These simple function definitions are provided.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	09/12/2017
 *  @bug	No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifdef __cplusplus
extern "C"
{
#endif

/********** Include section ***************************************************/
#include "cs_sql.h"

/********** Local Constant and compile switch definition section **************/
/********** Local Type definition section *************************************/
/********** Local Macro definition section ************************************/
/********** Local (static) variable definition ********************************/
/********** Local (static) function declaration section ***********************/
/********** Local function definition section *********************************/
/********** Global function definition section ********************************/
int main(int argc, char const *argv[])
{
	helloWorld(1,2);

	CS_SQL_OBJ * cs_sql_obj = NULL;

    cs_sql_obj = cs_sql_new("127.0.0.1", "root", "chipmunk");

    cs_sql_finalize(cs_sql_obj);

	return 0;
}

#ifdef __cplusplus
}
#endif

/** @} */ // end of groupTemplate
