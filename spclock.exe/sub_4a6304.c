// 函数: sub_4a6304
// 地址: 0x4a6304
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_c = esi

if (*(arg1 + 0x57) == 0)
    return 

int32_t __saved_ebp
int32_t* var_14_1 = &__saved_ebp
int32_t (* var_18_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_6 =
    sub_49299c(sub_492e9c(*(*data_4ac000 + 0x58), divu.dp.d(0:(zx.d(data_4b1dfe)), 0xa)), esi)
sub_42c1ac(0, 0, *(*(arg1 + 0x3b4) + 0x190), eax_6)
int32_t* eax_14 =
    sub_49299c(sub_492e9c(*(*data_4ac000 + 0x58), modu.dp.d(0:(zx.d(data_4b1dfe)), 0xa)), esi)
sub_42c1ac(0, 0, *(*(arg1 + 0x3b0) + 0x190), eax_14)
fsbase->NtTib.ExceptionList = ExceptionList
