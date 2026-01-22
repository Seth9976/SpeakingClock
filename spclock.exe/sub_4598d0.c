// 函数: sub_4598d0
// 地址: 0x4598d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 - 0x10))()
uint32_t result
result.w = 3 & arg1[7].w

if (0 == result.w)
    void* eax_1 = arg1[0x1d]
    int32_t edx_1 = *(eax_1 + 0xc)
    
    if (edx_1 u<= 0 || edx_1 s>= arg1[0x12])
        int32_t edx_3 = *(eax_1 + 0x14)
        
        if (edx_3 u> 0 && edx_3 s> arg1[0x12])
            *(eax_1 + 0x14) = arg1[0x12]
    else
        *(eax_1 + 0xc) = arg1[0x12]
    
    int32_t edx_5 = *(eax_1 + 8)
    
    if (edx_5 u<= 0 || edx_5 s>= arg1[0x13])
        int32_t edx_7 = *(eax_1 + 0x10)
        
        if (edx_7 u> 0 && edx_7 s> arg1[0x13])
            *(eax_1 + 0x10) = arg1[0x13]
    else
        *(eax_1 + 8) = arg1[0x13]
    
    result = *(arg2 + 8)
    
    if (result != 0 && arg1[0x25] != 0 && (*(arg1 + 0x55) & 4) == 0 && (*(result + 0x18) & 1) == 0
            && *(result + 0x10) != 0 && *(result + 0x14) != 0)
        return sub_458afc(arg1)

return result
