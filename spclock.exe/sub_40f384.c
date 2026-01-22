// 函数: sub_40f384
// 地址: 0x40f384
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t var_c = 0
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0x400)
    int32_t ecx
    sub_404e10(ecx, arg1)
    char var_5
    int32_t eax_3 = sub_409624(var_c, &var_5) & 0x7f
    *((eax_3 << 2) + &data_4aaa00)
    *arg3 = (sbb.d(eax_3, eax_3, var_5 u< 1 ^ 1)).w

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_40f3f8
int32_t* result = &var_c
sub_404b88(result)
return result
