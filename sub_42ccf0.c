// 函数: sub_42ccf0
// 地址: 0x42ccf0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
char var_d = 1
HDC ExceptionList
TEB* fsbase

if (*data_4ac4d0 == 2 && arg8 == arg13 && arg7 == arg12)
    int32_t cy = 1
    int32_t cx = 1
    ExceptionList = arg11
    HBITMAP h = CreateCompatibleBitmap(ExceptionList, cx, cy)
    sub_42cb40(h)
    HGDIOBJ eax_4 = SelectObject(arg6, h)
    int32_t* var_38_1 = &var_4
    int32_t (* var_3c_1)(void* arg1, void* arg2) = j_sub_40443c
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    MaskBlt(arg1, arg2, arg3, arg13, arg12, arg11, arg10, arg9, eax_4, arg5, arg4, 0xccaa0029)
    fsbase->NtTib.ExceptionList = ExceptionList
    uint32_t (__stdcall* var_38_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42cf6c
    ExceptionList = arg6
    return DeleteObject(SelectObject(ExceptionList, eax_4))

int32_t var_28 = 0
HDC eax_20 = CreateCompatibleDC(nullptr)
sub_42cb40(eax_20)
int32_t* var_38_4 = &var_4
int32_t (* var_3c_4)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HBITMAP eax_22 = CreateCompatibleBitmap(arg11, arg8, arg7)
sub_42cb40(eax_22)
HGDIOBJ h_1 = SelectObject(eax_20, eax_22)
HPALETTE hPal = SelectPalette(arg11, data_4b1a48, 0)
SelectPalette(arg11, hPal, 0)
HPALETTE ExceptionList_1

if (hPal == 0)
    ExceptionList_1 = SelectPalette(eax_20, data_4b1a48, 0xffffffff)
else
    ExceptionList_1 = SelectPalette(eax_20, hPal, 0xffffffff)

RealizePalette(eax_20)
StretchBlt(eax_20, 0, 0, arg8, arg7, arg6, arg5, arg4, arg8, arg7, SRCCOPY)
StretchBlt(eax_20, 0, 0, arg8, arg7, arg11, arg10, arg9, arg8, arg7, "bCoral")
COLORREF color = SetTextColor(arg1, 0)
COLORREF color_1 = SetBkColor(arg1, 0xffffff)
StretchBlt(arg1, arg2, arg3, arg13, arg12, arg6, arg5, arg4, arg8, arg7, SRCAND)
StretchBlt(arg1, arg2, arg3, arg13, arg12, eax_20, 0, 0, arg8, arg7, SRCINVERT)
SetTextColor(arg1, color)
SetBkColor(arg1, color_1)

if (h_1 != 0)
    SelectObject(eax_20, h_1)

DeleteObject(eax_22)
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_38_5)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42cf6c

if (ExceptionList_1 != 0)
    BOOL bForceBkgd = 0
    ExceptionList = ExceptionList_1
    SelectPalette(eax_20, ExceptionList, bForceBkgd)

return DeleteDC(eax_20)
