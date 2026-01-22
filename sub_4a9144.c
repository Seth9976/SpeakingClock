// 函数: sub_4a9144
// 地址: 0x4a9144
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1990
data_4b1990 -= 1

if (temp1 u< 1)
    sub_41599c()
    data_4b1980 = sub_4104c4
    data_4b1984 = sub_410014
    data_4b1988 = sub_40ff24
    data_4b198c = sub_410014
    *data_4ac268 = sub_4107c4
    *data_4abfc8 = sub_415590
    *data_4ac300 = sub_410ad8
    *data_4ac498 = sub_413adc
    *data_4ac324 = sub_4141fc
    InitializeCriticalSection(&data_4b1998)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
