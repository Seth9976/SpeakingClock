// 函数: sub_477634
// 地址: 0x477634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1ce0 == 0)
    return 

int32_t __saved_ebp
int32_t* var_14_1 = &__saved_ebp
int32_t (* var_18_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
KillTimer(nullptr, data_4b1d0c)
data_4b1d0c = 0
data_4b1ce0
sub_4775ac()
fsbase->NtTib.ExceptionList = ExceptionList
