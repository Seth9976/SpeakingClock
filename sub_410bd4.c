// 函数: sub_410bd4
// 地址: 0x410bd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* edx
int32_t esi
sub_413adc(&var_8, edx, esi)
sub_414b74(arg1, var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_410c19
int64_t** result = &var_8
sub_404b88(result)
return result
