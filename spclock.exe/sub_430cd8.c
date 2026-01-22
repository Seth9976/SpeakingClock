// 函数: sub_430cd8
// 地址: 0x430cd8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 8

if (sub_430c58(arg1) == 1)
    return 0

void* edx_1 = *(arg1 + 0x28) + 0x18
uint32_t ecx_1 = zx.d(*(edx_1 + 0x26))

if (ecx_1 s> 0x10)
    if (ecx_1 == 0x18)
        result.b = 6
    else if (ecx_1 == 0x20 && *(edx_1 + 0x28) == 0)
        result.b = 7
else if (ecx_1 == 0x10)
    int32_t eax_4 = *(edx_1 + 0x28)
    
    if (eax_4 u< 1)
        result.b = 4
    else if (eax_4 == 3 && *(edx_1 + 0x44) == 0x7e0)
        result.b = 5
else if (ecx_1 == 1)
    result.b = 1
else if (ecx_1 == 4)
    result.b = 2
else if (ecx_1 == 8)
    result.b = 3

return result
