//==============================================================================
// Copyright (c) 2010-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Hardware counter info for GFX8_FIJI.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX8_FIJI_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX8_FIJI_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx8.h"

namespace counter_gfx8_fiji
{
/// @brief Uses the input ASIC type to determine if this data provides an ASIC specific version.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asic_type)
{
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_FIJI };

    if (asics_supported.find(asic_type) == asics_supported.end())
    {
        return false;
    }

    return true;
}

    extern GpaHardwareCounterDesc kVgt0CountersGfx8_fiji[]; ///< Array of internal counters for Vgt0 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kVgt1CountersGfx8_fiji[]; ///< Array of internal counters for Vgt1 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kVgt2CountersGfx8_fiji[]; ///< Array of internal counters for Vgt2 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kVgt3CountersGfx8_fiji[]; ///< Array of internal counters for Vgt3 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc0CountersGfx8_fiji[]; ///< Array of internal counters for Mc0 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc1CountersGfx8_fiji[]; ///< Array of internal counters for Mc1 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc2CountersGfx8_fiji[]; ///< Array of internal counters for Mc2 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc3CountersGfx8_fiji[]; ///< Array of internal counters for Mc3 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc4CountersGfx8_fiji[]; ///< Array of internal counters for Mc4 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc5CountersGfx8_fiji[]; ///< Array of internal counters for Mc5 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc6CountersGfx8_fiji[]; ///< Array of internal counters for Mc6 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc7CountersGfx8_fiji[]; ///< Array of internal counters for Mc7 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc8CountersGfx8_fiji[]; ///< Array of internal counters for Mc8 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc9CountersGfx8_fiji[]; ///< Array of internal counters for Mc9 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc10CountersGfx8_fiji[]; ///< Array of internal counters for Mc10 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc11CountersGfx8_fiji[]; ///< Array of internal counters for Mc11 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc12CountersGfx8_fiji[]; ///< Array of internal counters for Mc12 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc13CountersGfx8_fiji[]; ///< Array of internal counters for Mc13 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc14CountersGfx8_fiji[]; ///< Array of internal counters for Mc14 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc15CountersGfx8_fiji[]; ///< Array of internal counters for Mc15 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc16CountersGfx8_fiji[]; ///< Array of internal counters for Mc16 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc17CountersGfx8_fiji[]; ///< Array of internal counters for Mc17 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc18CountersGfx8_fiji[]; ///< Array of internal counters for Mc18 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc19CountersGfx8_fiji[]; ///< Array of internal counters for Mc19 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc20CountersGfx8_fiji[]; ///< Array of internal counters for Mc20 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc21CountersGfx8_fiji[]; ///< Array of internal counters for Mc21 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc22CountersGfx8_fiji[]; ///< Array of internal counters for Mc22 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc23CountersGfx8_fiji[]; ///< Array of internal counters for Mc23 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc24CountersGfx8_fiji[]; ///< Array of internal counters for Mc24 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc25CountersGfx8_fiji[]; ///< Array of internal counters for Mc25 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc26CountersGfx8_fiji[]; ///< Array of internal counters for Mc26 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc27CountersGfx8_fiji[]; ///< Array of internal counters for Mc27 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc28CountersGfx8_fiji[]; ///< Array of internal counters for Mc28 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc29CountersGfx8_fiji[]; ///< Array of internal counters for Mc29 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc30CountersGfx8_fiji[]; ///< Array of internal counters for Mc30 block for Gfx8_fiji family
    extern GpaHardwareCounterDesc kMc31CountersGfx8_fiji[]; ///< Array of internal counters for Mc31 block for Gfx8_fiji family

/// @brief Replaces count number of block instance counters at the destination with the overriding source counters.
///
/// @param [in] dest_counter Destination to update.
/// @param [in] src_counter Source to update from.
/// @param [in] count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GpaHardwareCounterDesc* dest_counter, GpaHardwareCounterDesc* src_counter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        dest_counter[i] = src_counter[i];
    }
}

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asic_type)
{
    if (!MatchAsic(asic_type))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(counter_gfx8::kVgt0CountersGfx8, kVgt0CountersGfx8_fiji, 146);
    ReplaceBlockInstanceCounters(counter_gfx8::kVgt1CountersGfx8, kVgt1CountersGfx8_fiji, 146);
    ReplaceBlockInstanceCounters(counter_gfx8::kVgt2CountersGfx8, kVgt2CountersGfx8_fiji, 146);
    ReplaceBlockInstanceCounters(counter_gfx8::kVgt3CountersGfx8, kVgt3CountersGfx8_fiji, 146);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc0CountersGfx8, kMc0CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc1CountersGfx8, kMc1CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc2CountersGfx8, kMc2CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc3CountersGfx8, kMc3CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc4CountersGfx8, kMc4CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc5CountersGfx8, kMc5CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc6CountersGfx8, kMc6CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc7CountersGfx8, kMc7CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc8CountersGfx8, kMc8CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc9CountersGfx8, kMc9CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc10CountersGfx8, kMc10CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc11CountersGfx8, kMc11CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc12CountersGfx8, kMc12CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc13CountersGfx8, kMc13CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc14CountersGfx8, kMc14CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc15CountersGfx8, kMc15CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc16CountersGfx8, kMc16CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc17CountersGfx8, kMc17CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc18CountersGfx8, kMc18CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc19CountersGfx8, kMc19CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc20CountersGfx8, kMc20CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc21CountersGfx8, kMc21CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc22CountersGfx8, kMc22CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc23CountersGfx8, kMc23CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc24CountersGfx8, kMc24CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc25CountersGfx8, kMc25CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc26CountersGfx8, kMc26CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc27CountersGfx8, kMc27CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc28CountersGfx8, kMc28CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc29CountersGfx8, kMc29CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc30CountersGfx8, kMc30CountersGfx8_fiji, 33);
    ReplaceBlockInstanceCounters(counter_gfx8::kMc31CountersGfx8, kMc31CountersGfx8_fiji, 33);

    return true;
}

bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type);
} // counter_gfx8_fiji

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX8_FIJI_H_

// clang-format on
