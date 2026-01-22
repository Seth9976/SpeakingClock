// 函数: sub_487d50
// 地址: 0x487d50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esi_1 = arg2
arg2.b = 1
int32_t* eax_2 = sub_403c38(arg1, arg2)
int32_t* var_c_1 = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_2
void* ebp_1
ebx_2, ebp_1 = sub_488574(esi_1, eax_2)
sub_41c894(*(ebp_1 - 4), 0, 0)
*(ebp_1 - 4)
(*(*ebx_2 + 0x20))(eax_2)
fsbase->NtTib.ExceptionList = eax_2
__return_addr = sub_487db4
return sub_403c68(*(ebp_1 - 4))
