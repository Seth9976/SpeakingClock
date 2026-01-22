// 函数: sub_42cfb8
// 地址: 0x42cfb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_1 = *arg2 - 1

if (i_1 s> 0)
    int32_t ecx_1 = 1
    int32_t i
    
    do
        char* eax_1 = arg1 + (ecx_1 << 2)
        char* edx_1 = arg1 + ecx_1 * 3
        edx_1[2] = eax_1[2]
        edx_1[1] = eax_1[1]
        *edx_1 = *eax_1
        ecx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t* result = arg2

if (*result s< 0x100)
    sub_403578(arg1 + *arg2 * 3, (0x100 - *arg2) * 3, 0)
    result = arg2
    *result = 0x100

return result
