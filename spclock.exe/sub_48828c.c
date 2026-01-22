// 函数: sub_48828c
// 地址: 0x48828c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int64_t* var_18 = nullptr
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (arg1 == 0)
    sub_406a30(data_4ac10c, &var_18)
    int32_t edx_1
    edx_1.b = 1
    sub_40451c(sub_40ceb0(sub_407f68+0x68, edx_1, var_18))

int32_t var_14
int32_t var_10
sub_488180(&var_14, &var_10, arg3)
*arg4 = var_10 + 0xe + var_14
int16_t* eax_8 = sub_402ea8(*arg4)
int32_t* var_34_1 = &var_4
int32_t (* var_38)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403578(eax_8, *arg4, 0)
*eax_8 = 0x4d42
*(eax_8 + 2) = *arg4
*(eax_8 + 0xa) = var_10 + 0xe
void* ebp_1 = sub_4881cc(arg1, arg2, &eax_8[7], arg3, &eax_8[7] + var_10)
fsbase->NtTib.ExceptionList = var_14
fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_488390
sub_404b88(ebp_1 - 0x14)
return ebp_1 - 0x14
