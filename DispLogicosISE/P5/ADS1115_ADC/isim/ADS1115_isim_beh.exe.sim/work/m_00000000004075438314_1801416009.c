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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/P4/ADS1115_ADC/DISPLAY.v";
static unsigned int ng1[] = {41666U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {7U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {159U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {37U, 0U};
static unsigned int ng13[] = {13U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {153U, 0U};
static unsigned int ng16[] = {73U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {65U, 0U};
static unsigned int ng19[] = {31U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {127U, 0U};
static unsigned int ng23[] = {191U, 0U};
static unsigned int ng24[] = {223U, 0U};
static unsigned int ng25[] = {239U, 0U};
static unsigned int ng26[] = {247U, 0U};
static unsigned int ng27[] = {251U, 0U};
static unsigned int ng28[] = {253U, 0U};
static unsigned int ng29[] = {254U, 0U};
static unsigned int ng30[] = {65535U, 0U};



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

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 7040);
    *((int *)t2) = 1;
    t3 = (t0 + 5760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1928);
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

LAB11:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t4, 16, t5, 16);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 16);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18, ng0);

LAB13:    xsi_set_current_line(19, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 16);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2088);
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
    t10 = (t0 + 2088);
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

static void Always_25_1(char *t0)
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

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 7056);
    *((int *)t2) = 1;
    t3 = (t0 + 6008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
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
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 3, t4, 3, t5, 3);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 3);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB12;

}

static void Always_44_2(char *t0)
{
    char t6[8];
    char t17[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    int t33;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 7072);
    *((int *)t2) = 1;
    t3 = (t0 + 6256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng7)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB11;

LAB10:    t19 = (t16 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t15) < *((unsigned int *)t16))
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB13:    t21 = (t17 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB19;

LAB18:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB21:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB27;

LAB26:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB29:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB34:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB37:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB45:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB51;

LAB50:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB53:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB59;

LAB58:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB61:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB67;

LAB66:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB67;

LAB70:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB69:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 3368);
    t14 = (t0 + 3368);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 3208);
    t14 = (t0 + 3208);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 3048);
    t14 = (t0 + 3048);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 2888);
    t14 = (t0 + 2888);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 2408);
    t14 = (t0 + 2408);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3528);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = (t0 + 2248);
    t16 = (t0 + 2248);
    t18 = (t16 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t19, 2, t20, 32, 1);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t33 = (!(t8));
    if (t33 == 1)
        goto LAB88;

LAB89:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(57, ng0);
    t27 = (t0 + 2728);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng8)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 4, t29, 4, t30, 4);
    t32 = (t0 + 2728);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 4);
    goto LAB17;

LAB19:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(58, ng0);
    t16 = (t0 + 2568);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2568);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB25;

LAB27:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 2408);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2408);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB33;

LAB35:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(60, ng0);
    t16 = (t0 + 2248);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB41;

LAB43:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(61, ng0);
    t16 = (t0 + 3368);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB49;

LAB51:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(62, ng0);
    t16 = (t0 + 3208);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 3208);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB57;

LAB59:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(63, ng0);
    t16 = (t0 + 3048);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 3048);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB65;

LAB67:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB69;

LAB71:    xsi_set_current_line(64, ng0);
    t16 = (t0 + 2888);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2888);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB73;

LAB74:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB75;

LAB76:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB77;

LAB78:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB79;

LAB80:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB81;

LAB82:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB83;

LAB84:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB85;

LAB86:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB87;

LAB88:    xsi_vlogvar_assign_value(t15, t6, 0, *((unsigned int *)t17), 1);
    goto LAB89;

}

static void Always_94_3(char *t0)
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
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 7088);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB29:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB30:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB49;

LAB50:
LAB52:
LAB51:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB53:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB54:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t7, 4);
    if (t8 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t8 == 1)
        goto LAB73;

LAB74:
LAB76:
LAB75:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB77:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);

LAB78:    t9 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t9, 4);
    if (t8 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t8 == 1)
        goto LAB97;

LAB98:
LAB100:
LAB99:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB101:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);

LAB102:    t10 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t10, 4);
    if (t8 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t8 == 1)
        goto LAB121;

LAB122:
LAB124:
LAB123:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB125:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);

LAB126:    t11 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t11, 4);
    if (t8 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t10, 4, t2, 4);
    if (t8 == 1)
        goto LAB145;

