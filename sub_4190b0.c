// 函数: sub_4190b0
// 地址: 0x4190b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
void* result = nullptr
int32_t ebx_1 = *(*(arg1 + 4) + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        void* eax_2 = sub_41a0f4(*(arg1 + 4), esi_1)
        
        if (*(eax_2 + 0x10) != 0)
            result = sub_418cf0(eax_2, arg2)
        
        if (result != 0)
            break
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
