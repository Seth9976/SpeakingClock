// 函数: sub_425224
// 地址: 0x425224
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t* var_c = nullptr
int32_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx

if (arg2 != 0)
    *arg2 = 0

int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4251f8()
sub_406594(&var_10, data_4b19fc, 0x4252ac, ExceptionList)
(*(*var_10 + 0xc))()
sub_406568(arg2, var_c)
fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_4252a3
sub_406550(&var_10)
int32_t** result = &var_c
sub_406550(result)
return result
