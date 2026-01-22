// 函数: sub_4100bc
// 地址: 0x4100bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int64_t* var_18 = nullptr
int64_t* var_1c = nullptr
int32_t var_20 = 0
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_415714(arg1, &var_18)
int64_t* var_14 = var_18
char var_10 = 0xb
sub_415714(arg2, &var_1c)
int64_t* var_c = var_1c
char var_8 = 0xb
int64_t** var_38 = &var_14
sub_406a30(data_4ac2f4, &var_20)
int32_t edx_3
edx_3.b = 1
int64_t** eax_5
void* ebp_1
eax_5, ebp_1 = sub_40ceec(sub_40fa04+0x110, edx_3, var_20, 1)
sub_40451c(eax_5)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_410152
return sub_404bac(ebp_1 - 0x1c, 3)
