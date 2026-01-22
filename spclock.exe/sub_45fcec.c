// 函数: sub_45fcec
// 地址: 0x45fcec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
void* result = *(arg1 + 0x1c8)

if (result != 0)
    int32_t edi_2 = *(result + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t var_14 = 0
        int32_t i
        
        do
            int32_t* eax_1 = sub_41a0f4(*(arg1 + 0x1c8), var_14)
            sub_419f9c(arg2, eax_1)
            esi.w = 0xffb2
            result = sub_403e64(eax_1, esi, arg2)
            var_14 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
