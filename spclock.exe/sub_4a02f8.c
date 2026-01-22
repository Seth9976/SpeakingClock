// 函数: sub_4a02f8
// 地址: 0x4a02f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_49ffbc(arg1)
void* ebx_2
void* ebp_1
int32_t esi_2
ebx_2, ebp_1, esi_2 = sub_4a0730(arg1, nullptr, &var_8)
int32_t var_10_1 = *(ebp_1 - 4)
void* const var_14_1 = &data_4a0390
int32_t var_18_1 = esi_2
void* const var_1c_1 = &data_4a039c
sub_404f1c(ebp_1 - 8, 4)
int32_t var_10_3 = (*(**(ebx_2 + 0x44) + 0xc))(0)
sub_407b88(var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a0380
return sub_404bac(ebp_1 - 8, 2)
