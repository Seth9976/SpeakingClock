// 函数: sub_40fc90
// 地址: 0x40fc90
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
char var_108[0x100]

if (arg2 == 0)
    sub_403a84(&var_8, sub_40fd57+5)
else
    sub_403c50(sub_402e28(*arg2, &var_108), &var_108)

int32_t var_118 = var_8
char var_114 = 0xb
sub_402e28(*arg1, &var_108)
char (* var_110)[0x100] = &var_108
char var_10c = 4
char (* edx_2)[0x100]
edx_2.b = 1
int32_t eax_4
void* ebp_1
eax_4, ebp_1 = sub_409fe0(0x406318, edx_2, data_41347c, 1, &var_118)
sub_4033c4(eax_4)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40fd4d
sub_4039ec(ebp_1 - 4)
return ebp_1 - 4
