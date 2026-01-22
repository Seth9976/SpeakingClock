// 函数: sub_468b7c
// 地址: 0x468b7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg3 + 0x30)
int32_t ebx_1 = *(result + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        result = *(*(*(arg3 + 0x30) + 4) + (esi_1 << 2))
        
        if (*(result + 4) == arg2)
            result = arg4()
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
