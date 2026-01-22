// 函数: sub_492910
// 地址: 0x492910
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t esi_1 = arg2
arg2.b = 1
int32_t* eax
int32_t edx
eax, edx = sub_492e0c(&data_4926b8, arg2)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = esi_1
edx.b = 1
char eax_3
void* ebp_1
int32_t esi_2
eax_3, ebp_1, esi_2 = sub_488ea4(arg1, edx, nullptr, eax)
*(ebp_1 - 1) = eax_3
sub_49299c(*(ebp_1 - 8), esi_2)
(*(*arg3 + 8))()
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_49297f
return sub_403c68(*(ebp_1 - 8))
