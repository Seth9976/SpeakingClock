// 函数: sub_467430
// 地址: 0x467430
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = arg2
char result = sub_466ad8(arg3)

if (result == 0)
    return result

if (arg4 != 0)
    arg3[0x12]
    COLORREF rgbFg = sub_4668d4()
    sub_467408(arg3)
    COLORREF rgbBk = sub_4668d4()
    HDC hdcDst = sub_42c73c(arg1)
    return ImageList_DrawEx(sub_466cac(arg3), i, hdcDst, arg7, arg6, 0, 0, rgbBk, rgbFg, arg5)

if (arg3[0x15] == 0)
    arg2.b = 1
    int32_t* eax_10 = sub_430618(sub_42a104+0x140, arg2)
    arg3[0x15] = eax_10
    sub_431be0(eax_10, 1)
    arg3[0xd]
    (*(*eax_10 + 0x40))()
    arg3[0xc]
    (*(*eax_10 + 0x34))()

sub_42bbb0(*(sub_430bec(arg3[0x15]) + 0x14), 0xffffff)
void var_2c
sub_418a64(arg3[0xd], 0, 0, &var_2c, arg3[0xc])
sub_42c258(sub_430bec(arg3[0x15]), &var_2c)
HDC hdcDst_1 = sub_42c73c(sub_430bec(arg3[0x15]))
ImageList_DrawEx(sub_466cac(arg3), i, hdcDst_1, 0, 0, 0, 0, 0xffffffff, 0, ILD_NORMAL)
void var_1c
sub_418a64(arg7 + arg3[0xd], arg6, arg7, &var_1c, arg6 + arg3[0xc])
HDC hdcSrc = sub_42c73c(sub_430bec(arg3[0x15]))
sub_42bbb0(arg1[5], 0xff000014)
HDC hdc = sub_42c73c(arg1)
SetTextColor(hdc, 0xffffff)
SetBkColor(hdc, 0)
BitBlt(hdc, arg7 + 1, arg6 + 1, arg3[0xd], arg3[0xc], hdcSrc, 0, 0, 0xe20746)
sub_42bbb0(arg1[5], 0xff000010)
HDC hdc_1 = sub_42c73c(arg1)
SetTextColor(hdc_1, 0xffffff)
SetBkColor(hdc_1, 0)
return BitBlt(hdc_1, arg7, arg6, arg3[0xd], arg3[0xc], hdcSrc, 0, 0, 0xe20746)
