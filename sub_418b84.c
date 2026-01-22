// 函数: sub_418b84
// 地址: 0x418b84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = nullptr
int32_t esi_1 = *(*(arg1 + 0xc) + 8) - 1

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        void* result_1 = sub_41a0f4(*(arg1 + 0xc), edi_1)
        
        if (sub_403e94(arg2, result_1) != 0)
            char eax_7
            
            if (result != 0)
                eax_7 = sub_403e94(result_1, result)
            
            if (result == 0 || eax_7 != 0)
                result = result_1
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
