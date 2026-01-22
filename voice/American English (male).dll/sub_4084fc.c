// 函数: sub_4084fc
// 地址: 0x4084fc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_11c = ebx
int32_t esi
int32_t var_120 = esi
int32_t var_8 = 0
int32_t* var_124 = &var_4
int32_t (* var_128)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4039ec(arg2)
void* eax_1
eax_1.w = *(arg3 - 0xe)
SYSTEMTIME date
date.wYear = eax_1.w
void* eax_2
eax_2.w = *(arg3 - 0x10)
date.wMonth = eax_2.w
void* eax_3
eax_3.w = *(arg3 - 0x12)
date.wDay = eax_3.w

if (arg1 s> 2)
    sub_403a84(&var_8, "yyyy")
else
    sub_403a84(&var_8, 0x4085f0)

PSTR lpFormat = sub_403e88(var_8)
void dateStr

if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
    sub_403c5c(arg2, &dateStr, 0x100)
    
    if (arg1 == 1 && **arg2 == 0x30)
        sub_403ee0(sub_403c88(*arg2) - 1, 2, *arg2, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_124_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4085e1
int32_t* result = &var_8
sub_4039ec(result)
return result
