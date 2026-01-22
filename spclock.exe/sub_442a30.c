// 函数: sub_442a30
// 地址: 0x442a30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
void var_1c
sub_442904(*(arg2 - 4), &var_1c)
int32_t var_8
int32_t eax_4 = sub_4330b0(2, &var_1c, sub_42c73c(arg1), &var_8, 0)
int32_t* var_34_1 = &var_4
int32_t (* var_38_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42c7c4(arg1, var_8)
void var_2c
sub_442904(*(arg2 - 4), &var_2c)
sub_42c424(arg1, &var_2c, *(*(*(arg2 - 4) + 0x198) + 0xc))
int32_t ecx_1
ecx_1.b = 0xff
sub_4331a8(eax_4, &var_1c, ecx_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_34_2)(int32_t* arg1 @ ebp) = sub_442ad0
return sub_43313c(eax_4, 0xffffffff)
