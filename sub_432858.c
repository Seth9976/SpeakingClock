// 函数: sub_432858
// 地址: 0x432858
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
HDC eax = GetDC(nullptr)
int32_t* var_c_1 = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
data_4b1a50 = GetDeviceCaps(eax, 0x5a)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_2)(int32_t arg1) = sub_4328a4
ExceptionList = nullptr
return ReleaseDC(ExceptionList, eax)
