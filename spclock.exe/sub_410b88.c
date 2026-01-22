// 函数: sub_410b88
// 地址: 0x410b88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* edx
int32_t esi
sub_4141fc(&var_8, edx, esi)
sub_414ba0(arg1, var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_410bcd
uint32_t* result = &var_8
sub_405368(result)
return result
