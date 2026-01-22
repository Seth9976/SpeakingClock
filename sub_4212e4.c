// 函数: sub_4212e4
// 地址: 0x4212e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_416794(*(arg1 - 4), *(arg1 - 8), &var_8)
char temp0 = *(*(ebp_1 + 8) - 9)

if (temp0 == 0)
    sub_4054f4(*(ebp_1 - 4), nullptr)
    ebx.b = true
else
    ebp_1 = sub_416794(*(*(ebp_1 + 8) - 0x10), *(*(ebp_1 + 8) - 8), ebp_1 - 8)
    sub_4054f4(*(ebp_1 - 4), *(ebp_1 - 8))
    ebx.b = temp0 == 0

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_42136a
return sub_405380(ebp_1 - 8, 2)
