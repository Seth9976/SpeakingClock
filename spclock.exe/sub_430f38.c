// 函数: sub_430f38
// 地址: 0x430f38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_64 = ebx
int32_t esi
int32_t var_68 = esi
int32_t edi
int32_t var_6c = edi
int32_t var_8 = 0
int32_t var_c = 0
int32_t* var_70 = &var_4
int32_t (* var_74)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_430e88(arg1)
sub_430e98(arg1)
COLORREF eax_3 = sub_42ad8c(arg2)
void* esi_1 = arg1[0xa]
BOOL h = sub_43040c(*(esi_1 + 8), *(esi_1 + 0x10), eax_3)
void pv
sub_403578(&pv, 0x54, 0)
GetObjectA(h, 0x54, &pv)
HGDIOBJ eax_8 = *(arg1[0xa] + 0x10)
HPALETTE var_c_1

if (eax_8 != data_4b1a48)
    var_c_1 = sub_4303a8(eax_8)
else
    var_c_1 = eax_8

int32_t* ebx_2
int32_t* ebp_1
ebx_2, ebp_1 = sub_4312bc(arg1, h, var_c_1, nullptr, *(arg1[0xa] + 0x70), &pv)
int32_t var_1c
fsbase->NtTib.ExceptionList = var_1c
int32_t result = (*(*ebx_2 + 0x10))()
*ebp_1
return result
