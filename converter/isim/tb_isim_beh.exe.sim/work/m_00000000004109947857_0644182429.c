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
static const char *ng0 = "C:/Users/152/Desktop/kevin-shuowang/converter/converter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2048U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {11, 0};
static int ng5[] = {8, 0};
static int ng6[] = {3, 0};
static int ng7[] = {15, 0};
static int ng8[] = {7, 0};



static void Always_41_0(char *t0)
{
    char t6[8];
    char t37[8];
    char t52[8];
    char t54[8];
    char t71[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 12);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 11);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 11);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t13 = (t5 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t17, 32, 1);
    t18 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t30 = (t6 + 4);
    t31 = (t18 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t18);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t30);
    t11 = *((unsigned int *)t31);
    t12 = (t10 ^ t11);
    t19 = (t9 | t12);
    t20 = *((unsigned int *)t30);
    t21 = *((unsigned int *)t31);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB24;

LAB23:    if (t22 != 0)
        goto LAB25;

LAB26:    t39 = (t37 + 4);
    t25 = *((unsigned int *)t39);
    t26 = (~(t25));
    t27 = *((unsigned int *)t37);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t5, 32);
    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 3);

LAB32:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(72, ng0);

LAB37:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t5, 32);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);

LAB38:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t15, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_greatereq(t37, 32, t4, 32, t6, 32);
    t16 = (t37 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t37);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t13 = (t5 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t14, 2, t17, 32, 1);
    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB35:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t17 = (t15 + 4);
    t18 = (t16 + 4);
    t12 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t12 ^ t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t18);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB13;

LAB10:    if (t27 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t6) = 1;

LAB13:    t31 = (t6 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    *((unsigned int *)t6) = t8;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB20:    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 4294967295U);
    t14 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t6, 32, t14, 32);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t37, 0, 0, 12);

LAB16:    goto LAB8;

LAB12:    t30 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(50, ng0);

LAB17:    xsi_set_current_line(51, ng0);
    t38 = (t0 + 1928);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t37, 0, 8);
    t41 = (t37 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (~(t43));
    *((unsigned int *)t37) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB19;

LAB18:    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 4095U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 4095U);
    t51 = (t0 + 1928);
    xsi_vlogvar_assign_value(t51, t37, 0, 0, 12);
    goto LAB16;

LAB19:    t45 = *((unsigned int *)t37);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t37) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB18;

LAB21:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t5) = (t11 | t12);
    goto LAB20;

LAB24:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB25:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(58, ng0);

LAB29:    xsi_set_current_line(59, ng0);
    t40 = (t0 + 2408);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t51 = ((char*)((ng3)));
    memset(t52, 0, 8);
    xsi_vlog_signed_add(t52, 32, t42, 32, t51, 32);
    t53 = (t0 + 2408);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    goto LAB22;

LAB30:    xsi_set_current_line(63, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1608);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB32;

LAB33:    xsi_set_current_line(68, ng0);

LAB36:    xsi_set_current_line(69, ng0);
    t14 = (t0 + 1928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t37, 0, 8);
    t17 = (t37 + 4);
    t18 = (t16 + 4);
    t12 = *((unsigned int *)t16);
    t19 = (t12 >> 0);
    *((unsigned int *)t37) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t22 & 15U);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t23 & 15U);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t37, 0, 0, 4);
    goto LAB35;

LAB39:    xsi_set_current_line(76, ng0);

LAB41:    xsi_set_current_line(77, ng0);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t30 = *((char **)t18);
    t31 = (t0 + 1928);
    t38 = (t31 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2088);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_index_select_value(t52, 1, t30, t39, 2, t42, 32, 1);
    t51 = (t0 + 1768);
    t53 = (t0 + 1768);
    t55 = (t53 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 2248);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_convert_bit_index(t54, t56, 2, t59, 32, 1);
    t60 = (t54 + 4);
    t12 = *((unsigned int *)t60);
    t61 = (!(t12));
    if (t61 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    goto LAB38;

LAB42:    xsi_vlogvar_assign_value(t51, t52, 0, *((unsigned int *)t54), 1);
    goto LAB43;

LAB44:    xsi_set_current_line(81, ng0);

LAB47:    xsi_set_current_line(82, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t38 = *((char **)t31);
    t39 = ((char*)((ng7)));
    memset(t37, 0, 8);
    t40 = (t38 + 4);
    t41 = (t39 + 4);
    t12 = *((unsigned int *)t38);
    t19 = *((unsigned int *)t39);
    t20 = (t12 ^ t19);
    t21 = *((unsigned int *)t40);
    t22 = *((unsigned int *)t41);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t40);
    t26 = *((unsigned int *)t41);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB51;

LAB48:    if (t27 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t37) = 1;

LAB51:    memset(t52, 0, 8);
    t51 = (t37 + 4);
    t32 = *((unsigned int *)t51);
    t33 = (~(t32));
    t34 = *((unsigned int *)t37);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t51) != 0)
        goto LAB54;

