// 函数: sub_43b004
// 地址: 0x43b004
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_80 = ebx
HDC hdc = GetDC(nullptr)
int32_t* var_84_1 = &var_4
int32_t (* var_88)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
TEXTMETRICA lptm
GetTextMetricsA(hdc, &lptm)
HGDIOBJ h
void* ebp_1
h, ebp_1 = sub_42b2f0(*(arg1 + 0x68))
HGDIOBJ h_1 = SelectObject(*(ebp_1 - 8), h)
GetTextMetricsA(*(ebp_1 - 8), ebp_1 - 0x78)
SelectObject(*(ebp_1 - 8), h_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_84_2)(int32_t* arg1 @ ebp) = sub_43b081
HDC hDC = *(ebp_1 - 8)
ExceptionList = nullptr
return ReleaseDC(ExceptionList, hDC)
