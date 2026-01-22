// 函数: sub_41cc6c
// 地址: 0x41cc6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* ebx_1 = arg2
arg2.b = 1
int32_t* eax = sub_41d37c(arg1, arg2, sub_4182b4+0x19c, 0x1000)
int32_t* var_14_1 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_420e40(eax, ebx_1, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_2)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_41ccc3
return sub_403c68(eax)
