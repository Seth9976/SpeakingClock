// 函数: sub_40f404
// 地址: 0x40f404
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint8_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx

if (arg4 != 0)
    *arg4 = 0

int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 == 0x400)
    int32_t var_1c_1 = arg2
    int32_t var_20_1 = arg1
    sub_4054c8(sub_40aaf4(&var_8), var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40f46b
int32_t* result = &var_8
sub_404b88(result)
return result
