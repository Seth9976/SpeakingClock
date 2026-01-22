// 函数: sub_41b584
// 地址: 0x41b584
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t __saved_edx
int32_t __saved_edx_4 = __saved_edx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_14 = 0
int32_t var_8 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41b378(arg1)
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xc))(ExceptionList, var_34, var_30, ExceptionList_1, var_28, var_24)
int32_t var_10 = (*(*arg1 + 0x18))(var_8)
(*(*arg1 + 0xc))()
(*(*arg1 + 0x20))()
(*(*arg1 + 0x18))()
(*(*arg1 + 0x24))()
(*(*arg1 + 0x20))()
(*(*arg1 + 0x24))()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41b641
return sub_41b434(arg1)
