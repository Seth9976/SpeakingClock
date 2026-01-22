// 函数: sub_42939f
// 地址: 0x42939f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg3 += arg2:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
void* var_4 = arg4
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1a44
data_4b1a44 += 1

if (temp1 == 0xffffffff)
    sub_405724(&data_4aac38, sub_4010aa+0x16, 2)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
