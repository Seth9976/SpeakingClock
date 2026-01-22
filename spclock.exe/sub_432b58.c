// 函数: sub_432b58
// 地址: 0x432b58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
sub_432b40(arg1)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i

for (i = *(arg1 + 4); i != 0; i = *i)
    if (arg2 == i[2] && arg3 == i[3])
        break

if (i == 0)
    int32_t* eax_7 = sub_402ea8(0x10)
    *eax_7 = *(arg1 + 4)
    eax_7[1] = sub_432c0c(arg3, arg2)
    eax_7[2] = arg2
    eax_7[3] = arg3
    *(arg1 + 4) = eax_7

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_432c00
return sub_432b4c(arg1)
