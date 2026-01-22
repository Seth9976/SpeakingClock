// 函数: sub_4a3767
// 地址: 0x4a3767
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 -= 1
*arg1 += arg1.b
*(arg3 + (arg1 << 1) + 0x4e) += arg3.b
void* var_3 = &__return_addr:1
*arg1 += arg1.b
*arg1 += arg1.b
int32_t __saved_ebp
int32_t* var_b = &__saved_ebp
int32_t (* var_f)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1de8
data_4b1de8 += 1

if (temp1 == 0xffffffff)
    sub_405724(&data_4abe34, sub_4010aa+0x16, 0x52)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
