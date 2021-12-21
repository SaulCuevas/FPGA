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
static const char *ng0 = "C:/Users/saulc/Documents/DispLogicosISE/PF/Guante/INTESC_LCD_8BITS_RevD/LIB_LCD_INTESC_REVD.vhd";
extern char *WORK_P_2895467221;

char *work_p_2895467221_sub_2268750232_3074577202(char *, char *, char *);
char *work_p_2895467221_sub_3148190933_3074577202(char *, char *, int );
char *work_p_2895467221_sub_3369438751_3074577202(char *, char *, int );
char *work_p_2895467221_sub_3835084776_3074577202(char *, char *, int );
char *work_p_2895467221_sub_3993076050_3074577202(char *, char *, char *);
char *work_p_2895467221_sub_519255793_3074577202(char *, char *, int , int );


static void work_a_3656478702_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(294, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t4);
    t7 = (9U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 11480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 9U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 11272);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3656478702_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(303, ng0);

LAB3:    t2 = (t0 + 20884);
    t4 = work_p_2895467221_sub_2268750232_3074577202(WORK_P_2895467221, t1, t2);
    t5 = (9U != 9U);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 11544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 9U);
    xsi_driver_first_trans_delta(t6, 0U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, 9U, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(304, ng0);

LAB3:    t2 = work_p_2895467221_sub_519255793_3074577202(WORK_P_2895467221, t1, 1, 1);
    t3 = (9U != 9U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 11608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_delta(t4, 9U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, 9U, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_3(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(310, ng0);

LAB3:    t2 = work_p_2895467221_sub_3835084776_3074577202(WORK_P_2895467221, t1, 1);
    t3 = (9U != 9U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 11672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_delta(t4, 18U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, 9U, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(311, ng0);

LAB3:    t2 = work_p_2895467221_sub_519255793_3074577202(WORK_P_2895467221, t1, 2, 6);
    t3 = (9U != 9U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 11736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_delta(t4, 27U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, 9U, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(312, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 11800);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 36U, 9U, 0LL);

LAB2:    t12 = (t0 + 11288);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(313, ng0);

LAB3:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 11864);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 45U, 9U, 0LL);

LAB2:    t12 = (t0 + 11304);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_7(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(314, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 11928);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 54U, 9U, 0LL);

LAB2:    t12 = (t0 + 11320);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_8(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(315, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 11992);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 63U, 9U, 0LL);

LAB2:    t12 = (t0 + 11336);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_9(char *t0)
{
    char t1[16];
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(316, ng0);

LAB3:    t2 = (t0 + 20886);
    t4 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (9U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 12056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 9U);
    xsi_driver_first_trans_delta(t8, 72U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t6, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_10(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(317, ng0);

LAB3:    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 12120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 81U, 9U, 0LL);

LAB2:    t12 = (t0 + 11352);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_11(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(318, ng0);

LAB3:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 12184);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 90U, 9U, 0LL);

LAB2:    t12 = (t0 + 11368);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_12(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(319, ng0);

LAB3:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 12248);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 99U, 9U, 0LL);

LAB2:    t12 = (t0 + 11384);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_13(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(320, ng0);

LAB3:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = work_p_2895467221_sub_3993076050_3074577202(WORK_P_2895467221, t1, t3);
    t4 = (t1 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t6 = (9U != t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 12312);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_delta(t7, 108U, 9U, 0LL);

LAB2:    t12 = (t0 + 11400);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t5, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_14(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(321, ng0);

LAB3:    t2 = work_p_2895467221_sub_3148190933_3074577202(WORK_P_2895467221, t1, 1);
    t3 = (t1 + 12U);
    t4 = *((unsigned int *)t3);
    t4 = (t4 * 1U);
    t5 = (9U != t4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 12376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_delta(t6, 117U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t4, 0);
    goto LAB6;

}

static void work_a_3656478702_3212880686_p_15(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(323, ng0);

LAB3:    t2 = work_p_2895467221_sub_3369438751_3074577202(WORK_P_2895467221, t1, 1);
    t3 = (t1 + 12U);
    t4 = *((unsigned int *)t3);
    t4 = (t4 * 1U);
    t5 = (9U != t4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 12440);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_delta(t6, 126U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t4, 0);
    goto LAB6;

}


extern void work_a_3656478702_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3656478702_3212880686_p_0,(void *)work_a_3656478702_3212880686_p_1,(void *)work_a_3656478702_3212880686_p_2,(void *)work_a_3656478702_3212880686_p_3,(void *)work_a_3656478702_3212880686_p_4,(void *)work_a_3656478702_3212880686_p_5,(void *)work_a_3656478702_3212880686_p_6,(void *)work_a_3656478702_3212880686_p_7,(void *)work_a_3656478702_3212880686_p_8,(void *)work_a_3656478702_3212880686_p_9,(void *)work_a_3656478702_3212880686_p_10,(void *)work_a_3656478702_3212880686_p_11,(void *)work_a_3656478702_3212880686_p_12,(void *)work_a_3656478702_3212880686_p_13,(void *)work_a_3656478702_3212880686_p_14,(void *)work_a_3656478702_3212880686_p_15};
	xsi_register_didat("work_a_3656478702_3212880686", "isim/ADS1115_isim_beh.exe.sim/work/a_3656478702_3212880686.didat");
	xsi_register_executes(pe);
}
