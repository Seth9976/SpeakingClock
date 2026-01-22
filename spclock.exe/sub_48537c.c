// 函数: sub_48537c
// 地址: 0x48537c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t var_8 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xe4))(ExceptionList, var_1c, var_18)
int32_t edx = var_8
int32_t eax_1 = edx

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

int32_t ebx_2 = eax_1
int32_t eax_3 = edx

if (eax_3 != 0)
    eax_3 = *(eax_3 - 4)

if (eax_3 s>= arg3)
    ebx_2 = arg3 - 1

sub_409d34(arg2, var_8, ebx_2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4853f7
int32_t* result = &var_8
sub_404b88(result)
return result
