// 函数: sub_43c9b2
// 地址: 0x43c9b2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0
int32_t* var_18 = &var_4
void* var_1c = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax = zx.d(*(arg2 + 6))
int32_t entry_ebx

if (eax u> 8)
    return sub_43cb0a(ebp_1, var_1c, var_18, arg4, arg3, entry_ebx, var_8) __tailcall

switch (eax)
    case 0, 6
        return sub_43cb0a(ebp_1, var_1c, var_18, arg4, arg3, entry_ebx, var_8) __tailcall
    case 1
        return sub_43ca88(ebp_1, arg1) __tailcall
    case 2
        return sub_43ca04(arg1) __tailcall
    case 3
        return sub_43cade(arg1) __tailcall
    case 4
        return sub_43caf5(arg1) __tailcall
    case 5
        return sub_43ca14(arg1) __tailcall
    case 7
        return sub_43ca24(arg1) __tailcall
    case 8
        return sub_43cad1(arg1) __tailcall
