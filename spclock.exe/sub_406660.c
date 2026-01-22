// 函数: sub_406660
// 地址: 0x406660
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == 0)
    return 0

int32_t esi_1 = 0
int32_t ecx = 0

if (arg3 != 0)
    while (ecx u< arg4)
        if (esi_1 u>= arg2)
            break
        
        uint32_t edx_2 = zx.d(*(arg1 + (ecx << 1)))
        ecx += 1
        
        if (edx_2 u<= 0x7f)
            arg3[esi_1] = edx_2.b
            esi_1 += 1
        else if (edx_2 u<= 0x7ff)
            if (esi_1 + 2 u> arg2)
                break
            
            arg3[esi_1] = (edx_2 u>> 6).b | 0xc0
            edx_2.b &= 0x3f
            edx_2.b |= 0x80
            arg3[esi_1 + 1] = edx_2.b
            esi_1 += 2
        else
            if (esi_1 + 3 u> arg2)
                break
            
            arg3[esi_1] = (edx_2 u>> 0xc).b | 0xe0
            arg3[esi_1 + 1] = ((edx_2 u>> 6).b & 0x3f) | 0x80
            edx_2.b &= 0x3f
            edx_2.b |= 0x80
            arg3[esi_1 + 2] = edx_2.b
            esi_1 += 3
    
    if (esi_1 u>= arg2)
        esi_1 = arg2 - 1
    
    arg3[esi_1] = 0
else if (0 u< arg4)
    do
        uint32_t edx_3 = zx.d(*(arg1 + (ecx << 1)))
        ecx += 1
        
        if (edx_3 u> 0x7f)
            if (edx_3 u> 0x7ff)
                esi_1 += 1
            
            esi_1 += 1
        
        esi_1 += 1
    while (ecx u< arg4)

return esi_1 + 1
