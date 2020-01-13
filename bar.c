/*
 * =====================================================================================
 *
 *       Filename:  bar.c
 *
 *    Description:  just for test
 *
 *        Version:  1.0
 *        Created:  2020年01月13日 22时18分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yangkun (yk)
 *          Email:  xyyangkun@163.com
 *        Company:  yangkuncn.cn
 *
 * =====================================================================================
 */
#include "bar.h"
#include <stdio.h>

int g_bar = 0;

int run_bar()
{
	printf("g_bar  = %d\n", g_bar);
	return 0;
}
