#ifndef __HI_SOCP_H__
#define __HI_SOCP_H__ 
#define HI_SOCP_GLOBAL_SRST_CTRL_OFFSET (0x0)
#define HI_SOCP_ENC_SRST_CTRL_OFFSET (0x4)
#define HI_SOCP_DEC_SRST_CTRL_OFFSET (0x8)
#define HI_SOCP_ENC_CH_STATUS_OFFSET (0xC)
#define HI_SOCP_DEC_CH_STATUS_OFFSET (0x10)
#define HI_SOCP_CLK_CTRL_OFFSET (0x14)
#define HI_SOCP_PRIOR_CFG_OFFSET (0x18)
#define HI_SOCP_INT_TIMEOUT_OFFSET (0x24)
#define HI_SOCP_BUFFER_TIMEOUT_OFFSET (0x28)
#define HI_SOCP_DEC_PKT_LEN_CFG_OFFSET (0x2C)
#define HI_SOCP_GLOBAL_INT_STATUS_OFFSET (0x50)
#define HI_SOCP_ENC_CORE0_MASK0_OFFSET (0x54)
#define HI_SOCP_ENC_CORE0_RAWINT0_OFFSET (0x58)
#define HI_SOCP_ENC_CORE0_INT0_OFFSET (0x5C)
#define HI_SOCP_ENC_CORE0_MASK1_OFFSET (0x60)
#define HI_SOCP_ENC_CORE1_MASK1_OFFSET (0x64)
#define HI_SOCP_ENC_RAWINT1_OFFSET (0x68)
#define HI_SOCP_ENC_CORE0_INT1_OFFSET (0x6C)
#define HI_SOCP_ENC_CORE1_INT1_OFFSET (0x70)
#define HI_SOCP_ENC_CORE0_MASK2_OFFSET (0x74)
#define HI_SOCP_ENC_CORE0_RAWINT2_OFFSET (0x78)
#define HI_SOCP_ENC_CORE0_INT2_OFFSET (0x7C)
#define HI_SOCP_ENC_CORE0_MASK3_OFFSET (0x80)
#define HI_SOCP_ENC_CORE1_MASK3_OFFSET (0x84)
#define HI_SOCP_ENC_RAWINT3_OFFSET (0x88)
#define HI_SOCP_ENC_CORE0_INT3_OFFSET (0x8C)
#define HI_SOCP_ENC_CORE1_INT3_OFFSET (0x90)
#define HI_SOCP_DEC_CORE0_MASK0_OFFSET (0xA8)
#define HI_SOCP_DEC_CORE1_MASK0_OFFSET (0xAC)
#define HI_SOCP_DEC_RAWINT0_OFFSET (0xB0)
#define HI_SOCP_DEC_CORE0_INT0_OFFSET (0xB4)
#define HI_SOCP_DEC_CORE1_INT0_OFFSET (0xB8)
#define HI_SOCP_DEC_CORE0_MASK1_OFFSET (0xBC)
#define HI_SOCP_DEC_CORE0_RAWINT1_OFFSET (0xC0)
#define HI_SOCP_DEC_CORE0_INT1_OFFSET (0xC4)
#define HI_SOCP_DEC_CORE0_MASK2_OFFSET (0xC8)
#define HI_SOCP_DEC_CORE1NOTE_MASK2_OFFSET (0xCC)
#define HI_SOCP_DEC_RAWINT2_OFFSET (0xD0)
#define HI_SOCP_DEC_CORE0NOTE_NT2_OFFSET (0xD4)
#define HI_SOCP_DEC_CORE1NOTE_INT2_OFFSET (0xD8)
#define HI_SOCP_ENC_CORE1_MASK0_OFFSET (0xDC)
#define HI_SOCP_ENC_CORE1_INT0_OFFSET (0xE0)
#define HI_SOCP_ENC_CORE1_MASK2_OFFSET (0xE4)
#define HI_SOCP_ENC_CORE1_INT2_OFFSET (0xE8)
#define HI_SOCP_DEC_CORE1_MASK1_OFFSET (0xEC)
#define HI_SOCP_DEC_CORE1_INT1_OFFSET (0xF0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_0_OFFSET (0x100)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_1_OFFSET (0x140)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_2_OFFSET (0x180)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_3_OFFSET (0x1C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_4_OFFSET (0x200)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_5_OFFSET (0x240)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_6_OFFSET (0x280)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_7_OFFSET (0x2C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_8_OFFSET (0x300)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_9_OFFSET (0x340)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_10_OFFSET (0x380)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_11_OFFSET (0x3C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_12_OFFSET (0x400)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_13_OFFSET (0x440)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_14_OFFSET (0x480)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_15_OFFSET (0x4C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_16_OFFSET (0x500)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_17_OFFSET (0x540)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_18_OFFSET (0x580)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_19_OFFSET (0x5C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_20_OFFSET (0x600)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_21_OFFSET (0x640)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_22_OFFSET (0x680)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_23_OFFSET (0x6C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_24_OFFSET (0x700)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_25_OFFSET (0x740)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_26_OFFSET (0x780)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_27_OFFSET (0x7C0)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_28_OFFSET (0x800)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_29_OFFSET (0x840)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_30_OFFSET (0x880)
#define HI_SOCP_ENC_SRC_BUFM_WPTR_31_OFFSET (0x8C0)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_0_OFFSET (0x104)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_1_OFFSET (0x144)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_2_OFFSET (0x184)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_3_OFFSET (0x1C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_4_OFFSET (0x204)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_5_OFFSET (0x244)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_6_OFFSET (0x284)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_7_OFFSET (0x2C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_8_OFFSET (0x304)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_9_OFFSET (0x344)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_10_OFFSET (0x384)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_11_OFFSET (0x3C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_12_OFFSET (0x404)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_13_OFFSET (0x444)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_14_OFFSET (0x484)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_15_OFFSET (0x4C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_16_OFFSET (0x504)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_17_OFFSET (0x544)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_18_OFFSET (0x584)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_19_OFFSET (0x5C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_20_OFFSET (0x604)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_21_OFFSET (0x644)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_22_OFFSET (0x684)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_23_OFFSET (0x6C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_24_OFFSET (0x704)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_25_OFFSET (0x744)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_26_OFFSET (0x784)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_27_OFFSET (0x7C4)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_28_OFFSET (0x804)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_29_OFFSET (0x844)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_30_OFFSET (0x884)
#define HI_SOCP_ENC_SRC_BUFM_RPTR_31_OFFSET (0x8C4)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_0_OFFSET (0x108)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_1_OFFSET (0x148)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_2_OFFSET (0x188)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_3_OFFSET (0x1C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_4_OFFSET (0x208)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_5_OFFSET (0x248)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_6_OFFSET (0x288)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_7_OFFSET (0x2C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_8_OFFSET (0x308)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_9_OFFSET (0x348)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_10_OFFSET (0x388)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_11_OFFSET (0x3C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_12_OFFSET (0x408)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_13_OFFSET (0x448)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_14_OFFSET (0x488)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_15_OFFSET (0x4C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_16_OFFSET (0x508)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_17_OFFSET (0x548)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_18_OFFSET (0x588)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_19_OFFSET (0x5C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_20_OFFSET (0x608)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_21_OFFSET (0x648)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_22_OFFSET (0x688)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_23_OFFSET (0x6C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_24_OFFSET (0x708)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_25_OFFSET (0x748)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_26_OFFSET (0x788)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_27_OFFSET (0x7C8)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_28_OFFSET (0x808)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_29_OFFSET (0x848)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_30_OFFSET (0x888)
#define HI_SOCP_ENC_SRC_BUFM_ADDR_31_OFFSET (0x8C8)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_0_OFFSET (0x10C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_1_OFFSET (0x14C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_2_OFFSET (0x18C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_3_OFFSET (0x1CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_4_OFFSET (0x20C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_5_OFFSET (0x24C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_6_OFFSET (0x28C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_7_OFFSET (0x2CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_8_OFFSET (0x30C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_9_OFFSET (0x34C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_10_OFFSET (0x38C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_11_OFFSET (0x3CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_12_OFFSET (0x40C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_13_OFFSET (0x44C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_14_OFFSET (0x48C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_15_OFFSET (0x4CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_16_OFFSET (0x50C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_17_OFFSET (0x54C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_18_OFFSET (0x58C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_19_OFFSET (0x5CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_20_OFFSET (0x60C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_21_OFFSET (0x64C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_22_OFFSET (0x68C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_23_OFFSET (0x6CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_24_OFFSET (0x70C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_25_OFFSET (0x74C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_26_OFFSET (0x78C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_27_OFFSET (0x7CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_28_OFFSET (0x80C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_29_OFFSET (0x84C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_30_OFFSET (0x88C)
#define HI_SOCP_ENC_SRC_BUFM_CFG0_31_OFFSET (0x8CC)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_0_OFFSET (0x110)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_1_OFFSET (0x150)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_2_OFFSET (0x190)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_3_OFFSET (0x1D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_4_OFFSET (0x210)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_5_OFFSET (0x250)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_6_OFFSET (0x290)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_7_OFFSET (0x2D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_8_OFFSET (0x310)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_9_OFFSET (0x350)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_10_OFFSET (0x390)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_11_OFFSET (0x3D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_12_OFFSET (0x410)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_13_OFFSET (0x450)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_14_OFFSET (0x490)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_15_OFFSET (0x4D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_16_OFFSET (0x510)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_17_OFFSET (0x550)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_18_OFFSET (0x590)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_19_OFFSET (0x5D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_20_OFFSET (0x610)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_21_OFFSET (0x650)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_22_OFFSET (0x690)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_23_OFFSET (0x6D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_24_OFFSET (0x710)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_25_OFFSET (0x750)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_26_OFFSET (0x790)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_27_OFFSET (0x7D0)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_28_OFFSET (0x810)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_29_OFFSET (0x850)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_30_OFFSET (0x890)
#define HI_SOCP_ENC_SRC_BUFM_CFG1_31_OFFSET (0x8D0)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_0_OFFSET (0x114)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_1_OFFSET (0x154)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_2_OFFSET (0x194)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_3_OFFSET (0x1D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_4_OFFSET (0x214)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_5_OFFSET (0x254)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_6_OFFSET (0x294)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_7_OFFSET (0x2D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_8_OFFSET (0x314)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_9_OFFSET (0x354)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_10_OFFSET (0x394)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_11_OFFSET (0x3D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_12_OFFSET (0x414)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_13_OFFSET (0x454)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_14_OFFSET (0x494)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_15_OFFSET (0x4D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_16_OFFSET (0x514)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_17_OFFSET (0x554)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_18_OFFSET (0x594)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_19_OFFSET (0x5D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_20_OFFSET (0x614)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_21_OFFSET (0x654)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_22_OFFSET (0x694)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_23_OFFSET (0x6D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_24_OFFSET (0x714)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_25_OFFSET (0x754)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_26_OFFSET (0x794)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_27_OFFSET (0x7D4)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_28_OFFSET (0x814)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_29_OFFSET (0x854)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_30_OFFSET (0x894)
#define HI_SOCP_ENC_SRC_RDQ_WPTR_31_OFFSET (0x8D4)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_0_OFFSET (0x118)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_1_OFFSET (0x158)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_2_OFFSET (0x198)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_3_OFFSET (0x1D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_4_OFFSET (0x218)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_5_OFFSET (0x258)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_6_OFFSET (0x298)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_7_OFFSET (0x2D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_8_OFFSET (0x318)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_9_OFFSET (0x358)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_10_OFFSET (0x398)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_11_OFFSET (0x3D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_12_OFFSET (0x418)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_13_OFFSET (0x458)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_14_OFFSET (0x498)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_15_OFFSET (0x4D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_16_OFFSET (0x518)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_17_OFFSET (0x558)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_18_OFFSET (0x598)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_19_OFFSET (0x5D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_20_OFFSET (0x618)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_21_OFFSET (0x658)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_22_OFFSET (0x698)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_23_OFFSET (0x6D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_24_OFFSET (0x718)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_25_OFFSET (0x758)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_26_OFFSET (0x798)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_27_OFFSET (0x7D8)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_28_OFFSET (0x818)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_29_OFFSET (0x858)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_30_OFFSET (0x898)
#define HI_SOCP_ENC_SRC_RDQ_RPTR_31_OFFSET (0x8D8)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_0_OFFSET (0x11C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_1_OFFSET (0x15C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_2_OFFSET (0x19C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_3_OFFSET (0x1DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_4_OFFSET (0x21C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_5_OFFSET (0x25C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_6_OFFSET (0x29C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_7_OFFSET (0x2DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_8_OFFSET (0x31C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_9_OFFSET (0x35C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_10_OFFSET (0x39C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_11_OFFSET (0x3DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_12_OFFSET (0x41C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_13_OFFSET (0x45C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_14_OFFSET (0x49C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_15_OFFSET (0x4DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_16_OFFSET (0x51C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_17_OFFSET (0x55C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_18_OFFSET (0x59C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_19_OFFSET (0x5DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_20_OFFSET (0x61C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_21_OFFSET (0x65C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_22_OFFSET (0x69C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_23_OFFSET (0x6DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_24_OFFSET (0x71C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_25_OFFSET (0x75C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_26_OFFSET (0x79C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_27_OFFSET (0x7DC)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_28_OFFSET (0x81C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_29_OFFSET (0x85C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_30_OFFSET (0x89C)
#define HI_SOCP_ENC_SRC_RDQ_BADDR_31_OFFSET (0x8DC)
#define HI_SOCP_ENC_SRC_RDQ_CFG_0_OFFSET (0x120)
#define HI_SOCP_ENC_SRC_RDQ_CFG_1_OFFSET (0x160)
#define HI_SOCP_ENC_SRC_RDQ_CFG_2_OFFSET (0x1A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_3_OFFSET (0x1E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_4_OFFSET (0x220)
#define HI_SOCP_ENC_SRC_RDQ_CFG_5_OFFSET (0x260)
#define HI_SOCP_ENC_SRC_RDQ_CFG_6_OFFSET (0x2A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_7_OFFSET (0x2E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_8_OFFSET (0x320)
#define HI_SOCP_ENC_SRC_RDQ_CFG_9_OFFSET (0x360)
#define HI_SOCP_ENC_SRC_RDQ_CFG_10_OFFSET (0x3A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_11_OFFSET (0x3E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_12_OFFSET (0x420)
#define HI_SOCP_ENC_SRC_RDQ_CFG_13_OFFSET (0x460)
#define HI_SOCP_ENC_SRC_RDQ_CFG_14_OFFSET (0x4A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_15_OFFSET (0x4E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_16_OFFSET (0x520)
#define HI_SOCP_ENC_SRC_RDQ_CFG_17_OFFSET (0x560)
#define HI_SOCP_ENC_SRC_RDQ_CFG_18_OFFSET (0x5A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_19_OFFSET (0x5E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_20_OFFSET (0x620)
#define HI_SOCP_ENC_SRC_RDQ_CFG_21_OFFSET (0x660)
#define HI_SOCP_ENC_SRC_RDQ_CFG_22_OFFSET (0x6A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_23_OFFSET (0x6E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_24_OFFSET (0x720)
#define HI_SOCP_ENC_SRC_RDQ_CFG_25_OFFSET (0x760)
#define HI_SOCP_ENC_SRC_RDQ_CFG_26_OFFSET (0x7A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_27_OFFSET (0x7E0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_28_OFFSET (0x820)
#define HI_SOCP_ENC_SRC_RDQ_CFG_29_OFFSET (0x860)
#define HI_SOCP_ENC_SRC_RDQ_CFG_30_OFFSET (0x8A0)
#define HI_SOCP_ENC_SRC_RDQ_CFG_31_OFFSET (0x8E0)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_0_OFFSET (0x900)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_1_OFFSET (0x920)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_2_OFFSET (0x940)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_3_OFFSET (0x960)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_4_OFFSET (0x980)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_5_OFFSET (0x9A0)
#define HI_SOCP_ENC_DEST_BUFN_WPTR_6_OFFSET (0x9C0)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_0_OFFSET (0x904)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_1_OFFSET (0x924)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_2_OFFSET (0x944)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_3_OFFSET (0x964)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_4_OFFSET (0x984)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_5_OFFSET (0x9A4)
#define HI_SOCP_ENC_DEST_BUFN_RPTR_6_OFFSET (0x9C4)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_0_OFFSET (0x908)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_1_OFFSET (0x928)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_2_OFFSET (0x948)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_3_OFFSET (0x968)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_4_OFFSET (0x988)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_5_OFFSET (0x9A8)
#define HI_SOCP_ENC_DEST_BUFN_ADDR_6_OFFSET (0x9C8)
#define HI_SOCP_ENC_DEST_BUFN_CFG_0_OFFSET (0x90C)
#define HI_SOCP_ENC_DEST_BUFN_CFG_1_OFFSET (0x92C)
#define HI_SOCP_ENC_DEST_BUFN_CFG_2_OFFSET (0x94C)
#define HI_SOCP_ENC_DEST_BUFN_CFG_3_OFFSET (0x96C)
#define HI_SOCP_ENC_DEST_BUFN_CFG_4_OFFSET (0x98C)
#define HI_SOCP_ENC_DEST_BUFN_CFG_5_OFFSET (0x9AC)
#define HI_SOCP_ENC_DEST_BUFN_CFG_6_OFFSET (0x9CC)
#define HI_SOCP_ENC_DEST_BUFN_THRH_0_OFFSET (0x910)
#define HI_SOCP_ENC_DEST_BUFN_THRH_1_OFFSET (0x930)
#define HI_SOCP_ENC_DEST_BUFN_THRH_2_OFFSET (0x950)
#define HI_SOCP_ENC_DEST_BUFN_THRH_3_OFFSET (0x970)
#define HI_SOCP_ENC_DEST_BUFN_THRH_4_OFFSET (0x990)
#define HI_SOCP_ENC_DEST_BUFN_THRH_5_OFFSET (0x9B0)
#define HI_SOCP_ENC_DEST_BUFN_THRH_6_OFFSET (0x9D0)
#define HI_SOCP_DEC_SRC_BUFX_WPTR_0_OFFSET (0xA00)
#define HI_SOCP_DEC_SRC_BUFX_WPTR_1_OFFSET (0xA40)
#define HI_SOCP_DEC_SRC_BUFX_WPTR_2_OFFSET (0xA80)
#define HI_SOCP_DEC_SRC_BUFX_WPTR_3_OFFSET (0xAC0)
#define HI_SOCP_DEC_SRC_BUFX_RPTR_0_OFFSET (0xA04)
#define HI_SOCP_DEC_SRC_BUFX_RPTR_1_OFFSET (0xA44)
#define HI_SOCP_DEC_SRC_BUFX_RPTR_2_OFFSET (0xA84)
#define HI_SOCP_DEC_SRC_BUFX_RPTR_3_OFFSET (0xAC4)
#define HI_SOCP_DEC_SRC_BUFX_ADDR_0_OFFSET (0xA08)
#define HI_SOCP_DEC_SRC_BUFX_ADDR_1_OFFSET (0xA48)
#define HI_SOCP_DEC_SRC_BUFX_ADDR_2_OFFSET (0xA88)
#define HI_SOCP_DEC_SRC_BUFX_ADDR_3_OFFSET (0xAC8)
#define HI_SOCP_DEC_SRC_BUFX_CFG0_0_OFFSET (0xA0C)
#define HI_SOCP_DEC_SRC_BUFX_CFG0_1_OFFSET (0xA4C)
#define HI_SOCP_DEC_SRC_BUFX_CFG0_2_OFFSET (0xA8C)
#define HI_SOCP_DEC_SRC_BUFX_CFG0_3_OFFSET (0xACC)
#define HI_SOCP_DEC_BUFX_STATUS0_0_OFFSET (0xA20)
#define HI_SOCP_DEC_BUFX_STATUS0_1_OFFSET (0xA60)
#define HI_SOCP_DEC_BUFX_STATUS0_2_OFFSET (0xAA0)
#define HI_SOCP_DEC_BUFX_STATUS0_3_OFFSET (0xAE0)
#define HI_SOCP_DEC_BUFX_STATUS1_0_OFFSET (0xA24)
#define HI_SOCP_DEC_BUFX_STATUS1_1_OFFSET (0xA64)
#define HI_SOCP_DEC_BUFX_STATUS1_2_OFFSET (0xAA4)
#define HI_SOCP_DEC_BUFX_STATUS1_3_OFFSET (0xAE4)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_0_OFFSET (0xC00)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_1_OFFSET (0xC10)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_2_OFFSET (0xC20)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_3_OFFSET (0xC30)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_4_OFFSET (0xC40)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_5_OFFSET (0xC50)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_6_OFFSET (0xC60)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_7_OFFSET (0xC70)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_8_OFFSET (0xC80)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_9_OFFSET (0xC90)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_10_OFFSET (0xCA0)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_11_OFFSET (0xCB0)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_12_OFFSET (0xCC0)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_13_OFFSET (0xCD0)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_14_OFFSET (0xCE0)
#define HI_SOCP_DEC_DEST_BUFY_WPTR_15_OFFSET (0xCF0)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_0_OFFSET (0xC04)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_1_OFFSET (0xC14)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_2_OFFSET (0xC24)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_3_OFFSET (0xC34)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_4_OFFSET (0xC44)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_5_OFFSET (0xC54)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_6_OFFSET (0xC64)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_7_OFFSET (0xC74)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_8_OFFSET (0xC84)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_9_OFFSET (0xC94)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_10_OFFSET (0xCA4)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_11_OFFSET (0xCB4)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_12_OFFSET (0xCC4)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_13_OFFSET (0xCD4)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_14_OFFSET (0xCE4)
#define HI_SOCP_DEC_DEST_BUFY_RPTR_15_OFFSET (0xCF4)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_0_OFFSET (0xC08)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_1_OFFSET (0xC18)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_2_OFFSET (0xC28)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_3_OFFSET (0xC38)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_4_OFFSET (0xC48)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_5_OFFSET (0xC58)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_6_OFFSET (0xC68)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_7_OFFSET (0xC78)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_8_OFFSET (0xC88)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_9_OFFSET (0xC98)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_10_OFFSET (0xCA8)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_11_OFFSET (0xCB8)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_12_OFFSET (0xCC8)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_13_OFFSET (0xCD8)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_14_OFFSET (0xCE8)
#define HI_SOCP_DEC_DEST_BUFY_ADDR_15_OFFSET (0xCF8)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_0_OFFSET (0xC0C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_1_OFFSET (0xC1C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_2_OFFSET (0xC2C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_3_OFFSET (0xC3C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_4_OFFSET (0xC4C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_5_OFFSET (0xC5C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_6_OFFSET (0xC6C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_7_OFFSET (0xC7C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_8_OFFSET (0xC8C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_9_OFFSET (0xC9C)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_10_OFFSET (0xCAC)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_11_OFFSET (0xCBC)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_12_OFFSET (0xCCC)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_13_OFFSET (0xCDC)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_14_OFFSET (0xCEC)
#define HI_SOCP_DEC_DEST_BUFY_CFG0_15_OFFSET (0xCFC)
#define HI_SOCP_ENC_CD_DBG0_OFFSET (0xE00)
#define HI_SOCP_ENC_CD_DBG1_OFFSET (0xE04)
#define HI_SOCP_ENC_IBUF_DBG0_OFFSET (0xE08)
#define HI_SOCP_ENC_IBUF_DBG1_OFFSET (0xE0C)
#define HI_SOCP_ENC_IBUF_DBG2_OFFSET (0xE10)
#define HI_SOCP_ENC_IBUF_DBG3_OFFSET (0xE14)
#define HI_SOCP_ENC_OBUF_DBG0_OFFSET (0xE18)
#define HI_SOCP_ENC_OBUF_DBG1_OFFSET (0xE1C)
#define HI_SOCP_ENC_OBUF_DBG2_OFFSET (0xE20)
#define HI_SOCP_ENC_OBUF_DBG3_OFFSET (0xE24)
#define HI_SOCP_DEC_IBUF_DBG0_OFFSET (0xE28)
#define HI_SOCP_DEC_IBUF_DBG1_OFFSET (0xE2C)
#define HI_SOCP_DEC_IBUF_DBG2_OFFSET (0xE30)
#define HI_SOCP_DEC_IBUF_DBG3_OFFSET (0xE34)
#define HI_SOCP_DEC_OBUF_DBG0_OFFSET (0xE38)
#define HI_SOCP_DEC_OBUF_DBG1_OFFSET (0xE3C)
#define HI_SOCP_DEC_OBUF_DBG2_OFFSET (0xE40)
#define HI_SOCP_DEC_OBUF_DBG3_OFFSET (0xE44)
#endif
