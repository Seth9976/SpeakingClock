// 函数: sub_47cd9c
// 地址: 0x47cd9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1d4c
data_4b1d4c += 1

if (temp1 == 0xffffffff && data_4b1d54 != 0 && data_4b1d50 != 0)
    FreeLibrary(data_4b1d50)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
