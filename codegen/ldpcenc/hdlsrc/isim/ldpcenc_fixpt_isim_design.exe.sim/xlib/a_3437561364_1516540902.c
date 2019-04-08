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
static const char *ng0 = "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcenc/hdlsrc/ldpcenc_fixpt.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2423793367844140314_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_875668032861425848_1035706684(char *, char *, char *, char *, int );


static void xlib_a_3437561364_1516540902_p_0(char *t0)
{
    char t5[16];
    char t15[16];
    char t16[16];
    char t18[16];
    char t49[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 8538);
    *((int *)t1) = 0;
    t2 = (t0 + 8542);
    *((int *)t2) = 6;
    t3 = 0;
    t4 = 6;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    t1 = (t0 + 4104);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(82, ng0);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 4);
    t7 = (t0 + 1608U);
    t8 = *((char **)t7);
    t7 = (t0 + 8538);
    t9 = *((int *)t7);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t7));
    t12 = (4U * t11);
    t13 = (0 + t12);
    t14 = (t8 + t13);
    memcpy(t14, t6, 4U);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8546);
    *((int *)t1) = 0;
    t2 = (t0 + 8550);
    *((int *)t2) = 3;
    t9 = 0;
    t10 = 3;

LAB6:    if (t9 <= t10)
        goto LAB7;

LAB9:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (4U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 3);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t5, t6, t15, 8);
    t14 = (t0 + 1728U);
    t17 = *((char **)t14);
    t14 = (t0 + 8538);
    t24 = *((int *)t14);
    t30 = (t24 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t14));
    t32 = (8U * t27);
    t33 = (0 + t32);
    t19 = (t17 + t33);
    t20 = (t5 + 12U);
    t35 = *((unsigned int *)t20);
    t35 = (t35 * 1U);
    memcpy(t19, t8, t35);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (8U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 7);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t8 = ieee_p_1242562249_sub_875668032861425848_1035706684(IEEE_P_1242562249, t5, t6, t15, 1);
    t14 = (t0 + 2328U);
    t17 = *((char **)t14);
    t14 = (t0 + 8538);
    t24 = *((int *)t14);
    t30 = (t24 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t14));
    t32 = (8U * t27);
    t33 = (0 + t32);
    t19 = (t17 + t33);
    t20 = (t5 + 12U);
    t35 = *((unsigned int *)t20);
    t38 = (1U * t35);
    memcpy(t19, t8, t38);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (8U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 7);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t5, t6, t15, 9);
    t14 = (t0 + 2448U);
    t17 = *((char **)t14);
    t14 = (t0 + 8538);
    t24 = *((int *)t14);
    t30 = (t24 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t14));
    t32 = (9U * t27);
    t33 = (0 + t32);
    t19 = (t17 + t33);
    t20 = (t5 + 12U);
    t35 = *((unsigned int *)t20);
    t35 = (t35 * 1U);
    memcpy(t19, t8, t35);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (9U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t8 = ((IEEE_P_1242562249) + 3080);
    t14 = (t16 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 8;
    t17 = (t14 + 4U);
    *((int *)t17) = 0;
    t17 = (t14 + 8U);
    *((int *)t17) = -1;
    t23 = (0 - 8);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t27;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)97, t6, t16, (char)99, (unsigned char)2, (char)101);
    t17 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t5, t7, t15, 41);
    t19 = (t0 + 2568U);
    t20 = *((char **)t19);
    t19 = (t0 + 8538);
    t24 = *((int *)t19);
    t30 = (t24 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t19));
    t32 = (41U * t27);
    t33 = (0 + t32);
    t21 = (t20 + t33);
    t22 = (t5 + 12U);
    t35 = *((unsigned int *)t22);
    t35 = (t35 * 1U);
    memcpy(t21, t17, t35);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t11 = (40 - 31);
    t12 = (t11 * 1U);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t13 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t27 = (41U * t13);
    t32 = (0 + t27);
    t33 = (t32 + t12);
    t6 = (t2 + t33);
    t7 = (t0 + 2688U);
    t8 = *((char **)t7);
    t7 = (t0 + 8538);
    t23 = *((int *)t7);
    t24 = (t23 - 0);
    t35 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t7));
    t38 = (32U * t35);
    t39 = (0 + t38);
    t14 = (t8 + t39);
    memcpy(t14, t6, 32U);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t11 = (31 - 7);
    t12 = (t11 * 1U);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t13 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t27 = (32U * t13);
    t32 = (0 + t27);
    t33 = (t32 + t12);
    t6 = (t2 + t33);
    t7 = (t0 + 2808U);
    t8 = *((char **)t7);
    t7 = (t0 + 8538);
    t23 = *((int *)t7);
    t24 = (t23 - 0);
    t35 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t7));
    t38 = (8U * t35);
    t39 = (0 + t38);
    t14 = (t8 + t39);
    memcpy(t14, t6, 8U);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t9 = *((int *)t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (8U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 7);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t8 = (t0 + 2808U);
    t14 = *((char **)t8);
    t8 = (t0 + 8538);
    t24 = *((int *)t8);
    t30 = (t24 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t8));
    t32 = (8U * t27);
    t33 = (0 + t32);
    t17 = (t14 + t33);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 7;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t31 = (0 - 7);
    t35 = (t31 * -1);
    t35 = (t35 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t35;
    t20 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t5, t6, t15, t17, t16);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    t21 = (t0 + 8538);
    t34 = *((int *)t21);
    t36 = (t34 - 0);
    t35 = (t36 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t21));
    t38 = (8U * t35);
    t39 = (0 + t38);
    t25 = (t22 + t39);
    t26 = (t5 + 12U);
    t45 = *((unsigned int *)t26);
    t46 = (1U * t45);
    memcpy(t25, t20, t46);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1848U);
    t2 = *((char **)t1);
    t9 = (0 - 7);
    t11 = (t9 * -1);
    t12 = (1U * t11);
    t1 = (t0 + 8538);
    t10 = *((int *)t1);
    t23 = (t10 - 0);
    t13 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t27 = (8U * t13);
    t32 = (0 + t27);
    t33 = (t32 + t12);
    t6 = (t2 + t33);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 8538);
    t24 = *((int *)t7);
    t30 = (t24 - 0);
    t35 = (t30 * 1);
    t38 = (1 * t35);
    t39 = (0U + t38);
    t8 = (t0 + 4184);
    t14 = (t8 + 56U);
    t17 = *((char **)t14);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t28;
    xsi_driver_first_trans_delta(t8, t39, 1, 0LL);

