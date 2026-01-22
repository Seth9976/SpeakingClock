// 函数: sub_41e410
// 地址: 0x41e410
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void* ecx
void* eax_3 = sub_42005c(*(arg1 - 8), *(arg1 - 0x18), ecx)
*(arg1 - 0x14) = 0

if (*(*(arg1 - 8) + 0x72) != 0)
    void* esi_1 = *(arg1 - 8)
    *(arg1 - 8)
    *(esi_1 + 0x74)
    (*(esi_1 + 0x70))(arg1 - 0x14)

if (*(arg1 - 0x14) == 0)
    *(arg1 - 0x14) = (*(eax_3 - 0xc))()
    
    if ((*(arg1 - 9) & 4) != 0)
        void* eax_17 = *(arg1 - 0x14)
        *(eax_17 + 0x1c) |= 1
        void* eax_19 = *(arg1 - 0x14)
        *(eax_19 + 0x1c) |= 0x200
    
    int32_t* var_20_2 = &__saved_ebp
    int32_t (* var_24_1)() = j_sub_404188
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(*(arg1 - 8) + 0x28)
    (*(**(arg1 - 0x14) + 0x2c))(ExceptionList, var_24_1, var_20_2)
    fsbase->NtTib.ExceptionList = ExceptionList

void* eax_25 = *(arg1 - 0x14)
*(eax_25 + 0x1c) |= 1
fsbase->NtTib.ExceptionList = ExceptionList_1
return 0
