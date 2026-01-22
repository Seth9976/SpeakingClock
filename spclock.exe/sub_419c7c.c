// 函数: sub_419c7c
// 地址: 0x419c7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_114 = &var_4
int32_t (* var_118)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != &data_418674 && arg1 != *(arg2 - 8))
    sub_403bf4(arg1)
    sub_419c7c(arg2)
    char var_108[0xfc]
    sub_404dec(sub_403b48(arg1, &var_108), &var_108)
    esp = &var_8
    sub_419b14(var_8, sub_405f54(sub_405f04()), arg2 - 4)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_419d19
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
