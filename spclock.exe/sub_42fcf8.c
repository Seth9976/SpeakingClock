// 函数: sub_42fcf8
// 地址: 0x42fcf8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(arg1 + 0x28) & 3) == 0 || *(arg1 + 0x40) != 0)
    return 

int16_t edx_1 = *(arg1 + 0x26)

if (edx_1 == 0x10)
    *(arg1 + 0x40) = 0xf800
    *(arg1 + 0x44) = 0x7e0
    *(arg1 + 0x48) = 0x1f
else if (edx_1 == 0x20)
    *(arg1 + 0x40) = 0xff0000
    *(arg1 + 0x44) = 0xff00
    *(arg1 + 0x48) = 0xff
