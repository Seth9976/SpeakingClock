// 函数: sub_451060
// 地址: 0x451060
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result = *(arg1 + 4)
int32_t esi_1 = result[2] - 1

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t ebx_1 = 0
    int32_t i
    
    do
        result = sub_41a0f4(*(arg1 + 4), ebx_1)
        
        if (arg2 == *result)
            result = sub_41a0f4(*(arg1 + 4), ebx_1)
            *result = 0
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
