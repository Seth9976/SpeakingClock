// 函数: sub_4a1654
// 地址: 0x4a1654
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
char* var_c = nullptr
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x364)
int32_t ecx
sub_4577d8(ecx, &var_c)
int32_t eax_2
int32_t ecx_1
eax_2, ecx_1 = sub_403614(var_c, &var_8)

if (var_8 == 0)
label_4a16cb:
    
    if (eax_2 s< 0 || (*(*data_4ac0ac + 0x449) != 0 && eax_2 s> 0x17))
    label_4a16f9:
        int32_t var_28_2 = 0
        sub_476eec(*data_4ac2fc, "Numeric value out of range!", "Error")
        esp = &var_8
        ebp_1 = sub_457808(*(arg1 + 0x364), nullptr)
    else if (*(*data_4ac0ac + 0x449) == 0 && eax_2 s> 0xc)
        goto label_4a16f9
else
    *(arg1 + 0x364)
    sub_4577d8(ecx_1, &var_10)
    
    if (var_10 == 0)
        goto label_4a16cb
    
    int32_t var_28_1 = 0
    sub_476eec(*data_4ac2fc, "Only numeric values allowed!", "Error")
    esp = &var_8
    ebp_1 = sub_457808(*(arg1 + 0x364), nullptr)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a1740
return sub_404bac(&ebp_1[-3], 2)
