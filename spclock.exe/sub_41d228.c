// 函数: sub_41d228
// 地址: 0x41d228
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_14 = 0
int32_t var_8 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx

if (*(arg1 + 8) == 0)
    sub_404d80(ecx, *(arg1 - 4))
else
    *(arg1 - 4)
    sub_409340(ecx, &var_8)
int32_t var_10 = var_8
char var_c = 0xb
int32_t* var_24 = &var_10
sub_406a30(data_4ac1e8, &var_14)
int32_t edx_4
edx_4.b = 1
int64_t** eax_5
void* ebp_1
eax_5, ebp_1 = sub_40ceec(sub_41715c+0x31c, edx_4, var_14, 0)
sub_40451c(eax_5)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41d2c1
sub_404b88(ebp_1 - 0x10)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
