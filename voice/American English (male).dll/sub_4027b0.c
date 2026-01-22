// 函数: sub_4027b0
// 地址: 0x4027b0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg2 u> arg1)
    int32_t ecx_3 = arg3 s>> 2
    
    if (ecx_3 s>= 0)
        int32_t esi_3
        int32_t edi_3
        edi_3, esi_3 = __builtin_memcpy(arg3 + arg2 - 4 - (ecx_3 << 2), 
            arg3 + arg1 - 4 - (ecx_3 << 2), ecx_3 << 2)
        int32_t count = arg3 & 3
        __builtin_memcpy(edi_3 + 3 - count, esi_3 + 3 - count, count)
else if (arg2 != arg1)
    int32_t ecx = arg3 s>> 2
    
    if (ecx s>= 0)
        int32_t esi_1
        int32_t edi_1
        edi_1, esi_1 = __builtin_memcpy(arg2, arg1, ecx << 2)
        __builtin_memcpy(edi_1, esi_1, arg3 & 3)

return arg3
