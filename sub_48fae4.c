// 函数: sub_48fae4
// 地址: 0x48fae4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esi_1 = arg2
arg2.b = 1
int32_t* eax = sub_42bd40(sub_429971+0x26f, arg2)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_48fcfc(eax, arg3, esi_1, arg4, arg5, arg6, arg7, arg8, arg1)
fsbase->NtTib.ExceptionList = arg4
return sub_403c68(*(ebp_1 - 4))
