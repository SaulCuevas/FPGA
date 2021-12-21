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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/PF/Guante/ADS1115.v";
static unsigned int ng1[] = {196U, 0U};
static unsigned int ng2[] = {212U, 0U};
static unsigned int ng3[] = {49U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {0U, 1U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {11U, 0U};
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {13U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {15U, 0U};
static unsigned int ng22[] = {16U, 0U};
static int ng23[] = {1, 0};
static unsigned int ng24[] = {17U, 0U};
static unsigned int ng25[] = {18U, 0U};
static unsigned int ng26[] = {19U, 0U};
static unsigned int ng27[] = {20U, 0U};
static unsigned int ng28[] = {21U, 0U};
static unsigned int ng29[] = {22U, 0U};
static unsigned int ng30[] = {23U, 0U};
static unsigned int ng31[] = {24U, 0U};
static unsigned int ng32[] = {25U, 0U};
static unsigned int ng33[] = {26U, 0U};
static unsigned int ng34[] = {27U, 0U};
static unsigned int ng35[] = {28U, 0U};
static unsigned int ng36[] = {29U, 0U};
static unsigned int ng37[] = {30U, 0U};
static unsigned int ng38[] = {31U, 0U};
static unsigned int ng39[] = {32U, 0U};
static unsigned int ng40[] = {33U, 0U};
static unsigned int ng41[] = {34U, 0U};
static unsigned int ng42[] = {35U, 0U};
static unsigned int ng43[] = {36U, 0U};
static int ng44[] = {15, 0};
static int ng45[] = {14, 0};
static int ng46[] = {13, 0};
static int ng47[] = {12, 0};
static int ng48[] = {11, 0};
static int ng49[] = {10, 0};
static int ng50[] = {9, 0};
static int ng51[] = {8, 0};
static int ng52[] = {7, 0};
static int ng53[] = {6, 0};
static int ng54[] = {5, 0};
static int ng55[] = {4, 0};
static int ng56[] = {3, 0};
static int ng57[] = {2, 0};



static void NetDecl_95_0(char *t0)
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 9488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7768);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 11472);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7U);
    t37 = (t0 + 11296);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t23 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_102_1(char *t0)
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

LAB0:    t1 = (t0 + 9736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 11312);
    *((int *)t2) = 1;
    t3 = (t0 + 9768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t4, 6, t5, 6);
    t6 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 6, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);

LAB13:    xsi_set_current_line(106, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 6, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5688);
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
LAB20:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
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

LAB34:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 3, t4, 3, t5, 3);
    t6 = (t0 + 5688);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);

LAB35:    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(108, ng0);

LAB21:    xsi_set_current_line(109, ng0);
    t23 = (t0 + 5368);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng6)));
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

LAB27:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 1, t4, 1, t5, 1);
    t6 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);

LAB28:    goto LAB20;

LAB24:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(109, ng0);
    t54 = ((char*)((ng4)));
    t55 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(113, ng0);

LAB36:    xsi_set_current_line(114, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 5688);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5208);
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
    t10 = (t0 + 5208);
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

static void Cont_122_2(char *t0)
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

LAB0:    t1 = (t0 + 9984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11536);
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
    t18 = (t0 + 11328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_139_3(char *t0)
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

LAB0:    t1 = (t0 + 10232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6648);
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

LAB16:    t26 = (t0 + 11600);
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
    t39 = (t0 + 11344);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6808);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_146_4(char *t0)
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

LAB0:    t1 = (t0 + 10480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 11360);
    *((int *)t2) = 1;
    t3 = (t0 + 10512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t0 + 6008);
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
    t18 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6168);
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
    t18 = (t0 + 6168);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
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

LAB31:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
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

LAB53:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
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

LAB75:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng5)));
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
        goto LAB307;

LAB304:    if (t22 != 0)
        goto LAB306;

LAB305:    *((unsigned int *)t4) = 1;

LAB307:    memset(t9, 0, 8);
    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB308;

LAB309:    if (*((unsigned int *)t30) != 0)
        goto LAB310;

LAB311:    t36 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t36);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB312;

LAB313:    memcpy(t55, t9, 8);

LAB314:    t78 = (t55 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t55);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB322;

LAB323:
LAB324:
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

LAB14:    t35 = (t0 + 6328);
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

LAB30:    xsi_set_current_line(151, ng0);

LAB33:    xsi_set_current_line(152, ng0);
    t101 = ((char*)((ng6)));
    t102 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6328);
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

