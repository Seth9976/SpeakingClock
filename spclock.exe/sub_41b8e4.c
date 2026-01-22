// 函数: sub_41b8e4
// 地址: 0x41b8e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2 = (*(*arg1 + 0x14))(ExceptionList, var_24, var_20) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t var_c_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))(arg2)
        
        if ((*(*arg1 + 0x34))() == 0)
            goto label_41b94b
        
        var_c_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_c_2 = 0xffffffff
label_41b94b:
fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_41b963
int32_t* result = &var_10
sub_404b88(result)
return result
