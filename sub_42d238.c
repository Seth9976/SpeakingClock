// 函数: sub_42d238
// 地址: 0x42d238
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LOGPALETTE plpal
plpal.palVersion = 0x300
var_40c

if (arg1 == 0)
    plpal.palNumEntries = arg3.w
    sub_4030d0(arg2, &var_40c, arg3 * 4)
else
    HDC hdc = CreateCompatibleDC(nullptr)
    HGDIOBJ h = SelectObject(hdc, arg1)
    plpal.palNumEntries = GetDIBColorTable(hdc, 0, 0x100, &var_40c)
    SelectObject(hdc, h)
    DeleteDC(hdc)

if (plpal.palNumEntries == 0)
    return nullptr

if (plpal.palNumEntries != 0x10)
    sub_42d034(&var_40c, zx.d(plpal.palNumEntries))
else if (sub_42d1a0(&plpal) == 0)
    sub_42d034(&var_40c, zx.d(plpal.palNumEntries))

return CreatePalette(&plpal)
