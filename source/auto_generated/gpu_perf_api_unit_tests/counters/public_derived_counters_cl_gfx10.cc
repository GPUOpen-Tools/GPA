//==============================================================================
// Copyright (c) 2015-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for CL GFX10  for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_cl_gfx10.h"

const GpaCounterDesc kClGfx10PublicCounters[kClGfx10PublicCounterCount] = {
    {"Wavefronts", "General", "Total wavefronts.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xe8999836, 0x489d, 0x80a6, {0x8e, 0x94, 0x2c, 0x3e, 0xa1, 0x91, 0xfd, 0x58}}},
    {"VALUInsts", "General", "The average number of vector ALU instructions executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x17c27c10, 0x3d5c, 0x64c2, {0xe7, 0xb4, 0x4e, 0xe1, 0xab, 0xdb, 0xbb, 0x46}}},
    {"SALUInsts", "General", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xe5693881, 0x8d63, 0x951d, {0x1f, 0x4f, 0xf9, 0xe4, 0xc8, 0x42, 0x36, 0xf5}}},
    {"VFetchInsts", "General", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that fetch from video memory.", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x85970f8f, 0x0b2c, 0x6431, {0x9e, 0x52, 0x79, 0x99, 0x23, 0x6e, 0x6e, 0x8a}}},
    {"SFetchInsts", "General", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x7d9e4356, 0xa8f5, 0x04c7, {0xf7, 0xa8, 0xfe, 0x68, 0xdc, 0x01, 0xc4, 0x41}}},
    {"VWriteInsts", "General", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that write to video memory.", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xd8154a17, 0x224d, 0x704e, {0x73, 0xd2, 0xbb, 0x5d, 0x15, 0x0f, 0x31, 0x96}}},
    {"LDSInsts", "LocalMemory", "The average number of LDS read or LDS write instructions executed per work item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x852ccd67, 0xd2eb, 0xd238, {0x56, 0x7a, 0x0d, 0x1f, 0x7b, 0xf5, 0xf3, 0x4f}}},
    {"GDSInsts", "General", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xc63fc276, 0x151e, 0x3b88, {0x6e, 0xdb, 0xa0, 0xc9, 0x25, 0x07, 0xaa, 0xdb}}},
    {"VALUUtilization", "General", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of the wave size. Value range: 0% (bad), 100% (ideal - no thread divergence).", "0,1,(64),(32),2,ifnotzero,*,/,(100),*,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x435fc505, 0x4d15, 0x095e, {0x79, 0xf1, 0x80, 0x34, 0x6b, 0xcd, 0x0a, 0x24}}},
    {"VALUBusy", "General", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "0,NUM_SIMDS,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x51800108, 0xe003, 0x3c1f, {0xb9, 0x2a, 0xe2, 0x24, 0xaa, 0xab, 0x3c, 0x1b}}},
    {"SALUBusy", "General", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "0,NUM_CUS,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xf1d53e7a, 0x0182, 0x42f8, {0x7d, 0x2c, 0x60, 0x29, 0xbf, 0xf6, 0xbc, 0x2d}}},
    {"FetchSize", "GlobalMemory", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(64),*,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,sum16,(96),*,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum16,(128),*,sum4,(1024),/", 64, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0xd91ac445, 0xb44f, 0xf821, {0x91, 0x23, 0x9d, 0x82, 0x9e, 0x54, 0x4c, 0x33}}},
    {"WriteSize", "GlobalMemory", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(64),*,+,(1024),/", 32, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0xe09d95da, 0x2772, 0xf7cb, {0x51, 0xf5, 0x4f, 0xad, 0x27, 0xbb, 0x99, 0x8b}}},
    {"L0CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L0 cache. Value range: 0% (no hit) to 100% (optimal).", "(0),(1),16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,-,(100),*,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,ifnotzero", 32, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xbe1e0578, 0x82b8, 0xad7f, {0xba, 0x3f, 0x3a, 0xfc, 0xe1, 0x50, 0x93, 0x7a}}},
    {"L1CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L1 cache. Writes and atomics always miss this cache. Value range: 0% (no hit) to 100% (optimal).", "(0),(1),1,0,/,-,(100),*,0,ifnotzero", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xb10c589c, 0xf7a5, 0xb8f2, {0x46, 0xc2, 0xe0, 0xae, 0xd4, 0xa8, 0x41, 0x05}}},
    {"L2CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L2 cache. Value range: 0% (no hit) to 100% (optimal).", "(0),(1),16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,-,(100),*,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,ifnotzero", 32, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x7507935e, 0xed29, 0xf169, {0xee, 0x27, 0x9b, 0x0f, 0xa9, 0xb8, 0x8f, 0x3c}}},
    {"MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ARRAYS,/,(100),*", 17, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xa1efa380, 0x4a72, 0xe066, {0xe0, 0x6a, 0x2a, 0xb7, 0x1a, 0x48, 0x85, 0x21}}},
    {"MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ARRAYS,/,(100),*", 17, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x465ba54f, 0xd250, 0x1453, {0x79, 0x0a, 0x73, 0x1b, 0x10, 0xd2, 0x30, 0xb1}}},
    {"WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", 17, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x594ad3ce, 0xd1ec, 0x10fc, {0x7d, 0x59, 0x25, 0x73, 0x8e, 0x39, 0x7d, 0x72}}},
    {"LDSBankConflict", "LocalMemory", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", "0,1,/,NUM_SIMDS,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xb3387100, 0x3d5a, 0x3235, {0xe6, 0x12, 0x58, 0xb9, 0x41, 0x68, 0x3e, 0xb6}}},
};
