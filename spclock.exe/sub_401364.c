// 函数: sub_401364
// 地址: 0x401364
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

STARTUPINFOA startupInfo
GetStartupInfoA(&startupInfo)

if ((startupInfo.dwFlags.b & 1) == 0)
    return 0xa

return zx.d(startupInfo.wShowWindow)
