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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/PF/Guante/BINaBCD.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {7, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {12499999U, 0U};
static unsigned int ng8[] = {48U, 0U};
static unsigned int ng9[] = {1U, 0U};



static void Always_19_0(char *t0)
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
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

LAB7:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(28, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
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
LAB17:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
LAB25:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
LAB33:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
LAB41:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(34, ng0);
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
    t18 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(36, ng0);
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
    t18 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(38, ng0);
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
    t18 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t16, 2, t18, 32, 1);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t33 = (!(t23));
    if (t33 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 2888);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = (t0 + 2248);
    t16 = (t0 + 2248);
    t18 = (t16 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t19, 2, t20, 32, 1);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t33 = (!(t8));
    if (t33 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(28, ng0);
    t27 = (t0 + 2728);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 4, t29, 4, t30, 4);
    t32 = (t0 + 2728);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 4);
    goto LAB17;

LAB19:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(29, ng0);
    t16 = (t0 + 2568);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2568);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB25;

LAB27:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(30, ng0);
    t16 = (t0 + 2408);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2408);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB33;

LAB35:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(31, ng0);
    t16 = (t0 + 2248);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 4, t19, 4, t20, 4);
    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 4);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB45;

LAB46:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t17), 1);
    goto LAB47;

LAB48:    xsi_vlogvar_assign_value(t15, t6, 0, *((unsigned int *)t17), 1);
    goto LAB49;

}

static void Always_45_1(char *t0)
{
    char t8[8];
    char t34[8];
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
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3048);
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

LAB11:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 24, t4, 24, t5, 24);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 24, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng8)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t32, 4, t33, 8);
    t35 = (t0 + 1608);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 4, t5, 8);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 4, t5, 8);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 4, t5, 8);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB12;

}


extern void work_m_00000000001680475041_2210838485_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000001680475041_2210838485", "isim/ADS1115_isim_beh.exe.sim/work/m_00000000001680475041_2210838485.didat");
	xsi_register_executes(pe);
}
