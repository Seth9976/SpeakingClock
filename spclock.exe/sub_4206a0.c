// 函数: sub_4206a0
// 地址: 0x4206a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t edx
edx.b = 1
int32_t ecx
int32_t* eax_1 = sub_403c38(ecx, edx)
int32_t* var_c = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4229ec(arg2(ExceptionList, var_10_1, var_c), 0xa)
var_c = (**eax_1)(eax_1)
sub_420654(arg1, &var_c, 4)
sub_420654(arg1, eax_1[1], var_c)
fsbase->NtTib.ExceptionList = eax_1
__return_addr = sub_42071e
return sub_403c68(eax_1)
