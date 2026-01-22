// 函数: sub_45f388
// 地址: 0x45f388
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
sub_45b310(arg1)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45f340(arg1, arg2, arg3)

if (arg3 != arg2 && (arg1[7].b & 2) != 0 && (arg1[0x23].b & 0x20) != 0)
    *(arg1 + 0x242) = MulDiv(*(arg1 + 0x242), arg2, arg3)
    *(arg1 + 0x246) = MulDiv(*(arg1 + 0x246), arg2, arg3)

sub_4573e8(arg1, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_45f42d
return sub_45b318(arg1)
