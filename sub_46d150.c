// 函数: sub_46d150
// 地址: 0x46d150
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
arg1[0x97] += 1
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45dcdc(arg1)
int32_t edx_1 = *(arg2 + 4)
int32_t eax_2

if (edx_1 == 1)
    eax_2.b = 1
else if (edx_1 == 2)
    eax_2.b = 2
(*(*arg1 + 0xe0))()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_46d1c3
arg1[0x97] -= 1
return arg1
