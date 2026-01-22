// 函数: sub_4259f4
// 地址: 0x4259f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406568(&var_8, *(sub_41a0f4(*(*(arg1 - 4) + 0x14), *(arg1 - 8)) + 4))
sub_406594(&var_c, var_8, 0x425a78, ExceptionList)
(*(*var_c + 0x3c))()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_425a6f
sub_406550(&var_c)
int32_t** result = &var_8
sub_406550(result)
return result
