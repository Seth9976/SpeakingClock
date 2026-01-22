// 函数: sub_432200
// 地址: 0x432200
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 = 2
sub_430e98(arg3)
void* esi = arg3[0xa]
void var_5c
__builtin_memcpy(&var_5c, esi + 0x18, 0x54)
int32_t var_44 = 0
int32_t var_48 = 0
void* var_6c_1 = &var_5c
*(esi + 0x10)
*arg1 = sub_42fd44(*(esi + 8), arg3[0xb])
int32_t __saved_ebp
int32_t* var_6c_2 = &__saved_ebp
int32_t (* var_70_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg4 = sub_4303a8(*(arg3[0xa] + 0x10))
fsbase->NtTib.ExceptionList = ExceptionList
return 0
