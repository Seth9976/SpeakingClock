// 函数: sub_410d90
// 地址: 0x410d90
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* edx = *(arg1 + 0x10) + (arg2 << 3)
int32_t* result = *(arg1 + 0x10) + (arg3 << 3)
int32_t ecx = *edx
*edx = *result
*result = ecx
int32_t ecx_1 = edx[1]
edx[1] = result[1]
result[1] = ecx_1
return result
