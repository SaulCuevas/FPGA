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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/P4/ADS1115_ADC/ADS1115.v";
static unsigned int ng1[] = {49U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {0U, 1U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static int ng21[] = {1, 0};
static unsigned int ng22[] = {17U, 0U};
static unsigned int ng23[] = {18U, 0U};
static unsigned int ng24[] = {19U, 0U};
static unsigned int ng25[] = {20U, 0U};
static unsigned int ng26[] = {21U, 0U};
static unsigned int ng27[] = {22U, 0U};
static unsigned int ng28[] = {23U, 0U};
static unsigned int ng29[] = {24U, 0U};
static unsigned int ng30[] = {25U, 0U};
static unsigned int ng31[] = {26U, 0U};
static unsigned int ng32[] = {27U, 0U};
static unsigned int ng33[] = {28U, 0U};
static unsigned int ng34[] = {29U, 0U};
static unsigned int ng35[] = {30U, 0U};
static unsigned int ng36[] = {31U, 0U};
static unsigned int ng37[] = {32U, 0U};
static unsigned int ng38[] = {33U, 0U};
static unsigned int ng39[] = {34U, 0U};
static unsigned int ng40[] = {35U, 0U};
static unsigned int ng41[] = {36U, 0U};
static int ng42[] = {15, 0};
static int ng43[] = {14, 0};
static int ng44[] = {13, 0};
static int ng45[] = {12, 0};
static int ng46[] = {11, 0};
static int ng47[] = {10, 0};
static int ng48[] = {9, 0};
static int ng49[] = {8, 0};
static int ng50[] = {7, 0};
static int ng51[] = {6, 0};
static int ng52[] = {5, 0};
static int ng53[] = {4, 0};
static int ng54[] = {3, 0};
static int ng55[] = {2, 0};



static void Always_72_0(char *t0)
{
    char t8[8];
    char t32[8];
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
    char *t33;
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

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 7624);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 3632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t4, 6, t5, 6);
    t6 = (t0 + 3632);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 6, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(75, ng0);

LAB13:    xsi_set_current_line(76, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3632);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 6, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t8) = 1;

LAB32:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 3, t4, 3, t5, 3);
    t6 = (t0 + 3792);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);

LAB35:    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(78, ng0);

LAB21:    xsi_set_current_line(79, ng0);
    t23 = (t0 + 3472);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB25;

LAB22:    if (t44 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t32) = 1;

LAB25:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 1, t4, 1, t5, 1);
    t6 = (t0 + 3472);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);

LAB28:    goto LAB20;

LAB24:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(79, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 3472);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 3792);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3312);
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
        goto LAB40;

LAB38:    if (*((unsigned int *)t5) == 0)
        goto LAB37;

LAB39:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB40:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB42;

LAB41:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    goto LAB35;

LAB37:    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB42:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB41;

}

static void Cont_92_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_108_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15U);
    t18 = (t0 + 7656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_110_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4752);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 7896);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 7672);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4912);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng6)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_117_4(char *t0)
{
    char t4[8];
    char t9[8];
    char t34[8];
    char t55[8];
    char t63[8];
    char t119[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
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
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    int t116;
    char *t117;
    char *t118;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    int t126;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7688);
    *((int *)t2) = 1;
    t3 = (t0 + 7336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t5 = (t0 + 2432U);
    t6 = *((char **)t5);
    t5 = (t0 + 4112);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t10) = t17;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t9, 1, t6, 1);
    t18 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t10) = t17;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t9, 1, t5, 1);
    t18 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    memset(t9, 0, 8);
    t11 = (t4 + 4);
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB13:    t30 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t63, t9, 8);

LAB16:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t22 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;

LAB37:    memset(t9, 0, 8);
    t11 = (t4 + 4);
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t11) != 0)
        goto LAB40;

LAB41:    t30 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB42;

LAB43:    memcpy(t55, t9, 8);

LAB44:    t68 = (t55 + 4);
    t80 = *((unsigned int *)t68);
    t81 = (~(t80));
    t82 = *((unsigned int *)t55);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB59;

LAB56:    if (t22 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t4) = 1;

LAB59:    memset(t9, 0, 8);
    t11 = (t4 + 4);
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t11) != 0)
        goto LAB62;

LAB63:    t30 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB64;

LAB65:    memcpy(t55, t9, 8);

LAB66:    t68 = (t55 + 4);
    t80 = *((unsigned int *)t68);
    t81 = (~(t80));
    t82 = *((unsigned int *)t55);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB277;

LAB274:    if (t22 != 0)
        goto LAB276;

