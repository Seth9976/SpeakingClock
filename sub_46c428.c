// 函数: sub_46c428
// 地址: 0x46c428
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result

if (*(arg1 + 0x1f) == 0 || *(arg2 + 4) u>= 4)
    result = sx.d(*(arg2 + 4))
    int32_t __saved_ebp
    
    switch (result)
        case 0
            return sub_46c7a0(arg1, *(arg1 + 0xc) - zx.d(*(arg1 + 8)))
        case 1
            return sub_46c7a0(arg1, *(arg1 + 0xc) + zx.d(*(arg1 + 8)))
        case 2
            arg2.b = 1
            int32_t eax_56 = sub_46c330(arg1)
            return sub_46c7a0(arg1, *(arg1 + 0xc) - eax_56)
        case 3
            arg2.b = 1
            return sub_46c7a0(arg1, sub_46c330(arg1) + *(arg1 + 0xc))
        case 4
            if (*(arg1 + 0x14) s<= 0x7fff)
                return sub_46c7a0(arg1, sx.d(*(arg2 + 6)))
            
            return sub_46c7a0(arg1, sub_46c3c8(&__saved_ebp))
        case 5
            result = arg1
            
            if (*(result + 0x1d) != 0)
                if (*(arg1 + 0x14) s<= 0x7fff)
                    return sub_46c7a0(arg1, sx.d(*(arg2 + 6)))
                
                return sub_46c7a0(arg1, sub_46c3c8(&__saved_ebp))
        case 6
            return sub_46c7a0(arg1, 0)
        case 7
            return sub_46c7a0(arg1, *(arg1 + 0x14))
else
    int16_t eax_4 = *(arg2 + 4)
    int32_t var_14_1
    int32_t var_10_1
    int32_t i
    
    if (eax_4 u< 2)
        uint32_t ebx_1 = zx.d(*(arg1 + 8))
        int32_t i_1 = *(arg1 + 0x40)
        var_10_1 = divs.dp.d(sx.q(ebx_1), i_1)
        var_14_1 = mods.dp.d(sx.q(ebx_1), i_1)
        i = i_1
    else if (eax_4 - 2 u< 2)
        uint32_t eax_13 = zx.d(*(arg1 + 0xa))
        int32_t i_2 = *(arg1 + 0x3c)
        var_14_1 = mods.dp.d(sx.q(eax_13), i_2)
        var_10_1 = divs.dp.d(sx.q(eax_13), i_2)
        i = i_2
    else
        i = 0
        var_10_1 = 0
        var_14_1 = 0
    
    result = 0
    uint32_t var_18_1 = 0
    
    for (; i s> 0; i -= 1)
        uint32_t eax_20 = GetTickCount()
        uint32_t esi_2 = eax_20 - var_18_1
        
        if (esi_2 u< *(arg1 + 0x20))
            Sleep(*(arg1 + 0x20) - esi_2)
        
        var_18_1 = eax_20
        int16_t eax_26 = *(arg2 + 4)
        
        if (eax_26 u< 1)
            sub_46c7a0(arg1, *(arg1 + 0xc) - var_10_1)
        else if (eax_26 == 1)
            sub_46c7a0(arg1, *(arg1 + 0xc) + var_10_1)
        else if (eax_26 == 2)
            sub_46c7a0(arg1, *(arg1 + 0xc) - var_10_1)
        else if (eax_26 == 3)
            sub_46c7a0(arg1, *(arg1 + 0xc) + var_10_1)
        
        result = (*(**(arg1 + 4) + 0x8c))()
    
    if (var_14_1 s> 0)
        result = zx.d(*(arg2 + 4))
        int16_t temp5_1 = result.w
        result.w -= 1
        
        if (temp5_1 u< 1)
            return sub_46c7a0(arg1, *(arg1 + 0xc) - var_14_1)
        
        if (temp5_1 == 1)
            return sub_46c7a0(arg1, *(arg1 + 0xc) + var_14_1)
        
        int16_t temp7_1 = result.w
        result.w -= 1
        
        if (temp7_1 == 1)
            return sub_46c7a0(arg1, *(arg1 + 0xc) - var_14_1)
        
        int16_t temp9_1 = result.w
        result.w -= 1
        
        if (temp9_1 == 1)
            return sub_46c7a0(arg1, *(arg1 + 0xc) + var_14_1)

return result
