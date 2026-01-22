// 函数: sub_4a6464
// 地址: 0x4a6464
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

if (data_4b1e08 u<= 9)
    int32_t* eax_13 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 0xa), esi)
    sub_42c1ac(0, 0, *(*(arg1 + 0x3c4) + 0x190), eax_13)
else
    int32_t* eax_6 =
        sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), divu.dp.d(0:(zx.d(data_4b1e08)), 0xa)), esi)
    sub_42c1ac(0, 0, *(*(arg1 + 0x3c4) + 0x190), eax_6)

int32_t* eax_21 =
    sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), modu.dp.d(0:(zx.d(data_4b1e08)), 0xa)), esi)
sub_42c1ac(0, 0, *(*(arg1 + 0x3c8) + 0x190), eax_21)

if (data_4b1e0a u<= 1)
    int32_t* eax_37 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0xe), esi)
    sub_42c1ac(0, 0xaf, *(*(arg1 + 0x3d4) + 0x190), eax_37)
else
    int32_t* eax_28 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0xe), esi)
    sub_42c1ac(0, (zx.d(data_4b1e0a) - 2) * 0x19, *(*(arg1 + 0x3d4) + 0x190), eax_28)

int32_t esi_2 = zx.d(data_4b1e0a) - 1
int32_t* eax_44 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), esi_2), esi_2)
sub_42c1ac(0, esi_2 * 0x19, *(*(arg1 + 0x3d4) + 0x190), eax_44)
fsbase->NtTib.ExceptionList = ExceptionList
