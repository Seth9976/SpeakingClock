// 函数: sub_402248
// 地址: 0x402248
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx_1 = (arg1 - 1) & 0xfffffffc
int32_t** result
int32_t ecx
result, ecx = sub_4019b4(arg1)
int32_t ecx_1 = sbb.d(ecx, ecx, result u< 1)
void* edx = ebx_1 + result
int32_t ebx_2 = ebx_1 | ecx_1

if (ebx_2 u< 0x40a2c)
    int32_t ebx_3 = neg.d(ebx_2)
    int32_t temp0_1
    
    do
        *(ebx_3 + edx) = fconvert.d(float.t(0))
        temp0_1 = ebx_3
        ebx_3 += 8
    while (temp0_1 + 8 s< 0)
    *edx = ecx_1

return result
