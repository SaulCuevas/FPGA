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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Documents/P9_MULTI_DIV_SHIFT/MULTI_DIV_SHIFT.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2500000U, 0U};
static unsigned int ng7[] = {83333U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {1023U, 0U};
static unsigned int ng12[] = {159U, 0U};
static unsigned int ng13[] = {37U, 0U};
static unsigned int ng14[] = {153U, 0U};
static unsigned int ng15[] = {16U, 0U};
static unsigned int ng16[] = {65U, 0U};
static unsigned int ng17[] = {32U, 0U};
static unsigned int ng18[] = {13U, 0U};
static unsigned int ng19[] = {64U, 0U};
static unsigned int ng20[] = {128U, 0U};
static unsigned int ng21[] = {255U, 0U};
static unsigned int ng22[] = {256U, 0U};
static unsigned int ng23[] = {73U, 0U};
static unsigned int ng24[] = {512U, 0U};
static unsigned int ng25[] = {127U, 0U};
static unsigned int ng26[] = {191U, 0U};
static unsigned int ng27[] = {223U, 0U};
static unsigned int ng28[] = {239U, 0U};
static unsigned int ng29[] = {65535U, 0U};



static void Always_24_0(char *t0)
{
    char t6[8];
    char t24[8];
    char t40[8];
    char t80[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 7936);
    *((int *)t2) = 1;
    t3 = (t0 + 5912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t0 + 2568);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t22 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB13;

LAB10:    if (t36 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t24) = 1;

LAB13:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB14;

LAB15:
LAB16:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB19:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB12:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB16;

LAB17:    xsi_set_current_line(27, ng0);

LAB20:    xsi_set_current_line(28, ng0);
    t78 = (t0 + 1368U);
    t79 = *((char **)t78);
    t78 = ((char*)((ng2)));
    memset(t80, 0, 8);
    t81 = (t79 + 4);
    t82 = (t78 + 4);
    t83 = *((unsigned int *)t79);
    t84 = *((unsigned int *)t78);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = (t85 | t88);
    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t92 = (t90 | t91);
    t93 = (~(t92));
    t94 = (t89 & t93);
    if (t94 != 0)
        goto LAB24;

LAB21:    if (t92 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t80) = 1;

LAB24:    t96 = (t80 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t80);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB27:    goto LAB19;

LAB23:    t95 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(28, ng0);
    t102 = ((char*)((ng3)));
    t103 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t103, t102, 0, 0, 2, 0LL);
    goto LAB27;

}

static void Always_43_1(char *t0)
{
    char t9[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 7952);
    *((int *)t2) = 1;
    t3 = (t0 + 6160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);
    t10 = (t0 + 3048);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 8);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t22, 0, 8);
    t26 = (t22 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t22) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t32 & 255U);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 255U);
    xsi_vlogtype_concat(t9, 9, 9, 2U, t22, 8, t13, 1);
    t34 = (t0 + 3048);
    xsi_vlogvar_assign_value(t34, t9, 0, 0, 9);
    goto LAB13;

LAB9:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 1);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t11 = (t0 + 3048);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t22, 0, 8);
    t15 = (t22 + 4);
    t23 = (t14 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t22) = t30;
    t31 = *((unsigned int *)t23);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    xsi_vlogtype_concat(t9, 9, 9, 2U, t22, 1, t13, 8);
    t24 = (t0 + 3048);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 9);
    goto LAB13;

}

static void Always_51_2(char *t0)
{
    char t4[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 7968);
    *((int *)t2) = 1;
    t3 = (t0 + 6408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 3048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 255U);
    t16 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t8 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t8 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t16 = (t4 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 22, t5, 22, t6, 22);
    t7 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 22, 0LL);

LAB12:    goto LAB2;

LAB8:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);

LAB13:    xsi_set_current_line(61, ng0);
    t28 = (t0 + 3208);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1528U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t30 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t32);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t33) = 1;

LAB17:    t48 = (t33 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t33);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 22, 0LL);
    goto LAB12;

LAB16:    t47 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(61, ng0);
    t54 = (t0 + 1528U);
    t55 = *((char **)t54);
    t54 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t54, t55, 0, 0, 4, 0LL);
    goto LAB20;

}

static void Always_75_3(char *t0)
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

LAB0:    t1 = (t0 + 6624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7984);
    *((int *)t2) = 1;
    t3 = (t0 + 6656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 17, t4, 17, t5, 17);
    t6 = (t0 + 4008);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 17);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(77, ng0);

