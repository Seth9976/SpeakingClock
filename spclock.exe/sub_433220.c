// 函数: sub_433220
// 地址: 0x433220
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
sub_432ff4(data_4b1b70)
int32_t* var_8 = &var_4
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4b1b6c s> 0)
    data_4b1b6c -= 1

if (data_4b1b68 != 0 && data_4b1b6c == 0)
    FreeLibrary(data_4b1b68)
    data_4b1b68 = 0
    __builtin_memset(&data_4b1aa8, 0, 0xbc)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_8_1)() = sub_4333de
return sub_432ffc(data_4b1b70)
