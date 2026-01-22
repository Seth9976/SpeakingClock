// 函数: sub_43afc8
// 地址: 0x43afc8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x257) != 0 && *(arg1 + 0x254) == 1)
    *(arg1 + 0x50) |= 0x200
    return sub_43b004(arg1)

int32_t result = 0xfffffdff & *(arg1 + 0x50)
*(arg1 + 0x50) = result
return result
