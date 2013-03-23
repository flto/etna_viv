#ifndef STATE_HI_XML
#define STATE_HI_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- /home/orion/projects/etna_viv/rnndb/state.xml    (  15001 bytes, from 2013-03-03 11:55:38)
- /home/orion/projects/etna_viv/rnndb/common.xml   (  15985 bytes, from 2013-02-10 12:55:03)
- /home/orion/projects/etna_viv/rnndb/state_hi.xml (  16736 bytes, from 2013-03-23 07:27:22)
- /home/orion/projects/etna_viv/rnndb/state_2d.xml (  30577 bytes, from 2013-02-01 10:02:25)
- /home/orion/projects/etna_viv/rnndb/state_3d.xml (  52238 bytes, from 2013-03-20 17:23:27)

Copyright (C) 2013
*/


#define MMU_EXCEPTION_SLAVE_NOT_PRESENT				0x00000001
#define MMU_EXCEPTION_PAGE_NOT_PRESENT				0x00000002
#define MMU_EXCEPTION_WRITE_VIOLATION				0x00000003
#define VIVS_HI							0x00000000

#define VIVS_HI_CLOCK_CONTROL					0x00000000
#define VIVS_HI_CLOCK_CONTROL_CLK3D_DIS				0x00000001
#define VIVS_HI_CLOCK_CONTROL_CLK2D_DIS				0x00000002
#define VIVS_HI_CLOCK_CONTROL_FSCALE_VAL__MASK			0x000001fc
#define VIVS_HI_CLOCK_CONTROL_FSCALE_VAL__SHIFT			2
#define VIVS_HI_CLOCK_CONTROL_FSCALE_VAL(x)			(((x) << VIVS_HI_CLOCK_CONTROL_FSCALE_VAL__SHIFT) & VIVS_HI_CLOCK_CONTROL_FSCALE_VAL__MASK)
#define VIVS_HI_CLOCK_CONTROL_FSCALE_CMD_LOAD			0x00000200
#define VIVS_HI_CLOCK_CONTROL_DISABLE_RAM_CLK_GATING		0x00000400
#define VIVS_HI_CLOCK_CONTROL_DISABLE_DEBUG_REGISTERS		0x00000800
#define VIVS_HI_CLOCK_CONTROL_SOFT_RESET			0x00001000
#define VIVS_HI_CLOCK_CONTROL_IDLE_3D				0x00010000
#define VIVS_HI_CLOCK_CONTROL_IDLE_2D				0x00020000
#define VIVS_HI_CLOCK_CONTROL_IDLE_VG				0x00040000
#define VIVS_HI_CLOCK_CONTROL_ISOLATE_GPU			0x00080000

#define VIVS_HI_IDLE_STATE					0x00000004
#define VIVS_HI_IDLE_STATE_FE					0x00000001
#define VIVS_HI_IDLE_STATE_DE					0x00000002
#define VIVS_HI_IDLE_STATE_PE					0x00000004
#define VIVS_HI_IDLE_STATE_SH					0x00000008
#define VIVS_HI_IDLE_STATE_PA					0x00000010
#define VIVS_HI_IDLE_STATE_SE					0x00000020
#define VIVS_HI_IDLE_STATE_RA					0x00000040
#define VIVS_HI_IDLE_STATE_TX					0x00000080
#define VIVS_HI_IDLE_STATE_VG					0x00000100
#define VIVS_HI_IDLE_STATE_IM					0x00000200
#define VIVS_HI_IDLE_STATE_FP					0x00000400
#define VIVS_HI_IDLE_STATE_TS					0x00000800
#define VIVS_HI_IDLE_STATE_AXI_LP				0x80000000

