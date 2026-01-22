// 函数: sub_408394
// 地址: 0x408394
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_120 = ebx
int32_t esi
int32_t var_124 = esi
void* var_11c = nullptr
int32_t var_8 = 0
int32_t* var_128 = &var_4
int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_40338c
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
sub_403a84(&var_8, 0x4084f8)
PSTR lpFormat = sub_403e88(var_8)
void dateStr

if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
    sub_403c5c(arg2, &dateStr, 0x100)
    
    if (arg1 == 1)
        int32_t eax_9 = data_414744
        
        if (eax_9 == 4)
            if (data_414748 == 1)
                int32_t eax_16 = sub_403c88(*arg2)
                
                if (sub_40a7cc(*arg2, eax_16) == 4)
                    int32_t eax_20
                    int32_t ecx_2
                    eax_20, ecx_2 = sub_40a8dc(*arg2, 3)
                    sub_403be4(ecx_2, eax_20 + &dateStr - 1)
                    sub_403adc(arg2, eax_20 + &dateStr - 1, sub_40a940(var_11c, 2))
        else if (eax_9 == 0x11)
            sub_403ee0(sub_40a940(*arg2, 1), 1, *arg2, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_128_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4084e9
sub_4039ec(&var_11c)
int32_t* result = &var_8
sub_4039ec(result)
return result
