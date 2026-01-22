// 函数: sub_461f1c
// 地址: 0x461f1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 4)

if (result == 0 || *(result + 0x57) == 0 || *(*(arg1 + 0x1c) + 0x6c) != 0)
    return result

*(result + 0x90) = *(*(arg1 + 0x14) + 0x10)
int32_t ebx_1 = sub_461cc4(arg1, 2)
int32_t esi_1 = sub_461cc4(arg1, 1)
int32_t __saved_ebp

if (sub_461eec(&__saved_ebp) != 0)
    if (*(*(arg1 + 0x14) + 0x10) != 1)
        esi_1 -= *(*(arg1 + 0x1c) + 0xc)
    else
        ebx_1 -= *(*(arg1 + 0x1c) + 0xc)

if (sub_462174(arg1) != 0)
label_46202b:
    
    if (*(*(arg1 + 0x14) + 0x10) != 1)
        ebx_1 -= *(*(arg1 + 0x1c) + 0xc)
    else
        esi_1 -= *(*(arg1 + 0x1c) + 0xc)
else
    int32_t eax_20
    
    if (*(arg1 + 0x14) != *(*(arg1 + 0x1c) + 0x64)
            && *(*(arg1 + 0x14) + 0x10) == *(*(*(arg1 + 0x1c) + 0x64) + 0x10))
        eax_20 = sub_462098(arg1)
    
    if (*(arg1 + 0x14) != *(*(arg1 + 0x1c) + 0x64)
            && *(*(arg1 + 0x14) + 0x10) == *(*(*(arg1 + 0x1c) + 0x64) + 0x10)
            && eax_20 s< *(*(arg1 + 0x1c) + 0x68))
        goto label_46202b
    
    if (*(*(arg1 + 0x14) + 0x10) != *(*(*(arg1 + 0x1c) + 0x64) + 0x10)
            && sub_462098(arg1) s< sub_462098(*(*(arg1 + 0x1c) + 0x64)))
        goto label_46202b

void var_18
sub_418a8c(ebx_1, sub_461c40(arg1, 1), sub_461c40(arg1, 2), &var_18, esi_1)
*(arg1 + 4)
(***(arg1 + 0x1c))()
return sub_457110(*(arg1 + 4), &var_18)
