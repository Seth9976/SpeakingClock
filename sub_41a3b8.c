// 函数: sub_41a3b8
// 地址: 0x41a3b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
sub_404074(arg1, arg2)
char var_9 = arg2.b
sub_41a4bc(arg1)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edx
edx.b = var_9 & 0xfc
sub_403c58(sub_403c68(arg1[1]), edx)
fsbase->NtTib.ExceptionList = ExceptionList
void (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41a422
sub_41a520(arg1)
return DeleteCriticalSection(&arg1[2])
