/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2016, Fuzhou Rockchip Electronics Co., Ltd
 * Author: Lin Huang <hl@rock-chips.com>
 *
 * This is the mainline-compatible Rockchip SIP header. It keeps the
 * original mainline definitions (DRAM SIP config + share-page types)
 * and additionally pulls in the full BSP SIP header so that drivers
 * ported from the Rockchip BSP (rockchip_opp_select, rknpu, mali rk
 * platform, ...) can use sip_smc_pvtpll_config() and friends. The
 * shared enumerators are guarded so there is no duplicate-definition
 * conflict with the BSP header.
 */
#ifndef __SOC_ROCKCHIP_SIP_H
#define __SOC_ROCKCHIP_SIP_H

#include <linux/rockchip/rockchip_sip.h>

#define ROCKCHIP_SIP_DRAM_FREQ			0x82000008
#define ROCKCHIP_SIP_CONFIG_DRAM_INIT		0x00
#define ROCKCHIP_SIP_CONFIG_DRAM_SET_RATE	0x01
#define ROCKCHIP_SIP_CONFIG_DRAM_ROUND_RATE	0x02
#define ROCKCHIP_SIP_CONFIG_DRAM_SET_AT_SR	0x03
#define ROCKCHIP_SIP_CONFIG_DRAM_GET_BW		0x04
#define ROCKCHIP_SIP_CONFIG_DRAM_GET_RATE	0x05
#define ROCKCHIP_SIP_CONFIG_DRAM_CLR_IRQ	0x06
#define ROCKCHIP_SIP_CONFIG_DRAM_SET_PARAM	0x07
#define ROCKCHIP_SIP_CONFIG_DRAM_GET_VERSION	0x08
#define ROCKCHIP_SIP_CONFIG_DRAM_POST_SET_RATE	0x09
#define ROCKCHIP_SIP_CONFIG_DRAM_SET_MSCH_RL	0x0a
#define ROCKCHIP_SIP_CONFIG_DRAM_DEBUG		0x0b
#define ROCKCHIP_SIP_CONFIG_MCU_START		0x0c
#define ROCKCHIP_SIP_CONFIG_DRAM_ECC		0x0d
#define ROCKCHIP_SIP_CONFIG_DRAM_GET_FREQ_INFO	0x0e
#define ROCKCHIP_SIP_CONFIG_DRAM_ADDRMAP_GET	0x10
#define ROCKCHIP_SIP_CONFIG_DRAM_GET_STALL_TIME	0x11
#define ROCKCHIP_SIP_CONFIG_DRAM_ECC_POISON	0x12
#define ROCKCHIP_SIP_CONFIG_DRAM_TREFI_UPD	0x13

#define ROCKCHIP_SIP_SHARE_MEM			0x82000009

#endif
