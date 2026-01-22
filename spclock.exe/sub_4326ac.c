// 函数: sub_4326ac
// 地址: 0x4326ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg3
int32_t esi = arg2
arg2.b = 1
void* result = sub_403c38(arg3, arg2)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(result + 8) = esi
*(result + 0xc) = arg3
fsbase->NtTib.ExceptionList = ExceptionList
sub_42fb70(result)
sub_42fb74(*(arg1 + 0x28))
*(arg1 + 0x28) = result
return result
