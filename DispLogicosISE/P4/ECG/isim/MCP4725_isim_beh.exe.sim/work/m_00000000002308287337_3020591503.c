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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/P4/ECG/MCP4725.v";
static unsigned int ng1[] = {250U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {16U, 0U};
static unsigned int ng16[] = {17U, 0U};
static unsigned int ng17[] = {18U, 0U};



static void Always_19_0(char *t0)
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

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 7640);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 5584);
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

LAB11:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);

LAB13:    xsi_set_current_line(23, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5744);
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
    t10 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5744);
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
        goto LAB26;

LAB24:    if (*((unsigned int *)t5) == 0)
        goto LAB23;

LAB25:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB26:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB28;

LAB27:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);

LAB22:    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB18;

LAB20:    xsi_set_current_line(25, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB22;

LAB23:    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB28:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB27;

}

static void Always_54_1(char *t0)
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

LAB0:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7656);
    *((int *)t2) = 1;
    t3 = (t0 + 7104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 5264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB38:    xsi_set_current_line(59, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

LAB9:    xsi_set_current_line(64, ng0);

LAB39:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB11:    xsi_set_current_line(72, ng0);

LAB40:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

LAB13:    xsi_set_current_line(77, ng0);

LAB41:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB15:    xsi_set_current_line(82, ng0);

LAB42:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(87, ng0);

LAB43:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB19:    xsi_set_current_line(92, ng0);

LAB44:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB21:    xsi_set_current_line(97, ng0);

LAB45:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(102, ng0);

LAB46:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(107, ng0);

LAB47:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(112, ng0);

LAB48:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(117, ng0);

LAB49:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(122, ng0);

LAB50:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(128, ng0);

LAB51:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(133, ng0);

LAB52:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

}

static void Always_143_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7672);
    *((int *)t2) = 1;
    t3 = (t0 + 7352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 5424);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 5, 0LL);
    goto LAB2;

}


extern void work_m_00000000002308287337_3020591503_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_54_1,(void *)Always_143_2};
	xsi_register_didat("work_m_00000000002308287337_3020591503", "isim/MCP4725_isim_beh.exe.sim/work/m_00000000002308287337_3020591503.didat");
	xsi_register_executes(pe);
}
