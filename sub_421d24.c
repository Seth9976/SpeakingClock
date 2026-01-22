// 函数: sub_421d24
// 地址: 0x421d24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_2 = *(*(arg3 - 4) + 0x1c)

if (eax_2 == *(arg1 + 4))
    sub_404bdc(arg2, *(arg1 + 8))
else if (eax_2 != arg1)
    void* edi_1 = *(arg1 + 4)
    
    if (edi_1 != 0 && *(edi_1 + 8) != 0 && *(arg1 + 8) != 0)
        if (sub_421d0c(edi_1, *(*(arg3 - 4) + 0x1c)) == 0)
            int32_t var_24_3 = *(*(arg1 + 4) + 8)
            void* const var_28_1 = &data_421e38
            int32_t var_2c_2 = *(arg1 + 8)
            sub_404f1c(arg2, 3)
            esp = &var_8
        else
            *(arg1 + 4)
            sub_421d24(arg3)
            sub_404f1c(arg2, 3, arg3, *(arg1 + 8), &data_421e38, var_8)
            esp = &var_8
    else if (*(arg1 + 8) == 0)
        sub_404b88(arg2)
    else
        sub_404ea0(arg2, *(arg1 + 8), ".Owner")
else
    sub_404bdc(arg2, "Owner")

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_421e1a
int32_t* result = &var_8
sub_404b88(result)
return result
