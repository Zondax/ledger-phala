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
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "parser_common.h"
#include "substrate_methods_V3.h"
#include "substrate_types_V3.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V3(parser_context_t* c, pd_AccountId_V3_t* v);
parser_error_t _readCallHashOf_V3(parser_context_t* c, pd_CallHashOf_V3_t* v);
parser_error_t _readCompactAccountIndex_V3(parser_context_t* c, pd_CompactAccountIndex_V3_t* v);
parser_error_t _readLookupasStaticLookupSource_V3(parser_context_t* c, pd_LookupasStaticLookupSource_V3_t* v);
parser_error_t _readOptionProxyType_V3(parser_context_t* c, pd_OptionProxyType_V3_t* v);
parser_error_t _readPerbill_V3(parser_context_t* c, pd_Perbill_V3_t* v);
parser_error_t _readProxyType_V3(parser_context_t* c, pd_ProxyType_V3_t* v);

// toString functions
parser_error_t _toStringAccountId_V3(
    const pd_AccountId_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCallHashOf_V3(
    const pd_CallHashOf_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAccountIndex_V3(
    const pd_CompactAccountIndex_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupasStaticLookupSource_V3(
    const pd_LookupasStaticLookupSource_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V3(
    const pd_OptionProxyType_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V3(
    const pd_Perbill_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V3(
    const pd_ProxyType_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
