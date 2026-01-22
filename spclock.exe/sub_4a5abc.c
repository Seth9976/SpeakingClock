// 函数: sub_4a5abc
// 地址: 0x4a5abc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403e18(arg2, 0x449d50)
sub_44e368(arg2, 1)
void* ebx_2 = arg2[2]

if (ebx_2 != 0)
    ebx_2 = *(ebx_2 - 4)

sub_405080(ebx_2, 4, arg2[2], &var_8)
data_4b1e24 = sub_40947c(var_8)
void* ebp_1 = sub_4a5b44(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4a5b3e
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
