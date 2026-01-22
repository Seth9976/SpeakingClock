// 函数: sub_439e34
// 地址: 0x439e34
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
int32_t* var_6c = &var_4
int32_t (* var_70)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48
sub_403578(&var_48, 0x40, 0)
var_48 = 0x40
int32_t var_44 = 0x2001

if ((arg4 & 0x400) == 0x400)
    int32_t var_44_1 = 0x2201

int32_t var_40 = sub_42ad8c(*(*(*(*(arg5 - 4) + 0x190) + 0xc) + 0x18))
sub_4659bc()
void var_54
void* ecx = &var_54
int32_t edx
edx.b = 2
sub_465db0(ecx, edx)
int32_t ecx_1 = sub_4054c8(ecx, arg2)
int32_t eax_11 = sub_4054d8(var_58)
sub_4054c8(ecx_1, arg2)
int32_t eax_13 = sub_4054e8(var_5c)
void* eax_15
int32_t edx_3
eax_15, edx_3 = sub_4659bc()
edx_3.b = 3
int32_t var_50
int32_t var_4c
sub_433004(var_50, arg1, sub_465a84(eax_15, edx_3), &var_48, arg3, arg4, eax_13, eax_11, var_4c)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_6c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_439f23
return sub_405380(&var_5c, 2)
