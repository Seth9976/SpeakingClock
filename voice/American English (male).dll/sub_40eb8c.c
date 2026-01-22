// 函数: sub_40eb8c
// 地址: 0x40eb8c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* var_4 = arg1
void* var_8 = arg3
void* var_c = arg2
void* entry_ebx
void* var_10 = entry_ebx
int32_t* var_14 = &var_10
void* var_18 = arg4
void* var_1c = arg5
void* var_20 = arg6
*(entry_ebx + 0x600000ff) += (arg3 + 1):1.b
*(arg6 * 9 + 0x46600000) += (arg3 + 2):1.b
*(arg4 + 0x600000ff) += (arg3 + 3):1.b
*(arg5 + 0x60000102) += (arg3 + 4):1.b
*(arg6 + 0x600000ff) += (arg3 + 5):1.b
*(arg1 + 0x600000ff) += arg2.b
*(arg3 + 0x60000106) += arg2.b
*(arg2 + 0x600000ff) += arg2.b
*(entry_ebx + 0x600000ff) += arg2.b
*(arg6 * 9 + 0x46600000) += arg2.b
*(arg4 + 0x600000ff) += arg2.b
*(arg5 + 0x55000109) += arg2.b
int32_t* var_24 = &var_20
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
data_41483c += 1
fsbase->NtTib.ExceptionList = ExceptionList
return 0
