// 函数: sub_41e5c0
// 地址: 0x41e5c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx
sub_42005c(*(arg1 - 8), *(arg1 - 0x18), ecx)
*(arg1 - 0x1c)
*(arg1 - 0x14) = (*(**(arg1 - 8) + 0x14))(ExceptionList, var_18, var_14)
int32_t esi
esi.w = 0xfff2
int32_t eax_10 = sub_403e64(*(arg1 - 0x14), esi)
*(*(arg1 - 8) + 0x2c) = eax_10

if (eax_10 == 0)
    *(*(arg1 - 8) + 0x2c) = *(*(arg1 - 8) + 0x18)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
