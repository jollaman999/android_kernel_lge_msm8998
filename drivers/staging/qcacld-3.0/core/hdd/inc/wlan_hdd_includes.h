/*
 * Copyright (c) 2014, 2016-2017 The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */

#if !defined(HDD_INCLUDES_H__)
#define HDD_INCLUDES_H__

/**
 * DOC: wlan_hdd_includes.h
 *
 * Internal includes for the Linux HDD
 */

#include <linux/version.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/wireless.h>
#include <linux/if_arp.h>
#include "ol_txrx_ctrl_api.h"
#include <cds_api.h>
#include <sme_api.h>
#include "wlan_hdd_assoc.h"
#include "wlan_hdd_wext.h"
#include "wlan_hdd_main.h"
#include "wlan_hdd_tx_rx.h"

#ifdef FEATURE_OEM_DATA_SUPPORT
#include "wlan_hdd_oemdata.h"
#endif

#endif /* end #if !defined(HDD_INCLUDES_H__) */
