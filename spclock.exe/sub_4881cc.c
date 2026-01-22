// 函数: sub_4881cc
// 地址: 0x4881cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
sub_4880c0(arg1, arg3, arg4)
HPALETTE ExceptionList_1 = nullptr
HWND hWnd = GetFocus()
HDC eax_2 = GetDC(hWnd)
int32_t* var_24_1 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    ExceptionList_1 = SelectPalette(eax_2, arg2, 0)
    RealizePalette(eax_2)

bool var_5 = GetDIBits(eax_2, arg1, 0, arg3[2], arg5, arg3, DIB_RGB_COLORS) != 0
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_24_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48827e

if (ExceptionList_1 != 0)
    BOOL bForceBkgd = 0
    ExceptionList = ExceptionList_1
    SelectPalette(eax_2, ExceptionList, bForceBkgd)

ExceptionList = hWnd
return ReleaseDC(ExceptionList, eax_2)
