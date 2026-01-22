// 函数: sub_40a4c8
// 地址: 0x40a4c8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t var_14 = 0
int32_t* var_8 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_2 = zx.d(sub_40a264(var_8))
int32_t* ebx_1
int32_t edx_2

if (eax_2 - 3 u< 8)
    edx_2.b = 1
    ebx_1 = sub_409ee8(*((eax_2 << 3) + &data_413244), edx_2, *((eax_2 << 3) + 0x413248))
else if (eax_2 == 0xb)
    esp = &ExceptionList
    ebx_1 = sub_40a2fc(&var_4)
else if (eax_2 - 0xc u>= 0xa)
    int32_t var_10 = *var_8
    char var_c_1 = 0
    int32_t* var_28_2 = &var_10
    sub_4053d8(data_4133cc, &var_14)
    int32_t edx_5
    edx_5.b = 1
    int32_t* eax_10
    eax_10, ebp_1 = sub_409f24(sub_405ccc+0x218, edx_5, var_14, 0)
    esp = &var_8
    ebx_1 = eax_10
else
    edx_2.b = 1
    ebx_1 = sub_409ee8(*((eax_2 << 3) + &data_413244), edx_2, *((eax_2 << 3) + 0x413248))

if (sub_40303c(ebx_1, 0x405e8c) != 0)
    ebx_1[3] = ebp_1[-1]

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_40a58a
sub_4039ec(&ebp_1[-4])
return &ebp_1[-4]
