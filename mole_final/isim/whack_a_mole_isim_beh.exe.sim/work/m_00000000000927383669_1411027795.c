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
static const char *ng0 = "C:/Users/152/Desktop/mole/display.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {192U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {249U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {164U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {176U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {153U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {146U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {130U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {216U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {128U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {144U, 0U};
static unsigned int ng21[] = {15U, 0U};
static unsigned int ng22[] = {7U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {14U, 0U};



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
    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
    t5 = (t1 + 3480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3800);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(113, ng0);
    t4 = (t1 + 3800);
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

LAB11:    xsi_set_current_line(115, ng0);
    t4 = (t1 + 3800);
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

LAB18:    xsi_set_current_line(117, ng0);
    t4 = (t1 + 3800);
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

LAB25:    xsi_set_current_line(119, ng0);
    t4 = (t1 + 3800);
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

LAB32:    xsi_set_current_line(121, ng0);
    t4 = (t1 + 3800);
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

LAB39:    xsi_set_current_line(123, ng0);
    t4 = (t1 + 3800);
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

LAB46:    xsi_set_current_line(125, ng0);
    t4 = (t1 + 3800);
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

LAB53:    xsi_set_current_line(127, ng0);
    t4 = (t1 + 3800);
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

LAB60:    xsi_set_current_line(129, ng0);
    t4 = (t1 + 3800);
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

LAB67:    xsi_set_current_line(131, ng0);
    t4 = (t1 + 3800);
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

LAB10:    xsi_set_current_line(114, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB12;

LAB15:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(116, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB19;

LAB22:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(118, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB26;

LAB29:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(120, ng0);
    t30 = ((char*)((ng8)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB33;

LAB36:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(122, ng0);
    t30 = ((char*)((ng10)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB40;

LAB43:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(124, ng0);
    t30 = ((char*)((ng12)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB47;

LAB50:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(126, ng0);
    t30 = ((char*)((ng14)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB54;

LAB57:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(128, ng0);
    t30 = ((char*)((ng16)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB61;

LAB64:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(130, ng0);
    t30 = ((char*)((ng18)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB68;

LAB71:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(132, ng0);
    t30 = ((char*)((ng20)));
    t31 = (t1 + 3640);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    goto LAB75;

}

static void Initial_61_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(62, ng0);

LAB2:    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_67_1(char *t0)
{
    char t8[8];
    char t18[8];
    char t24[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    t1 = (t0 + 4968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5288);
    *((int *)t2) = 1;
    t3 = (t0 + 5000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_mod(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 3320);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t24, t8, 8);

LAB12:    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);

LAB24:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB25:    t5 = ((char*)((ng1)));
    t48 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t48 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng3)));
    t48 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t48 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t48 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t48 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng7)));
    t48 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t48 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB22:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 3320);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t6 = (t0 + 2440U);
    t7 = *((char **)t6);
    memset(t18, 0, 8);
    t6 = (t7 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t6) != 0)
        goto LAB15;

LAB16:    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t18);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t8 + 4);
    t29 = (t18 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB15:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t8 + 4);
    t39 = (t18 + 4);
    t40 = *((unsigned int *)t8);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t18);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB19;

LAB20:    xsi_set_current_line(74, ng0);

LAB23:    xsi_set_current_line(76, ng0);
    t62 = ((char*)((ng21)));
    t63 = (t0 + 2840);
    xsi_vlogvar_assign_value(t63, t62, 0, 0, 4);
    goto LAB22;

LAB26:    xsi_set_current_line(83, ng0);

LAB35:    xsi_set_current_line(84, ng0);
    t6 = (t0 + 1480U);
    t7 = *((char **)t6);
    t6 = (t0 + 4776);
    t9 = (t0 + 848);
    t28 = xsi_create_subprogram_invocation(t6, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t28);
    t29 = (t0 + 3480);
    xsi_vlogvar_assign_value(t29, t7, 0, 0, 4);

LAB38:    t30 = (t0 + 4872);
    t38 = *((char **)t30);
    t39 = (t38 + 80U);
    t56 = *((char **)t39);
    t62 = (t56 + 272U);
    t63 = *((char **)t62);
    t64 = (t63 + 0U);
    t65 = *((char **)t64);
    t49 = ((int  (*)(char *, char *))t65)(t0, t38);

LAB40:    if (t49 != 0)
        goto LAB41;

LAB36:    t38 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t38);

LAB37:    t66 = (t0 + 4872);
    t67 = *((char **)t66);
    t66 = (t0 + 3640);
    t68 = (t66 + 56U);
    t69 = *((char **)t68);
    t70 = (t0 + 3000);
    xsi_vlogvar_assign_value(t70, t69, 0, 0, 8);
    t71 = (t0 + 848);
    t72 = (t0 + 4776);
    t73 = 0;
    xsi_delete_subprogram_invocation(t71, t67, t0, t72, t73);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB34;

LAB28:    xsi_set_current_line(87, ng0);

LAB42:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1640U);
    t5 = *((char **)t3);
    t3 = (t0 + 4776);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB45:    t28 = (t0 + 4872);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t38 = *((char **)t30);
    t39 = (t38 + 272U);
    t56 = *((char **)t39);
    t62 = (t56 + 0U);
    t63 = *((char **)t62);
    t49 = ((int  (*)(char *, char *))t63)(t0, t29);

LAB47:    if (t49 != 0)
        goto LAB48;

LAB43:    t29 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t29);

LAB44:    t64 = (t0 + 4872);
    t65 = *((char **)t64);
    t64 = (t0 + 3640);
    t66 = (t64 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 3000);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 8);
    t69 = (t0 + 848);
    t70 = (t0 + 4776);
    t71 = 0;
    xsi_delete_subprogram_invocation(t69, t65, t0, t70, t71);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB34;

LAB30:    xsi_set_current_line(91, ng0);

LAB49:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 4776);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB52:    t28 = (t0 + 4872);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t38 = *((char **)t30);
    t39 = (t38 + 272U);
    t56 = *((char **)t39);
    t62 = (t56 + 0U);
    t63 = *((char **)t62);
    t49 = ((int  (*)(char *, char *))t63)(t0, t29);

