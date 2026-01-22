// 函数: sub_40b1f8
// 地址: 0x40b1f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_124 = ebx
int32_t esi
int32_t var_128 = esi
int32_t var_120 = 0
int32_t var_8 = 0
int32_t* var_12c = &var_4
int32_t (* var_130)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg2)
SYSTEMTIME date
date.wYear = *(arg3 - 0xe)
date.wMonth = *(arg3 - 0x10)
date.wDay = *(arg3 - 0x12)
sub_404c20(&var_8, 0x40b370)
PSTR lpFormat = sub_405018(var_8)
void dateStr

if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
    sub_404df8(arg2, &dateStr, 0x100)
    
    if (arg1 == 1)
        int32_t eax_12 = data_4af8d0
        
        if (eax_12 == 4)
            if (data_4af8d4 == 1)
                int32_t esi_3 = *arg2
                
                if (esi_3 != 0)
                    esi_3 = *(esi_3 - 4)
                
                if (sub_40d8c8(*arg2, esi_3) == 4)
                    int32_t eax_22
                    int32_t ecx_2
                    eax_22, ecx_2 = sub_40d9e4(*arg2, 3)
                    sub_404d80(ecx_2, eax_22 + &dateStr - 1)
                    sub_404c78(arg2, eax_22 + &dateStr - 1, sub_40da68(var_120, 2))
        else if (eax_12 == 0x11)
            sub_405080(sub_40da68(*arg2, 1), 1, *arg2, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_12c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_40b361
sub_404b88(&var_120)
int32_t* result = &var_8
sub_404b88(result)
return result