LAB4:    t1 = (t0 + 8538);
    t3 = *((int *)t1);
    t2 = (t0 + 8542);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB14:    t9 = (t3 + 1);
    t3 = t9;
    t6 = (t0 + 8538);
    *((int *)t6) = t3;
    goto LAB2;

LAB7:    xsi_set_current_line(85, ng0);
    t6 = (t0 + 8538);
    t7 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t15, *((int *)t6), 32);
    t14 = ((IEEE_P_1242562249) + 3080);
    t8 = xsi_base_array_concat(t8, t16, t14, (char)97, t7, t15, (char)99, (unsigned char)2, (char)101);
    t19 = ((IEEE_P_1242562249) + 3080);
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t8, t16, (char)99, (unsigned char)2, (char)101);
    t20 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t5, t17, t18, 64);
    t21 = (t0 + 1968U);
    t22 = *((char **)t21);
    t21 = (t0 + 8546);
    t23 = *((int *)t21);
    t24 = (t23 - 0);
    t11 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t21));
    t12 = (64U * t11);
    t13 = (0 + t12);
    t25 = (t22 + t13);
    t26 = (t5 + 12U);
    t27 = *((unsigned int *)t26);
    t27 = (t27 * 1U);
    memcpy(t25, t20, t27);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 8546);
    t23 = *((int *)t1);
    t24 = (t23 - 0);
    t11 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t12 = (1U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t28 = *((unsigned char *)t6);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 8546);
    t23 = *((int *)t1);
    t24 = (t23 - 0);
    t11 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t12 = (1U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    *((unsigned char *)t6) = (unsigned char)2;

LAB11:    xsi_set_current_line(91, ng0);
    t2 = ((IEEE_P_1242562249) + 2976);
    t1 = xsi_base_array_concat(t1, t5, t2, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t7 = ((IEEE_P_1242562249) + 2976);
    t6 = xsi_base_array_concat(t6, t15, t7, (char)97, t1, t5, (char)99, (unsigned char)2, (char)101);
    t14 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t16, t14, (char)97, t6, t15, (char)99, (unsigned char)2, (char)101);
    t17 = (t0 + 2088U);
    t19 = *((char **)t17);
    t17 = (t0 + 8546);
    t23 = *((int *)t17);
    t24 = (t23 - 0);
    t11 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t17));
    t12 = (1U * t11);
    t13 = (0 + t12);
    t20 = (t19 + t13);
    t28 = *((unsigned char *)t20);
    t22 = ((IEEE_P_1242562249) + 2976);
    t21 = xsi_base_array_concat(t21, t18, t22, (char)97, t8, t16, (char)99, t28, (char)101);
    t25 = (t0 + 2208U);
    t26 = *((char **)t25);
    t25 = (t0 + 8546);
    t30 = *((int *)t25);
    t31 = (t30 - 0);
    t27 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t25));
    t32 = (5U * t27);
    t33 = (0 + t32);
    t41 = (t26 + t33);
    t35 = (1U + 1U);
    t38 = (t35 + 1U);
    t39 = (t38 + 1U);
    t45 = (t39 + 1U);
    memcpy(t41, t21, t45);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t0 + 8538);
    t23 = *((int *)t1);
    t24 = (t23 - 0);
    t11 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t1));
    t12 = (4U * t11);
    t13 = (0 + t12);
    t6 = (t2 + t13);
    t7 = (t18 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t30 = (0 - 3);
    t27 = (t30 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t16, t6, t18, 5);
    t14 = (t0 + 2208U);
    t17 = *((char **)t14);
    t14 = (t0 + 8546);
    t31 = *((int *)t14);
    t34 = (t31 - 0);
    t27 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t14));
    t32 = (5U * t27);
    t33 = (0 + t32);
    t19 = (t17 + t33);
    t20 = (t49 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 4;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t36 = (0 - 4);
    t35 = (t36 * -1);
    t35 = (t35 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t35;
    t21 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t15, t8, t16, t19, t49);
    t22 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t5, t21, t15, 4);
    t25 = (t0 + 1608U);
    t26 = *((char **)t25);
    t25 = (t0 + 8538);
    t37 = *((int *)t25);
    t43 = (t37 - 0);
    t35 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, *((int *)t25));
    t38 = (4U * t35);
    t39 = (0 + t38);
    t41 = (t26 + t39);
    t42 = (t5 + 12U);
    t45 = *((unsigned int *)t42);
    t45 = (t45 * 1U);
    memcpy(t41, t22, t45);