LAB42:    t35 = (t0 + 6488);
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

LAB52:    xsi_set_current_line(157, ng0);

LAB55:    xsi_set_current_line(158, ng0);
    t69 = ((char*)((ng6)));
    t77 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t77, t69, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6328);
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

LAB64:    t35 = (t0 + 6328);
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

LAB74:    xsi_set_current_line(164, ng0);

LAB77:    xsi_set_current_line(165, ng0);
    t69 = (t0 + 7288);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    t95 = ((char*)((ng9)));
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

LAB83:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 7288);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng6)));
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
        goto LAB197;

LAB194:    if (t22 != 0)
        goto LAB196;

LAB195:    *((unsigned int *)t4) = 1;

LAB197:    t18 = (t4 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB198;

LAB199:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 7288);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng5)));
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
        goto LAB253;

LAB250:    if (t22 != 0)
        goto LAB252;

LAB251:    *((unsigned int *)t4) = 1;

LAB253:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB254;

LAB255:
LAB256:
LAB200:
LAB84:    goto LAB76;

LAB80:    t103 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(166, ng0);

LAB85:    xsi_set_current_line(167, ng0);
    t109 = ((char*)((ng6)));
    t110 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB86:    t6 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t6, 6);
    if (t87 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng6)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng21)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng25)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng26)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng27)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng28)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng29)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng30)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng31)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng32)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng33)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng34)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng35)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng36)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB145;

LAB146:    t2 = ((char*)((ng37)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng38)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng39)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng40)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng41)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng42)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng43)));
    t87 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t87 == 1)
        goto LAB159;

LAB160:
LAB161:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng43)));
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
        goto LAB190;

LAB187:    if (t22 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t4) = 1;

LAB190:    t18 = (t4 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB191;

LAB192:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t6, 6, t7, 6);
    t8 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 6, 0LL);

LAB193:    goto LAB84;

LAB87:    xsi_set_current_line(171, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB161;

LAB89:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB91:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB93:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB95:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB97:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB99:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB101:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB103:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB105:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB107:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB109:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB111:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB113:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB115:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB117:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB119:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng23)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB121:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB123:    xsi_set_current_line(196, ng0);

LAB162:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB166;

LAB163:    if (t22 != 0)
        goto LAB165;

LAB164:    *((unsigned int *)t4) = 1;

LAB166:    t10 = (t4 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7448);
    t6 = (t0 + 7448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t11);
    t87 = (!(t12));
    if (t87 == 1)
        goto LAB172;

LAB173:
LAB169:    goto LAB161;