#define VIVS_HI_AXI_CONFIG					0x00000008
#define VIVS_HI_AXI_CONFIG_AWID__MASK				0x0000000f
#define VIVS_HI_AXI_CONFIG_AWID__SHIFT				0
#define VIVS_HI_AXI_CONFIG_AWID(x)				(((x) << VIVS_HI_AXI_CONFIG_AWID__SHIFT) & VIVS_HI_AXI_CONFIG_AWID__MASK)
#define VIVS_HI_AXI_CONFIG_ARID__MASK				0x000000f0
#define VIVS_HI_AXI_CONFIG_ARID__SHIFT				4
#define VIVS_HI_AXI_CONFIG_ARID(x)				(((x) << VIVS_HI_AXI_CONFIG_ARID__SHIFT) & VIVS_HI_AXI_CONFIG_ARID__MASK)
#define VIVS_HI_AXI_CONFIG_AWCACHE__MASK			0x00000f00
#define VIVS_HI_AXI_CONFIG_AWCACHE__SHIFT			8
#define VIVS_HI_AXI_CONFIG_AWCACHE(x)				(((x) << VIVS_HI_AXI_CONFIG_AWCACHE__SHIFT) & VIVS_HI_AXI_CONFIG_AWCACHE__MASK)
#define VIVS_HI_AXI_CONFIG_ARCACHE__MASK			0x0000f000
#define VIVS_HI_AXI_CONFIG_ARCACHE__SHIFT			12
#define VIVS_HI_AXI_CONFIG_ARCACHE(x)				(((x) << VIVS_HI_AXI_CONFIG_ARCACHE__SHIFT) & VIVS_HI_AXI_CONFIG_ARCACHE__MASK)

#define VIVS_HI_AXI_STATUS					0x0000000c
#define VIVS_HI_AXI_STATUS_WR_ERR_ID__MASK			0x0000000f
#define VIVS_HI_AXI_STATUS_WR_ERR_ID__SHIFT			0
#define VIVS_HI_AXI_STATUS_WR_ERR_ID(x)				(((x) << VIVS_HI_AXI_STATUS_WR_ERR_ID__SHIFT) & VIVS_HI_AXI_STATUS_WR_ERR_ID__MASK)
#define VIVS_HI_AXI_STATUS_RD_ERR_ID__MASK			0x000000f0
#define VIVS_HI_AXI_STATUS_RD_ERR_ID__SHIFT			4
#define VIVS_HI_AXI_STATUS_RD_ERR_ID(x)				(((x) << VIVS_HI_AXI_STATUS_RD_ERR_ID__SHIFT) & VIVS_HI_AXI_STATUS_RD_ERR_ID__MASK)
#define VIVS_HI_AXI_STATUS_DET_WR_ERR				0x00000100
#define VIVS_HI_AXI_STATUS_DET_RD_ERR				0x00000200

#define VIVS_HI_INTR_ACKNOWLEDGE				0x00000010
#define VIVS_HI_INTR_ACKNOWLEDGE_INTR_VEC__MASK			0xffffffff
#define VIVS_HI_INTR_ACKNOWLEDGE_INTR_VEC__SHIFT		0
#define VIVS_HI_INTR_ACKNOWLEDGE_INTR_VEC(x)			(((x) << VIVS_HI_INTR_ACKNOWLEDGE_INTR_VEC__SHIFT) & VIVS_HI_INTR_ACKNOWLEDGE_INTR_VEC__MASK)

#define VIVS_HI_INTR_ENBL					0x00000014
#define VIVS_HI_INTR_ENBL_INTR_ENBL_VEC__MASK			0xffffffff
#define VIVS_HI_INTR_ENBL_INTR_ENBL_VEC__SHIFT			0
#define VIVS_HI_INTR_ENBL_INTR_ENBL_VEC(x)			(((x) << VIVS_HI_INTR_ENBL_INTR_ENBL_VEC__SHIFT) & VIVS_HI_INTR_ENBL_INTR_ENBL_VEC__MASK)

#define VIVS_HI_CHIP_IDENTITY					0x00000018

#define VIVS_HI_CHIP_FEATURE					0x0000001c

#define VIVS_HI_CHIP_MODEL					0x00000020

#define VIVS_HI_CHIP_REV					0x00000024

#define VIVS_HI_CHIP_DATE					0x00000028

#define VIVS_HI_CHIP_TIME					0x0000002c

#define VIVS_HI_CHIP_MINOR_FEATURE_0				0x00000034

