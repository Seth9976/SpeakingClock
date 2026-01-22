// 函数: sub_4028b8
// 地址: 0x4028b8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg3:1.b = arg3.b
int32_t result
result.w = arg3.w
int32_t ecx_1 = arg2 s>> 2

if (ecx_1 s>= 0)
    int32_t ecx_2
    int32_t edi_1
    edi_1, ecx_2 = __memfill_u32(arg1, result, ecx_1)
    int32_t ecx_5
    int32_t edi_2
    edi_2, ecx_5 = __memfill_u8(edi_1, result.b, arg2 & 3)

return result
