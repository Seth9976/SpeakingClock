// 函数: sub_401c8c
// 地址: 0x401c8c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* ebx = arg1
int32_t result = 0
int32_t eax = *ebx

if ((eax & 0x80000000) != 0)
    int32_t result_1 = eax & 0x7ffffffc
    result = result_1
    ebx += result_1
    eax = *ebx

if ((eax.b & 2) == 0)
    sub_401b0c(ebx)
    int32_t eax_2 = ebx[2]
    result += eax_2
    void* ebx_1 = ebx + eax_2
    *ebx_1 &= 0xfffffffe

return result
