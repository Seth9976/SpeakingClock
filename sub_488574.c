// 函数: sub_488574
// 地址: 0x488574
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t var_14 = 0
int32_t var_18 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax = sub_402ea8(0x800d)
int32_t eax_1 = sub_402ea8(0x800d)
(*(*arg1 + 0xc))(ExceptionList, var_28, var_24)
int32_t i
int32_t var_c

for (; i s> 0; i -= var_c + 4)
    (*(*arg1 + 0xc))(arg2)
    sub_41caa0(arg1, eax, var_c)
    sub_41cad8(arg2, eax_1, zx.d(sub_490aa0(eax, eax_1, var_c.w)))

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_488637
sub_402ec4(eax)
return sub_402ec4(eax_1)
