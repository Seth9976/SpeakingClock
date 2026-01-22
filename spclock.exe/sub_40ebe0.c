// 函数: sub_40ebe0
// 地址: 0x40ebe0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
uint32_t uMode = SetErrorMode(arg2)
int32_t* var_18_1 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HMODULE var_c = LoadLibraryA(sub_405018(arg1))
fsbase->NtTib.ExceptionList = ExceptionList
__fnclex()
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(temp0)
fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t (* var_18_2)(int32_t* arg1 @ ebp) = sub_40ec59
return SetErrorMode(uMode)
