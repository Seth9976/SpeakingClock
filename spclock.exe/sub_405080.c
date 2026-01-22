// 函数: sub_405080
// 地址: 0x405080
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void** result

if (arg3 == 0)
    result = arg4
    sub_404b88(result)
else
    int32_t ebx_1 = *(arg3 - 4)
    
    if (ebx_1 == 0)
        result = arg4
        sub_404b88(result)
    else
        void* const edx = arg2 - 1
        
        if (arg2 s< 1)
            edx = nullptr
        label_405093:
            void* ebx_2 = ebx_1 - edx
            
            if (arg1 s< 0)
                result = arg4
                sub_404b88(result)
            else
                if (arg1 s> ebx_2)
                    arg1 = ebx_2
                
                result = arg4
                sub_404c78(result, edx + arg3, arg1)
        else
            if (edx s< ebx_1)
                goto label_405093
            
            result = arg4
            sub_404b88(result)

return result