#define VIVS_HI_CACHE_CONTROL					0x00000038

#define VIVS_HI_MEMORY_COUNTER_RESET				0x0000003c

#define VIVS_HI_PROFILE_READ_BYTES8				0x00000040

#define VIVS_HI_PROFILE_WRITE_BYTES8				0x00000044

#define VIVS_HI_CHIP_SPECS					0x00000048

#define VIVS_HI_PROFILE_WRITE_BURSTS				0x0000004c

#define VIVS_HI_PROFILE_WRITE_REQUESTS				0x00000050

#define VIVS_HI_PROFILE_READ_BURSTS				0x00000058

#define VIVS_HI_PROFILE_READ_REQUESTS				0x0000005c

#define VIVS_HI_PROFILE_READ_LASTS				0x00000060

#define VIVS_HI_GP_OUT0						0x00000064

#define VIVS_HI_GP_OUT1						0x00000068

#define VIVS_HI_GP_OUT2						0x0000006c

#define VIVS_HI_AXI_CONTROL					0x00000070

#define VIVS_HI_CHIP_MINOR_FEATURE_1				0x00000074

#define VIVS_HI_PROFILE_TOTAL_CYCLES				0x00000078

#define VIVS_HI_PROFILE_IDLE_CYCLES				0x0000007c

#define VIVS_HI_CHIP_SPECS_2					0x00000080

#define VIVS_HI_CHIP_MINOR_FEATURE_2				0x00000084

#define VIVS_HI_CHIP_MINOR_FEATURE_3				0x00000088

#define VIVS_PM							0x00000000

#define VIVS_PM_POWER_CONTROLS					0x00000100

#define VIVS_PM_MODULE_CONTROLS					0x00000104

#define VIVS_PM_MODULE_STATUS					0x00000108

#define VIVS_PM_PULSE_EATER					0x0000010c

#define VIVS_MMUv2						0x00000000

#define VIVS_MMUv2_SAFE_ADDRESS					0x00000180

#define VIVS_MMUv2_CONFIGURATION				0x00000184
#define VIVS_MMUv2_CONFIGURATION_MODE__MASK			0x00000001
#define VIVS_MMUv2_CONFIGURATION_MODE__SHIFT			0
#define VIVS_MMUv2_CONFIGURATION_MODE_MODE4_K			0x00000000
#define VIVS_MMUv2_CONFIGURATION_MODE_MODE1_K			0x00000001
#define VIVS_MMUv2_CONFIGURATION_MODE_MASK			0x00000008
#define VIVS_MMUv2_CONFIGURATION_FLUSH__MASK			0x00000010
#define VIVS_MMUv2_CONFIGURATION_FLUSH__SHIFT			4
#define VIVS_MMUv2_CONFIGURATION_FLUSH_FLUSH			0x00000010
#define VIVS_MMUv2_CONFIGURATION_FLUSH_MASK			0x00000080
#define VIVS_MMUv2_CONFIGURATION_ADDRESS_MASK			0x00000100
#define VIVS_MMUv2_CONFIGURATION_ADDRESS__MASK			0xfffffc00
#define VIVS_MMUv2_CONFIGURATION_ADDRESS__SHIFT			10
#define VIVS_MMUv2_CONFIGURATION_ADDRESS(x)			(((x) << VIVS_MMUv2_CONFIGURATION_ADDRESS__SHIFT) & VIVS_MMUv2_CONFIGURATION_ADDRESS__MASK)

