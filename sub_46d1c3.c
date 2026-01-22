// 函数: sub_46d1c3
// 地址: 0x46d1c3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 5) = *(*(arg1 - 4) + 0x260)
*(*(arg1 - 4) + 0x260) = 1
void* var_4 = arg1
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_46cda0(*(arg1 - 4))
fsbase->NtTib.ExceptionList = ExceptionList
void* (__stdcall* var_4_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46d212
void* result = *(arg1 - 4)
*(result + 0x260) = *(arg1 - 5)
return result
