// 函数: sub_44bc30
// 地址: 0x44bc30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t var_58 = 0
uint32_t var_5c = 0
char* var_8 = nullptr
int32_t ebx_1 = arg4
int32_t* var_6c = &var_4
int32_t (* var_70)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54
sub_403578(&var_54, 0x40, 0)
var_54 = 0x40
int32_t var_50 = 0x2001

if ((ebx_1 & 0x400) == 0x400)
    int32_t var_50_1 = 0x2201

int32_t eax_4 = *((zx.d(*(arg1 + 0x39)) << 2) + &data_4ab7f4)
void* eax_5
int32_t edx
eax_5, edx = sub_4659bc()
edx.b = 7
int32_t var_14
(*data_4ac390)(sub_465a84(eax_5, edx), 0xe, eax_4, 0xedb, &var_14)
int32_t var_4c = sub_42ad8c(*(arg2[3] + 0x18))
void* eax_13 = sub_44ea50(arg1)

if (eax_13 != 0 && sub_4502d0(eax_13) != 0)
    ebx_1 = (ebx_1 & 0xffffffff) | 2 | 0x20000

sub_404c20(&var_8, arg3)

if ((ebx_1:1.b & 4) != 0)
    if (var_8 == 0)
        sub_404e54(&var_8, 0x44be00)
    else if (*var_8 == 0x26 && var_8[1] == 0)
        sub_404e54(&var_8, 0x44be00)

int32_t ecx = sub_42bcec(arg2[5], 1)

if (*(arg1 + 0x3a) != 0)
    char edx_3 = sub_42b638(arg2[3]) | 1
    ecx = sub_42b644(arg2[3], edx_3)

int32_t eax_27 = *((zx.d(*(arg1 + 0x39)) << 2) + &data_4ab7f4)
int32_t ecx_1 = sub_4054c8(ecx, var_8)
int32_t eax_29 = sub_4054d8(var_58)
sub_4054c8(ecx_1, var_8)
var_14 = sub_4054e8(var_5c)
int32_t* var_20 = &var_54
void* eax_33
int32_t edx_6
eax_33, edx_6 = sub_4659bc()
edx_6.b = 7
int32_t eax_34 = sub_465a84(eax_33, edx_6)
sub_433004(0xe, sub_42c73c(arg2), eax_34, var_20, arg5, ebx_1, var_14, eax_29, eax_27)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_44bdec
sub_405380(&var_5c, 2)
char** result = &var_8
sub_404b88(result)
return result
