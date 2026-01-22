// 函数: sub_4216a0
// 地址: 0x4216a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t var_18 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c
int32_t* ecx_1 = sub_416cf8(arg1[-1], arg1[-2], &var_c)
int32_t ebx_1 = 0
int32_t* eax_3

if (*(arg1 - 9) != 0)
    int32_t var_14
    eax_3, ecx_1 = sub_416cf8(arg1[-4], arg1[-2], &var_14)
    ebx_1 = var_14

if (ebx_1 == var_c)
    eax_3.b = 1
else if (var_c != 0)
    int32_t* var_2c_1 = arg1
    sub_421634(&var_c, &var_18, ecx_1)
    
    if (var_18 == 0)
        eax_3.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp) = sub_421736
int32_t* result = &var_18
sub_404b88(result)
return result
