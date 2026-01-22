// 函数: sub_40a174
// 地址: 0x40a174
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t var_24 = 0
int32_t var_8 = 0
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 0)
    sub_4053d8(data_413500, &var_8)
else
    sub_403a84(&var_8, arg1)

int32_t var_20 = var_8
char var_1c = 0xb
int32_t edx
int32_t var_18 = edx
char var_14 = 0xb
int32_t ecx
int32_t var_10 = ecx
char var_c = 0
int32_t* var_40 = &var_20
sub_4053d8(data_41352c, &var_24)
int32_t edx_4
edx_4.b = 1
void** eax_4
void* ebp_1
eax_4, ebp_1 = sub_409f24(sub_406498+0xa4, edx_4, var_24, 2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40a217
sub_4039ec(ebp_1 - 0x20)
sub_4039ec(ebp_1 - 4)
return ebp_1 - 4
