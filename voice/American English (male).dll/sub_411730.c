// 函数: sub_411730
// 地址: 0x411730
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_8 = ecx

if (data_414860 == 0)
    return 

int32_t* eax_1 = sub_40fc30(data_414860)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        int32_t* eax_3 = sub_40fa54(eax_1, i)
        
        if (eax_3[1] == arg1)
            sub_40f964(eax_1, i)
            sub_402eb0(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_1 = 0x4117ae
sub_40fc44(data_414860)
