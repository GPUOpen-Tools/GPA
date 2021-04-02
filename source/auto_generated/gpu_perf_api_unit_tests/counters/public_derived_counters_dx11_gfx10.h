//==============================================================================
// Copyright (c) 2015-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX11 GFX10 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX10
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX10

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX11Gfx10 Public counter index
#define GPUTIME_PUBLIC_DX11_GFX10 0
#define GPUBUSY_PUBLIC_DX11_GFX10 1
#define GPUBUSYCYCLES_PUBLIC_DX11_GFX10 2
#define VSBUSY_PUBLIC_DX11_GFX10 3
#define VSBUSYCYCLES_PUBLIC_DX11_GFX10 4
#define VSTIME_PUBLIC_DX11_GFX10 5
#define HSBUSY_PUBLIC_DX11_GFX10 6
#define HSBUSYCYCLES_PUBLIC_DX11_GFX10 7
#define HSTIME_PUBLIC_DX11_GFX10 8
#define DSBUSY_PUBLIC_DX11_GFX10 9
#define DSBUSYCYCLES_PUBLIC_DX11_GFX10 10
#define DSTIME_PUBLIC_DX11_GFX10 11
#define PSBUSY_PUBLIC_DX11_GFX10 12
#define PSBUSYCYCLES_PUBLIC_DX11_GFX10 13
#define PSTIME_PUBLIC_DX11_GFX10 14
#define CSBUSY_PUBLIC_DX11_GFX10 15
#define CSBUSYCYCLES_PUBLIC_DX11_GFX10 16
#define CSTIME_PUBLIC_DX11_GFX10 17
#define VSVERTICESIN_PUBLIC_DX11_GFX10 18
#define VSVALUINSTCOUNT_PUBLIC_DX11_GFX10 19
#define VSSALUINSTCOUNT_PUBLIC_DX11_GFX10 20
#define VSVALUBUSY_PUBLIC_DX11_GFX10 21
#define VSVALUBUSYCYCLES_PUBLIC_DX11_GFX10 22
#define VSSALUBUSY_PUBLIC_DX11_GFX10 23
#define VSSALUBUSYCYCLES_PUBLIC_DX11_GFX10 24
#define HSPATCHES_PUBLIC_DX11_GFX10 25
#define HSVALUINSTCOUNT_PUBLIC_DX11_GFX10 26
#define HSSALUINSTCOUNT_PUBLIC_DX11_GFX10 27
#define HSVALUBUSY_PUBLIC_DX11_GFX10 28
#define HSVALUBUSYCYCLES_PUBLIC_DX11_GFX10 29
#define HSSALUBUSY_PUBLIC_DX11_GFX10 30
#define HSSALUBUSYCYCLES_PUBLIC_DX11_GFX10 31
#define DSVERTICESIN_PUBLIC_DX11_GFX10 32
#define DSVALUINSTCOUNT_PUBLIC_DX11_GFX10 33
#define DSSALUINSTCOUNT_PUBLIC_DX11_GFX10 34
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX11_GFX10 35
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX11_GFX10 36
#define PRIMITIVESIN_PUBLIC_DX11_GFX10 37
#define CULLEDPRIMS_PUBLIC_DX11_GFX10 38
#define CLIPPEDPRIMS_PUBLIC_DX11_GFX10 39
#define PASTALLEDONRASTERIZER_PUBLIC_DX11_GFX10 40
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX11_GFX10 41
#define PSPIXELSOUT_PUBLIC_DX11_GFX10 42
#define PSEXPORTSTALLS_PUBLIC_DX11_GFX10 43
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX11_GFX10 44
#define PSVALUINSTCOUNT_PUBLIC_DX11_GFX10 45
#define PSSALUINSTCOUNT_PUBLIC_DX11_GFX10 46
#define PSVALUBUSY_PUBLIC_DX11_GFX10 47
#define PSVALUBUSYCYCLES_PUBLIC_DX11_GFX10 48
#define PSSALUBUSY_PUBLIC_DX11_GFX10 49
#define PSSALUBUSYCYCLES_PUBLIC_DX11_GFX10 50
#define CSTHREADGROUPS_PUBLIC_DX11_GFX10 51
#define CSWAVEFRONTS_PUBLIC_DX11_GFX10 52
#define CSTHREADS_PUBLIC_DX11_GFX10 53
#define CSVALUINSTS_PUBLIC_DX11_GFX10 54
#define CSVALUUTILIZATION_PUBLIC_DX11_GFX10 55
#define CSSALUINSTS_PUBLIC_DX11_GFX10 56
#define CSVFETCHINSTS_PUBLIC_DX11_GFX10 57
#define CSSFETCHINSTS_PUBLIC_DX11_GFX10 58
#define CSVWRITEINSTS_PUBLIC_DX11_GFX10 59
#define CSVALUBUSY_PUBLIC_DX11_GFX10 60
#define CSVALUBUSYCYCLES_PUBLIC_DX11_GFX10 61
#define CSSALUBUSY_PUBLIC_DX11_GFX10 62
#define CSSALUBUSYCYCLES_PUBLIC_DX11_GFX10 63
#define CSMEMUNITBUSY_PUBLIC_DX11_GFX10 64
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX11_GFX10 65
#define CSMEMUNITSTALLED_PUBLIC_DX11_GFX10 66
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX11_GFX10 67
#define CSWRITEUNITSTALLED_PUBLIC_DX11_GFX10 68
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX11_GFX10 69
#define CSGDSINSTS_PUBLIC_DX11_GFX10 70
#define CSLDSINSTS_PUBLIC_DX11_GFX10 71
#define CSALUSTALLEDBYLDS_PUBLIC_DX11_GFX10 72
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX11_GFX10 73
#define CSLDSBANKCONFLICT_PUBLIC_DX11_GFX10 74
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX11_GFX10 75
#define TEXUNITBUSY_PUBLIC_DX11_GFX10 76
#define TEXUNITBUSYCYCLES_PUBLIC_DX11_GFX10 77
#define TEXTRIFILTERINGPCT_PUBLIC_DX11_GFX10 78
#define TEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX10 79
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX10 80
#define TEXVOLFILTERINGPCT_PUBLIC_DX11_GFX10 81
#define TEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX10 82
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX10 83
#define TEXAVEANISOTROPY_PUBLIC_DX11_GFX10 84
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX11_GFX10 85
#define DEPTHSTENCILTESTBUSYCOUNT_PUBLIC_DX11_GFX10 86
#define HIZTILESACCEPTED_PUBLIC_DX11_GFX10 87
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX11_GFX10 88
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX11_GFX10 89
#define PREZTILESDETAILCULLED_PUBLIC_DX11_GFX10 90
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX11_GFX10 91
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX11_GFX10 92
#define HIZQUADSCULLED_PUBLIC_DX11_GFX10 93
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX10 94
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX11_GFX10 95
#define PREZQUADSCULLED_PUBLIC_DX11_GFX10 96
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX10 97
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX11_GFX10 98
#define POSTZQUADS_PUBLIC_DX11_GFX10 99
#define POSTZQUADCOUNT_PUBLIC_DX11_GFX10 100
#define PREZSAMPLESPASSING_PUBLIC_DX11_GFX10 101
#define PREZSAMPLESFAILINGS_PUBLIC_DX11_GFX10 102
#define PREZSAMPLESFAILINGZ_PUBLIC_DX11_GFX10 103
#define POSTZSAMPLESPASSING_PUBLIC_DX11_GFX10 104
#define POSTZSAMPLESFAILINGS_PUBLIC_DX11_GFX10 105
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX11_GFX10 106
#define ZUNITSTALLED_PUBLIC_DX11_GFX10 107
#define ZUNITSTALLEDCYCLES_PUBLIC_DX11_GFX10 108
#define DBMEMREAD_PUBLIC_DX11_GFX10 109
#define DBMEMWRITTEN_PUBLIC_DX11_GFX10 110
#define CBMEMREAD_PUBLIC_DX11_GFX10 111
#define CBCOLORANDMASKREAD_PUBLIC_DX11_GFX10 112
#define CBMEMWRITTEN_PUBLIC_DX11_GFX10 113
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX11_GFX10 114
#define CBSLOWPIXELPCT_PUBLIC_DX11_GFX10 115
#define CBSLOWPIXELCOUNT_PUBLIC_DX11_GFX10 116
#define L0CACHEHIT_PUBLIC_DX11_GFX10 117
#define L0CACHEREQUESTCOUNT_PUBLIC_DX11_GFX10 118
#define L0CACHEHITCOUNT_PUBLIC_DX11_GFX10 119
#define L0CACHEMISSCOUNT_PUBLIC_DX11_GFX10 120
#define L1CACHEHIT_PUBLIC_DX11_GFX10 121
#define L1CACHEREQUESTCOUNT_PUBLIC_DX11_GFX10 122
#define L1CACHEHITCOUNT_PUBLIC_DX11_GFX10 123
#define L1CACHEMISSCOUNT_PUBLIC_DX11_GFX10 124
#define L2CACHEHIT_PUBLIC_DX11_GFX10 125
#define L2CACHEMISS_PUBLIC_DX11_GFX10 126
#define L2CACHEREQUESTCOUNT_PUBLIC_DX11_GFX10 127
#define L2CACHEHITCOUNT_PUBLIC_DX11_GFX10 128
#define L2CACHEMISSCOUNT_PUBLIC_DX11_GFX10 129
#define FETCHSIZE_PUBLIC_DX11_GFX10 130
#define WRITESIZE_PUBLIC_DX11_GFX10 131
#define MEMUNITBUSY_PUBLIC_DX11_GFX10 132
#define MEMUNITBUSYCYCLES_PUBLIC_DX11_GFX10 133
#define MEMUNITSTALLED_PUBLIC_DX11_GFX10 134
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX11_GFX10 135
#define WRITEUNITSTALLED_PUBLIC_DX11_GFX10 136
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX11_GFX10 137

/// Number of public counters for DX11 GFX10 
const size_t kDx11Gfx10PublicCounterCount = 138;

/// Array of public counters for DX11 GFX10 
extern const GpaCounterDesc kDx11Gfx10PublicCounters[kDx11Gfx10PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX10
