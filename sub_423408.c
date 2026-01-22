// 函数: sub_423408
// 地址: 0x423408
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg2
int32_t result = *(arg1 + 4)

if (result == 0 || result != *(esi + 4))
    if (*(arg1 + 0x14) == 0)
        arg2.b = 1
        int32_t ecx
        *(arg1 + 0x14) = sub_403c38(ecx, arg2)
    
    result = sub_41a150(*(arg1 + 0x14), esi)
    
    if (result s< 0)
        sub_419f9c(*(arg1 + 0x14), esi)
        result = sub_423408()

*(arg1 + 0x1c) |= 0x100
return result
