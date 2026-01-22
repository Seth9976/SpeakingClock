// 函数: sub_489044
// 地址: 0x489044
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
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
bool eax_1
int32_t ecx
int32_t ecx_1
eax_1, ecx_1 = sub_4889a0(arg2, arg2, ecx)
*(arg1 + 0x4e) = (eax_1 & 1) == 1
int32_t ecx_2
int32_t edx_2

if ((eax_1 & 2) != 2)
    ecx_2, edx_2 = sub_404b88(arg1 + 0x48)
else
    sub_4888cc(arg2, &var_8, ecx_1)
    ecx_2, edx_2 = sub_404bdc(arg1 + 0x48, var_8)

if ((eax_1 & 4) != 4)
    *(arg1 + 0x4c) = 0
else
    *(arg1 + 0x4c) = sub_4888b8(arg2, edx_2, ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4890d2
int64_t** result = &var_8
sub_404b88(result)
return result
