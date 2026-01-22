// 函数: sub_420894
// 地址: 0x420894
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t ebx_1 = *(*(*(arg2 - 4) + 0x30) + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        void* const result = sub_41a0f4(*(*(arg2 - 4) + 0x30), edi_1)
        
        if (sub_408f64(*(result + 8), arg1) != 0)
            return result
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return nullptr
