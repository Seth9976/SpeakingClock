// 函数: sub_42140c
// 地址: 0x42140c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t result
result.b = 1
int32_t eax_3 = sub_4162ec(*(arg1 - 4), *(arg1 - 8))
int32_t __saved_ebp

if (eax_3 == 0 && sub_4213b4(&__saved_ebp) == 0)
    return 0

if (sub_403df4(eax_3, &data_41780c) != 0)
    if (sub_403df4(eax_3, &data_418674) == 0 || (*(eax_3 + 0x24) & 4) != 0)
        return 0
    
    if (sub_4213b4(&__saved_ebp) == 0 && *(eax_3 + 8) != 0)
        return 0

return result
