//==============================================================================
// Copyright (c) 2010-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief DX12 counter definitions for GFX103.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX12_GFX103_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX12_GFX103_H_

// clang-format off

#include <windows.h>
#pragma warning (push)
#pragma warning (disable: 4201)
#include <AmdExtGpaInterface.h>
#pragma warning (pop)

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_dx12_gfx103
{
    extern GpaHardwareCounterDesc*           kDx12CounterGroupArrayGfx103[]; ///< Array of hardware counter groups for Dx12 for Gfx103 family
    extern GpaHardwareCounterDesc*           kDx12ExposedCountersGroupArrayGfx103[]; ///< Array of hardware exposed counter groups for Dx12 for Gfx103 family
    extern GpaCounterGroupDesc               kHwDx12GroupsGfx103[]; ///< Array of counter groups for Dx12 for Gfx103 family
    extern GpaCounterGroupExposedCounterDesc kHwDx12ExposedCountersByGroupGfx103[]; ///< Array of exposed counter groups for Dx12 for Gfx103 family
    extern GpaPaddedCounterDesc              kDx12PaddedCounterByGroupGfx103[]; ///< Array of reserved counter for Dx12 for Gfx103 family
    extern GpaSqCounterGroupDesc             kHwDx12SqGroupsGfx103[]; ///< Array of SQ groups for Dx12 for Gfx103 family
    extern unsigned int                       kHwDx12SqIsolatedGroupsGfx103[]; ///< Array of counter groups isolated from SQ counter groups for Dx12 for Gfx103 family
    extern AmdExtGpuBlock                     kHwDx12DriverEnumGfx103[]; ///< Array of driver enum values per group for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeBottomToBottomDurationIndexGfx103; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeBottomToBottomStartIndexGfx103; ///< Index of time of the previous command reaching bottom of pipe for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeBottomToBottomEndIndexGfx103; ///< Index of time of the current command reaching bottom of pipe for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeTopToBottomDurationIndexGfx103; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeTopToBottomStartIndexGfx103; ///< Index of time that the current command reaches the top of pipe for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GpuTimeTopToBottomEndIndexGfx103; ///< Index of time that the current command reaches the bottom of pipe for Dx12 for Gfx103 family
    extern const std::set<unsigned int>       kHwDx12TimestampBlockIdsGfx103; ///< Timestamp block id's for Dx12 for Gfx103 family
    extern const std::set<unsigned int>       kHwDx12TimeCounterIndicesGfx103; ///< Timestamp counter indices for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12GroupCountGfx103; ///< Hardware Group Count for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12ExposedCountersGroupCountGfx103; ///< Whitelist hardware counter Group Count for Dx12 for Gfx103 family
    extern const unsigned int                 kDx12PaddedCounterGroupCountGfx103; ///< reserved counter group count for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12SqGroupCountGfx103; ///< Hardware SQ Group Count for Dx12 for Gfx103 family
    extern const unsigned int                 kHwDx12SqIsolatedGroupCountGfx103; ///< Hardware Isolated Group Count for Dx12 for Gfx103 family

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
{
    UNREFERENCED_PARAMETER(asic_type);

    // dx12 specific max event overrides
    auto block_map = BuildBlockMap(kHwDx12GroupsGfx103, kHwDx12GroupCountGfx103);

    UpdateMaxSpmBlockEvents(block_map.get(), "CPF", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "PA_SU", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "PA_SC", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "SPI", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "SQ", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "SX", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "TA", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "TD", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "TCP", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "DB", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "CB", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GDS", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "SDMA", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "CPG", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "CPC", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "MCVML2", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "GCEA", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "RMI", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GE", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "GL1A", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GL1C", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GL2A", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "GL2C", 8);
    UpdateMaxSpmBlockEvents(block_map.get(), "CHA", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "CHC", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "CHCG", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GUS", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GCR", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "PA_PH", 16);
    UpdateMaxSpmBlockEvents(block_map.get(), "UTCL1", 0);
    UpdateMaxSpmBlockEvents(block_map.get(), "GE2_DIST", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GE_SE", 4);
    UpdateMaxSpmBlockEvents(block_map.get(), "GPIN", 0);
    UpdateMaxSpmBlockEvents(block_map.get(), "GPUTimeStamp", 0);
    UpdateMaxSpmBlockEvents(block_map.get(), "GPUTime", 0);


    return true;
}
} //  namespace counter_dx12_gfx103

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX12_GFX103_H_
