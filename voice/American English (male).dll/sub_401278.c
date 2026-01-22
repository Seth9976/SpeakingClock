// 函数: sub_401278
// 地址: 0x401278
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

STARTUPINFOA startupInfo
GetStartupInfoA(&startupInfo)

if ((startupInfo.dwFlags.b & 1) == 0)
    return 0xa

return zx.d(startupInfo.wShowWindow)