LAB55:    t55 = (t52 + 4);
    t43 = *((unsigned int *)t52);
    t44 = *((unsigned int *)t55);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB56;

LAB57:    memcpy(t79, t52, 8);

LAB58:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t12 = (t10 ^ t11);
    t19 = (t9 | t12);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB77;

LAB74:    if (t22 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t6) = 1;

LAB77:    memset(t37, 0, 8);
    t16 = (t6 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t16) != 0)
        goto LAB80;

LAB81:    t18 = (t37 + 4);
    t32 = *((unsigned int *)t37);
    t33 = *((unsigned int *)t18);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB82;

LAB83:    memcpy(t71, t37, 8);

LAB84:    t60 = (t71 + 4);
    t90 = *((unsigned int *)t60);
    t91 = (~(t90));
    t92 = *((unsigned int *)t71);
    t95 = (t92 & t91);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB97;

LAB98:
LAB99:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB102;

LAB101:    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB102;

LAB105:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB103;

LAB104:    t16 = (t6 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB46;

LAB50:    t42 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t52) = 1;
    goto LAB55;

LAB54:    t53 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB55;

LAB56:    t56 = (t0 + 1608);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng8)));
    memset(t54, 0, 8);
    t60 = (t58 + 4);
    t62 = (t59 + 4);
    t46 = *((unsigned int *)t58);
    t47 = *((unsigned int *)t59);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t60);
    t50 = *((unsigned int *)t62);
    t63 = (t49 ^ t50);
    t64 = (t48 | t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t62);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB62;

LAB59:    if (t67 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t54) = 1;

LAB62:    memset(t71, 0, 8);
    t72 = (t54 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t54);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t72) != 0)
        goto LAB65;

LAB66:    t80 = *((unsigned int *)t52);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t52 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t70 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t71) = 1;
    goto LAB66;

LAB65:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB66;

LAB67:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t52 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t52);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t61 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t61));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB69;

LAB70:    xsi_set_current_line(83, ng0);

LAB73:    goto LAB72;

LAB76:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t37) = 1;
    goto LAB81;

LAB80:    t17 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB81;

LAB82:    t30 = (t0 + 1608);
    t31 = (t30 + 56U);
    t38 = *((char **)t31);
    t39 = ((char*)((ng8)));
    memset(t52, 0, 8);
    t40 = (t38 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB86;

LAB85:    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t38) < *((unsigned int *)t39))
        goto LAB87;

LAB88:    memset(t54, 0, 8);
    t51 = (t52 + 4);
    t35 = *((unsigned int *)t51);
    t36 = (~(t35));
    t43 = *((unsigned int *)t52);
    t44 = (t43 & t36);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t51) != 0)
        goto LAB92;

LAB93:    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t54);
    t48 = (t46 & t47);
    *((unsigned int *)t71) = t48;
    t55 = (t37 + 4);
    t56 = (t54 + 4);
    t57 = (t71 + 4);
    t49 = *((unsigned int *)t55);
    t50 = *((unsigned int *)t56);
    t63 = (t49 | t50);
    *((unsigned int *)t57) = t63;
    t64 = *((unsigned int *)t57);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB84;

LAB86:    t42 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t52) = 1;
    goto LAB88;

LAB90:    *((unsigned int *)t54) = 1;
    goto LAB93;

LAB92:    t53 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB93;

LAB94:    t66 = *((unsigned int *)t71);
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t71) = (t66 | t67);
    t58 = (t37 + 4);
    t59 = (t54 + 4);
    t68 = *((unsigned int *)t37);
    t69 = (~(t68));
    t73 = *((unsigned int *)t58);
    t74 = (~(t73));
    t75 = *((unsigned int *)t54);
    t76 = (~(t75));
    t77 = *((unsigned int *)t59);
    t80 = (~(t77));
    t61 = (t69 & t74);
    t103 = (t76 & t80);
    t81 = (~(t61));
    t82 = (~(t103));
    t86 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t86 & t81);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t82);
    t88 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t88 & t81);
    t89 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t89 & t82);
    goto LAB96;

LAB97:    xsi_set_current_line(86, ng0);

LAB100:    xsi_set_current_line(87, ng0);
    t62 = (t0 + 1768);
    t70 = (t62 + 56U);
    t72 = *((char **)t70);
    t78 = ((char*)((ng3)));
    memset(t79, 0, 8);
    xsi_vlog_unsigned_rshift(t79, 4, t72, 4, t78, 32);
    t83 = (t0 + 1768);
    xsi_vlogvar_assign_value(t83, t79, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 3, t5, 32);
    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 3);
    goto LAB99;

LAB102:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB104;

LAB103:    *((unsigned int *)t6) = 1;
    goto LAB104;

LAB106:    xsi_set_current_line(91, ng0);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t30 = *((char **)t18);
    t31 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t30, 4, t31, 32);
    t38 = (t0 + 1768);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB108;

}


extern void work_m_00000000004109947857_0644182429_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000004109947857_0644182429", "isim/tb_isim_beh.exe.sim/work/m_00000000004109947857_0644182429.didat");
	xsi_register_executes(pe);
}
