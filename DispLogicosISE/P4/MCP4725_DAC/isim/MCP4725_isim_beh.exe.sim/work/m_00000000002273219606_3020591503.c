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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/P4/MCP4725_DAC/MCP4725.v";
static unsigned int ng1[] = {24U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {28U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static unsigned int ng21[] = {17U, 0U};
static unsigned int ng22[] = {18U, 0U};
static unsigned int ng23[] = {19U, 0U};
static unsigned int ng24[] = {20U, 0U};
static unsigned int ng25[] = {21U, 0U};
static unsigned int ng26[] = {22U, 0U};
static unsigned int ng27[] = {23U, 0U};
static unsigned int ng28[] = {25U, 0U};
static unsigned int ng29[] = {26U, 0U};
static unsigned int ng30[] = {27U, 0U};



static void Always_16_0(char *t0)
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
    int t32;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 2336);
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

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 5, t5, 5, t6, 5);
    t7 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 5, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);

LAB13:    xsi_set_current_line(20, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 5, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2176);
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
    t10 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 4, t4, 4, t5, 4);
    t6 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB23:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB27:    t5 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t32 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t32 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB18;

LAB22:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(23, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 4, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(25, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB48;

LAB30:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB48;

LAB32:    xsi_set_current_line(27, ng0);

LAB49:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB34:    xsi_set_current_line(28, ng0);

LAB50:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB36:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB48;

LAB38:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB48;

LAB40:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB48;

LAB42:    xsi_set_current_line(32, ng0);

LAB51:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB44:    xsi_set_current_line(33, ng0);

LAB52:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB46:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB48;

}

static void Cont_40_1(char *t0)
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

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5248);
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
    t18 = (t0 + 5136);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_44_2(char *t0)
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

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5152);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 3136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
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

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 5, t4, 5, t5, 5);
    t6 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 5, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 5, 0LL);
    goto LAB12;

}

static void Always_54_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB66:    xsi_set_current_line(59, ng0);
    t9 = (t0 + 2816);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB65;

LAB9:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB65;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB65;

LAB13:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB79;

LAB80:
LAB81:    goto LAB65;

LAB15:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB65;

LAB17:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB65;

LAB19:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB65;

LAB21:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB65;

LAB23:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB94;

LAB95:
LAB96:    goto LAB65;

LAB25:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB97;

LAB98:
LAB99:    goto LAB65;

LAB27:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB100;

LAB101:
LAB102:    goto LAB65;

LAB29:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB103;

LAB104:
LAB105:    goto LAB65;

LAB31:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB65;

LAB33:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB109;

LAB110:
LAB111:    goto LAB65;

LAB35:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB112;

LAB113:
LAB114:    goto LAB65;

LAB37:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB115;

LAB116:
LAB117:    goto LAB65;

LAB39:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB118;

LAB119:
LAB120:    goto LAB65;

LAB41:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB121;

LAB122:
LAB123:    goto LAB65;

LAB43:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB124;

LAB125:
LAB126:    goto LAB65;

LAB45:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB127;

LAB128:
LAB129:    goto LAB65;

LAB47:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB130;

LAB131:
LAB132:    goto LAB65;

LAB49:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB133;

LAB134:
LAB135:    goto LAB65;

LAB51:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB136;

LAB137:
LAB138:    goto LAB65;

LAB53:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB139;

LAB140:
LAB141:    goto LAB65;

LAB55:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB65;

LAB57:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB145;

LAB146:
LAB147:    goto LAB65;

LAB59:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB148;

LAB149:
LAB150:    goto LAB65;

LAB61:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    goto LAB65;

LAB63:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB151;

LAB152:
LAB153:    goto LAB65;

LAB67:    xsi_set_current_line(59, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    goto LAB69;

LAB70:    xsi_set_current_line(60, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 1, 0LL);
    goto LAB72;

LAB73:    xsi_set_current_line(63, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB75;

LAB76:    xsi_set_current_line(64, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB78;

LAB79:    xsi_set_current_line(65, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB81;

LAB82:    xsi_set_current_line(66, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB84;

LAB85:    xsi_set_current_line(67, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB87;

LAB88:    xsi_set_current_line(68, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB90;

LAB91:    xsi_set_current_line(69, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB93;

LAB94:    xsi_set_current_line(70, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB96;

LAB97:    xsi_set_current_line(71, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB99;

LAB100:    xsi_set_current_line(72, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB102;

LAB103:    xsi_set_current_line(73, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB105;

LAB106:    xsi_set_current_line(74, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB108;

LAB109:    xsi_set_current_line(75, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB111;

LAB112:    xsi_set_current_line(76, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB114;

LAB115:    xsi_set_current_line(77, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB117;

LAB118:    xsi_set_current_line(78, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB120;

LAB121:    xsi_set_current_line(79, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB123;

LAB124:    xsi_set_current_line(80, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB126;

LAB127:    xsi_set_current_line(81, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB129;

LAB130:    xsi_set_current_line(82, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB132;

LAB133:    xsi_set_current_line(83, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB135;

LAB136:    xsi_set_current_line(84, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB138;

LAB139:    xsi_set_current_line(85, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB141;

LAB142:    xsi_set_current_line(86, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB144;

LAB145:    xsi_set_current_line(87, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB147;

LAB148:    xsi_set_current_line(88, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB150;

LAB151:    xsi_set_current_line(90, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB153;

}


extern void work_m_00000000002273219606_3020591503_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Cont_40_1,(void *)Always_44_2,(void *)Always_54_3};
	xsi_register_didat("work_m_00000000002273219606_3020591503", "isim/MCP4725_isim_beh.exe.sim/work/m_00000000002273219606_3020591503.didat");
	xsi_register_executes(pe);
}
