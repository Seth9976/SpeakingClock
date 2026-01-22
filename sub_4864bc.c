// 函数: sub_4864bc
// 地址: 0x4864bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1d58
data_4b1d58 += 1

if (temp1 == 0xffffffff)
    if (data_4b1d5c != 0)
        FreeLibrary(data_4b1d5c)
    
    if (data_4b1d60 != 0)
        FreeLibrary(data_4b1d60)
    
    sub_4056d8(&data_4abc28, sub_47eafb+0x20d)
    sub_4056d8(&data_4abc34, sub_47eafb+0x20d)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