LAB125:    xsi_set_current_line(201, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 6);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB127:    xsi_set_current_line(202, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 5);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB129:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 4);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB131:    xsi_set_current_line(204, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB133:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB135:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    goto LAB161;

LAB137:    xsi_set_current_line(208, ng0);

LAB174:    xsi_set_current_line(209, ng0);
    t3 = (t0 + 3528U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB178;

LAB175:    if (t22 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t4) = 1;

LAB178:    t10 = (t4 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7448);
    t6 = (t0 + 7448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t11);
    t87 = (!(t12));
    if (t87 == 1)
        goto LAB184;

LAB185:
LAB181:    goto LAB161;

LAB139:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB141:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB143:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB145:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB147:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB149:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB151:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB153:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB155:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB157:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB161;

LAB159:    xsi_set_current_line(229, ng0);

LAB186:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB161;

LAB165:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB166;

LAB167:    xsi_set_current_line(198, ng0);
    t11 = ((char*)((ng9)));
    t18 = (t0 + 7448);
    t30 = (t0 + 7448);
    t35 = (t30 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t9, t36, 2, t37, 32, 1);
    t38 = (t9 + 4);
    t31 = *((unsigned int *)t38);
    t87 = (!(t31));
    if (t87 == 1)
        goto LAB170;

LAB171:    goto LAB169;

LAB170:    xsi_vlogvar_wait_assign_value(t18, t11, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB171;

LAB172:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB173;

LAB177:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB178;

LAB179:    xsi_set_current_line(210, ng0);
    t11 = ((char*)((ng9)));
    t18 = (t0 + 7448);
    t30 = (t0 + 7448);
    t35 = (t30 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t36, 2, t37, 32, 1);
    t38 = (t9 + 4);
    t31 = *((unsigned int *)t38);
    t87 = (!(t31));
    if (t87 == 1)
        goto LAB182;

LAB183:    goto LAB181;

LAB182:    xsi_vlogvar_wait_assign_value(t18, t11, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB183;

LAB184:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB185;

LAB189:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB190;

LAB191:    xsi_set_current_line(235, ng0);
    t30 = ((char*)((ng4)));
    t35 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 6, 0LL);
    goto LAB193;

LAB196:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB197;

LAB198:    xsi_set_current_line(239, ng0);

LAB201:    xsi_set_current_line(240, ng0);
    t30 = ((char*)((ng6)));
    t35 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);

LAB202:    t7 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 6);
    if (t87 == 1)
        goto LAB203;

LAB204:    t2 = ((char*)((ng6)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB205;

LAB206:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB207;

LAB208:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB209;

LAB210:    t2 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB211;

LAB212:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB213;

LAB214:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB215;

LAB216:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB217;

LAB218:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB219;

LAB220:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB221;

LAB222:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB223;

LAB224:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB225;

LAB226:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB227;

LAB228:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB229;

LAB230:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB231;

LAB232:    t2 = ((char*)((ng21)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB233;

LAB234:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB235;

LAB236:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB237;

LAB238:    t2 = ((char*)((ng25)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t87 == 1)
        goto LAB239;

LAB240:
LAB241:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng25)));
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
        goto LAB246;

LAB243:    if (t22 != 0)
        goto LAB245;

LAB244:    *((unsigned int *)t4) = 1;

LAB246:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB247;

LAB248:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t7, 6, t8, 6);
    t10 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 6, 0LL);

LAB249:    goto LAB200;

LAB203:    xsi_set_current_line(244, ng0);
    t8 = ((char*)((ng6)));
    t10 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    goto LAB241;

LAB205:    xsi_set_current_line(245, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB207:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB209:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB211:    xsi_set_current_line(248, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB213:    xsi_set_current_line(249, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB215:    xsi_set_current_line(250, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB217:    xsi_set_current_line(251, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB219:    xsi_set_current_line(253, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB221:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB223:    xsi_set_current_line(256, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB225:    xsi_set_current_line(257, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB227:    xsi_set_current_line(258, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB229:    xsi_set_current_line(259, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB231:    xsi_set_current_line(260, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB233:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB235:    xsi_set_current_line(262, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB237:    xsi_set_current_line(264, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB241;

LAB239:    xsi_set_current_line(267, ng0);

LAB242:    xsi_set_current_line(268, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB241;

LAB245:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB246;

LAB247:    xsi_set_current_line(273, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 6, 0LL);
    goto LAB249;

LAB252:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB253;

LAB254:    xsi_set_current_line(277, ng0);

LAB257:    xsi_set_current_line(278, ng0);
    t35 = (t0 + 6968);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);

LAB258:    t38 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t38, 6);
    if (t87 == 1)
        goto LAB259;

LAB260:    t2 = ((char*)((ng6)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB261;

LAB262:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB263;

LAB264:    t2 = ((char*)((ng10)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB265;

LAB266:    t2 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB267;

LAB268:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB269;

LAB270:    t2 = ((char*)((ng12)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB271;

LAB272:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB273;

LAB274:    t2 = ((char*)((ng14)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB275;

LAB276:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB277;

LAB278:    t2 = ((char*)((ng25)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB279;

LAB280:    t2 = ((char*)((ng33)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB281;

LAB282:    t2 = ((char*)((ng34)));
    t87 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t87 == 1)
        goto LAB283;

LAB284:
LAB286:
LAB285:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 6808);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);

LAB287:    xsi_set_current_line(317, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng34)));
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
        goto LAB300;

LAB297:    if (t22 != 0)
        goto LAB299;

LAB298:    *((unsigned int *)t4) = 1;

LAB300:    t30 = (t4 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB301;

LAB302:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t7, 6, t8, 6);
    t10 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 6, 0LL);

LAB303:    goto LAB256;

LAB259:    xsi_set_current_line(282, ng0);

LAB288:    xsi_set_current_line(283, ng0);
    t44 = ((char*)((ng6)));
    t45 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB287;

LAB261:    xsi_set_current_line(286, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB263:    xsi_set_current_line(287, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB265:    xsi_set_current_line(288, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB267:    xsi_set_current_line(289, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB269:    xsi_set_current_line(290, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB271:    xsi_set_current_line(291, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB273:    xsi_set_current_line(292, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB275:    xsi_set_current_line(294, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB277:    xsi_set_current_line(298, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB279:    xsi_set_current_line(299, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    goto LAB287;

LAB281:    xsi_set_current_line(304, ng0);

LAB289:    xsi_set_current_line(305, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 6808);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB287;

LAB283:    xsi_set_current_line(310, ng0);

LAB290:    xsi_set_current_line(311, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = (t0 + 7768);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB294;

LAB292:    if (*((unsigned int *)t8) == 0)
        goto LAB291;

LAB293:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;

LAB294:    t11 = (t4 + 4);
    t18 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t19 = (~(t17));
    *((unsigned int *)t4) = t19;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB296;

LAB295:    t24 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t24 & 1U);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t30 = (t0 + 7768);
    xsi_vlogvar_wait_assign_value(t30, t4, 0, 0, 1, 0LL);
    goto LAB287;

LAB291:    *((unsigned int *)t4) = 1;
    goto LAB294;

LAB296:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t18);
    *((unsigned int *)t4) = (t20 | t21);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t11) = (t22 | t23);
    goto LAB295;

LAB299:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB300;

LAB301:    xsi_set_current_line(317, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 6, 0LL);
    goto LAB303;

LAB306:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB307;

LAB308:    *((unsigned int *)t9) = 1;
    goto LAB311;

LAB310:    t35 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB311;

LAB312:    t38 = (t0 + 6328);
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
        goto LAB315;

LAB316:    if (*((unsigned int *)t46) != 0)
        goto LAB317;

LAB318:    t47 = *((unsigned int *)t9);
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
        goto LAB319;

LAB320:
LAB321:    goto LAB314;

LAB315:    *((unsigned int *)t34) = 1;
    goto LAB318;

LAB317:    t56 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB318;

LAB319:    t57 = *((unsigned int *)t55);
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
    goto LAB321;

LAB322:    xsi_set_current_line(322, ng0);

LAB325:    xsi_set_current_line(323, ng0);
    t95 = (t0 + 7288);
    t101 = (t95 + 56U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng5)));
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
        goto LAB329;

LAB326:    if (t97 != 0)
        goto LAB328;

LAB327:    *((unsigned int *)t63) = 1;

LAB329:    t111 = (t63 + 4);
    t100 = *((unsigned int *)t111);
    t105 = (~(t100));
    t106 = *((unsigned int *)t63);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB330;

LAB331:
LAB332:    goto LAB324;

LAB328:    t110 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB329;

LAB330:    xsi_set_current_line(324, ng0);

LAB333:    xsi_set_current_line(325, ng0);
    t112 = (t0 + 6968);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);

LAB334:    t115 = ((char*)((ng15)));
    t116 = xsi_vlog_unsigned_case_compare(t114, 6, t115, 6);
    if (t116 == 1)
        goto LAB335;

LAB336:    t2 = ((char*)((ng16)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB337;

LAB338:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB339;

LAB340:    t2 = ((char*)((ng18)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB341;

LAB342:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB343;

LAB344:    t2 = ((char*)((ng20)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB345;

LAB346:    t2 = ((char*)((ng21)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB347;

LAB348:    t2 = ((char*)((ng22)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB349;

LAB350:    t2 = ((char*)((ng24)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB351;

LAB352:    t2 = ((char*)((ng26)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB353;

LAB354:    t2 = ((char*)((ng27)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB355;

LAB356:    t2 = ((char*)((ng28)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB357;

LAB358:    t2 = ((char*)((ng29)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB359;

LAB360:    t2 = ((char*)((ng30)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB361;

LAB362:    t2 = ((char*)((ng31)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB363;

LAB364:    t2 = ((char*)((ng32)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB365;

LAB366:    t2 = ((char*)((ng33)));
    t87 = xsi_vlog_unsigned_case_compare(t114, 6, t2, 6);
    if (t87 == 1)
        goto LAB367;

LAB368:
LAB370:
LAB369:    xsi_set_current_line(368, ng0);
    t2 = (t0 + 7128);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 7128);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);

LAB371:    goto LAB332;

LAB335:    xsi_set_current_line(328, ng0);

LAB372:    xsi_set_current_line(329, ng0);
    t117 = (t0 + 2728U);
    t118 = *((char **)t117);
    t117 = (t0 + 7128);
    t120 = (t0 + 7128);
    t121 = (t120 + 72U);
    t122 = *((char **)t121);
    t123 = ((char*)((ng44)));
    xsi_vlog_generic_convert_bit_index(t119, t122, 2, t123, 32, 1);
    t124 = (t119 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (!(t125));
    if (t126 == 1)
        goto LAB373;

LAB374:    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB371;

LAB337:    xsi_set_current_line(334, ng0);

LAB375:    xsi_set_current_line(335, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng44)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB376;

LAB377:    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB371;

LAB339:    xsi_set_current_line(338, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng45)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB378;

LAB379:    goto LAB371;

LAB341:    xsi_set_current_line(339, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng46)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB380;

LAB381:    goto LAB371;

LAB343:    xsi_set_current_line(340, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng47)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB382;

LAB383:    goto LAB371;

LAB345:    xsi_set_current_line(341, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng48)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB384;

LAB385:    goto LAB371;

LAB347:    xsi_set_current_line(342, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng49)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB386;

LAB387:    goto LAB371;

LAB349:    xsi_set_current_line(343, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng50)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB388;

LAB389:    goto LAB371;

LAB351:    xsi_set_current_line(345, ng0);

LAB390:    xsi_set_current_line(346, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng51)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB391;

LAB392:    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB371;

LAB353:    xsi_set_current_line(351, ng0);

LAB393:    xsi_set_current_line(352, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng52)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB394;

LAB395:    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB371;

LAB355:    xsi_set_current_line(355, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng53)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB396;

LAB397:    goto LAB371;

LAB357:    xsi_set_current_line(356, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng54)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB398;

LAB399:    goto LAB371;

LAB359:    xsi_set_current_line(357, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng55)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB400;

LAB401:    goto LAB371;

LAB361:    xsi_set_current_line(358, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng56)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB402;

LAB403:    goto LAB371;

LAB363:    xsi_set_current_line(359, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng57)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB404;

LAB405:    goto LAB371;

LAB365:    xsi_set_current_line(360, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB406;

LAB407:    goto LAB371;

LAB367:    xsi_set_current_line(362, ng0);

LAB408:    xsi_set_current_line(363, ng0);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    t3 = (t0 + 7128);
    t8 = (t0 + 7128);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t11, 2, t18, 32, 1);
    t30 = (t4 + 4);
    t12 = *((unsigned int *)t30);
    t88 = (!(t12));
    if (t88 == 1)
        goto LAB409;

LAB410:    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB371;

LAB373:    xsi_vlogvar_wait_assign_value(t117, t118, 0, *((unsigned int *)t119), 1, 0LL);
    goto LAB374;

LAB376:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB377;

LAB378:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB379;

LAB380:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB381;

LAB382:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB383;

LAB384:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB385;

LAB386:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB387;

LAB388:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB389;

LAB391:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB392;

LAB394:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB395;

LAB396:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB397;

LAB398:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB399;

LAB400:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB401;

LAB402:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB403;

LAB404:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB405;

LAB406:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB407;

LAB409:    xsi_vlogvar_wait_assign_value(t3, t7, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB410;

}

static void Always_393_5(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 10728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 11376);
    *((int *)t2) = 1;
    t3 = (t0 + 10760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(394, ng0);

LAB5:    xsi_set_current_line(395, ng0);
    t5 = (t0 + 7768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 7928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t11, 1, t7, 1);
    t20 = (t0 + 7928);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 2);
    xsi_set_current_line(396, ng0);
    t2 = (t0 + 7928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t21 = (t16 | t19);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB9;

LAB6:    if (t24 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t10 = (t4 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(398, ng0);
    t2 = (t0 + 7928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t21 = (t16 | t19);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB16;

LAB13:    if (t24 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t4) = 1;

LAB16:    t10 = (t4 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB8:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(397, ng0);
    t12 = (t0 + 8568);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t32 = (t0 + 8248);
    xsi_vlogvar_wait_assign_value(t32, t20, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(399, ng0);
    t12 = (t0 + 8408);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t32 = (t0 + 8088);
    xsi_vlogvar_wait_assign_value(t32, t20, 0, 0, 8, 0LL);
    goto LAB19;

}

static void Always_404_6(char *t0)
{
    char t17[8];
    char t33[8];
    char t49[8];
    char t65[8];
    char t73[8];
    char t111[8];
    char t112[8];
    char t116[8];
    char t141[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t15;
    char *t16;
    char *t18;
    char *t19;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;

LAB0:    t1 = (t0 + 10976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(404, ng0);
    t2 = (t0 + 11392);
    *((int *)t2) = 1;
    t3 = (t0 + 11008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(405, ng0);

LAB5:    xsi_set_current_line(406, ng0);
    t4 = (t0 + 7608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(419, ng0);

LAB87:    xsi_set_current_line(420, ng0);
    t2 = (t0 + 8408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = (t0 + 8568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(407, ng0);

LAB9:    xsi_set_current_line(408, ng0);
    t13 = (t0 + 7928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng10)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB13;

LAB10:    if (t29 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t17) = 1;

LAB13:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t34) != 0)
        goto LAB16;

LAB17:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB18;

LAB19:    memcpy(t73, t33, 8);

LAB20:    t105 = (t73 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t73);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(410, ng0);
    t2 = (t0 + 7928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t17, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t20 = (t11 ^ t12);
    t21 = (t10 | t20);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB51;

LAB48:    if (t24 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t17) = 1;

LAB51:    memset(t33, 0, 8);
    t14 = (t17 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t14) != 0)
        goto LAB54;

LAB55:    t16 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t16);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB56;

LAB57:    memcpy(t73, t33, 8);

LAB58:    t72 = (t73 + 4);
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t73);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(413, ng0);

LAB86:    xsi_set_current_line(414, ng0);
    t2 = (t0 + 8408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(415, ng0);
    t2 = (t0 + 8568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB72:
LAB34:    goto LAB8;

LAB12:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t33) = 1;
    goto LAB17;

LAB16:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB17;

LAB18:    t45 = (t0 + 7448);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng9)));
    memset(t49, 0, 8);
    t50 = (t47 + 4);
    t51 = (t48 + 4);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t50);
    t56 = *((unsigned int *)t51);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t50);
    t60 = *((unsigned int *)t51);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB24;

LAB21:    if (t61 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t49) = 1;

LAB24:    memset(t65, 0, 8);
    t66 = (t49 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t49);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t66) != 0)
        goto LAB27;

LAB28:    t74 = *((unsigned int *)t33);
    t75 = *((unsigned int *)t65);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t33 + 4);
    t78 = (t65 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t64 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t65) = 1;
    goto LAB28;

LAB27:    t72 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB28;

LAB29:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t33 + 4);
    t88 = (t65 + 4);
    t89 = *((unsigned int *)t33);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t65);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB31;

LAB32:    xsi_set_current_line(409, ng0);
    t113 = (t0 + 7128);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    memset(t116, 0, 8);
    t117 = (t116 + 4);
    t118 = (t115 + 4);
    t119 = *((unsigned int *)t115);
    t120 = (t119 >> 15);
    t121 = (t120 & 1);
    *((unsigned int *)t116) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 >> 15);
    t124 = (t123 & 1);
    *((unsigned int *)t117) = t124;
    memset(t112, 0, 8);
    t125 = (t116 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t116);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t125) != 0)
        goto LAB37;

LAB38:    t132 = (t112 + 4);
    t133 = *((unsigned int *)t112);
    t134 = *((unsigned int *)t132);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB39;

LAB40:    t137 = *((unsigned int *)t112);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t132) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t112) > 0)
        goto LAB45;

LAB46:    memcpy(t111, t141, 8);

LAB47:    t153 = (t0 + 8408);
    xsi_vlogvar_wait_assign_value(t153, t111, 0, 0, 8, 0LL);
    goto LAB34;

LAB35:    *((unsigned int *)t112) = 1;
    goto LAB38;

LAB37:    t131 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB38;

LAB39:    t136 = ((char*)((ng9)));
    goto LAB40;

LAB41:    t142 = (t0 + 7128);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    memset(t141, 0, 8);
    t145 = (t141 + 4);
    t146 = (t144 + 4);
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 7);
    *((unsigned int *)t141) = t148;
    t149 = *((unsigned int *)t146);
    t150 = (t149 >> 7);
    *((unsigned int *)t145) = t150;
    t151 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t151 & 255U);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t152 & 255U);
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t111, 8, t136, 8, t141, 8);
    goto LAB47;

LAB45:    memcpy(t111, t136, 8);
    goto LAB47;

LAB50:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t33) = 1;
    goto LAB55;

LAB54:    t15 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB56:    t18 = (t0 + 7448);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = ((char*)((ng10)));
    memset(t49, 0, 8);
    t40 = (t32 + 4);
    t41 = (t34 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t34);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t52 = (t43 ^ t44);
    t53 = (t42 | t52);
    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t41);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB62;

LAB59:    if (t56 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t49) = 1;

LAB62:    memset(t65, 0, 8);
    t46 = (t49 + 4);
    t59 = *((unsigned int *)t46);
    t60 = (~(t59));
    t61 = *((unsigned int *)t49);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t46) != 0)
        goto LAB65;

LAB66:    t67 = *((unsigned int *)t33);
    t68 = *((unsigned int *)t65);
    t69 = (t67 & t68);
    *((unsigned int *)t73) = t69;
    t48 = (t33 + 4);
    t50 = (t65 + 4);
    t51 = (t73 + 4);
    t70 = *((unsigned int *)t48);
    t71 = *((unsigned int *)t50);
    t74 = (t70 | t71);
    *((unsigned int *)t51) = t74;
    t75 = *((unsigned int *)t51);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t45 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t65) = 1;
    goto LAB66;

LAB65:    t47 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB66;

LAB67:    t80 = *((unsigned int *)t73);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t73) = (t80 | t81);
    t64 = (t33 + 4);
    t66 = (t65 + 4);
    t82 = *((unsigned int *)t33);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (~(t84));
    t86 = *((unsigned int *)t65);
    t89 = (~(t86));
    t90 = *((unsigned int *)t66);
    t91 = (~(t90));
    t97 = (t83 & t85);
    t98 = (t89 & t91);
    t92 = (~(t97));
    t93 = (~(t98));
    t94 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t94 & t92);
    t95 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t92);
    t99 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t99 & t93);
    goto LAB69;

LAB70:    xsi_set_current_line(411, ng0);
    t77 = (t0 + 7128);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t116, 0, 8);
    t87 = (t116 + 4);
    t88 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = (t106 >> 15);
    t108 = (t107 & 1);
    *((unsigned int *)t116) = t108;
    t109 = *((unsigned int *)t88);
    t110 = (t109 >> 15);
    t119 = (t110 & 1);
    *((unsigned int *)t87) = t119;
    memset(t112, 0, 8);
    t105 = (t116 + 4);
    t120 = *((unsigned int *)t105);
    t121 = (~(t120));
    t122 = *((unsigned int *)t116);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t105) != 0)
        goto LAB75;

LAB76:    t114 = (t112 + 4);
    t126 = *((unsigned int *)t112);
    t127 = *((unsigned int *)t114);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB77;

LAB78:    t129 = *((unsigned int *)t112);
    t130 = (~(t129));
    t133 = *((unsigned int *)t114);
    t134 = (t130 || t133);
    if (t134 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t114) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t112) > 0)
        goto LAB83;

LAB84:    memcpy(t111, t141, 8);

LAB85:    t136 = (t0 + 8568);
    xsi_vlogvar_wait_assign_value(t136, t111, 0, 0, 8, 0LL);
    goto LAB72;

LAB73:    *((unsigned int *)t112) = 1;
    goto LAB76;

LAB75:    t113 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB76;

LAB77:    t115 = ((char*)((ng9)));
    goto LAB78;

LAB79:    t117 = (t0 + 7128);
    t118 = (t117 + 56U);
    t125 = *((char **)t118);
    memset(t141, 0, 8);
    t131 = (t141 + 4);
    t132 = (t125 + 4);
    t135 = *((unsigned int *)t125);
    t137 = (t135 >> 7);
    *((unsigned int *)t141) = t137;
    t138 = *((unsigned int *)t132);
    t139 = (t138 >> 7);
    *((unsigned int *)t131) = t139;
    t140 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t140 & 255U);
    t147 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t147 & 255U);
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t111, 8, t115, 8, t141, 8);
    goto LAB85;

LAB83:    memcpy(t111, t115, 8);
    goto LAB85;

}


extern void work_m_00000000001943466823_0829517520_init()
{
	static char *pe[] = {(void *)NetDecl_95_0,(void *)Always_102_1,(void *)Cont_122_2,(void *)Cont_139_3,(void *)Always_146_4,(void *)Always_393_5,(void *)Always_404_6};
	xsi_register_didat("work_m_00000000001943466823_0829517520", "isim/ADS1115_isim_beh.exe.sim/work/m_00000000001943466823_0829517520.didat");
	xsi_register_executes(pe);
}
