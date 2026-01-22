// 函数: sub_445c5c
// 地址: 0x445c5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int64_t* var_c = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_1 = *(arg1 + 8)
sub_447784(*(arg1 + 4), &var_c)
sub_404bdc(esi_1 + 0x80, var_c)
sub_4478b8(*(arg1 + 4))
(*(**(esi_1 + 0x84) + 8))(ExceptionList, var_1c, var_18)
void* eax_5 = *(arg1 + 8)
*(eax_5 + 0xac)
(*(eax_5 + 0xa8))(arg3)
fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_445ce0
int64_t** result = &var_c
sub_404b88(result)
return result
