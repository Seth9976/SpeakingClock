// 函数: sub_48bf28
// 地址: 0x48bf28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
char* var_8 = nullptr
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_409b54(arg2, &var_8)

if (sub_486724(var_8) == 0)
    sub_404bdc(arg1 + 0x4c, arg2)
else
    ebp_1 = sub_409a54(arg2, sub_48bfc3+5, &var_c)
    sub_404bdc(arg1 + 0x4c, ebp_1[-2])

if (*(arg1 + 0x6e) == 3 && *(arg1 + 0x5c) != 0)
    sub_4285d4(*(arg1 + 0x5c), *(arg1 + 0x4c), 0)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_48bfba
return sub_404bac(&ebp_1[-2], 2)
