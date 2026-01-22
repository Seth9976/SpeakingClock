// 函数: sub_46d308
// 地址: 0x46d308
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t eax_1 = *(arg2 + 4)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(arg1, data_4aa794) == 0)
    *(arg2 + 4) = 1

sub_45ebd4(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_14_1)(int32_t* arg1 @ ebp) = sub_46d370
*(arg2 + 4) = eax_1
return arg2
