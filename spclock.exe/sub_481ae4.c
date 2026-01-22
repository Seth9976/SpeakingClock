// 函数: sub_481ae4
// 地址: 0x481ae4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
void* ebx = arg1
void* result = *(ebx + 0x254)

if (result != 0)
    int32_t edi_2 = *(*(result + 0x2b0) + 8) - 1
    
    if (edi_2 s< esi)
        int32_t var_1c = esi
        char var_18_1 = 0
        int32_t var_14_1 = edi_2
        char var_10_1 = 0
        arg2.b = 1
        int32_t eax_1
        eax_1, ebx, esi = sub_40cfa8(sub_41715c+0x378, arg2, data_4ac050, 1, &var_1c)
        sub_40451c(eax_1)
    
    int32_t eax_3 = sub_4819e8(ebx)
    int32_t eax_5 = sub_4819cc(ebx)
    result = sub_41a1e8(*(*(ebx + 0x254) + 0x2b0), eax_5, esi)
    
    if (eax_3 s>= 0)
        sub_4819e8(ebx)
        return sub_4824e4(*(ebx + 0x254))

return result
