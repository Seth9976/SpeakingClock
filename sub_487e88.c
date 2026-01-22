// 函数: sub_487e88
// 地址: 0x487e88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esi_1 = arg2
arg2.b = 1
int32_t* eax_1 = sub_403c38(ecx, arg2)
int32_t* var_c_1 = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x28))(ExceptionList, var_10_1, var_c_1)
sub_41c894(eax_1, 0, 0)
void* ebp_1 = sub_48845c(eax_1, esi_1, (**eax_1)(eax_1))
fsbase->NtTib.ExceptionList = eax_1
__return_addr = sub_487ef5
return sub_403c68(*(ebp_1 - 4))
