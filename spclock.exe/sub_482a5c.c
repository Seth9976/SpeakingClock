// 函数: sub_482a5c
// 地址: 0x482a5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg2 + 0xc) = 0
int32_t result
int32_t ecx
result, ecx = sub_48239c(arg1, *(arg2 + 8))

if (result == 0)
    return result

*(arg1 + 0x2bc) = result
return sub_456b54(*(arg2 + 8), false, ecx)
