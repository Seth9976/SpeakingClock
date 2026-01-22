// 函数: sub_4a90ac
// 地址: 0x4a90ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4af91c
data_4af91c -= 1

if (temp1 u< 1)
    sub_404874(sub_40ec94)
    sub_40489c(sub_40ec94+0xec)
    
    if (data_4af7f1 != 0)
        sub_404bdc(&data_4aa820, 0x4a9130)
    
    sub_40d564()
    sub_4063f0("SVWU")
    sub_40d694()
    sub_40e67c()
    sub_40df14()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
