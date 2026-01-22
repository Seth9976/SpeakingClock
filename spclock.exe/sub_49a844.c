// 函数: sub_49a844
// 地址: 0x49a844
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
int32_t var_8 = 0
int32_t var_20 = *arg3
int32_t var_1c
int32_t* edi_1 = &var_1c
void* esi_2 = &arg3[1]
*edi_1 = *esi_2
void* edi_2 = &edi_1[1]
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_5
esi_5.w = 0xffae
int32_t* var_10
int32_t var_c
sub_403e64(arg1, esi_5, &var_8, &var_c, &var_10, ExceptionList, var_34, var_30)
var_c = 0
var_10 = &var_20
int32_t* eax_1 = var_10
int32_t eax_2 = var_c
var_1c = sub_42c73c(arg2)
var_20 = arg1[0xaf]
(*data_4ac200)(var_20, var_1c, eax_2, eax_1, var_10, var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_49a8c5
int32_t* result = &var_8
sub_405368(result)
return result
