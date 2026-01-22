// 函数: sub_45a938
// 地址: 0x45a938
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
sub_45b310(arg1)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_456a68(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_45a97f
return sub_45b318(arg1)
