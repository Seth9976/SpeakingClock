// 函数: sub_403ee0
// 地址: 0x403ee0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void** result

if (arg3 == 0)
    result = arg4
    sub_4039ec(result)
else
    int32_t ebx_1 = *(arg3 - 4)
    
    if (ebx_1 == 0)
        result = arg4
        sub_4039ec(result)
    else
        void* const edx = arg2 - 1
        
        if (arg2 s< 1)
            edx = nullptr
        label_403ef3:
            void* ebx_2 = ebx_1 - edx
            
            if (arg1 s< 0)
                result = arg4
                sub_4039ec(result)
            else
                if (arg1 s> ebx_2)
                    arg1 = ebx_2
                
                result = arg4
                sub_403adc(result, edx + arg3, arg1)
        else
            if (edx s< ebx_1)
                goto label_403ef3
            
            result = arg4
            sub_4039ec(result)

return result
