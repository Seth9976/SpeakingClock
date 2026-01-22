// 函数: sub_40c974
// 地址: 0x40c974
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t esi
int32_t var_c = esi
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t Calendar = sub_4094b8(sub_40c6e8(0x40ca20, 0x100b, GetThreadLocale(), &var_8), 1)

if (Calendar - 3 u< 3)
    EnumCalendarInfoA(sub_40c8c0, GetThreadLocale(), Calendar, 4)
    int32_t i_1 = 7
    int32_t* eax_6 = &data_4af8f8
    int32_t i
    
    do
        *eax_6 = 0xffffffff
        eax_6 = &eax_6[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    EnumCalendarInfoA(sub_40c8fc, GetThreadLocale(), Calendar, 3)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40ca12
int32_t* result = &var_8
sub_404b88(result)
return result
