// 函数: sub_40b044
// 地址: 0x40b044
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

SYSTEMTIME systemTime
GetLocalTime(&systemTime)
double var_8 = fconvert.d(sub_40ae80(systemTime.wYear, systemTime.wMonth, systemTime.wDay))
return fconvert.t(fconvert.d(
    sub_40acdc(systemTime.wSecond, systemTime.wMinute, systemTime.wHour, systemTime.wMilliseconds)
    + fconvert.t(var_8)))