LAB54:    if (t49 != 0)
        goto LAB55;

LAB50:    t29 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t29);

LAB51:    t64 = (t0 + 4872);
    t65 = *((char **)t64);
    t64 = (t0 + 3640);
    t66 = (t64 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 3000);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 8);
    t69 = (t0 + 848);
    t70 = (t0 + 4776);
    t71 = 0;
    xsi_delete_subprogram_invocation(t69, t65, t0, t70, t71);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB34;

LAB32:    xsi_set_current_line(95, ng0);

LAB56:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t0 + 4776);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);

LAB59:    t28 = (t0 + 4872);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t38 = *((char **)t30);
    t39 = (t38 + 272U);
    t56 = *((char **)t39);
    t62 = (t56 + 0U);
    t63 = *((char **)t62);
    t49 = ((int  (*)(char *, char *))t63)(t0, t29);

LAB61:    if (t49 != 0)
        goto LAB62;

LAB57:    t29 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t29);

LAB58:    t64 = (t0 + 4872);
    t65 = *((char **)t64);
    t64 = (t0 + 3640);
    t66 = (t64 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 3000);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 8);
    t69 = (t0 + 848);
    t70 = (t0 + 4776);
    t71 = 0;
    xsi_delete_subprogram_invocation(t69, t65, t0, t70, t71);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB34;

LAB39:;
LAB41:    t30 = (t0 + 4968U);
    *((char **)t30) = &&LAB38;
    goto LAB1;

LAB46:;
LAB48:    t28 = (t0 + 4968U);
    *((char **)t28) = &&LAB45;
    goto LAB1;

LAB53:;
LAB55:    t28 = (t0 + 4968U);
    *((char **)t28) = &&LAB52;
    goto LAB1;

LAB60:;
LAB62:    t28 = (t0 + 4968U);
    *((char **)t28) = &&LAB59;
    goto LAB1;

}


extern void work_m_00000000000927383669_1411027795_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Always_67_1};
	static char *se[] = {(void *)sp_convert};
	xsi_register_didat("work_m_00000000000927383669_1411027795", "isim/whack_a_mole_isim_beh.exe.sim/work/m_00000000000927383669_1411027795.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
