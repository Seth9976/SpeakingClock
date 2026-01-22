// 函数: sub_4325f4
// 地址: 0x4325f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2
arg2.b = 1
int32_t ecx
int32_t* eax_1 = sub_403c38(ecx, arg2)
int32_t __saved_ebp
int32_t* var_20 = &__saved_ebp
int32_t (* var_24)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(**esi)(ExceptionList, var_24, var_20)
sub_41c874(esi)
(*(*eax_1 + 4))()
int32_t eax_8 = (**eax_1)()
sub_41caa0(esi, eax_1[1], eax_8)
void var_e
sub_41caa0(eax_1, &var_e, 6)
int16_t var_c

if (var_c u>= 2)
    sub_42ca2c()

sub_4326ac(arg1, 0, eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
return (*(*arg1 + 0x10))()
