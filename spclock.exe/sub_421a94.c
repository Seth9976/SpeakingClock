// 函数: sub_421a94
// 地址: 0x421a94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_421940(arg2)
sub_404c20(&var_8, *(*(arg2 - 4) + 0x2c))
int32_t* var_1c_1 = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(*(arg2 - 4) + 0x2c)
sub_4207f4(*(arg2 - 4), arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t* (__stdcall* var_1c_2)(void* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_421b14
return sub_404bdc(*(arg2 - 4) + 0x2c, var_8)
