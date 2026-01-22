// 函数: sub_47af44
// 地址: 0x47af44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = *(arg1 + 0x20)

if (esi != 0)
    int32_t* eax = *(arg1 + 0x10)
    sub_403e18(eax, &data_468718)
    
    if (eax[0x1b] == *(esi + 0x198))
        int32_t result
        result.b = 1
        return result

return 0
