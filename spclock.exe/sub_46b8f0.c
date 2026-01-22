// 函数: sub_46b8f0
// 地址: 0x46b8f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t hWnd = arg1

if (hWnd == 0)
    return 

arg1 = GetWindowLongA(hWnd, 0xffffffec)

if (arg2 == 0)
    if ((arg1:1.b & 2) != 0)
        SetWindowLongA(hWnd, 0xffffffec, arg1 & 0xfffffdff)
        SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x37)
else if ((arg1:1.b & 2) == 0)
    SetWindowLongA(hWnd, 0xffffffec, arg1 | 0x200)
    SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x37)
