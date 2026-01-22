// 函数: sub_421940
// 地址: 0x421940
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
sub_404dec(ecx, *(arg1 - 8) + 0x1a)
void* ebp_1 = sub_422784(*(arg1 - 4), var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42198f
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
