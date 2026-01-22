// 函数: sub_43ec54
// 地址: 0x43ec54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t var_20 = 0
int32_t var_18 = 0
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if ((*(arg1 + 0x1c) & 2) != 0 || *(arg1 + 0x251) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_43ed84
    sub_404b88(&var_20)
    int32_t* result = &var_18
    sub_404b88(result)
    return result

HDC var_c = GetDC(nullptr)
int32_t* var_38_1 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HGDIOBJ h
void* ebp_1
h, ebp_1 = sub_42b2f0(*(arg1 + 0x68))
HGDIOBJ h_1
int32_t ecx
h_1, ecx = SelectObject(*(ebp_1 - 8), h)
*(ebp_1 - 4)
int32_t ecx_1 = sub_4577d8(ecx, ebp_1 - 0x14)
*(ebp_1 - 0x18) = *(ebp_1 - 0x14)
int32_t c = *(ebp_1 - 0x18)

if (c != 0)
    c = *(c - 4)

*(ebp_1 - 4)
sub_4577d8(ecx_1, ebp_1 - 0x1c)
uint8_t* lpString = sub_405018(*(ebp_1 - 0x1c))
GetTextExtentPoint32A(*(ebp_1 - 8), lpString, c, ebp_1 - 0x10)
SelectObject(*(ebp_1 - 8), h_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_38_2 = 0x43ed2a
HDC hDC = *(ebp_1 - 8)
ExceptionList = nullptr
return ReleaseDC(ExceptionList, hDC)