#define VIVS_MMUv2_STATUS					0x00000188
#define VIVS_MMUv2_STATUS_EXCEPTION0__MASK			0x00000003
#define VIVS_MMUv2_STATUS_EXCEPTION0__SHIFT			0
#define VIVS_MMUv2_STATUS_EXCEPTION0(x)				(((x) << VIVS_MMUv2_STATUS_EXCEPTION0__SHIFT) & VIVS_MMUv2_STATUS_EXCEPTION0__MASK)
#define VIVS_MMUv2_STATUS_EXCEPTION1__MASK			0x00000030
#define VIVS_MMUv2_STATUS_EXCEPTION1__SHIFT			4
#define VIVS_MMUv2_STATUS_EXCEPTION1(x)				(((x) << VIVS_MMUv2_STATUS_EXCEPTION1__SHIFT) & VIVS_MMUv2_STATUS_EXCEPTION1__MASK)
#define VIVS_MMUv2_STATUS_EXCEPTION2__MASK			0x00000300
#define VIVS_MMUv2_STATUS_EXCEPTION2__SHIFT			8
#define VIVS_MMUv2_STATUS_EXCEPTION2(x)				(((x) << VIVS_MMUv2_STATUS_EXCEPTION2__SHIFT) & VIVS_MMUv2_STATUS_EXCEPTION2__MASK)
#define VIVS_MMUv2_STATUS_EXCEPTION3__MASK			0x00003000
#define VIVS_MMUv2_STATUS_EXCEPTION3__SHIFT			12
#define VIVS_MMUv2_STATUS_EXCEPTION3(x)				(((x) << VIVS_MMUv2_STATUS_EXCEPTION3__SHIFT) & VIVS_MMUv2_STATUS_EXCEPTION3__MASK)

#define VIVS_MMUv2_CONTROL					0x0000018c
#define VIVS_MMUv2_CONTROL_ENABLE				0x00000001

#define VIVS_MMUv2_EXCEPTION_ADDR				0x00000190

#define VIVS_MC							0x00000000

#define VIVS_MC_MMU_FE_PAGE_TABLE				0x00000400

#define VIVS_MC_MMU_TX_PAGE_TABLE				0x00000404

#define VIVS_MC_MMU_PE_PAGE_TABLE				0x00000408

#define VIVS_MC_MMU_PEZ_PAGE_TABLE				0x0000040c

#define VIVS_MC_MMU_RA_PAGE_TABLE				0x00000410

#define VIVS_MC_DEBUG_MEMORY					0x00000414

#define VIVS_MC_MEMORY_BASE_ADDR_RA				0x00000418

#define VIVS_MC_MEMORY_BASE_ADDR_FE				0x0000041c

#define VIVS_MC_MEMORY_BASE_ADDR_TX				0x00000420

#define VIVS_MC_MEMORY_BASE_ADDR_PEZ				0x00000424

#define VIVS_MC_MEMORY_BASE_ADDR_PE				0x00000428

#define VIVS_MC_MEMORY_TIMING_CONTROL				0x0000042c

#define VIVS_MC_MEMORY_FLUSH					0x00000430

#define VIVS_MC_PROFILE_CYCLE_COUNTER				0x00000438

#define VIVS_MC_DEBUG_READ0					0x0000043c

#define VIVS_MC_DEBUG_READ1					0x00000440

#define VIVS_MC_DEBUG_WRITE					0x00000444

#define VIVS_MC_PROFILE_RA_READ					0x00000448

#define VIVS_MC_PROFILE_TX_READ					0x0000044c

#define VIVS_MC_PROFILE_FE_READ					0x00000450

#define VIVS_MC_PROFILE_PE_READ					0x00000454

#define VIVS_MC_PROFILE_DE_READ					0x00000458

#define VIVS_MC_PROFILE_SH_READ					0x0000045c

#define VIVS_MC_PROFILE_PA_READ					0x00000460

#define VIVS_MC_PROFILE_SE_READ					0x00000464

#define VIVS_MC_PROFILE_MC_READ					0x00000468

#define VIVS_MC_PROFILE_HI_READ					0x0000046c

