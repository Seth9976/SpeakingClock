// 函数: sub_43ded0
// 地址: 0x43ded0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
char eax_1 = (*(*arg1 + 0x24))()

if (eax_1 == 0)
    return eax_1

int32_t* eax_3 = arg1[0xa]
eax_3[0x94].b = 1
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*eax_3 + 0xdc))(ExceptionList, var_14, var_10)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_43df2d
void* eax_5 = arg1[0xa]
*(eax_5 + 0x250) = 0
return eax_5