LAB8:    t1 = (t0 + 8546);
    t9 = *((int *)t1);
    t2 = (t0 + 8550);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB9;

LAB13:    t23 = (t9 + 1);
    t9 = t23;
    t6 = (t0 + 8546);
    *((int *)t6) = t9;
    goto LAB6;

LAB10:    xsi_set_current_line(87, ng0);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t7 = (t0 + 8546);
    t14 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t15, *((int *)t7), 32);
    t17 = (t0 + 1968U);
    t19 = *((char **)t17);
    t17 = (t0 + 8546);
    t30 = *((int *)t17);
    t31 = (t30 - 0);
    t27 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t17));
    t32 = (64U * t27);
    t33 = (0 + t32);
    t20 = (t19 + t33);
    t21 = (t18 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 63;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t34 = (0 - 63);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t35;
    t22 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t16, t20, t18, 32);
    t25 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t5, t14, t15, t22, t16);
    t36 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t25, t5);
    t37 = (t36 - 0);
    t35 = (t37 * 1);
    xsi_vhdl_check_range_of_index(0, 27, 1, t36);
    t38 = (1U * t35);
    t39 = (0 + t38);
    t26 = (t8 + t39);
    t40 = *((unsigned char *)t26);
    t41 = (t0 + 2088U);
    t42 = *((char **)t41);
    t41 = (t0 + 8546);
    t43 = *((int *)t41);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t41));
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t42 + t47);
    *((unsigned char *)t48) = t40;
    goto LAB11;

}


extern void xlib_a_3437561364_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_3437561364_1516540902_p_0};
	xsi_register_didat("xlib_a_3437561364_1516540902", "isim/ldpcenc_fixpt_isim_design.exe.sim/xlib/a_3437561364_1516540902.didat");
	xsi_register_executes(pe);
}
