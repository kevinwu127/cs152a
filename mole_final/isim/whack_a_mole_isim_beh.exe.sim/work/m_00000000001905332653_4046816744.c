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
static const char *ng0 = "C:/Users/152/Desktop/mole/mole.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {127U, 0U};
static unsigned int ng6[] = {191U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {223U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {239U, 0U};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {247U, 0U};
static int ng13[] = {5, 0};
static unsigned int ng14[] = {251U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {253U, 0U};
static int ng17[] = {7, 0};
static unsigned int ng18[] = {254U, 0U};



static void Initial_38_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t14, 32, t15, 32);
    t17 = (t0 + 2088);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 32, 1);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t19), t39);
    goto LAB7;

}

static void Always_47_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 2088);
    t15 = (t9 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2248);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t8, 4, t4, t7, t16, 2, 1, t19, 32, 1);
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t21 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng11)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng15)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t21 == 1)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB38;

LAB37:    t23 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t23 & 255U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 255U);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 3, t6, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 3);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    goto LAB8;

LAB12:    xsi_set_current_line(59, ng0);

LAB29:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB28;

LAB14:    xsi_set_current_line(62, ng0);

LAB30:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB16:    xsi_set_current_line(65, ng0);

LAB31:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB18:    xsi_set_current_line(68, ng0);

LAB32:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB20:    xsi_set_current_line(71, ng0);

LAB33:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB22:    xsi_set_current_line(74, ng0);

LAB34:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB24:    xsi_set_current_line(77, ng0);

LAB35:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB26:    xsi_set_current_line(80, ng0);

LAB36:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB28;

LAB38:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t14 | t22);
    goto LAB37;

}


extern void work_m_00000000001905332653_4046816744_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_47_1};
	xsi_register_didat("work_m_00000000001905332653_4046816744", "isim/whack_a_mole_isim_beh.exe.sim/work/m_00000000001905332653_4046816744.didat");
	xsi_register_executes(pe);
}
