// 函数: sub_445ce8
// 地址: 0x445ce8
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
*(arg1 + 8)
*(esi_1 + 0x9c)
(*(esi_1 + 0x98))(ExceptionList, var_18, var_14)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_445d47
int64_t** result = &var_8
sub_404b88(result)
return result
