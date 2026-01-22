// 函数: sub_433d10
// 地址: 0x433d10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t var_c = 0x433d4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1b84
data_4b1b84 += 1

if (temp1 == 0xffffffff && data_4b1b88 u> 0)
    FreeLibrary(data_4b1b88)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
