// 函数: sub_457a7c
// 地址: 0x457a7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
void* result = *(arg1 + 0x30)

if (result != 0)
    result = sub_41a150(*(result + 0x1cc), arg1)
    
    if (result s>= 0)
        int32_t* edi_1 = *(*(arg1 + 0x30) + 0x1cc)
        int32_t edx_2 = edi_1[2]
        
        if (esi s< 0)
            esi = 0
        
        if (edx_2 s<= esi)
            esi = edx_2 - 1
        
        if (result != esi)
            sub_419fe8(edi_1, result)
            sub_41a170(*(*(arg1 + 0x30) + 0x1cc), esi, arg1)
            int32_t edx_7
            result, edx_7 = sub_457c5c(arg1, *(arg1 + 0x57), 1)
            
            if ((*(arg1 + 0x1c) & 1) == 0)
                edx_7.b = 1
                int32_t edx_8
                result, edx_8 = sub_46bf24(arg1)
                
                if ((*(result + 0x54) & 4) != 0)
                    edx_8.b = 1
                    esi.w = 0xffd0
                    return sub_403e64(result, esi, edx_8)

return result
