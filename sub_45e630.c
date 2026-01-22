// 函数: sub_45e630
// 地址: 0x45e630
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1
int32_t* eax_1
int32_t edx_1
eax_1, edx_1 = sub_46bf14(arg1)
int32_t* var_14

if (eax_1 == 0 || arg1 == eax_1)
label_45e6aa:
    char var_18 = sub_46bdd4(*(arg2 + 8))
    
    if ((*(arg1 + 0x51) & 0x10) == 0)
        int32_t* esi
        esi.w = 0xffba
        sub_403e64(arg1, esi, arg2 + 4, zx.d(var_18), var_18, var_14)
    
    if ((*(arg1 + 0x51) & 0x10) != 0 || *(arg2 + 4) != 0)
        return 0
else
    char eax_3
    
    if (*(eax_1 + 0x275) != 0)
        eax_3, edx_1 = sub_45e630()
    
    if (*(eax_1 + 0x275) == 0 || eax_3 == 0)
        if (eax_1[0xc] == 0)
            goto label_45e6aa
        
        edx_1.b = 1
        var_14 = sub_46bf14(eax_1)
        
        if (var_14 == 0 || eax_1 == var_14 || *(var_14 + 0x275) == 0)
            goto label_45e6aa
        
        if (sub_45e630() == 0)
            goto label_45e6aa
return result