LAB275:    *((unsigned int *)t4) = 1;

LAB277:    memset(t9, 0, 8);
    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB278;

LAB279:    if (*((unsigned int *)t30) != 0)
        goto LAB280;

LAB281:    t36 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t36);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB282;

LAB283:    memcpy(t55, t9, 8);

LAB284:    t78 = (t55 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t55);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB292;

LAB293:
LAB294:
LAB76:
LAB54:
LAB32:    goto LAB2;

LAB8:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB12:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 4432);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t38) == 0)
        goto LAB17;

LAB19:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB20:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB22;

LAB21:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    memset(t55, 0, 8);
    t56 = (t34 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t34);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t56) != 0)
        goto LAB25;

LAB26:    t64 = *((unsigned int *)t9);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t9 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB16;

LAB17:    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB22:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB21;

LAB23:    *((unsigned int *)t55) = 1;
    goto LAB26;

LAB25:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB26;

LAB27:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t9 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t9);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB29;

LAB30:    xsi_set_current_line(122, ng0);

LAB33:    xsi_set_current_line(123, ng0);
    t101 = ((char*)((ng4)));
    t102 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB36:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB40:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB41;

LAB42:    t35 = (t0 + 4592);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t38) != 0)
        goto LAB47;

LAB48:    t47 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t34);
    t49 = (t47 & t48);
    *((unsigned int *)t55) = t49;
    t45 = (t9 + 4);
    t46 = (t34 + 4);
    t56 = (t55 + 4);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 | t51);
    *((unsigned int *)t56) = t52;
    t53 = *((unsigned int *)t56);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t34) = 1;
    goto LAB48;

LAB47:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB48;

LAB49:    t57 = *((unsigned int *)t55);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t57 | t58);
    t62 = (t9 + 4);
    t67 = (t34 + 4);
    t59 = *((unsigned int *)t9);
    t60 = (~(t59));
    t61 = *((unsigned int *)t62);
    t64 = (~(t61));
    t65 = *((unsigned int *)t34);
    t66 = (~(t65));
    t70 = *((unsigned int *)t67);
    t71 = (~(t70));
    t87 = (t60 & t64);
    t88 = (t66 & t71);
    t72 = (~(t87));
    t73 = (~(t88));
    t74 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t74 & t72);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t72);
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t73);
    goto LAB51;

LAB52:    xsi_set_current_line(128, ng0);

LAB55:    xsi_set_current_line(129, ng0);
    t69 = ((char*)((ng4)));
    t77 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t77, t69, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB54;

LAB58:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB62:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB63;

LAB64:    t35 = (t0 + 4432);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t38) != 0)
        goto LAB69;

LAB70:    t47 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t34);
    t49 = (t47 & t48);
    *((unsigned int *)t55) = t49;
    t45 = (t9 + 4);
    t46 = (t34 + 4);
    t56 = (t55 + 4);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 | t51);
    *((unsigned int *)t56) = t52;
    t53 = *((unsigned int *)t56);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t34) = 1;
    goto LAB70;

LAB69:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB70;

LAB71:    t57 = *((unsigned int *)t55);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t57 | t58);
    t62 = (t9 + 4);
    t67 = (t34 + 4);
    t59 = *((unsigned int *)t9);
    t60 = (~(t59));
    t61 = *((unsigned int *)t62);
    t64 = (~(t61));
    t65 = *((unsigned int *)t34);
    t66 = (~(t65));
    t70 = *((unsigned int *)t67);
    t71 = (~(t70));
    t87 = (t60 & t64);
    t88 = (t66 & t71);
    t72 = (~(t87));
    t73 = (~(t88));
    t74 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t74 & t72);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t72);
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t73);
    goto LAB73;

LAB74:    xsi_set_current_line(135, ng0);

LAB77:    xsi_set_current_line(136, ng0);
    t69 = (t0 + 5392);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    t95 = ((char*)((ng7)));
    memset(t63, 0, 8);
    t101 = (t78 + 4);
    t102 = (t95 + 4);
    t85 = *((unsigned int *)t78);
    t86 = *((unsigned int *)t95);
    t89 = (t85 ^ t86);
    t90 = *((unsigned int *)t101);
    t91 = *((unsigned int *)t102);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t101);
    t96 = *((unsigned int *)t102);
    t97 = (t94 | t96);
    t98 = (~(t97));
    t99 = (t93 & t98);
    if (t99 != 0)
        goto LAB81;

LAB78:    if (t97 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t63) = 1;

LAB81:    t104 = (t63 + 4);
    t100 = *((unsigned int *)t104);
    t105 = (~(t100));
    t106 = *((unsigned int *)t63);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB173;

