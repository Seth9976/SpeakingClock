// 函数: sub_492ca0
// 地址: 0x492ca0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_4236c4(arg1, arg2)
int32_t eax_2 = *(*arg1 + 0x3c)
int32_t eax_4 = *(*arg1 + 0x40)
sub_404dec(ecx, data_4abfd8)
int32_t ecx_1
ecx_1.b = 1
(*(*arg2 + 8))(eax_4, arg1, eax_2, arg1, ExceptionList, var_18, var_14)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_492d07
int32_t* result = &var_8
sub_404b88(result)
return result
