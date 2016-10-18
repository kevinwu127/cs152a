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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001018758545_1837935410_init();
    work_m_00000000003854979852_4102421128_init();
    work_m_00000000000899360275_3975163831_init();
    work_m_00000000003854979852_1979285005_init();
    work_m_00000000002718628488_2964965119_init();
    work_m_00000000003459926971_1411027795_init();
    work_m_00000000002056233733_2908904151_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002056233733_2908904151");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
