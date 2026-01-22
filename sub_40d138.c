// 函数: sub_40d138
// 地址: 0x40d138
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t var_24 = 0
int32_t var_8 = 0
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 0)
    sub_406a30(data_4ac344, &var_8)
else
    sub_404c20(&var_8, arg1)

int32_t var_20 = var_8
char var_1c = 0xb
int32_t edx
int32_t var_18 = edx
char var_14 = 0xb
int32_t ecx
int32_t var_10 = ecx
char var_c = 0
int32_t* var_40 = &var_20
sub_406a30(data_4ac3d8, &var_24)
int32_t edx_4
edx_4.b = 1
int64_t** eax_4
void* ebp_1
eax_4, ebp_1 = sub_40ceec(sub_407f68+0x8e4, edx_4, var_24, 2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40d1db
sub_404b88(ebp_1 - 0x20)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
