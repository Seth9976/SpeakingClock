// 函数: sub_40fd6c
// 地址: 0x40fd6c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
int32_t edi
int32_t var_114 = edi
int32_t var_8 = 0
int32_t* var_118 = &var_4
int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_108[0x100]
sub_403c50(sub_402e28(*arg1, &var_108), &var_108)
esi.w = 0xffff

if (sub_403090(arg1, esi) != 0)
    esi.w = 0xffff
    int32_t* eax_5 = sub_403090(arg1, esi)
    esi.w = 0xfffe
    sub_403090(eax_5, esi, &var_8)
    
    if (var_8 != 0)
        int32_t var_124_1 = var_8
        void* const var_128_1 = &data_40fe18
        int32_t var_12c_1 = *arg2
        sub_403d48(arg2, 3)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_118_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40fe08
int32_t* result = &var_8
sub_4039ec(result)
return result
