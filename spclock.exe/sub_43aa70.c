// 函数: sub_43aa70
// 地址: 0x43aa70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x255))
    *(arg1 + 0x255) = arg2
    
    if (sub_45fc28(arg1) != 0)
        sub_4577d8(SendMessageA(sub_45f888(arg1), 0xcc, zx.d(*(arg1 + 0x255)), 0), &var_8)
        sub_4577b4(arg1, sub_405018(var_8))

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_43aaf3
int32_t* result = &var_8
sub_404b88(result)
return result
