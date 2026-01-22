// 函数: sub_419554
// 地址: 0x419554
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t var_10 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c = arg1
char var_8 = 0xb
int32_t* var_24 = &var_c
sub_406a30(data_4ac410, &var_10)
int32_t edx_1
edx_1.b = 1
int64_t** eax_1
void* ebp_1
eax_1, ebp_1 = sub_40ceec(sub_41715c+0x2c0, edx_1, var_10, 0)
sub_40451c(eax_1)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_4195bb
sub_404b88(ebp_1 - 0xc)
return ebp_1 - 0xc
