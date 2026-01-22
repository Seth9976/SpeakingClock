// 函数: sub_495124
// 地址: 0x495124
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = sub_4951c0(arg1)
int32_t ecx
sub_404dec(ecx, data_4abfd8)
(*(*arg2 + 4))(sub_4951b4, arg1, sub_495198, arg1, ExceptionList, var_18, var_14)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_495190
int32_t* result = &var_8
sub_404b88(result)
return result
