// 函数: sub_4081f8
// 地址: 0x4081f8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

SYSTEMTIME systemTime
GetLocalTime(&systemTime)
double* eax
eax.w = systemTime.wMilliseconds
int16_t var_1c_1 = eax.w
eax.w = systemTime.wHour
return fconvert.t(fconvert.d(sub_407ec4(systemTime.wSecond, systemTime.wMinute, eax, var_1c_1)))
