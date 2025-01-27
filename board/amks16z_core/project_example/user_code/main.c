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
 * \brief AMKS16RFID 例程工程
 *
 * - 操作步骤：
 *   1. 取消屏蔽需要使用的例程。
 *
 * \note
 *    同一时刻只能使用一个例程。
 *	
 * \internal
 * \par Modification history
 * - 1.00 18-12-04  htf, first implementation
 * \endinternal
 */
#include "ametal.h"
#include "am_led.h"
#include "am_delay.h"
#include "am_vdebug.h"
#include "am_board.h"
#include "demo_amks16rfid_entries.h"
#include "demo_amks16z_core_all_entries.h"

/**
 * \brief AMetal 应用程序入口
 */
int am_main (void)
{
    AM_DBG_INFO("Start up successful!\r\n");
    /*
     * 以下为所有demo的入口函数，需要运行哪个 demo， 就取消对应函数调用行的注释
     *
     * 默认运行的是LED闪烁 demo。
     *
     * 注意：同一时刻只能运行一个 demo，即只能使某一行处于取消注释状态。
     */
//    demo_amks16z_core_std_led_entry();
//    demo_amks16z_core_hw_adc_int_entry();
//    demo_amks16z_core_hw_adc_poll_entry();
//    demo_amks16z_core_std_adc_descs_st_entry();
//    demo_amks16z_core_std_adc_dif_st_entry();
//    demo_amks16z_core_std_adc_st_entry();
//    demo_amks16z_core_hw_bme_deco_loads_entry();
//    demo_amks16z_core_hw_bme_deco_stores_gpio_entry();
//    demo_amks16z_core_hw_bme_deco_stores_entry();
//    demo_amks16z_core_std_buzzer_entry();
//    demo_amks16z_core_hw_cmp_int_entry();
//    demo_amks16z_core_hw_dac_buf_int_entry();
//    demo_amks16z_core_hw_dac_dma_st_entry();
//    demo_amks16z_core_hw_dac_entry();
//    demo_amks16z_core_std_dac_entry();
//    demo_amks16z_core_dr_dma_m2m_entry();
//    demo_amks16z_core_dr_ftfa_entry();
//    demo_amks16z_core_hw_ftfa_entry();
//    demo_amks16z_core_hw_fgpio_entry();
//    demo_amks16z_core_hw_gpio_int_entry();
//    demo_amks16z_core_hw_gpio_entry();
//    demo_amks16z_core_std_gpio_trigger_entry();
//    demo_amks16z_core_std_gpio_entry();
//    demo_amks16z_core_hw_i2c_master_poll_entry();
//    demo_amks16z_core_std_i2c_lm75_entry();
//    demo_amks16z_core_hw_i2s_dma_entry();
//    demo_amks16z_core_hw_i2s_int_entry();
//    demo_amks16z_core_hw_i2s_polling_entry();
//    demo_amks16z_core_hw_lptmr_timing_entry();
//    demo_amks16z_core_std_lptmr_timing_entry();
//    demo_amks16z_core_hw_pit_1_32bit_timing_entry();
//    demo_amks16z_core_std_pit_1_32bit_timing_entry();
//    demo_amks16z_core_std_pit_2_64bit_timing_entry();
//    demo_amks16z_core_std_pmu_lowpower_entry();
//    demo_amks16z_core_hw_rtc_sec_int_entry();
//    demo_amks16z_core_std_rtc_entry();
//    demo_amks16z_core_hw_backdoor_sec_entry();
//    demo_amks16z_core_hw_sim_uid_entry();
//    demo_amks16z_core_hw_spi_master_entry();
//    demo_amks16z_core_hw_spi_slave_irq_entry();
//    demo_amks16z_core_hw_spi_slave_match_entry();
//    demo_amks16z_core_hw_spi_slave_entry();
//    demo_amks16z_core_std_spi_flash_dma_entry();
//    demo_amks16z_core_std_spi_flash_int_entry();
//    demo_amks16z_core_std_spi_master_dma_entry();
//    demo_amks16z_core_std_spi_master_int_entry();
//    demo_amks16z_core_hw_tpm_cap_entry();
//    demo_amks16z_core_hw_tpm_pwm_entry();
//    demo_amks16z_core_hw_tpm_timing_entry();
//    demo_amks16z_core_std_tpm_cap_entry();
//    demo_amks16z_core_std_tpm_pwm_entry();
//    demo_amks16z_core_std_tpm_timing_entry();
//    demo_amks16z_core_dr_tsi_int_entry();
//    demo_amks16z_core_hw_tsi_int_entry();
//    demo_amks16z_core_hw_tsi_entry();
//    demo_amks16z_core_hw_uart_int_entry();
//    demo_amks16z_core_hw_uart_polling_entry();
//    demo_amks16z_core_hw_uart_rx_dma_entry();
//    demo_amks16z_core_hw_uart_tx_dma_entry();
//    demo_amks16z_core_std_uart_polling_entry();
//    demo_amks16z_core_std_uart_ringbuf_entry();
    demo_amks16z_core_std_uart_dma_polling_entry();
    demo_amks16z_core_std_uart_dma_ringbuf_entry();
//    demo_amks16z_core_microport_ds1302_entry();
//    demo_amks16z_core_microport_eeprom_nvram_entry();
//    demo_amks16z_core_microport_eeprom_entry();
//    demo_amks16z_core_microport_flash_ftl_entry();
//    demo_amks16z_core_microport_flash_mtd_entry();
//    demo_amks16z_core_microport_flash_entry();
//    demo_amks16z_core_microport_rs485_entry();
//    demo_amks16z_core_microport_rtc_entry();
//    demo_amks16z_core_microport_rx8025t_entry();
//    demo_amks16z_core_microport_usb_entry();
//    demo_amks16z_core_miniport_digitron_entry();
//    demo_amks16z_core_miniport_hc595_digitron_key_entry();
//    demo_amks16z_core_miniport_hc595_digitron_temp_entry();
//    demo_amks16z_core_miniport_hc595_digitron_entry();
//    demo_amks16z_core_miniport_hc595_led_entry();
//    demo_amks16z_core_miniport_key_digitron_entry();
//    demo_amks16z_core_miniport_key_entry();
//    demo_amks16z_core_miniport_led_entry();
//    demo_amks16z_core_miniport_zlg72128_entry();
//    demo_amks16z_core_hw_wdt_entry();
//    demo_amks16z_core_std_wdt_entry();
    /*
     * 以下demo为amks16rfid板特有demo
     */
//    demo_amks16rfid_dr_fm175xx_lpcd_read_id();
//    demo_amks16rfid_dr_fm175xx_picca_halt();
//    demo_amks16rfid_dr_fm175xx_picca_read_block();
//    demo_amks16rfid_dr_fm175xx_picca_read_id();
//    demo_amks16rfid_dr_fm11rf005m_operate();
//    demo_amks16rfid_dr_fm175xx_picca_val_operate();
//    demo_amks16rfid_dr_fm175xx_picca_write_block();
//    demo_amks16rfid_dr_fm175xx_piccb_read_id();
    while (1) {
    }
}
