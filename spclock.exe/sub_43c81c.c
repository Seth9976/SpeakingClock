// 函数: sub_43c81c
// 地址: 0x43c81c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result

if ((arg1[7].b & 0x10) != 0)
label_43c87a:
    int32_t eax_5 = *arg2
    
    if (eax_5 == 5)
        if (arg1[0xa9].b != 0)
            return (*(*arg1 - 0x10))()
        
        return sub_45c95c(arg1, arg2)
    
    result = eax_5 - 0x83
    
    if (eax_5 != 0x83)
        if (result == 0x7f)
            int32_t ecx
            result = sub_45e824(arg1, arg2, ecx)
            
            if (result.b == 0)
                int16_t edi_2 = arg2[1].w
                
                if ((edi_2 == 0xd || edi_2 == 0x1b) && sub_43c094(arg1) != 0)
                    return sub_43c0b8(arg1, 0)
                
                return sub_45c95c(arg1, arg2)
        else
            if (result - 0xaf u>= 7)
                return sub_45c95c(arg1, arg2)
            
            COLORREF color = sub_42ad8c(*(arg1[0x1a] + 0x18))
            SetTextColor(arg2[1], color)
            COLORREF color_1 = sub_42ad8c(sub_42bba8(arg1[0x69]))
            SetBkColor(arg2[1], color_1)
            int32_t ecx_3
            result, ecx_3 = sub_42bc04(arg1[0x69])
            arg2[3] = result
            
            if (arg1[0x90].b != 0)
                int32_t edx_3
                result, edx_3 = sub_433cec(ecx_3)
                
                if (result.b != 0 && arg1[0xaa] == 0xffffffff)
                    edx_3.b = 1
                    result = sub_46bf14(arg1)
                    uint32_t result_1 = result
                    
                    if (result_1 != 0)
                        result = sub_478924(sub_478638(result_1))
                        
                        if (result.b != 0)
                            result = sub_47895c(sub_478638(result_1), arg1)
                            
                            if (result.b != 0)
                                arg1[0xaa] = 0
                                return PostMessageA(arg1[0xa2], 0xb04d, 0, 0)
else
    int32_t edi_1 = *arg2
    
    if (edi_1 != 0x201 && edi_1 != 0x203)
        goto label_43c87a
    
    if (sub_45803c(arg1) != 0 || *(arg1 + 0x5d) != 1)
        goto label_43c87a
    
    result = sub_45c8a8(arg1, arg2)
    
    if (result.b == 0)
        arg1[0x15].w |= 1
        return (*(*arg1 - 0x14))()

return result
