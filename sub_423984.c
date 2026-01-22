// 函数: sub_423984
// 地址: 0x423984
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
void* result = *(arg1 + 4)

if (result != 0)
    result = sub_41a150(*(result + 0x10), arg1)
    
    if (result s>= 0)
        int32_t* edi_1 = *(*(arg1 + 4) + 0x10)
        int32_t edx_2 = edi_1[2]
        
        if (esi s< 0)
            esi = 0
        
        if (edx_2 s<= esi)
            esi = edx_2 - 1
        
        if (result != esi)
            sub_419fe8(edi_1, result)
            return sub_41a170(*(*(arg1 + 4) + 0x10), esi, arg1)

return result
