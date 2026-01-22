// 函数: sub_40993c
// 地址: 0x40993c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg3 + 0x18) = not.d(arg2) & 0x16
HANDLE eax_3 = FindFirstFileA(sub_405018(arg1), &arg3[0x10])
*(arg3 + 0x1c) = eax_3

if (eax_3 == 0xffffffff)
    return GetLastError()

enum WIN32_ERROR result = sub_4098b8(arg3)

if (result != NO_ERROR)
    sub_4099b0(arg3)

return result
