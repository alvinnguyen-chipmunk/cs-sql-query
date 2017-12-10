/*******************************************************************************
 *  (C) Copyright 2017 Chipmunk Solutions Co., Ltd. , All rights reserved      *
 *                                                                             *
 *  This source code and any compilation or derivative thereof is the sole     *
 *  property of Chipmunk Solutions Co., Ltd. and is provided pursuant to a     *
 *  Software License Agreement.  This code is the proprietary information      *
 *  of Chipmunk Solutions Co., Ltd and is confidential in nature.  Its use and *
 *  dissemination by any party other than Chipmunk Solutions Co., Ltd is       *
 *  strictly limited by the confidential information provisions of the         *
 *  Agreement referenced above.                                                *
 ******************************************************************************/

/** @file cs_sql.c
 *  @brief A C swapper for mysql API with doxygen format.
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
int
helloWorld( int arg_1, int arg_2 )
{
    printf("ARGS 1: %d - ARGS 2: %d\n", arg_1, arg_2);
    return 0;
}

/********** NEW ***************************************************************/
CS_SQL_OBJ *
cs_sql_new(const char *host, const char *user, const char *passwd)
{
    CS_SQL_OBJ * cs_spl_object = NULL;

    cs_spl_object = mysql_init(NULL);

    if (cs_spl_object==NULL)
    {
        printf("Init faild, out of memory?");
        return NULL;
    }

    if (mysql_real_connect(cs_spl_object,      /* MYSQL structure to use */
                            host,               /* server hostname or IP address */
                            user,               /* mysql user */
                            passwd,             /* password */
                            NULL,               /* default database to use, NULL for none */
                            0,                  /* port number, 0 for default */
                            NULL,               /* socket file or named pipe name */
                            0                   /* connection flags 0 for default*/
                            ))
    {
        printf("Connecting SQL server success.");
    }
    else
    {
        printf("Connecting SQL server failure.");
    }

    return cs_spl_object;
}

/********** FINALIZE **********************************************************/
void
cs_sql_finalize(CS_SQL_OBJ * cs_spl_object)
{
    if(cs_spl_object==NULL)
        return;

    mysql_close(cs_spl_object);
    printf("Close SQL server connection success.");
}

#ifdef __cplusplus
}
#endif
/** @} */ // end of groupTemplate
