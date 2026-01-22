// 函数: sub_41b670
// 地址: 0x41b670
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404bdc(arg3, arg2)
sub_41c14c(arg1)
sub_404d70()
void* eax_4 = sub_40dc14(var_8, *arg3)

if (eax_4 == 0)
    sub_4052a8(arg3, nullptr)
else
    sub_4052a8(arg3, eax_4 - 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_41b6e6
int32_t* result = &var_8
sub_404b88(result)
return result
