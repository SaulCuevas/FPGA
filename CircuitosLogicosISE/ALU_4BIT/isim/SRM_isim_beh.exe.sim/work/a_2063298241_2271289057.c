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
static const char *ng0 = "/home/ise/Documents/ALU_4BIT/SRM.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1306455576397931277_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_2063298241_2271289057_p_0(char *t0)
{
    char t5[16];
    char t21[16];
    char t23[16];
    char t31[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 5612);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 8U);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5480U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5480U);
    t6 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t2, t1, t4, t3);
    t7 = (t0 + 2088U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    memcpy(t7, t6, t11);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3584);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5620);
    t12 = xsi_mem_cmp(t1, t2, 2U);
    if (t12 == 1)
        goto LAB3;

LAB8:    t4 = (t0 + 5622);
    t13 = xsi_mem_cmp(t4, t2, 2U);
    if (t13 == 1)
        goto LAB4;

LAB9:    t7 = (t0 + 5624);
    t14 = xsi_mem_cmp(t7, t2, 2U);
    if (t14 == 1)
        goto LAB5;

LAB10:    t9 = (t0 + 5626);
    t16 = xsi_mem_cmp(t9, t2, 2U);
    if (t16 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5684);
    t3 = (t0 + 3648);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3504);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(30, ng0);
    t17 = (t0 + 5628);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 3;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (3 - 0);
    t10 = (t26 * 1);
    t10 = (t10 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t10;
    t25 = (t0 + 5480U);
    t19 = xsi_base_array_concat(t19, t21, t22, (char)97, t17, t23, (char)97, t20, t25, (char)101);
    t27 = (t0 + 5632);
    t29 = (t0 + 1192U);
    t30 = *((char **)t29);
    t32 = ((IEEE_P_2592010699) + 4000);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t10 = (t36 * 1);
    t10 = (t10 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t10;
    t35 = (t0 + 5480U);
    t29 = xsi_base_array_concat(t29, t31, t32, (char)97, t27, t33, (char)97, t30, t35, (char)101);
    t37 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t19, t21, t29, t31);
    t38 = (t5 + 12U);
    t10 = *((unsigned int *)t38);
    t11 = (1U * t10);
    t39 = (8U != t11);
    if (t39 == 1)
        goto LAB13;

LAB14:    t40 = (t0 + 3648);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t37, 8U);
    xsi_driver_first_trans_fast_port(t40);
    goto LAB2;

LAB4:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5480U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5480U);
    t39 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t39 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 3584);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5644);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t23 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t10 = (t12 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 5480U);
    t3 = xsi_base_array_concat(t3, t21, t6, (char)97, t1, t23, (char)97, t4, t8, (char)101);
    t9 = (t0 + 5648);
    t17 = (t0 + 1032U);
    t18 = *((char **)t17);
    t19 = ((IEEE_P_2592010699) + 4000);
    t20 = (t33 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 0;
    t22 = (t20 + 4U);
    *((int *)t22) = 3;
    t22 = (t20 + 8U);
    *((int *)t22) = 1;
    t13 = (3 - 0);
    t10 = (t13 * 1);
    t10 = (t10 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t10;
    t22 = (t0 + 5480U);
    t17 = xsi_base_array_concat(t17, t31, t19, (char)97, t9, t33, (char)97, t18, t22, (char)101);
    t24 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t3, t21, t17, t31);
    t25 = (t5 + 12U);
    t10 = *((unsigned int *)t25);
    t11 = (1U * t10);
    t39 = (8U != t11);
    if (t39 == 1)
        goto LAB20;

LAB21:    t27 = (t0 + 3648);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    memcpy(t32, t24, 8U);
    xsi_driver_first_trans_fast_port(t27);

LAB16:    goto LAB2;

LAB5:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5480U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5480U);
    t6 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t5, t2, t1, t4, t3);
    t7 = (t5 + 12U);
    t10 = *((unsigned int *)t7);
    t11 = (1U * t10);
    t39 = (8U != t11);
    if (t39 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 3648);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 5652);
    t3 = (t0 + 3648);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5480U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5480U);
    t39 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t39 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 5676);
    t3 = (t0 + 3648);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB25:    goto LAB2;

LAB12:;
LAB13:    xsi_size_not_matching(8U, t11, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(32, ng0);
    t6 = (t0 + 3584);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5636);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t23 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t10 = (t12 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 5480U);
    t3 = xsi_base_array_concat(t3, t21, t6, (char)97, t1, t23, (char)97, t4, t8, (char)101);
    t9 = (t0 + 5640);
    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t19 = ((IEEE_P_2592010699) + 4000);
    t20 = (t33 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 0;
    t22 = (t20 + 4U);
    *((int *)t22) = 3;
    t22 = (t20 + 8U);
    *((int *)t22) = 1;
    t13 = (3 - 0);
    t10 = (t13 * 1);
    t10 = (t10 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t10;
    t22 = (t0 + 5480U);
    t17 = xsi_base_array_concat(t17, t31, t19, (char)97, t9, t33, (char)97, t18, t22, (char)101);
    t24 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t3, t21, t17, t31);
    t25 = (t5 + 12U);
    t10 = *((unsigned int *)t25);
    t11 = (1U * t10);
    t39 = (8U != t11);
    if (t39 == 1)
        goto LAB18;

LAB19:    t27 = (t0 + 3648);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    memcpy(t32, t24, 8U);
    xsi_driver_first_trans_fast_port(t27);
    goto LAB16;

LAB18:    xsi_size_not_matching(8U, t11, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(8U, t11, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(8U, t11, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(40, ng0);
    t6 = (t0 + 5660);
    t8 = (t0 + 1968U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t6, 8U);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 5668);
    *((int *)t1) = 1;
    t2 = (t0 + 5672);
    *((int *)t2) = 15;
    t12 = 1;
    t13 = 15;

LAB27:    if (t12 <= t13)
        goto LAB28;

LAB30:    goto LAB25;

LAB28:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2088U);
    t4 = *((char **)t3);
    t3 = (t0 + 5544U);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5480U);
    t39 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t4, t3, t7, t6);
    if (t39 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 3648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB32:
LAB29:    t1 = (t0 + 5668);
    t12 = *((int *)t1);
    t2 = (t0 + 5672);
    t13 = *((int *)t2);
    if (t12 == t13)
        goto LAB30;

LAB34:    t14 = (t12 + 1);
    t12 = t14;
    t3 = (t0 + 5668);
    *((int *)t3) = t12;
    goto LAB27;

LAB31:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 2088U);
    t9 = *((char **)t8);
    t8 = (t0 + 5544U);
    t15 = (t0 + 1192U);
    t17 = *((char **)t15);
    t15 = (t0 + 5480U);
    t18 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t9, t8, t17, t15);
    t19 = (t0 + 2088U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    t22 = (t5 + 12U);
    t10 = *((unsigned int *)t22);
    t11 = (1U * t10);
    memcpy(t19, t18, t11);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 5528U);
    t3 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t5, t2, t1, 1);
    t4 = (t0 + 1968U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    t7 = (t5 + 12U);
    t10 = *((unsigned int *)t7);
    t11 = (1U * t10);
    memcpy(t4, t3, t11);
    goto LAB32;

}


extern void work_a_2063298241_2271289057_init()
{
	static char *pe[] = {(void *)work_a_2063298241_2271289057_p_0};
	xsi_register_didat("work_a_2063298241_2271289057", "isim/SRM_isim_beh.exe.sim/work/a_2063298241_2271289057.didat");
	xsi_register_executes(pe);
}