#define VIVS_MC_PROFILE_CONFIG0					0x00000470
#define VIVS_MC_PROFILE_CONFIG0_FE__MASK			0x0000000f
#define VIVS_MC_PROFILE_CONFIG0_FE__SHIFT			0
#define VIVS_MC_PROFILE_CONFIG0_FE_RESET			0x0000000f
#define VIVS_MC_PROFILE_CONFIG0_DE__MASK			0x00000f00
#define VIVS_MC_PROFILE_CONFIG0_DE__SHIFT			8
#define VIVS_MC_PROFILE_CONFIG0_DE_RESET			0x00000f00
#define VIVS_MC_PROFILE_CONFIG0_PE__MASK			0x000f0000
#define VIVS_MC_PROFILE_CONFIG0_PE__SHIFT			16
#define VIVS_MC_PROFILE_CONFIG0_PE_PIXEL_COUNT_KILLED_BY_COLOR_PIPE	0x00000000
#define VIVS_MC_PROFILE_CONFIG0_PE_PIXEL_COUNT_KILLED_BY_DEPTH_PIPE	0x00010000
#define VIVS_MC_PROFILE_CONFIG0_PE_PIXEL_COUNT_DRAWN_BY_COLOR_PIPE	0x00020000
#define VIVS_MC_PROFILE_CONFIG0_PE_PIXEL_COUNT_DRAWN_BY_DEPTH_PIPE	0x00030000
#define VIVS_MC_PROFILE_CONFIG0_PE_RESET			0x000f0000
#define VIVS_MC_PROFILE_CONFIG0_SH__MASK			0x0f000000
#define VIVS_MC_PROFILE_CONFIG0_SH__SHIFT			24
#define VIVS_MC_PROFILE_CONFIG0_SH_PS_INST_COUNTER		0x07000000
#define VIVS_MC_PROFILE_CONFIG0_SH_RENDERED_PIXEL_COUNTER	0x08000000
#define VIVS_MC_PROFILE_CONFIG0_SH_VS_INST_COUNTER		0x09000000
#define VIVS_MC_PROFILE_CONFIG0_SH_RENDERED_VERTICE_COUNTER	0x0a000000
#define VIVS_MC_PROFILE_CONFIG0_SH_VTX_BRANCH_INST_COUNTER	0x0b000000
#define VIVS_MC_PROFILE_CONFIG0_SH_VTX_TEXLD_INST_COUNTER	0x0c000000
#define VIVS_MC_PROFILE_CONFIG0_SH_PXL_BRANCH_INST_COUNTER	0x0d000000
#define VIVS_MC_PROFILE_CONFIG0_SH_PXL_TEXLD_INST_COUNTER	0x0e000000
#define VIVS_MC_PROFILE_CONFIG0_SH_RESET			0x0f000000

