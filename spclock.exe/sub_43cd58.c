// 函数: sub_43cd58
// 地址: 0x43cd58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx = (*(*arg1 + 0x118))()
int32_t eax_3 = arg1[0x96]

if (ebx s> eax_3)
    ebx = eax_3

if (ebx s< 1)
    ebx = 1

arg1[0xa9].b = 1
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t cy = (*(*arg1 + 0x110))(0x9e, ExceptionList, var_14, var_10) * ebx + arg1[0x13] + 2
int32_t cx = arg1[0x12]
ExceptionList = nullptr
enum SET_WINDOW_POS_FLAGS entry_uFlags
SetWindowPos(arg1[0xa4], nullptr, 0, ExceptionList, cx, cy, entry_uFlags)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_43cdf5
arg1[0xa9].b = 0
return arg1