LAB146:
LAB148:
LAB147:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB149:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);

LAB150:    t12 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t12, 4);
    if (t8 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB161;

LAB162:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB163;

LAB164:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB165;

LAB166:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB167;

LAB168:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t8 == 1)
        goto LAB169;

LAB170:
LAB172:
LAB171:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB173:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);

LAB174:    t13 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t13, 4);
    if (t8 == 1)
        goto LAB175;

LAB176:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB177;

LAB178:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB179;

LAB180:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB181;

LAB182:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB183;

LAB184:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB185;

LAB186:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB187;

LAB188:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB189;

LAB190:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB191;

LAB192:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t8 == 1)
        goto LAB193;

LAB194:
LAB196:
LAB195:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB197:    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);
    t9 = ((char*)((ng8)));
    t10 = (t0 + 3688);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB29;

LAB9:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB11:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB13:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB15:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB17:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB19:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB21:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB23:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB25:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB29;

LAB31:    xsi_set_current_line(111, ng0);
    t7 = ((char*)((ng8)));
    t9 = (t0 + 3848);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB53;

LAB33:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB35:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB37:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB39:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB41:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB43:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB45:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB47:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB49:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB53;

LAB55:    xsi_set_current_line(125, ng0);
    t9 = ((char*)((ng8)));
    t10 = (t0 + 4008);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB77;

LAB57:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB59:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB61:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng13)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB63:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng15)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB65:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng16)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB67:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng18)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB69:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng19)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB71:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB73:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng21)));
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    goto LAB77;

LAB79:    xsi_set_current_line(139, ng0);
    t10 = ((char*)((ng8)));
    t11 = (t0 + 4168);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    goto LAB101;

LAB81:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng10)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB83:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng12)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB85:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng13)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB87:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng15)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB89:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng16)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB91:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng18)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB93:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng19)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB95:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng3)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB97:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng21)));
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    goto LAB101;

LAB103:    xsi_set_current_line(153, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    goto LAB125;

LAB105:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng10)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB107:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng12)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB109:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng13)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB111:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng15)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB113:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng16)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB115:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng18)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB117:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng19)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB119:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng3)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB121:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng21)));
    t10 = (t0 + 4328);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    goto LAB125;

LAB127:    xsi_set_current_line(167, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 4488);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB149;

LAB129:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng10)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB131:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng12)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB133:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng13)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB135:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng15)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB137:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng16)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB139:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng18)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB141:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng19)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB143:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng3)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB145:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng21)));
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    goto LAB149;

LAB151:    xsi_set_current_line(181, ng0);
    t13 = ((char*)((ng8)));
    t14 = (t0 + 4648);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    goto LAB173;

LAB153:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng10)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB155:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng12)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB157:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng13)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB159:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng15)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB161:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng16)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB163:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng18)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB165:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng19)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB167:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng3)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB169:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng21)));
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);
    goto LAB173;

LAB175:    xsi_set_current_line(195, ng0);
    t14 = ((char*)((ng8)));
    t15 = (t0 + 4808);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 8);
    goto LAB197;

LAB177:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng10)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB179:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng12)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB181:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng13)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB183:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng15)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB185:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng16)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB187:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng18)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB189:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng19)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB191:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng3)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

LAB193:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng21)));
    t13 = (t0 + 4808);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);
    goto LAB197;

}

static void Always_209_4(char *t0)
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

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 7104);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(210, ng0);

LAB5:    xsi_set_current_line(211, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(212, ng0);
    t10 = ((char*)((ng22)));
    t11 = (t0 + 4808);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t13, 8, t10, 8);
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 16);
    goto LAB25;

LAB9:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB11:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB13:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB15:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 4168);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB17:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB19:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

LAB21:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 8, t3, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB25;

}


extern void work_m_00000000004075438314_1801416009_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Always_25_1,(void *)Always_44_2,(void *)Always_94_3,(void *)Always_209_4};
	xsi_register_didat("work_m_00000000004075438314_1801416009", "isim/ADS1115_isim_beh.exe.sim/work/m_00000000004075438314_1801416009.didat");
	xsi_register_executes(pe);
}
