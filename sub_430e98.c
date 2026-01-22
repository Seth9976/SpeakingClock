// 函数: sub_430e98
// 地址: 0x430e98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* eax_1 = arg1[0xa]

if (*(eax_1 + 8) != 0 || *(eax_1 + 0x14) != 0 || *(eax_1 + 0x6c) == 0)
    void* eax_10 = arg1[0xa]
    
    if (*(eax_10 + 8) == 0)
        *(eax_10 + 8) = *(eax_10 + 0x14)
    
    return eax_10

sub_41c894(*(eax_1 + 0x6c), 0, 0)
int32_t edx_1 = arg1[4]
int32_t edx_2 = arg1[5]
int32_t* var_18_1 = &var_4
int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[4] = 0
arg1[5] = 0
*(arg1[0xa] + 0x6c)
(*(*arg1 + 0x54))(ExceptionList, var_1c_1, var_18_1, edx_1, edx_2)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_430f22
arg1[4] = edx_1
arg1[5] = edx_2
return arg1
