// 函数: sub_470274
// 地址: 0x470274
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd

for (hWnd = GetParent(arg1); hWnd != 0; hWnd = GetParent(arg1))
    if ((GetWindowLongA(hWnd, 0xffffffec) & 0x80) != 0x80)
        break

if (hWnd != 0)
    return hWnd

int32_t* ebx = *(data_4b1ce0 + 0x44)

if (ebx != 0 && (GetWindowLongA(sub_45f888(ebx), 0xffffffec) & 0x80) == 0)
    return sub_45f888(*(data_4b1ce0 + 0x44))

return *(data_4b1ce0 + 0x30)
