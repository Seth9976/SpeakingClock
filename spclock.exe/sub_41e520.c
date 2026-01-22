// 函数: sub_41e520
// 地址: 0x41e520
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
esi.w = 0xfff8
sub_403e64(*(arg1 - 0x14), esi, *(*(arg1 - 8) + 0x2c))
*(arg1 - 0x14)
(*(**(arg1 - 8) + 0x20))(ExceptionList, var_18, var_14)

if ((*(*(arg1 - 0x14) + 0x1c) & 0x10) != 0)
    *(arg1 - 0x1c)
    
    if (sub_419ab0() == *(arg1 - 0x14))
        void* eax_14 = *(arg1 - 0x14)
        *(eax_14 + 0x1c) |= 0x200

fsbase->NtTib.ExceptionList = ExceptionList
return 0