#define VIVS_MC_PROFILE_CONFIG1					0x00000474
#define VIVS_MC_PROFILE_CONFIG1_PA__MASK			0x0000000f
#define VIVS_MC_PROFILE_CONFIG1_PA__SHIFT			0
#define VIVS_MC_PROFILE_CONFIG1_PA_INPUT_VTX_COUNTER		0x00000003
#define VIVS_MC_PROFILE_CONFIG1_PA_INPUT_PRIM_COUNTER		0x00000004
#define VIVS_MC_PROFILE_CONFIG1_PA_OUTPUT_PRIM_COUNTER		0x00000005
#define VIVS_MC_PROFILE_CONFIG1_PA_DEPTH_CLIPPED_COUNTER	0x00000006
#define VIVS_MC_PROFILE_CONFIG1_PA_TRIVIAL_REJECTED_COUNTER	0x00000007
#define VIVS_MC_PROFILE_CONFIG1_PA_CULLED_COUNTER		0x00000008
#define VIVS_MC_PROFILE_CONFIG1_PA_RESET			0x0000000f
#define VIVS_MC_PROFILE_CONFIG1_SE__MASK			0x00000f00
#define VIVS_MC_PROFILE_CONFIG1_SE__SHIFT			8
#define VIVS_MC_PROFILE_CONFIG1_SE_CULLED_TRIANGLE_COUNT	0x00000000
#define VIVS_MC_PROFILE_CONFIG1_SE_CULLED_LINES_COUNT		0x00000100
#define VIVS_MC_PROFILE_CONFIG1_SE_RESET			0x00000f00
#define VIVS_MC_PROFILE_CONFIG1_RA__MASK			0x000f0000
#define VIVS_MC_PROFILE_CONFIG1_RA__SHIFT			16
#define VIVS_MC_PROFILE_CONFIG1_RA_VALID_PIXEL_COUNT		0x00000000
#define VIVS_MC_PROFILE_CONFIG1_RA_TOTAL_QUAD_COUNT		0x00010000
#define VIVS_MC_PROFILE_CONFIG1_RA_VALID_QUAD_COUNT_AFTER_EARLY_Z	0x00020000
#define VIVS_MC_PROFILE_CONFIG1_RA_TOTAL_PRIMITIVE_COUNT	0x00030000
#define VIVS_MC_PROFILE_CONFIG1_RA_PIPE_CACHE_MISS_COUNTER	0x00090000
#define VIVS_MC_PROFILE_CONFIG1_RA_PREFETCH_CACHE_MISS_COUNTER	0x000a0000
#define VIVS_MC_PROFILE_CONFIG1_RA_RESET			0x000f0000
#define VIVS_MC_PROFILE_CONFIG1_TX__MASK			0x0f000000
#define VIVS_MC_PROFILE_CONFIG1_TX__SHIFT			24
#define VIVS_MC_PROFILE_CONFIG1_TX_TOTAL_BILINEAR_REQUESTS	0x00000000
#define VIVS_MC_PROFILE_CONFIG1_TX_TOTAL_TRILINEAR_REQUESTS	0x01000000
#define VIVS_MC_PROFILE_CONFIG1_TX_TOTAL_DISCARDED_TEXTURE_REQUESTS	0x02000000
#define VIVS_MC_PROFILE_CONFIG1_TX_TOTAL_TEXTURE_REQUESTS	0x03000000
#define VIVS_MC_PROFILE_CONFIG1_TX_MEM_READ_COUNT		0x05000000
#define VIVS_MC_PROFILE_CONFIG1_TX_MEM_READ_IN_8B_COUNT		0x06000000
#define VIVS_MC_PROFILE_CONFIG1_TX_CACHE_MISS_COUNT		0x07000000
#define VIVS_MC_PROFILE_CONFIG1_TX_CACHE_HIT_TEXEL_COUNT	0x08000000
#define VIVS_MC_PROFILE_CONFIG1_TX_CACHE_MISS_TEXEL_COUNT	0x09000000
#define VIVS_MC_PROFILE_CONFIG1_TX_RESET			0x0f000000

#define VIVS_MC_PROFILE_CONFIG2					0x00000478
#define VIVS_MC_PROFILE_CONFIG2_MC__MASK			0x0000000f
#define VIVS_MC_PROFILE_CONFIG2_MC__SHIFT			0
#define VIVS_MC_PROFILE_CONFIG2_MC_TOTAL_READ_REQ_8B_FROM_PIPELINE	0x00000001
#define VIVS_MC_PROFILE_CONFIG2_MC_TOTAL_READ_REQ_8B_FROM_IP	0x00000002
#define VIVS_MC_PROFILE_CONFIG2_MC_TOTAL_WRITE_REQ_8B_FROM_PIPELINE	0x00000003
#define VIVS_MC_PROFILE_CONFIG2_MC_RESET			0x0000000f
#define VIVS_MC_PROFILE_CONFIG2_HI__MASK			0x00000f00
#define VIVS_MC_PROFILE_CONFIG2_HI__SHIFT			8
#define VIVS_MC_PROFILE_CONFIG2_HI_AXI_CYCLES_READ_REQUEST_STALLED	0x00000000
#define VIVS_MC_PROFILE_CONFIG2_HI_AXI_CYCLES_WRITE_REQUEST_STALLED	0x00000100
#define VIVS_MC_PROFILE_CONFIG2_HI_AXI_CYCLES_WRITE_DATA_STALLED	0x00000200
#define VIVS_MC_PROFILE_CONFIG2_HI_RESET			0x00000f00

#define VIVS_MC_PROFILE_CONFIG3					0x0000047c

#define VIVS_MC_BUS_CONFIG					0x00000480

#define VIVS_MC_START_COMPOSITION				0x00000554

#define VIVS_MC_128B_MERGE					0x00000558


#endif /* STATE_HI_XML */
