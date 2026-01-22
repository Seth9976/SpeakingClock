// 函数: sub_46ba88
// 地址: 0x46ba88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_8 = 0
int32_t result = data_4aba38
int32_t edx = data_4aba48
data_4aba38 = arg1
data_4aba48 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
data_4aba44 = 1
int32_t* var_2c = &var_4
int32_t (* var_30)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
EnumThreadWindows(GetCurrentThreadId(), sub_46ba38, 0)
int32_t var_8_1 = data_4aba48
fsbase->NtTib.ExceptionList = ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46bb40
data_4aba44 = 0
data_4aba48 = edx
data_4aba38 = result
return result
