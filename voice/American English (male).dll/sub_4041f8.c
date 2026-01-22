// 函数: sub_4041f8
// 地址: 0x4041f8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t eax_1 = sub_404168(arg3)
int32_t ebx_1

if (arg2 s>= 1)
    ebx_1 = arg2 - 1
    
    if (eax_1 s< ebx_1)
        ebx_1 = eax_1
else
    ebx_1 = 0

uint32_t eax_2

if (arg1 s>= 0)
    eax_2 = eax_1 - ebx_1
    
    if (arg1 s< eax_2)
        eax_2 = arg1
else
    eax_2 = 0

return sub_4040e8(arg4, ebx_1 * 2 + arg3, eax_2)
