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
static const char *ng0 = "/home/ise/Documents/ALU_4BIT/prueba.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1306455576397931277_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0569007357_3212880686_p_0(char *t0)
{
    char t5[16];
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
    unsigned char t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 5140);
    t3 = (t0 + 1648U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5016U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5032U);
    t6 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t2, t1, t4, t3);
    t7 = (t0 + 1768U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    memcpy(t7, t6, t11);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 5144);
    t3 = (t0 + 3264);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5016U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5032U);
    t12 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t12 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5160);
    t3 = (t0 + 3264);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 3184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t6 = (t0 + 5148);
    t8 = (t0 + 1648U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t6, 4U);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 5152);
    *((int *)t1) = 1;
    t2 = (t0 + 5156);
    *((int *)t2) = 15;
    t13 = 1;
    t14 = 15;

LAB5:    if (t13 <= t14)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1768U);
    t4 = *((char **)t3);
    t3 = (t0 + 5080U);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5032U);
    t12 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t4, t3, t7, t6);
    if (t12 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 3264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB10:
LAB7:    t1 = (t0 + 5152);
    t13 = *((int *)t1);
    t2 = (t0 + 5156);
    t14 = *((int *)t2);
    if (t13 == t14)
        goto LAB8;

LAB12:    t21 = (t13 + 1);
    t13 = t21;
    t3 = (t0 + 5152);
    *((int *)t3) = t13;
    goto LAB5;

LAB9:    xsi_set_current_line(26, ng0);
    t8 = (t0 + 1768U);
    t9 = *((char **)t8);
    t8 = (t0 + 5080U);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 5032U);
    t17 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t5, t9, t8, t16, t15);
    t18 = (t0 + 1768U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t20 = (t5 + 12U);
    t10 = *((unsigned int *)t20);
    t11 = (1U * t10);
    memcpy(t18, t17, t11);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 5064U);
    t3 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t5, t2, t1, 1);
    t4 = (t0 + 1648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    t7 = (t5 + 12U);
    t10 = *((unsigned int *)t7);
    t11 = (1U * t10);
    memcpy(t4, t3, t11);
    goto LAB10;

}


extern void work_a_0569007357_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0569007357_3212880686_p_0};
	xsi_register_didat("work_a_0569007357_3212880686", "isim/prueba_isim_beh.exe.sim/work/a_0569007357_3212880686.didat");
	xsi_register_executes(pe);
}
