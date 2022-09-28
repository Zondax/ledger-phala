/*******************************************************************************
 *  (c) 2019 - 2022 Zondax AG
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V3.h"
#include <stddef.h>
#include <stdint.h>

#define PD_CALL_BALANCES_V3 40
#define PD_CALL_PROXY_V3 5
#define PD_CALL_SYSTEM_V3 0

#define PD_CALL_BALANCES_TRANSFER_ALL_V3 4
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V3_t;

#ifdef SUBSTRATE_PARSER_FULL

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V3 5
typedef struct {
    pd_LookupasStaticLookupSource_V3_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V3_t;

#define PD_CALL_PROXY_ADD_PROXY_V3 1
typedef struct {
    pd_AccountId_V3_t delegate;
    pd_ProxyType_V3_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_add_proxy_V3_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V3 2
typedef struct {
    pd_AccountId_V3_t delegate;
    pd_ProxyType_V3_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_remove_proxy_V3_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V3 3
typedef struct {
} pd_proxy_remove_proxies_V3_t;

#define PD_CALL_PROXY_ANONYMOUS_V3 4
typedef struct {
    pd_ProxyType_V3_t proxy_type;
    pd_BlockNumber_t delay;
    pd_u16_t index;
} pd_proxy_anonymous_V3_t;

#define PD_CALL_PROXY_KILL_ANONYMOUS_V3 5
typedef struct {
    pd_AccountId_V3_t spawner;
    pd_ProxyType_V3_t proxy_type;
    pd_u16_t index;
    pd_Compactu32_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_anonymous_V3_t;

#define PD_CALL_PROXY_ANNOUNCE_V3 6
typedef struct {
    pd_AccountId_V3_t real;
    pd_CallHashOf_V3_t call_hash;
} pd_proxy_announce_V3_t;

#define PD_CALL_PROXY_REMOVE_ANNOUNCEMENT_V3 7
typedef struct {
    pd_AccountId_V3_t real;
    pd_CallHashOf_V3_t call_hash;
} pd_proxy_remove_announcement_V3_t;

#define PD_CALL_PROXY_REJECT_ANNOUNCEMENT_V3 8
typedef struct {
    pd_AccountId_V3_t delegate;
    pd_CallHashOf_V3_t call_hash;
} pd_proxy_reject_announcement_V3_t;

#define PD_CALL_PROXY_PROXY_ANNOUNCED_V3 9
typedef struct {
    pd_AccountId_V3_t delegate;
    pd_AccountId_V3_t real;
    pd_OptionProxyType_V3_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_announced_V3_t;

#endif

typedef union {
    pd_balances_transfer_all_V3_t balances_transfer_all_V3;
#ifdef SUBSTRATE_PARSER_FULL
    pd_balances_force_unreserve_V3_t balances_force_unreserve_V3;
    pd_proxy_add_proxy_V3_t proxy_add_proxy_V3;
    pd_proxy_remove_proxy_V3_t proxy_remove_proxy_V3;
    pd_proxy_remove_proxies_V3_t proxy_remove_proxies_V3;
    pd_proxy_anonymous_V3_t proxy_anonymous_V3;
    pd_proxy_kill_anonymous_V3_t proxy_kill_anonymous_V3;
    pd_proxy_announce_V3_t proxy_announce_V3;
    pd_proxy_remove_announcement_V3_t proxy_remove_announcement_V3;
    pd_proxy_reject_announcement_V3_t proxy_reject_announcement_V3;
    pd_proxy_proxy_announced_V3_t proxy_proxy_announced_V3;
#endif
} pd_MethodBasic_V3_t;

#define PD_CALL_BALANCES_TRANSFER_V3 0
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V3_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V3 2
typedef struct {
    pd_LookupasStaticLookupSource_V3_t source;
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V3_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V3 3
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V3_t;

#ifdef SUBSTRATE_PARSER_FULL

#define PD_CALL_BALANCES_SET_BALANCE_V3 1
typedef struct {
    pd_LookupasStaticLookupSource_V3_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V3_t;

#define PD_CALL_PROXY_PROXY_V3 0
typedef struct {
    pd_AccountId_V3_t real;
    pd_OptionProxyType_V3_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V3_t;

#define PD_CALL_SYSTEM_FILL_BLOCK_V3 0
typedef struct {
    pd_Perbill_V3_t ratio;
} pd_system_fill_block_V3_t;

#define PD_CALL_SYSTEM_REMARK_V3 1
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_V3_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V3 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V3_t;

#define PD_CALL_SYSTEM_SET_CODE_V3 3
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_V3_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V3 4
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_without_checks_V3_t;

#define PD_CALL_SYSTEM_REMARK_WITH_EVENT_V3 8
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_with_event_V3_t;

#endif

typedef union {
    pd_balances_transfer_V3_t balances_transfer_V3;
    pd_balances_force_transfer_V3_t balances_force_transfer_V3;
    pd_balances_transfer_keep_alive_V3_t balances_transfer_keep_alive_V3;
#ifdef SUBSTRATE_PARSER_FULL
    pd_balances_set_balance_V3_t balances_set_balance_V3;
    pd_proxy_proxy_V3_t proxy_proxy_V3;
    pd_system_fill_block_V3_t system_fill_block_V3;
    pd_system_remark_V3_t system_remark_V3;
    pd_system_set_heap_pages_V3_t system_set_heap_pages_V3;
    pd_system_set_code_V3_t system_set_code_V3;
    pd_system_set_code_without_checks_V3_t system_set_code_without_checks_V3;
    pd_system_remark_with_event_V3_t system_remark_with_event_V3;
#endif
} pd_MethodNested_V3_t;

typedef union {
    pd_MethodBasic_V3_t basic;
    pd_MethodNested_V3_t nested;
} pd_Method_V3_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
