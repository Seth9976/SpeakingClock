// 函数: sub_41bd94
// 地址: 0x41bd94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x1c))(ExceptionList, var_18, var_14)
int32_t eax_1 = var_8

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

sub_41cad8(arg2, var_8, eax_1)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41bdec
int32_t* result = &var_8
sub_404b88(result)
return result
