// 函数: sub_484238
// 地址: 0x484238
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* eax_1 = arg1[6]
int32_t var_14 = *(eax_1 + 0x2a0)
int32_t var_10 = *(eax_1 + 0x2a4)
*(eax_1 + 0x2a0) = 0
*(eax_1 + 0x2a4) = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx
void* ebp_1 = sub_41b208(arg1, edx)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_18_1)(int32_t* arg1 @ ebp) = sub_4842aa
void* result = *(*(ebp_1 - 4) + 0x18)
*(result + 0x2a0) = *(ebp_1 - 0x10)
*(result + 0x2a4) = *(ebp_1 - 0xc)
return result
