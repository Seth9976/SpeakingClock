// 函数: sub_482478
// 地址: 0x482478
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
int32_t ecx
sub_4577d8(ecx, &var_8)
int32_t var_24 = var_8
int32_t var_28 = sub_4819e8(arg2)
int32_t esi_2 = *sub_4818c4(arg1)
(*(esi_2 + 0x64))(arg2, ExceptionList, var_18, var_14)
(*(*arg1 + 0xe8))(var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4824dd
int32_t* result = &var_8
sub_404b88(result)
return result
