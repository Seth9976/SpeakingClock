// 函数: sub_497bf0
// 地址: 0x497bf0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_c = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8

for (int32_t i = (*(**(arg1 + 0x14) + 0x14))(ExceptionList, var_20, var_1c) - 1; i s>= 0; i -= 1)
    (*(**(arg1 + 0x14) + 0xc))(var_8)
    var_8 = sub_497504(*(*(arg1 + 4) + 0x1c))
    
    if (var_8 s<= 0xffffffff)
        (*(**(arg1 + 0x14) + 0x48))(var_8)
    else
        sub_496e1c(*(*(arg1 + 4) + 0x1c))
        (*(**(arg1 + 0x14) + 0x24))(var_8)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_497c89
int32_t* result = &var_c
sub_404b88(result)
return result
