// 函数: sub_4612a4
// 地址: 0x4612a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_460cf4(arg1)

if (arg1[0x96].b == 0)
    sub_4577d8(ecx, &var_8)
    sub_4577d8(sub_456ec8(arg1, sub_42c570(arg1[0x94], var_8) + 6), &var_c)
    sub_456efc(arg1, sub_42c58c(arg1[0x94], var_c) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_461336
return sub_404bac(&var_c, 2)
