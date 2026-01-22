// 函数: sub_498950
// 地址: 0x498950
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406550(&var_8)

if (sub_498100(arg2, 0x4989b4, &var_8) != 0)
    (*(*var_8 + 0x1c))()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4989ab
int32_t** result = &var_8
sub_406550(result)
return result
