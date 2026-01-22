// 函数: sub_49a042
// 地址: 0x49a042
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
char* entry_ebx
char* var_4 = entry_ebx
*(arg1 * 2 + 0x41) += arg2
*(arg1 * 2 + 0x55) += arg2
*entry_ebx += arg2
*arg1 += arg1.b
*arg1 += arg1.b
char* var_8 = entry_ebx
char** esp = &var_8

if (*data_4ac3f4 != 0)
    int32_t eax_1 = *(arg1 + 0x2bc)
    
    if (eax_1 != 0)
        (*data_4ac218)(eax_1)
        esp = &var_8
    
    int32_t eax_4 = *(arg1 + 0x2c0)
    
    if (eax_4 != 0)
        (*data_4ac218)(eax_4)
        esp = &var_4

*(arg1 + 0x2bc) = 0
*(arg1 + 0x2c0) = 0
*esp
return 0
