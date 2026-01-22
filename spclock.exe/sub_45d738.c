// 函数: sub_45d738
// 地址: 0x45d738
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ h_2
HGDIOBJ h = h_2

if (arg1[0x90].b == 0 || *(arg2 + 4) != 0)
    if ((*(arg1 + 0x55) & 1) == 0 && sub_45b7f4(arg1) == 0)
        return (*(*arg1 - 0x10))()
    
    return sub_45cfb8(arg1, arg2)

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
PAINTSTRUCT paint
HDC hdcSrc_1
int32_t ecx
TEB* fsbase

if (sub_433cec(ecx) != 0)
    HDC eax_10 = BeginPaint(sub_45f888(arg1), &paint)
    int32_t* var_64_1 = &h
    int32_t (* var_68_1)(void* arg1, void* arg2) = j_sub_40443c
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    var_50
    int32_t eax_12 = sub_4330b0(2, &var_50, eax_10, &hdcSrc_1, 0)
    
    if (eax_12 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t var_64_2 = 0x45d98d
        PAINTSTRUCT* lpPaint = &paint
        ExceptionList_1 = sub_45f888(arg1)
        return EndPaint(ExceptionList_1, lpPaint)
    
    int32_t* var_70_1 = &h
    int32_t (* var_74_1)(void* arg1, void* arg2) = j_sub_40443c
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_458ac8(arg1, hdcSrc_1)
    sub_458ac8(arg1, 4)
    
    if (sub_403df4(arg1, 0x46a11c) == 0)
        int32_t ecx_4
        ecx_4.b = 0xff
        sub_4331a8(eax_12, &var_50, ecx_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_70_2 = 0x45d84a
    return sub_43313c(eax_12, 0xffffffff)

HDC hdc = BeginPaint(sub_45f888(arg1), &paint)
int32_t cy = paint.rcPaint.bottom - paint.rcPaint.top
int32_t cx = paint.rcPaint.right - paint.rcPaint.left
ExceptionList_1 = hdc
HBITMAP h_1 = CreateCompatibleBitmap(ExceptionList_1, cx, cy)
HGDIOBJ* var_64_5 = &h
int32_t (* var_68_4)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
hdcSrc_1 = CreateCompatibleDC(hdc)
HGDIOBJ var_14 = SelectObject(hdcSrc_1, h_1)
HGDIOBJ* var_70_5 = &h
int32_t (* var_74_3)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
SetWindowOrgEx(hdcSrc_1, paint.rcPaint.left, paint.rcPaint.top, nullptr)
sub_458ac8(arg1, hdcSrc_1)
*(arg2 + 4) = hdcSrc_1
sub_45d738(ExceptionList, var_74_3, var_70_5, ExceptionList_1, var_68_4, var_64_5)
*(arg2 + 4) = 0
hdcSrc_1 = 0xcc0020
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
HDC hdcSrc = hdcSrc_1
int32_t ecx_9 = paint.rcPaint.bottom - top
paint.rgbReserved[0x1c] = ecx_9.b
paint.rgbReserved[0x1d] = ecx_9:1.b
paint.rgbReserved[0x1e] = ecx_9:2.b
paint.rgbReserved[0x1f] = ecx_9:3.b
int32_t ecx_11 = paint.rcPaint.right - left
paint.rgbReserved[0x18] = ecx_11.b
paint.rgbReserved[0x19] = ecx_11:1.b
paint.rgbReserved[0x1a] = ecx_11:2.b
paint.rgbReserved[0x1b] = ecx_11:3.b
paint.rgbReserved[0x14] = top.b
paint.rgbReserved[0x15] = top:1.b
paint.rgbReserved[0x16] = top:2.b
paint.rgbReserved[0x17] = top:3.b
paint.rgbReserved[0x10] = left.b
paint.rgbReserved[0x11] = left:1.b
paint.rgbReserved[0x12] = left:2.b
paint.rgbReserved[0x13] = left:3.b
paint.rgbReserved[0xc] = hdc.b
paint.rgbReserved[0xd] = hdc:1.b
paint.rgbReserved[0xe] = hdc:2.b
paint.rgbReserved[0xf] = hdc:3.b
BitBlt(paint.rgbReserved[0xc].d, paint.rgbReserved[0x10].d, paint.rgbReserved[0x14].d, 
    paint.rgbReserved[0x18].d, paint.rgbReserved[0x1c].d, hdcSrc, left, top, hdcSrc_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_45d954
h = left
return SelectObject(hdcSrc_1, h)
