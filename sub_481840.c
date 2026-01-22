// 函数: sub_481840
// 地址: 0x481840
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 - 0x10))(ExceptionList, var_20, var_1c)

if (*(arg1 + 0x26e) != 0 && *(arg2 + 4) == 0)
    void* eax_4 = *(arg2 + 8)
    *(arg1 + 0x279) = *eax_4
    void* edi_2 = arg1 + 0x27d
    void* esi_2 = eax_4 + 4
    *edi_2 = *esi_2
    void* edi_3 = edi_2 + 4
    void* esi_3 = esi_2 + 4
    *edi_3 = *esi_3
    *(edi_3 + 4) = *(esi_3 + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
