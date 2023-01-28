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
static const char *ng0 = "F:/Edu/FPGA/alireza_project/RTC6701_spi_controller/top.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1335952598_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(113, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7488);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1335952598_3212880686_p_1(char *t0)
{
    char t17[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7504);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7664);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7728);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7792);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 7856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t5 = (unsigned char)0;

LAB13:    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB20;

LAB21:    t5 = (unsigned char)0;

LAB22:    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = (unsigned char)0;

LAB19:    if (t2 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t1 = (t0 + 12456U);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 1000, 26);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t4, t17);
    if (t2 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 12424U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t6 = (t17 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t2 = (26U != t20);
    if (t2 == 1)
        goto LAB28;

LAB29:    t7 = (t0 + 7984);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t9 + 56U);
    t21 = *((char **)t16);
    memcpy(t21, t4, 26U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8048);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)2);
    if (t10 == 1)
        goto LAB33;

LAB34:    t2 = (unsigned char)0;

LAB35:    if (t2 != 0)
        goto LAB30;

LAB32:
LAB31:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB3;

LAB5:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 7792);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(129, ng0);
    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t3 = t1;
    memset(t3, (unsigned char)2, 26U);
    t4 = (t0 + 7920);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 26U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 7856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t2 = t15;
    goto LAB10;

LAB11:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)3);
    t5 = t13;
    goto LAB13;

LAB14:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 7792);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t3 = t1;
    memset(t3, (unsigned char)2, 26U);
    t4 = (t0 + 7920);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 26U);
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t2 = t15;
    goto LAB19;

LAB20:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t5 = t13;
    goto LAB22;

LAB23:    xsi_set_current_line(144, ng0);
    t6 = (t0 + 3912U);
    t7 = *((char **)t6);
    t6 = (t0 + 12456U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t18, t7, t6, 1);
    t9 = (t18 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t5 = (26U != t20);
    if (t5 == 1)
        goto LAB26;

LAB27:    t16 = (t0 + 7920);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 26U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 7792);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_size_not_matching(26U, t20, 0);
    goto LAB27;

LAB28:    xsi_size_not_matching(26U, t20, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 8112);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t3 = t1;
    memset(t3, (unsigned char)2, 26U);
    t4 = (t0 + 7984);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 26U);
    xsi_driver_first_trans_fast(t4);
    goto LAB31;

LAB33:    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;
    goto LAB35;

LAB36:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t25 = (15 - 25);
    t19 = (t25 * -1);
    t20 = (1U * t19);
    t26 = (0 + t20);
    t1 = (t4 + t26);
    t10 = *((unsigned char *)t1);
    t6 = (t0 + 8176);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    *((unsigned char *)t16) = t10;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t25 = (19 - 25);
    t19 = (t25 * -1);
    t20 = (1U * t19);
    t26 = (0 + t20);
    t1 = (t3 + t26);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB37;

LAB39:    xsi_set_current_line(159, ng0);
    t4 = xsi_get_transient_memory(26U);
    memset(t4, 0, 26U);
    t6 = t4;
    memset(t6, (unsigned char)2, 26U);
    t7 = (t0 + 7984);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t9 + 56U);
    t21 = *((char **)t16);
    memcpy(t21, t4, 26U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 8112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

}

static void work_a_1335952598_3212880686_p_2(char *t0)
{
    char t5[16];
    char t7[16];
    char t14[16];
    char t20[16];
    char t24[16];
    char t28[16];
    char t32[16];
    char t37[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = (t0 + 12723);
    t3 = (t0 + 4072U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_1242562249) + 3000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 12472U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t12 = (t0 + 4232U);
    t13 = *((char **)t12);
    t15 = ((IEEE_P_1242562249) + 3000);
    t16 = (t0 + 12488U);
    t12 = xsi_base_array_concat(t12, t14, t15, (char)97, t3, t5, (char)97, t13, t16, (char)101);
    t17 = (t0 + 4872U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t21 = ((IEEE_P_1242562249) + 3000);
    t17 = xsi_base_array_concat(t17, t20, t21, (char)97, t12, t14, (char)99, t19, (char)101);
    t22 = (t0 + 4712U);
    t23 = *((char **)t22);
    t25 = ((IEEE_P_1242562249) + 3000);
    t26 = (t0 + 12536U);
    t22 = xsi_base_array_concat(t22, t24, t25, (char)97, t17, t20, (char)97, t23, t26, (char)101);
    t29 = ((IEEE_P_1242562249) + 3000);
    t27 = xsi_base_array_concat(t27, t28, t29, (char)97, t22, t24, (char)99, (unsigned char)2, (char)101);
    t30 = (t0 + 4392U);
    t31 = *((char **)t30);
    t33 = ((IEEE_P_1242562249) + 3000);
    t34 = (t0 + 12504U);
    t30 = xsi_base_array_concat(t30, t32, t33, (char)97, t27, t28, (char)97, t31, t34, (char)101);
    t35 = (t0 + 4552U);
    t36 = *((char **)t35);
    t38 = ((IEEE_P_1242562249) + 3000);
    t39 = (t0 + 12520U);
    t35 = xsi_base_array_concat(t35, t37, t38, (char)97, t30, t32, (char)97, t36, t39, (char)101);
    t11 = (8U + 11U);
    t40 = (t11 + 2U);
    t41 = (t40 + 1U);
    t42 = (t41 + 5U);
    t43 = (t42 + 1U);
    t44 = (t43 + 2U);
    t45 = (t44 + 2U);
    t46 = (32U != t45);
    if (t46 == 1)
        goto LAB5;

LAB6:    t47 = (t0 + 8240);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t35, 32U);
    xsi_driver_first_trans_fast(t47);

LAB2:    t52 = (t0 + 7520);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t45, 0);
    goto LAB6;

}


extern void work_a_1335952598_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1335952598_3212880686_p_0,(void *)work_a_1335952598_3212880686_p_1,(void *)work_a_1335952598_3212880686_p_2};
	xsi_register_didat("work_a_1335952598_3212880686", "isim/tb_isim_beh.exe.sim/work/a_1335952598_3212880686.didat");
	xsi_register_executes(pe);
}
