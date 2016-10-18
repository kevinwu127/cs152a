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
static const char *ng0 = "C:/Users/152/Desktop/kevin-shuowang/stopwatch/display.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {252U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {96U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {218U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {242U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {102U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {182U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {190U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {228U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {254U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {246U, 0U};
static unsigned int ng21[] = {15U, 0U};
static int ng22[] = {40, 0};
static unsigned int ng23[] = {7U, 0U};
static int ng24[] = {10, 0};
static unsigned int ng25[] = {11U, 0U};
static int ng26[] = {20, 0};
static unsigned int ng27[] = {13U, 0U};
static int ng28[] = {30, 0};
static unsigned int ng29[] = {14U, 0U};



static int sp_convert(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t5 = (t1 + 3000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3320);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(99, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t9) = 1;

LAB16:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(101, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(103, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB30;

LAB27:    if (t20 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t9) = 1;

LAB30:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(105, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t9) = 1;

LAB37:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(107, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB44;

LAB41:    if (t20 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t9) = 1;

LAB44:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(109, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB51;

LAB48:    if (t20 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t9) = 1;

LAB51:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(111, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB58;

LAB55:    if (t20 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t9) = 1;

LAB58:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(113, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng17)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB65;

LAB62:    if (t20 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t9) = 1;

LAB65:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(115, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng19)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB72;

LAB69:    if (t20 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t9) = 1;

LAB72:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB73;

LAB74:
LAB75:
LAB68:
LAB61:
LAB54:
LAB47:
LAB40:
LAB33:
LAB26:
LAB19:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(98, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB12;

LAB15:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(100, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB19;

LAB22:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(102, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB26;

LAB29:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(104, ng0);
    t30 = ((char*)((ng8)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB33;

LAB36:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(106, ng0);
    t30 = ((char*)((ng10)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB40;

LAB43:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(108, ng0);
    t30 = ((char*)((ng12)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB47;

LAB50:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(110, ng0);
    t30 = ((char*)((ng14)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB54;

LAB57:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(112, ng0);
    t30 = ((char*)((ng16)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB61;

LAB64:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(114, ng0);
    t30 = ((char*)((ng18)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB68;

LAB71:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(116, ng0);
    t30 = ((char*)((ng20)));
    t31 = (t1 + 3160);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB75;

}

static void Initial_56_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(57, ng0);

LAB2:    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 2520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_62_1(char *t0)
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
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    t3 = (t0 + 4520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng22)));
    memset(t8, 0, 8);
    xsi_vlog_signed_mod(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng26)));
    t10 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);

LAB16:    xsi_set_current_line(70, ng0);
    t6 = (t0 + 1480U);
    t7 = *((char **)t6);
    t6 = (t0 + 4296);
    t9 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t6, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 4);

LAB19:    t13 = (t0 + 4392);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB21:    if (t21 != 0)
        goto LAB22;

LAB17:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB18:    t22 = (t0 + 4392);
    t23 = *((char **)t22);
    t22 = (t0 + 3160);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2680);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 4296);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t29);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(73, ng0);

LAB23:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1640U);
    t5 = *((char **)t3);
    t3 = (t0 + 4296);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB26:    t11 = (t0 + 4392);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t21 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB28:    if (t21 != 0)
        goto LAB29;

LAB24:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB25:    t19 = (t0 + 4392);
    t20 = *((char **)t19);
    t19 = (t0 + 3160);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 8);
    t25 = (t0 + 848);
    t26 = (t0 + 4296);
    t27 = 0;
    xsi_delete_subprogram_invocation(t25, t20, t0, t26, t27);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(77, ng0);

LAB30:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 4296);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB33:    t11 = (t0 + 4392);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t21 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB35:    if (t21 != 0)
        goto LAB36;

LAB31:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB32:    t19 = (t0 + 4392);
    t20 = *((char **)t19);
    t19 = (t0 + 3160);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 8);
    t25 = (t0 + 848);
    t26 = (t0 + 4296);
    t27 = 0;
    xsi_delete_subprogram_invocation(t25, t20, t0, t26, t27);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(81, ng0);

LAB37:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t0 + 4296);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB40:    t11 = (t0 + 4392);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t21 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB42:    if (t21 != 0)
        goto LAB43;

LAB38:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB39:    t19 = (t0 + 4392);
    t20 = *((char **)t19);
    t19 = (t0 + 3160);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 8);
    t25 = (t0 + 848);
    t26 = (t0 + 4296);
    t27 = 0;
    xsi_delete_subprogram_invocation(t25, t20, t0, t26, t27);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB20:;
LAB22:    t13 = (t0 + 4488U);
    *((char **)t13) = &&LAB19;
    goto LAB1;

LAB27:;
LAB29:    t11 = (t0 + 4488U);
    *((char **)t11) = &&LAB26;
    goto LAB1;

LAB34:;
LAB36:    t11 = (t0 + 4488U);
    *((char **)t11) = &&LAB33;
    goto LAB1;

LAB41:;
LAB43:    t11 = (t0 + 4488U);
    *((char **)t11) = &&LAB40;
    goto LAB1;

}


extern void work_m_00000000003459926971_1411027795_init()
{
	static char *pe[] = {(void *)Initial_56_0,(void *)Always_62_1};
	static char *se[] = {(void *)sp_convert};
	xsi_register_didat("work_m_00000000003459926971_1411027795", "isim/stopwatch_isim_beh.exe.sim/work/m_00000000003459926971_1411027795.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
