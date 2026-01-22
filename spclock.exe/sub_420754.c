// 函数: sub_420754
// 地址: 0x420754
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint8_t* var_8 = nullptr
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t __saved_eax
int32_t __saved_eax_1 = __saved_eax
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_4228e0(sub_404d70(), var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42079e
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
