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
    work_m_00000000003422696642_2964965119_init();
    work_m_00000000001905332653_4046816744_init();
    work_m_00000000000927383669_1411027795_init();
    work_m_00000000000583856194_2686799328_init();
    work_m_00000000003873452038_3148100417_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003873452038_3148100417");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
