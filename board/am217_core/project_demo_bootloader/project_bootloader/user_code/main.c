/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief ZLG217 bootloader����
 *
 * \internal
 * \par Modification history
 * - 1.00 19-01-24  yrh, first implementation
 * \endinternal
 */


#include "ametal.h"
#include "am_board.h"
#include "am_vdebug.h"
#include "am_delay.h"
#include "am_gpio.h"
#include "demo_am217_core_entries.h"

int am_main (void)
{
    demo_zlg217_core_double_bootloader_uart_entry();

    while (1) {

    }
}

/* end of file */
