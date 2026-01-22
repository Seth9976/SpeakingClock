// 函数: sub_4307b8
// 地址: 0x4307b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_64 = ebx
int32_t esi
int32_t var_68 = esi
int32_t edi
int32_t var_6c = edi
void var_60
__builtin_memcpy(&var_60, arg4, 0x54)
sub_430e88(arg3)
int32_t var_8 = 0
int32_t var_c = 0
int32_t* var_70_1 = &var_4
int32_t (* var_74)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HPALETTE var_c_1

if (arg1 != data_4b1a48)
    var_c_1 = sub_4303a8(arg1)
else
    var_c_1 = arg1

void* var_7c = &var_60
int32_t* ebp_1 =
    sub_4312bc(arg3, sub_42fd44(arg2, arg3[0xb]), var_c_1, nullptr, *(arg3[0xa] + 0x70), &var_60)
int32_t var_1c
fsbase->NtTib.ExceptionList = var_1c
*ebp_1
return 0
