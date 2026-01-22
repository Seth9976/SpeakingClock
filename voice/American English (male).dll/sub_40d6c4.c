// 函数: sub_40d6c4
// 地址: 0x40d6c4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp

if (arg2 != 0)
    *arg2 = 0

int32_t* eax
eax.w = *arg1
void var_10
char eax_1
int32_t ebx_1
int32_t* ebp_1
eax_1, ebx_1, ebp_1 = sub_40e9b0(eax.w, &var_10)
*(ebp_1 - 5) = eax_1

if (*(ebp_1 - 5) == 0)
    *ebp_1
    return *(ebp_1 - 5)

VariantInit(&ebp_1[-7])
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*ebp_1[-3] + 0x1c))(0x100, ExceptionList, var_2c, ebp_1)
sub_403a40(ebp_1[-1], ebp_1[-5])
fsbase->NtTib.ExceptionList = arg2
__return_addr = &data_40d740
return sub_40d0f4(&ebp_1[-7])
