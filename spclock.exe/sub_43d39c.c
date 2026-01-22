// 函数: sub_43d39c
// 地址: 0x43d39c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
char* var_8 = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 - 4)
int32_t ecx
sub_4577d8(ecx, &var_8)
WPARAM var_10
uint32_t var_c
SendMessageA(sub_45f888(*(arg1 - 4)), 0x140, &var_c, &var_10)
sub_4050c0(&var_8, var_c + 1, var_10 - var_c)
SendMessageA(sub_45f888(*(arg1 - 4)), 0x14e, 0xffffffff, 0)
void* ebp_1 = sub_457808(*(arg1 - 4), var_8)
uint32_t ebx_1 = zx.d(*(ebp_1 - 8))
var_c = ebx_1 | ebx_1 << 0x10
var_10 = 0
SendMessageA(sub_45f888(*(*(ebp_1 + 8) - 4)), 0x142, var_10, var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_43d45d
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
