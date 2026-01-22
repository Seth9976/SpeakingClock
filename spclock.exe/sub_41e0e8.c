// 函数: sub_41e0e8
// 地址: 0x41e0e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_41fa14(arg1, &var_8)
int32_t eax_1 = *(ebp_1 - 4)

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

if (eax_1 s> 1)
    sub_41da5c()

**(ebp_1 - 4)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41e13f
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
