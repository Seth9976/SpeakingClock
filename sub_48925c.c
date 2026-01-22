// 函数: sub_48925c
// 地址: 0x48925c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* result = *(arg1 + 0x58)
int32_t ebx_1 = *(result + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        sub_41a0f4(*(arg1 + 0x58), esi_1)
        result = arg2()
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
