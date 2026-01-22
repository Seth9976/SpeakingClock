// 函数: sub_4202e0
// 地址: 0x4202e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_20
__builtin_memset(&var_20, 0, 0x1c)
int32_t ebx
int32_t var_24 = ebx
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4107b0(arg2)
uint32_t eax_2
int32_t ecx
int32_t edx
eax_2, ecx, edx = sub_41e028(var_8)

switch (eax_2 & 0x7f)
    case 0, 0xd
        if (sub_41fbb4(ecx) != 0xd)
            sub_415e88()
    case 2
        char eax_8
        int32_t* ecx_1
        eax_8, ecx_1 = sub_41ec34(var_8)
        ecx_1.b = 0xff
        sub_414940(arg2, sx.d(eax_8), ecx_1)
    case 3
        int16_t eax_11
        int32_t* ecx_2
        eax_11, ecx_2 = sub_41ec34(var_8)
        ecx_2.b = 0xfe
        sub_414940(arg2, sx.d(eax_11), ecx_2)
    case 4
        int32_t eax_14
        int32_t* ecx_3
        eax_14, ecx_3 = sub_41ec34(var_8)
        ecx_3.b = 0xfc
        sub_414940(arg2, eax_14, ecx_3)
    case 5
        sub_414b38(arg2, sub_41e9e4(var_8))
    case 6, 0xc
        int32_t var_c
        int16_t* ebx_2
        ebx_2, ebp_1 = sub_41fa14(var_8, &var_c)
        esp = &var_8
        sub_414b74(ebx_2, ebp_1[-2])
    case 8, 9
        char eax_31
        int32_t edx_10
        eax_31, edx_10 = sub_41fbb4(ecx)
        edx_10.b = eax_31 == 9
        sub_414b10(arg2, edx_10)
    case 0xa
        sub_420118(&var_4)
        esp = &ExceptionList
        sub_410ad8(arg2, &var_20)
    case 0xf
        sub_414b38(arg2, sub_41ea60(var_8))
    case 0x10
        sub_414b60(arg2, sub_41eaa4(var_8))
    case 0x11
        sub_414b4c(arg2, sub_41eaf4(var_8))
    case 0x12, 0x14
        uint32_t var_10
        sub_41fad0(var_8, &var_10)
        sub_414ba0(arg2, var_10)
    case 0x13
        int32_t eax_35
        int32_t edx_12
        eax_35, edx_12 = sub_41eca0(var_8)
        sub_414a3c(arg2, eax_35, edx_12)
        esp = &ExceptionList
    case 0x15
        sub_414b38(arg2, sub_41ea1c(var_8))
    default
        edx.b = 1
        sub_40451c(sub_40cf6c(sub_41715c+0x210, edx, data_4ac41c))
        esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4204f9
sub_4107c4(&ebp_1[-7])
sub_405368(&ebp_1[-3])
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]
