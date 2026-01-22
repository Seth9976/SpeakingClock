// 函数: sub_40ca98
// 地址: 0x40ca98
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t var_18 = 0
int32_t var_1c = 0
int32_t var_20 = 0
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40e554(arg1, &var_18)
int32_t var_14 = var_18
char var_10 = 0xb
sub_40e554(arg2, &var_1c)
int32_t var_c = var_1c
char var_8 = 0xb
int32_t* var_38 = &var_14
sub_4053d8(data_4134e0, &var_20)
int32_t edx_3
edx_3.b = 1
void** eax_5
void* ebp_1
eax_5, ebp_1 = sub_409f24(sub_40c49c+0x110, edx_3, var_20, 1)
sub_4033c4(eax_5)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_40cb2e
return sub_403a10(ebp_1 - 0x1c, 3)
