// 函数: sub_45af98
// 地址: 0x45af98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(**(arg2 - 0xc) + 8))()

if (*(arg2 - 0x10) != 0)
    if (arg1 == 0 || *(*(arg2 - 0x10) + 0x57) != 0)
    label_45afe5:
        
        if (arg1 == *(*(arg2 - 0x10) + 0x5b))
            sub_419f9c(*(arg2 - 0xc), *(arg2 - 0x10))
    else if ((*(*(arg2 - 0x10) + 0x1c) & 0x10) != 0 && (*(*(arg2 - 0x10) + 0x51) & 4) == 0)
        goto label_45afe5

int32_t eax_17 = sub_45b7f4(*(arg2 - 4)) - 1

if (eax_17 s>= 0)
    int32_t i_2 = eax_17 + 1
    int32_t var_8_1 = 0
    int32_t i
    
    do
        int32_t* eax_21 = sub_45b7b8(*(arg2 - 4), var_8_1)
        
        if (arg1 == *(eax_21 + 0x5b))
            if (arg1 == 0 || *(eax_21 + 0x57) != 0 || 0x401 == (0x401 & eax_21[0x14]))
            label_45b063:
                
                if ((sub_403df4(eax_21, 0x46a11c) == 0 || (eax_21[7].b & 0x10) == 0)
                        && eax_21 != *(arg2 - 0x10))
                    int32_t j
                    
                    for (j = 0; j s< *(*(arg2 - 0xc) + 8); j += 1)
                        if (sub_45ae20(eax_21, sub_41a0f4(*(arg2 - 0xc), j), arg1, arg2) != 0)
                            break
                    
                    sub_41a170(*(arg2 - 0xc), j, eax_21)
            else if ((eax_21[7].b & 0x10) != 0 && (*(eax_21 + 0x51) & 4) == 0)
                goto label_45b063
        
        var_8_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t result = *(*(arg2 - 0xc) + 8) - 1

if (result s>= 0)
    int32_t i_3 = result + 1
    int32_t var_8_2 = 0
    int32_t i_1
    
    do
        int32_t var_1c = *(arg2 - 0xc)
        int32_t var_18_1 = var_8_2
        char var_14_1 = arg1
        result = sub_45af50(sub_41a0f4(*(arg2 - 0xc), var_8_2), arg1, &var_1c, arg2)
        var_8_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