LAB170:    if (t22 != 0)
        goto LAB172;

LAB171:    *((unsigned int *)t4) = 1;

LAB173:    t18 = (t4 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB174;

LAB175:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB229;

LAB226:    if (t22 != 0)
        goto LAB228;

LAB227:    *((unsigned int *)t4) = 1;

LAB229:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB230;

LAB231:
LAB232:
LAB176:
LAB84:    goto LAB76;

LAB80:    t103 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(137, ng0);

LAB85:    xsi_set_current_line(138, ng0);
    t109 = ((char*)((ng4)));
    t110 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB86:    t6 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t6, 6);
    if (t87 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng4)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng3)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng8)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng23)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng25)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng26)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng27)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng28)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng29)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng30)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng31)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng32)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng33)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng34)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB145;

LAB146:    t2 = ((char*)((ng35)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng36)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng37)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng38)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng39)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng40)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng41)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB159;

LAB160:
LAB161:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng41)));
    memset(t4, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB166;

LAB163:    if (t22 != 0)
        goto LAB165;

LAB164:    *((unsigned int *)t4) = 1;

LAB166:    t18 = (t4 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t6, 6, t7, 6);
    t8 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 6, 0LL);

LAB169:    goto LAB84;

LAB87:    xsi_set_current_line(142, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB161;

LAB89:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB91:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB93:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB95:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB97:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB99:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB101:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB103:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB105:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB107:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB109:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB111:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB113:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB115:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB117:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB119:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng21)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB121:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB123:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB125:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB127:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB129:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB131:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB133:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB135:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB137:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB139:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB141:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB143:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB145:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB147:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB149:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB151:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB153:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB155:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB157:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB159:    xsi_set_current_line(190, ng0);

LAB162:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB161;

LAB165:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB166;

LAB167:    xsi_set_current_line(196, ng0);
    t30 = ((char*)((ng2)));
    t35 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 6, 0LL);
    goto LAB169;

LAB172:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB173;

LAB174:    xsi_set_current_line(200, ng0);

LAB177:    xsi_set_current_line(201, ng0);
    t30 = ((char*)((ng4)));
    t35 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);

LAB178:    t7 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 6);
    if (t87 == 1)
        goto LAB179;

