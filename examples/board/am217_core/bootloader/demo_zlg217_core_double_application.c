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
 * \brief bootloader 例程，本demo是作为应用程序固件。
 *
 * - 例程现象：
 *   1. LED灯闪烁，串口循环打印。
 *   2. 等待用户输入升级命令（在应用中升级固件）
 *   
 *
 * \note
 *    固件处理：
 *
 *    打开在ametal/tools/bootloader/固件校验/ 文件夹，目录下有一个bin_chek_sum.bin的执行文件，
 *    将本工程编译出的bin文件拷贝到和bin_chek_sum.bin同一个目录下，
 *    在该目录下打开cmd，在命令行中依次输入：
 *         bin_chek_sum.bin  xxx.bin（编译后的bin文件名称） xxx.bin（目标输出文件，名字任意取）
 *
 *    执行命令后会生成一个由用户自己取名的目标输出文件，这个文件就是需要发送的固件。
 *
 * \internal
 * \par Modification History
 * - 1.00 18-12-18  yrh, first implementation
 * \endinternal
 */

#include "am_appconf_double_zlg217.h"
#include "ametal.h"
#include "am_vdebug.h"
#include "am_led.h"
#include "am_delay.h"
#include "am_boot_enter_check_uart_cmd.h"
#include "am_boot_firmware_recv_uart.h"
#include "am_boot_msg.h"
#include "am_boot_firmware.h"
#include "am_zlg217_inst_init.h"
#include "demo_std_entries.h"

void demo_zlg217_core_double_application_entry (void)
{
    AM_DBG_INFO("application : am217_core application start up successful!\r\n");

    am_uart_handle_t             uart_handle;
    am_boot_firmware_handle_t    firmware_handle;
    am_boot_enter_check_handle_t check_handle;
    am_boot_firwa_recv_handle_t  firwa_recv_handle;
    am_boot_msg_handle_t         msg_handle;
    am_zlg217_boot_inst_init();
    firmware_handle = am_zlg217_boot_firmware_flash_inst_init();

    uart_handle = am_zlg217_uart1_inst_init();
    am_debug_init(uart_handle, 115200);
    firwa_recv_handle = am_boot_firwa_recv_uart_init(firmware_handle, uart_handle);
    check_handle = am_boot_enter_check_uart_cmd_init(uart_handle);
    msg_handle = am_zlg217_boot_msg_flag_inst_init();

    while(1) {
        /* 此demo需要循环调用 */
        demo_std_double_application_entry(
            firwa_recv_handle,
            check_handle,
            msg_handle);

        am_led_toggle(0);
        am_mdelay(1000);
		AM_DBG_INFO("application : am217_core application running!\r\n");
    }
}

/* end of file */
