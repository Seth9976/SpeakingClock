// 函数: sub_446840
// 地址: 0x446840
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND edi = *(arg1 + 0x3c)

if (edi == 0)
    return sub_418a64(0, 0, 0, arg2, 0)

if ((*(arg1 + 0x66) & 1) != 0)
    return GetClientRect(edi, arg2)

GetWindowRect(GetDlgItem(edi, 0x45f), arg2)
return MapWindowPoints(nullptr, *(arg1 + 0x3c), arg2, 2)
