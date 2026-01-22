// 函数: sub_421cac
// 地址: 0x421cac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_416794(*(arg1 - 0x10), *(arg1 - 8), &var_8)
sub_421940(*(ebp_1 + 8))
sub_422934(*(*(ebp_1 + 8) - 4), *(ebp_1 - 4))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_421d08
sub_405368(ebp_1 - 4)
return ebp_1 - 4
