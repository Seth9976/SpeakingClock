// 函数: sub_4a0828
// 地址: 0x4a0828
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1dc4
data_4b1dc4 += 1

if (temp1 == 0xffffffff)
    if (*(data_4b1dc8 + 0x44) != 0)
        sub_4a0800(data_4b1dc8)
    
    sub_406550(&data_4b1dcc)
    sub_406550(&data_4b1dbc)
    sub_406550(&data_4b1dbc)
    sub_404b88(&data_4b1dc0)
    sub_406550(&data_4b1dcc)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
