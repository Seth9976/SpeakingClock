// 函数: sub_459838
// 地址: 0x459838
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(data_4b1c40 + 0x20) == 0)
    *(data_4b1c40 + 0x20) = 1
    sub_464cc4(data_4b1c40, 0x68)

*(arg2 + 4) = sub_46bd7c(*(arg2 + 4))
int32_t esi
esi.w = 0xffc9
int32_t result = sub_403e64(arg1, esi, arg2)

if (*(arg2 + 0xc) != 0)
    return result

return (*(*arg1 - 0x10))()
