// 函数: sub_45fae4
// 地址: 0x45fae4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t esi = arg2
int32_t result = sx.d(sub_45fac0(arg1))

if (result s>= 0)
    int32_t* ebp_1 = *(*(arg1 + 0x30) + 0x1c8)
    int32_t edx_1 = ebp_1[2]
    
    if (esi s< 0)
        esi = 0
    
    if (edx_1 s<= sx.d(esi))
        esi = edx_1.w - 1
    
    int32_t edi_1 = sx.d(esi)
    
    if (result != edi_1)
        sub_419fe8(ebp_1, result)
        return sub_41a170(*(*(arg1 + 0x30) + 0x1c8), edi_1, arg1)

return result
