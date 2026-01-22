// 函数: sub_41134c
// 地址: 0x41134c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char ebx = arg2.b

if (arg5 == 0xffffffff)
    if (arg4 u>= 0x80000000)
        goto label_41136b
    
    arg2.b = 1
    sub_4033c4(sub_409fa4(0x405ff4, arg2, data_413548))
else if (arg5 s< 0xffffffff)
    arg2.b = 1
    sub_4033c4(sub_409fa4(0x405ff4, arg2, data_413548))
else
label_41136b:
    
    if (arg5 != 0)
        if (arg5 s> 0)
            arg2.b = 1
            sub_4033c4(sub_409fa4(0x405ff4, arg2, data_413548))
    else if (arg4 u> 0x7fffffff)
        arg2.b = 1
        sub_4033c4(sub_409fa4(0x405ff4, arg2, data_413548))

int32_t ecx_1
ecx_1.b = ebx
int32_t result
int32_t edx_1
edx_1:result = sx.q((*(*arg3 + 0x14))())
int32_t var_8 = edx_1
return result
