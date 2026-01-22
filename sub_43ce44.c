// 函数: sub_43ce44
// 地址: 0x43ce44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
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
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(*arg1 + 0xdc))(ExceptionList, var_1c, var_18) != 0xffffffff)
    (*(*arg1 + 0xdc))()
    (*(*arg1[0xa1] + 0xc))()
    (*(*arg1 + 0xdc))(var_8)
    (*(*arg1[0xa1] + 0x18))()
    (*(*arg2 + 0xe4))()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_43ceca
int32_t* result = &var_8
sub_404b88(result)
return result
