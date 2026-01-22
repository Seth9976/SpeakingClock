// 函数: sub_4819e8
// 地址: 0x4819e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (*(arg1 + 0x259) == 0)
    return 0xffffffff

int32_t ebx_2 = sub_4819cc(arg1) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        if (*(sub_41a0f4(*(*(arg1 + 0x254) + 0x2b0), edi_1) + 0x259) != 0)
            result += 1
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
