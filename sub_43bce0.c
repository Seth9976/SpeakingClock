// 函数: sub_43bce0
// 地址: 0x43bce0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x18)
int32_t ecx
sub_4577d8(ecx, &var_8)
SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x14b, 0, 0)
void* ebx_2
void* ebp_1
ebx_2, ebp_1 = sub_457808(*(arg1 + 0x18), var_8)
(*(**(ebx_2 + 0x18) + 0x8c))(var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_43bd4b
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
