// 函数: sub_4656d4
// 地址: 0x4656d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1c50
data_4b1c50 += 1

if (temp1 == 0xffffffff)
    sub_40eb14(&data_4b1c8c)
    sub_465098()
    sub_404b88(&data_4b1c58)
    sub_404b88(&data_4b1c5c)
    sub_405724(0x4ab870, sub_418968+0xb4, 0x16)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
