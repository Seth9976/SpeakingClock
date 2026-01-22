// 函数: sub_461a2c
// 地址: 0x461a2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
sub_42c308(arg1[0x94])
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42c7c4(arg1[0x94], arg2)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_456094(arg1[0x94])
(*(*arg1 + 0xd8))(ExceptionList, var_20, var_1c, ExceptionList_1, var_14, var_10)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_461aae
return sub_42c7c4(arg1[0x94], 0)
