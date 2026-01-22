// 函数: sub_4a0188
// 地址: 0x4a0188
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t var_8 = 0
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_49ffbc(arg1)
void* ebx_2
void* ebp_1
int32_t esi_2
ebx_2, ebp_1, esi_2 = sub_4a0730(arg1, nullptr, &var_8)
*(ebp_1 - 0x1e) = 0x1a
*(ebp_1 - 0x1a) = 0
*(ebp_1 - 0x19) = sub_405018(esi_2)
*(ebp_1 - 0x15) = 0
*(ebp_1 - 0x11) = 0
*(ebp_1 - 0xd) = 0
*(ebp_1 - 9) = 0
*(ebp_1 - 5) = 1
(*(**(ebx_2 + 0x44) + 0xc))(ebp_1 - 0x1e)
void var_c
sub_4a062c(*(ebp_1 - 4), var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a021c
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
