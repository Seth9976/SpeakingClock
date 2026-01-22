// 函数: sub_4666a8
// 地址: 0x4666a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1cc8
data_4b1cc8 += 1

if (temp1 == 0xffffffff)
    if (*data_4abfa4 == 0)
        sub_403c68(data_4b1ccc)
    
    sub_404b88(&data_4ab9a0)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