LAB13:    xsi_set_current_line(78, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 17);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB18:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t0 + 4168);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB18;

}

static void Always_84_4(char *t0)
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

LAB0:    t1 = (t0 + 6872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8000);
    *((int *)t2) = 1;
    t3 = (t0 + 6904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 2, t4, 2, t5, 2);
    t6 = (t0 + 3848);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 2);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(86, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 3848);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB12;

}

static void Always_94_5(char *t0)
{
    char t9[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8016);
    *((int *)t2) = 1;
    t3 = (t0 + 7152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t11 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 255U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 255U);
    t23 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 10, 10, 3U, t23, 1, t11, 8, t10, 1);
    t24 = (t0 + 4328);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 10);
    goto LAB17;

LAB9:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 3048);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 >> 0);
    *((unsigned int *)t12) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 255U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 255U);
    xsi_vlogtype_concat(t9, 10, 10, 3U, t11, 8, t4, 1, t3, 1);
    t14 = (t0 + 4328);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 10);
    goto LAB17;

LAB11:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t10 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 1);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 127U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 127U);
    t12 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 10, 10, 2U, t12, 3, t11, 7);
    t13 = (t0 + 4328);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 10);
    goto LAB17;

LAB13:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t10 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 2);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 2);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 63U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 63U);
    t12 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 10, 10, 2U, t12, 4, t11, 6);
    t13 = (t0 + 4328);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 10);
    goto LAB17;

}

static void Always_112_6(char *t0)
{
    char t8[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 7368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 7400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(128, ng0);

LAB46:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB47:    t5 = ((char*)((ng5)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t5, 10);
    if (t43 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng3)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng4)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng9)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng10)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng15)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng17)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng19)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng20)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng22)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng24)));
    t43 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t43 == 1)
        goto LAB68;

LAB69:
LAB71:
LAB70:    xsi_set_current_line(141, ng0);

LAB84:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB72:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(114, ng0);

LAB13:    xsi_set_current_line(115, ng0);
    t31 = (t0 + 3048);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 255U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 255U);

LAB14:    t42 = ((char*)((ng5)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t42, 8);
    if (t43 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng17)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng19)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng20)));
    t43 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t43 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(125, ng0);

LAB45:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB35:    goto LAB12;

LAB15:    xsi_set_current_line(116, ng0);

LAB36:    xsi_set_current_line(116, ng0);
    t44 = ((char*)((ng8)));
    t45 = (t0 + 4488);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB17:    xsi_set_current_line(117, ng0);

LAB37:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB19:    xsi_set_current_line(118, ng0);

LAB38:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB21:    xsi_set_current_line(119, ng0);

LAB39:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB23:    xsi_set_current_line(120, ng0);

LAB40:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB25:    xsi_set_current_line(121, ng0);

LAB41:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB27:    xsi_set_current_line(122, ng0);

LAB42:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB29:    xsi_set_current_line(123, ng0);

LAB43:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB31:    xsi_set_current_line(124, ng0);

LAB44:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB48:    xsi_set_current_line(130, ng0);

LAB73:    xsi_set_current_line(130, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB50:    xsi_set_current_line(131, ng0);

LAB74:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB52:    xsi_set_current_line(132, ng0);

LAB75:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB54:    xsi_set_current_line(133, ng0);

LAB76:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB56:    xsi_set_current_line(134, ng0);

LAB77:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB58:    xsi_set_current_line(135, ng0);

LAB78:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB60:    xsi_set_current_line(136, ng0);

LAB79:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB62:    xsi_set_current_line(137, ng0);

LAB80:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB64:    xsi_set_current_line(138, ng0);

LAB81:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB66:    xsi_set_current_line(139, ng0);

LAB82:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

LAB68:    xsi_set_current_line(140, ng0);

LAB83:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB72;

}

static void Always_145_7(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 7648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(148, ng0);
    t10 = ((char*)((ng25)));
    t11 = (t0 + 4968);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t13, 8, t10, 8);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 16);
    goto LAB17;

LAB9:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 4808);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB17;

LAB11:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB17;

LAB13:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB17;

}


extern void work_m_00816880715124260547_2693349146_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_43_1,(void *)Always_51_2,(void *)Always_75_3,(void *)Always_84_4,(void *)Always_94_5,(void *)Always_112_6,(void *)Always_145_7};
	xsi_register_didat("work_m_00816880715124260547_2693349146", "isim/MULTI_DIV_SHIFT_isim_beh.exe.sim/work/m_00816880715124260547_2693349146.didat");
	xsi_register_executes(pe);
}
