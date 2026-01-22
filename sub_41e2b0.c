// 函数: sub_41e2b0
// 地址: 0x41e2b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_423974(arg1)

if (result - 1 s>= 0)
    void* esi_2 = result
    int32_t ebx_1 = 0
    void* i
    
    do
        result = sub_423948(arg1, ebx_1)
        
        if ((*(result + 0x24) & 4) != 0)
            int32_t var_14_1 = sub_405cb0(*(arg2 - 4)) + 1
            sub_405e6c()
            int32_t eax_9 = sub_423948(arg1, ebx_1)
            result = sub_405cb0(*(arg2 - 4))
            *(*(arg2 - 4) + (result << 2) - 4) = eax_9
        
        ebx_1 += 1
        i = esi_2
        esi_2 -= 1
    while (i != 1)

return result
