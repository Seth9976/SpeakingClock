// 函数: sub_44b030
// 地址: 0x44b030
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1 = sub_468f3c(arg1)

if (eax_1 != 0)
    int32_t* eax_2 = *(arg1 + 0x10)
    sub_403e18(eax_2, &data_468718)
    sub_404fb0(*(*(arg1 + 0x18) + 0x58), eax_2[0x1f])
    
    if (eax_1 == 0)
        int32_t result
        result.b = 1
        return result

return 0
