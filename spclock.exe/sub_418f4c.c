// 函数: sub_418f4c
// 地址: 0x418f4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
uint32_t result = *(arg1 + 0x20)

if (result != arg2)
    *(arg1 + 0x20) = arg2
    result = *(arg1 + 4)
    int32_t esi_2 = *(result + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebp_1 = 0
        int32_t i
        
        do
            void* eax_2 = sub_41a0f4(*(arg1 + 4), ebp_1)
            result = sub_418d58(eax_2, arg2)
            *(eax_2 + 0x10) = result.b
            ebp_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
