// 函数: sub_4914d4
// 地址: 0x4914d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t ebx_1 = *(*(arg1 + 0x58) + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        if (*(sub_41a0f4(*(arg1 + 0x58), esi_1) + 0xc) != 0)
            result += 1
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
