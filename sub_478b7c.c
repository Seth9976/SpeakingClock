// 函数: sub_478b7c
// 地址: 0x478b7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1
*arg1 += arg1.b
arg1.b &= 0xba
arg1[0x114e].b += arg3
*arg1 += arg1.b
*(arg4 - 0x75) += (arg2 - 1).b
int32_t eflags
arg1.b = __in_al_dx(arg2 - 1, eflags)
void* var_4 = arg4
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1ce8
data_4b1ce8 += 1

if (temp1 == 0xffffffff)
    if (data_4b1ce0 != 0)
        sub_46ba00()
    
    if (data_4b1cf8 != 0)
        CloseHandle(data_4b1cf8)
    
    sub_419a98()
    sub_405e78(&data_4b1d04, 0x475898)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
