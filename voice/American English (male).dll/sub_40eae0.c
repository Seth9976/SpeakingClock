// 函数: sub_40eae0
// 地址: 0x40eae0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_41481c
data_41481c -= 1

if (temp1 u< 1)
    sub_40e6dc()
    data_41480c = sub_40ce1c
    data_414810 = sub_40ca44
    data_414814 = sub_40c954
    data_414818 = sub_40ca44
    *data_41349c = sub_40d108
    *data_4133d0 = sub_40e3d0
    *data_4134e4 = sub_40d41c
    *data_41356c = sub_40d748
    *data_4134f0 = sub_40de70
    InitializeCriticalSection(&data_414824)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
