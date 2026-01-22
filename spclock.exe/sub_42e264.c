// 函数: sub_42e264
// 地址: 0x42e264
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int64_t* var_10 = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_1 = sub_405a48()
sub_408fc0(arg2, &var_10)
sub_404bdc(&eax_1[1], var_10)
*eax_1 = arg4
sub_404bdc(&eax_1[2], arg3)
eax_1[3] = arg5
sub_419f9c(arg1, eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42e2ee
int64_t** result = &var_10
sub_404b88(result)
return result
