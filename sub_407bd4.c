// 函数: sub_407bd4
// 地址: 0x407bd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4af7fc
data_4af7fc += 1

if (temp1 == 0xffffffff && data_4af800 != 0)
    FreeLibrary(data_4af800)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
