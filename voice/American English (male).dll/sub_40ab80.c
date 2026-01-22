// 函数: sub_40ab80
// 地址: 0x40ab80
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t var_10 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void lCData
GetLocaleInfoA(arg1, 0x1004, &lCData, 7)
sub_403c5c(&var_10, &lCData, 7)
int32_t var_24 = var_10
uint32_t eax_2
int32_t ecx
eax_2, ecx = GetACP()
sub_406c2c(ecx, eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_18_1)(int32_t* arg1 @ ebp) = sub_40abeb
int32_t* result = &var_10
sub_4039ec(result)
return result
