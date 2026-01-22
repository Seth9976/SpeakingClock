// 函数: sub_460e80
// 地址: 0x460e80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t* ebx_1 = arg2
void* const eax_2

if (sub_45fc28(arg1) == 0 || (*(arg1 + 0x55) & 0x20) != 0)
    eax_2 = nullptr
else
    eax_2.b = 1

char var_9 = eax_2.b

if (var_9 != 0)
    arg2.b = 1
    sub_460db8(arg1, arg2)

int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4576ac(arg1, ebx_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_460ef7

if (var_9 == 0)
    return nullptr

return sub_460db8(arg1, 0)
