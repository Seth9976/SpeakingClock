// 函数: sub_445d4c
// 地址: 0x445d4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_1 = *(arg1 + 8)
sub_447784(*(arg1 + 4), &var_8)
sub_404bdc(esi_1 + 0x80, var_8)
sub_4478b8(*(arg1 + 4))
(*(**(esi_1 + 0x84) + 8))(ExceptionList, var_18, var_14)
*(arg1 + 8)
*(esi_1 + 0x94)
(*(esi_1 + 0x90))(var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_445dc0
int64_t** result = &var_8
sub_404b88(result)
return result
