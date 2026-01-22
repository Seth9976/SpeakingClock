// 函数: sub_4190f4
// 地址: 0x4190f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_110 = 0
int32_t* var_114 = &var_4
int32_t (* var_118)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void var_10c
sub_403b48(*(arg1 - 4), &var_10c)
void* var_c = &var_10c
char var_8 = 4
void** var_120 = &var_c
sub_406a30(data_4ac460, &var_110)
int32_t edx_2
edx_2.b = 1
int64_t** eax_3
void* ebp_1
eax_3, ebp_1 = sub_40ceec(sub_41715c+0x1b8, edx_2, var_110, 0)
sub_40451c(eax_3)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_41917e
sub_404b88(ebp_1 - 0x10c)
return ebp_1 - 0x10c
