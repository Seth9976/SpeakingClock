// 函数: sub_41c390
// 地址: 0x41c390
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edx = *(arg1 + 0x18) + (arg2 << 3)
int32_t* result = *(arg1 + 0x18) + (arg3 << 3)
int32_t ecx = *edx
*edx = *result
*result = ecx
int32_t ecx_1 = edx[1]
edx[1] = result[1]
result[1] = ecx_1
return result
