// 函数: sub_45bef8
// 地址: 0x45bef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
*(arg1 + 0x54) |= 0x200
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (DestroyWindow(*(arg1 + 0x1b4)) == 0)
    sub_40e584()

fsbase->NtTib.ExceptionList = ExceptionList
void* (__stdcall* var_c_1)(void* arg1 @ ebp, int32_t arg2) = sub_45bf4c
*(arg1 + 0x54) &= 0xfdff
return arg1
