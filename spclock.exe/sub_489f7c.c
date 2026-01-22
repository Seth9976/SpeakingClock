// 函数: sub_489f7c
// 地址: 0x489f7c
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
sub_4236c4(arg1, arg2)
int32_t ecx_1 = (*(*arg2 + 8))(0, 0, sub_489e1c, arg1, ExceptionList, var_1c, var_18)
int32_t eax_3 = *(*arg1 + 0x3c)
int32_t eax_5 = *(*arg1 + 0x40)
sub_404dec(ecx_1, data_4abfd8)
int32_t ecx_2
ecx_2.b = 1
(*(*arg2 + 8))(eax_5, arg1, eax_3, arg1)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_489ffc
int32_t* result = &var_8
sub_404b88(result)
return result
