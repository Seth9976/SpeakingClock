// 函数: sub_464c7c
// 地址: 0x464c7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND result = sub_464bc0()

if (arg2 == result)
    return result

if (arg2 != 0)
    return SetCapture(arg2)

return ReleaseCapture()
