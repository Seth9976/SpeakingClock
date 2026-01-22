// 函数: sub_446ac4
// 地址: 0x446ac4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t pv = *(arg1 + 0x18)

if (pv != 0)
    CoTaskMemFree(pv)

int32_t eax_1 = *(arg1 + 0x14)

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

int16_t* eax_5
int32_t ecx
eax_5, ecx = CoTaskMemAlloc(eax_1 * 2 + 2)
*(arg1 + 0x18) = eax_5
sub_4054c8(ecx, *(arg1 + 0x14))
sub_43ff30(eax_5, var_8, eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_446b3f
int32_t* result = &var_8
sub_405368(result)
return result
