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
static const char *ng0 = "/home/ise/Documents/PRACTICA3/Pre1_Comparador.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1366267000076357978_3965413181(char *, char *, char *, char *, char *);


static void work_a_3772726248_3644784444_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4664U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 4664U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4664U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 4664U);
    t5 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4664U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 4664U);
    t5 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(21, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t3 = (t0 + 3024);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 2944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t6 = (t0 + 4716);
    t8 = (t0 + 3024);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 6U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB5:    xsi_set_current_line(19, ng0);
    t6 = (t0 + 4722);
    t8 = (t0 + 3024);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 6U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB7:    xsi_set_current_line(20, ng0);
    t6 = (t0 + 4728);
    t8 = (t0 + 3024);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 6U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

}


extern void work_a_3772726248_3644784444_init()
{
	static char *pe[] = {(void *)work_a_3772726248_3644784444_p_0};
	xsi_register_didat("work_a_3772726248_3644784444", "isim/Pre1_Comparador_isim_beh.exe.sim/work/a_3772726248_3644784444.didat");
	xsi_register_executes(pe);
}
