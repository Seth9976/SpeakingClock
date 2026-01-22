// 函数: sub_4287ab
// 地址: 0x4287ab
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
int32_t entry_ebx
*0x55000000 += entry_ebx:1.b
int32_t* var_4 = arg3
arg2.b = 1
int32_t* eax_1 = sub_403c38(arg3, arg2)
void* const* var_c = &__return_addr
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = sub_428220(arg1, eax_1)
*(arg1 + 4)
(*(**(ebp - 4) + 0x74))(ExceptionList, var_10, var_c)
fsbase->NtTib.ExceptionList = entry_ebx
__return_addr = sub_42880a
return sub_403c68(*(ebp - 4))
