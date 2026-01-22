// 函数: sub_45b7b8
// 地址: 0x45b7b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebp = *(arg1 + 0x1cc)
int32_t esi

if (ebp == 0)
    esi = 0
else
    esi = ebp[2]

if (esi s<= arg2)
    return sub_41a0f4(*(arg1 + 0x1d0), arg2 - esi)

return sub_41a0f4(ebp, arg2)
