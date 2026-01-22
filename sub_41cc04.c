// 函数: sub_41cc04
// 地址: 0x41cc04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t edx
edx.b = 1
int32_t* eax = sub_41d37c(arg1, edx, sub_4182b4+0x108, 0x1000)
int32_t* var_14_1 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_8 = sub_41f5c4(eax)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41cc5b
return sub_403c68(eax)
