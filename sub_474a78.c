// 函数: sub_474a78
// 地址: 0x474a78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(**(arg2 - 8) + 8))()

if (*(arg2 - 0xc) != 0 && *(*(arg2 - 0xc) + 0x30) == 0 && (*(*(arg2 - 0xc) + 0x1c) & 0x10) == 0
        && *(*(arg2 - 0xc) + 0x57) != 0 && *(*(arg2 - 0xc) + 0x5b) == arg1
        && *(*(arg2 - 0xc) + 0x273) != 1)
    sub_419f9c(*(arg2 - 8), *(arg2 - 0xc))

int32_t edi_1 = sub_474144(*(arg2 - 0x10)) - 1

if (edi_1 s>= 0)
    int32_t i_2 = edi_1 + 1
    int32_t var_c_1 = 0
    int32_t i
    
    do
        void* eax_22 = sub_474130(*(arg2 - 0x10), var_c_1)
        
        if (*(eax_22 + 0x30) == 0 && *(eax_22 + 0x5b) == arg1 && (*(eax_22 + 0x1c) & 0x10) == 0
                && *(eax_22 + 0x57) != 0 && *(eax_22 + 0x273) != 1 && eax_22 != *(arg2 - 0xc))
            int32_t j
            
            for (j = 0; j s< *(*(arg2 - 8) + 8); j += 1)
                if (sub_474834(eax_22, sub_41a0f4(*(arg2 - 8), j), arg1) != 0)
                    break
            
            sub_41a170(*(arg2 - 8), j, eax_22)
        
        var_c_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

void** result = *(arg2 - 8)
int32_t edi_3 = result[2] - 1

if (edi_3 s>= 0)
    int32_t i_3 = edi_3 + 1
    int32_t var_c_2 = 0
    int32_t i_1
    
    do
        void* var_1c_1 = arg2
        int32_t* eax_38
        void* ecx_3
        eax_38, ecx_3 = sub_41a0f4(*(arg2 - 8), var_c_2)
        result = sub_4748bc(eax_38, arg1, ecx_3)
        var_c_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
