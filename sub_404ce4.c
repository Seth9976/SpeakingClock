// 函数: sub_404ce4
// 地址: 0x404ce4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_1010 = arg1
int32_t* result

if (arg3 s> 0)
    int32_t eax_1
    
    if (arg3 + 1 s< 0x7ff)
        eax_1 = sub_404ca8(arg2, 0xfff, &var_1010, arg3)
    
    if (arg3 + 1 s>= 0x7ff || eax_1 s< 0)
        char* ebx_3 = (arg3 + 1) * 2
        sub_4052a8(arg1, ebx_3)
        int32_t ebx_4 = sub_404ca8(arg2, ebx_3, *arg1, arg3)
        
        if (ebx_4 s< 0)
            ebx_4 = 0
        
        return sub_4052a8(arg1, ebx_4)
    
    result = arg1
    sub_404c78(result, &var_1010, eax_1)
else
    result = arg1
    sub_404b88(result)

return result
