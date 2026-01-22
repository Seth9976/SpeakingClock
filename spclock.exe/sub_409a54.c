// 函数: sub_409a54
// 地址: 0x409a54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int64_t* var_c = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1 = sub_409a00(0x409ae4, arg1)

if (ebx_1 == 0 || *(arg1 + ebx_1 - 1) != 0x2e)
    ebx_1 = 0x7fffffff

sub_405080(ebx_1 - 1, 1, arg1, &var_c)
sub_404ea0(arg3, var_c, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_409ad2
int32_t* result = &var_c
sub_404b88(result)
return result
