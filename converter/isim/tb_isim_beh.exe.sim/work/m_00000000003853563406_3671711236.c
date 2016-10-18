/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Desktop/kevin-shuowang/converter/tb.v";
static int ng1[] = {2048, 0};



static void Initial_43_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    memset(t1, 0, 8);
    xsi_vlog_signed_unary_minus(t1, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 12);

LAB1:    return;
}


extern void work_m_00000000003853563406_3671711236_init()
{
	static char *pe[] = {(void *)Initial_43_0};
	xsi_register_didat("work_m_00000000003853563406_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003853563406_3671711236.didat");
	xsi_register_executes(pe);
}
