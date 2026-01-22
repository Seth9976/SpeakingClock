// 函数: sub_410728
// 地址: 0x410728
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_c = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (arg3 == arg2)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_4107d0
    int32_t* result = &var_c
    sub_4039ec(result)
    return result

sub_40ffe8(arg1)
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xc))(ExceptionList, var_2c, var_28)
int32_t eax_3 = (*(*arg1 + 0x18))(arg1)
(*(*arg1 + 0x48))()
var_c = eax_3
(*(*arg1 + 0x64))(var_c)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_4107b3
return sub_4100a4(arg1)
