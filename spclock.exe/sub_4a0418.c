// 函数: sub_4a0418
// 地址: 0x4a0418
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
sub_49ffbc(arg1)
void* ebx_2
void* ebp_1
int32_t edi_2
ebx_2, ebp_1, edi_2 = sub_4a0730(arg1, arg3, &var_8)
(*(**(ebx_2 + 0x44) + 0xc))(var_8)
sub_4a060c(*(ebp_1 - 4))
sub_407b88(edi_2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a0491
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