LAB180:    t2 = ((char*)((ng4)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB181;

LAB182:    t2 = ((char*)((ng3)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB183;

LAB184:    t2 = ((char*)((ng8)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB185;

LAB186:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB187;

LAB188:    t2 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB189;

LAB190:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB191;

LAB192:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB193;

LAB194:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB195;

LAB196:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB197;

LAB198:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB199;

LAB200:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB201;

LAB202:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB203;

LAB204:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB205;

LAB206:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB207;

LAB208:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB209;

LAB210:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB211;

LAB212:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB213;

LAB214:    t2 = ((char*)((ng23)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB215;

LAB216:
LAB217:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng23)));
    memset(t4, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB222;

LAB219:    if (t22 != 0)
        goto LAB221;

LAB220:    *((unsigned int *)t4) = 1;

LAB222:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB223;

LAB224:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t7, 6, t8, 6);
    t10 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 6, 0LL);

LAB225:    goto LAB176;

LAB179:    xsi_set_current_line(205, ng0);
    t8 = ((char*)((ng4)));
    t10 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    goto LAB217;

LAB181:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB183:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB185:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB187:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB189:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB191:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB193:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB195:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB197:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB199:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB201:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB203:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB205:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB207:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB209:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB211:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB213:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB217;

LAB215:    xsi_set_current_line(228, ng0);

LAB218:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB217;

LAB221:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB222;

LAB223:    xsi_set_current_line(234, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 6, 0LL);
    goto LAB225;

LAB228:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB229;

LAB230:    xsi_set_current_line(238, ng0);

LAB233:    xsi_set_current_line(239, ng0);
    t35 = (t0 + 5072);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);

LAB234:    t38 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t38, 6);
    if (t87 == 1)
        goto LAB235;

LAB236:    t2 = ((char*)((ng4)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB237;

LAB238:    t2 = ((char*)((ng3)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB239;

LAB240:    t2 = ((char*)((ng8)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB241;

LAB242:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB243;

LAB244:    t2 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB245;

LAB246:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB247;

LAB248:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB249;

LAB250:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB251;

LAB252:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB253;

LAB254:    t2 = ((char*)((ng23)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB255;

LAB256:    t2 = ((char*)((ng31)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB257;

LAB258:    t2 = ((char*)((ng32)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB259;

LAB260:
LAB262:
LAB261:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);

LAB263:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng32)));
    memset(t4, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB270;

LAB267:    if (t22 != 0)
        goto LAB269;

LAB268:    *((unsigned int *)t4) = 1;

LAB270:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB271;

LAB272:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t7, 6, t8, 6);
    t10 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 6, 0LL);

LAB273:    goto LAB232;

LAB235:    xsi_set_current_line(243, ng0);

LAB264:    xsi_set_current_line(244, ng0);
    t44 = ((char*)((ng4)));
    t45 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB263;

LAB237:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB239:    xsi_set_current_line(248, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB241:    xsi_set_current_line(249, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB243:    xsi_set_current_line(250, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB245:    xsi_set_current_line(251, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB247:    xsi_set_current_line(252, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB249:    xsi_set_current_line(253, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB251:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB253:    xsi_set_current_line(259, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB255:    xsi_set_current_line(260, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB263;

LAB257:    xsi_set_current_line(265, ng0);

LAB265:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB263;

LAB259:    xsi_set_current_line(271, ng0);

LAB266:    xsi_set_current_line(272, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB263;

LAB269:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB270;

LAB271:    xsi_set_current_line(277, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 6, 0LL);
    goto LAB273;

LAB276:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB277;

LAB278:    *((unsigned int *)t9) = 1;
    goto LAB281;

LAB280:    t35 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB281;

LAB282:    t38 = (t0 + 4432);
    t44 = (t38 + 56U);
    t45 = *((char **)t44);
    memset(t34, 0, 8);
    t46 = (t45 + 4);
    t39 = *((unsigned int *)t46);
    t40 = (~(t39));
    t41 = *((unsigned int *)t45);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB285;

LAB286:    if (*((unsigned int *)t46) != 0)
        goto LAB287;

LAB288:    t47 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t34);
    t49 = (t47 & t48);
    *((unsigned int *)t55) = t49;
    t62 = (t9 + 4);
    t67 = (t34 + 4);
    t68 = (t55 + 4);
    t50 = *((unsigned int *)t62);
    t51 = *((unsigned int *)t67);
    t52 = (t50 | t51);
    *((unsigned int *)t68) = t52;
    t53 = *((unsigned int *)t68);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB289;

LAB290:
LAB291:    goto LAB284;

LAB285:    *((unsigned int *)t34) = 1;
    goto LAB288;

LAB287:    t56 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB288;

LAB289:    t57 = *((unsigned int *)t55);
    t58 = *((unsigned int *)t68);
    *((unsigned int *)t55) = (t57 | t58);
    t69 = (t9 + 4);
    t77 = (t34 + 4);
    t59 = *((unsigned int *)t9);
    t60 = (~(t59));
    t61 = *((unsigned int *)t69);
    t64 = (~(t61));
    t65 = *((unsigned int *)t34);
    t66 = (~(t65));
    t70 = *((unsigned int *)t77);
    t71 = (~(t70));
    t87 = (t60 & t64);
    t88 = (t66 & t71);
    t72 = (~(t87));
    t73 = (~(t88));
    t74 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t74 & t72);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t72);
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t73);
    goto LAB291;

LAB292:    xsi_set_current_line(282, ng0);

LAB295:    xsi_set_current_line(283, ng0);
    t95 = (t0 + 5392);
    t101 = (t95 + 56U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng3)));
    memset(t63, 0, 8);
    t104 = (t102 + 4);
    t109 = (t103 + 4);
    t85 = *((unsigned int *)t102);
    t86 = *((unsigned int *)t103);
    t89 = (t85 ^ t86);
    t90 = *((unsigned int *)t104);
    t91 = *((unsigned int *)t109);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t104);
    t96 = *((unsigned int *)t109);
    t97 = (t94 | t96);
    t98 = (~(t97));
    t99 = (t93 & t98);
    if (t99 != 0)
        goto LAB299;

LAB296:    if (t97 != 0)
        goto LAB298;

LAB297:    *((unsigned int *)t63) = 1;

LAB299:    t111 = (t63 + 4);
    t100 = *((unsigned int *)t111);
    t105 = (~(t100));
    t106 = *((unsigned int *)t63);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB300;

LAB301:
LAB302:    goto LAB294;

LAB298:    t110 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB299;

LAB300:    xsi_set_current_line(284, ng0);

LAB303:    xsi_set_current_line(285, ng0);
    t112 = (t0 + 5072);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);

LAB304:    t115 = ((char*)((ng13)));
    t116 = xsi_vlog_unsigned_case_compare(t114, 6, t115, 6);
    if (t116 == 1)
        goto LAB305;

LAB306:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB307;

LAB308:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB309;

LAB310:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB311;

LAB312:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB313;

LAB314:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB315;

LAB316:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB317;

LAB318:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB319;

LAB320:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB321;

LAB322:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB323;

LAB324:    t2 = ((char*)((ng25)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB325;

LAB326:    t2 = ((char*)((ng26)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB327;

LAB328:    t2 = ((char*)((ng27)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB329;

LAB330:    t2 = ((char*)((ng28)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB331;

LAB332:    t2 = ((char*)((ng29)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB333;

LAB334:    t2 = ((char*)((ng30)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB335;

LAB336:    t2 = ((char*)((ng31)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB337;

LAB338:
LAB340:
LAB339:    xsi_set_current_line(326, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);

LAB341:    goto LAB302;

LAB305:    xsi_set_current_line(288, ng0);

LAB342:    xsi_set_current_line(289, ng0);
    t117 = (t0 + 2592U);
    t118 = *((char **)t117);
    t117 = (t0 + 5232);
    t120 = (t0 + 5232);
    t121 = (t120 + 72U);
    t122 = *((char **)t121);
    t123 = ((char*)((ng42)));
    xsi_vlog_generic_convert_bit_index(t119, t122, 2, t123, 32, 1);
    t124 = (t119 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (!(t125));
    if (t126 == 1)
        goto LAB343;

LAB344:    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB341;

LAB307:    xsi_set_current_line(293, ng0);

LAB345:    xsi_set_current_line(294, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng42)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB346;

LAB347:    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB341;

LAB309:    xsi_set_current_line(297, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng43)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB348;

LAB349:    goto LAB341;

LAB311:    xsi_set_current_line(298, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng44)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB350;

LAB351:    goto LAB341;

LAB313:    xsi_set_current_line(299, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng45)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB352;

LAB353:    goto LAB341;

LAB315:    xsi_set_current_line(300, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng46)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB354;

LAB355:    goto LAB341;

LAB317:    xsi_set_current_line(301, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng47)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB356;

LAB357:    goto LAB341;

LAB319:    xsi_set_current_line(302, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng48)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB358;

LAB359:    goto LAB341;

LAB321:    xsi_set_current_line(304, ng0);

LAB360:    xsi_set_current_line(305, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng49)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB361;

LAB362:    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB341;

LAB323:    xsi_set_current_line(310, ng0);

LAB363:    xsi_set_current_line(311, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng50)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB364;

LAB365:    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB341;

LAB325:    xsi_set_current_line(314, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng51)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB366;

LAB367:    goto LAB341;

LAB327:    xsi_set_current_line(315, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng52)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB368;

LAB369:    goto LAB341;

LAB329:    xsi_set_current_line(316, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng53)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB370;

LAB371:    goto LAB341;

LAB331:    xsi_set_current_line(317, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng54)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB372;

LAB373:    goto LAB341;

LAB333:    xsi_set_current_line(318, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng55)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB374;

LAB375:    goto LAB341;

LAB335:    xsi_set_current_line(319, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB376;

LAB377:    goto LAB341;

LAB337:    xsi_set_current_line(321, ng0);

LAB378:    xsi_set_current_line(322, ng0);
    t3 = (t0 + 2592U);
    t7 = *((char **)t3);
    t3 = (t0 + 5232);
    t8 = (t0 + 5232);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB379;

LAB380:    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB341;

LAB343:    xsi_vlogvar_wait_assign_value(t117, t118, 0, *((unsigned int *)t119), 1, 0LL);
    goto LAB344;

LAB346:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB347;

LAB348:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB349;

LAB350:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB351;

LAB352:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB353;

LAB354:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB355;

LAB356:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB357;

LAB358:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB359;

LAB361:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB362;

LAB364:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB365;

LAB366:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB367;

LAB368:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB369;

LAB370:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB371;

LAB372:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB373;

LAB374:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB375;

LAB376:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB377;

LAB379:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB380;

}


extern void work_m_00000000002208527300_0829517520_init()
{
	static char *pe[] = {(void *)Always_72_0,(void *)Cont_92_1,(void *)NetDecl_108_2,(void *)Cont_110_3,(void *)Always_117_4};
	xsi_register_didat("work_m_00000000002208527300_0829517520", "isim/ADS1115_isim_beh.exe.sim/work/m_00000000002208527300_0829517520.didat");
	xsi_register_executes(pe);
}
