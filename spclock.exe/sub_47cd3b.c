// 函数: sub_47cd3b
// 地址: 0x47cd3b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 -= 1
*arg1 += arg1.b
*(arg4 + 0x41) += arg3.b
char* var_4 = arg1
*arg2
*arg1 += arg1.b
void* var_9 = arg4
void** var_d = &var_9
int32_t (* var_11)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1d48
data_4b1d48 += 1

if (temp1 == 0xffffffff)
    if (data_4abc24 != 0)
        FreeLibrary(data_4abc24)
    
    sub_404b88(&data_4abc20)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
