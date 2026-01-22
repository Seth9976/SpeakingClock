// 函数: sub_41bba8
// 地址: 0x41bba8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_8 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (arg3 == arg2)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_41bc50
    int32_t* result = &var_8
    sub_404b88(result)
    return result

sub_41b378(arg1)
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xc))(ExceptionList, var_2c, var_28)
int32_t* eax_3 = (*(*arg1 + 0x18))()
(*(*arg1 + 0x48))()
(*(*eax_3 + 0x64))(eax_3)
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_41bc33
return sub_41b434(eax_3)
