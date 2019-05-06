/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2017 Guangzhou ZHIYUAN Electronics Stock Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
* e-mail:      ametal.support@zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief MiniPort-ZLG72128 �����ļ�
 *
 * \internal
 * \par Modification history
 * - 1.00 17-07-13  tee, first implementation.
 * \endinternal
 */

#ifndef __AM_HWCONF_MINIPORT_ZLG72128_H
#define __AM_HWCONF_MINIPORT_ZLG72128_H

#include "ametal.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief MiniPort-ZLG72128 ʵ����ʼ��
 *
 * \retval  AW_OK  ��ʼ���ɹ�������ʹ��ͨ������ܽӿںͰ����ӿڲ���ZLG72128
 * \retval   < 0   ��ʼ��ʧ�ܣ�����C�ļ��и��������Ƿ�Ϸ�
 */
int am_miniport_zlg72128_inst_init (void);

#ifdef __cplusplus
}
#endif

#endif

/* end of file */