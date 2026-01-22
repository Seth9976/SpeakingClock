// 函数: sub_411ba4
// 地址: 0x411ba4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_c = 0
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1
int32_t ecx
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_411a94(ecx)

switch (eax_1 & 0x7f)
    case 1
        sub_411af0(&var_4)
        esp = &ExceptionList
    case 2
        sub_411d88(var_8, 1)
    case 3
        sub_411d88(var_8, 2)
    case 4
        sub_411d88(var_8, 4)
    case 5
        sub_411d88(var_8, 0xa)
    case 6, 7
        sub_4118b8(var_8, &var_c, ecx_1)
    case 0xa
        sub_411b18(1, edx, ecx_1, &var_4)
        esp = &ExceptionList
    case 0xb
        ebp_1 = sub_411aa8(var_8)
        esp = &var_8
    case 0xc
        sub_411b18(1, edx, ecx_1, &var_4)
        esp = &ExceptionList
    case 0xe
        sub_411b48(&var_4)
        esp = &ExceptionList
    case 0xf
        sub_411d88(var_8, 4)
    case 0x10
        sub_411d88(var_8, 8)
    case 0x11
        sub_411d88(var_8, 8)
    case 0x12
        sub_411b18(2, edx, ecx_1, &var_4)
        esp = &ExceptionList
    case 0x13
        sub_411d88(var_8, 8)
    case 0x14
        sub_411b18(1, edx, ecx_1, &var_4)
        esp = &ExceptionList

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_411d3a
sub_4039ec(&ebp_1[-2])
return &ebp_1[-2]
