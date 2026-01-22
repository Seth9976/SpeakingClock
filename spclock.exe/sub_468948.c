// 函数: sub_468948
// 地址: 0x468948
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
int32_t result = sub_4688d8(arg1)

if (result s>= 0)
    int32_t* edi_1 = *(*(arg1 + 0x5c) + 0x30)
    int32_t edx_1 = edi_1[2]
    
    if (esi s< 0)
        esi = 0
    
    if (edx_1 s<= esi)
        esi = edx_1 - 1
    
    if (result != esi)
        sub_419fe8(edi_1, result)
        return sub_41a170(*(*(arg1 + 0x5c) + 0x30), esi, arg1)

return result
