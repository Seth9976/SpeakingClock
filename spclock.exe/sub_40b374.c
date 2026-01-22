// 函数: sub_40b374
// 地址: 0x40b374
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_120 = ebx
int32_t esi
int32_t var_124 = esi
int32_t var_8 = 0
int32_t* var_128 = &var_4
int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg2)
SYSTEMTIME date
date.wYear = *(arg3 - 0xe)
date.wMonth = *(arg3 - 0x10)
date.wDay = *(arg3 - 0x12)

if (arg1 s> 2)
    sub_404c20(&var_8, "yyyy")
else
    sub_404c20(&var_8, 0x40b478)

PSTR lpFormat = sub_405018(var_8)
void dateStr

if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
    sub_404df8(arg2, &dateStr, 0x100)
    
    if (arg1 == 1 && **arg2 == 0x30)
        int32_t esi_3 = *arg2
        
        if (esi_3 != 0)
            esi_3 = *(esi_3 - 4)
        
        sub_405080(esi_3 - 1, 2, *arg2, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_128_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_40b469
int32_t* result = &var_8
sub_404b88(result)
return result
