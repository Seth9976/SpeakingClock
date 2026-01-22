// 函数: sub_41bafc
// 地址: 0x41bafc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t var_8 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41b378(arg1)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404c78(&var_8, nullptr, 
    (**arg2)(ExceptionList, var_28, var_24, ExceptionList_1, var_1c, var_18) - sub_41c874(arg2))
(*(*arg2 + 0xc))(var_8)
(*(*arg1 + 0x2c))()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41bb83
return sub_41b434(arg1)
