// 函数: sub_4616d0
// 地址: 0x4616d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

POINT point
point.x = arg2
point.y = arg1
ClientToScreen(arg3, &point)
RECT rect
GetWindowRect(arg3, &rect)
*arg4 = point.x - rect.left
int32_t result = point.y - rect.top
arg4[1] = result
return result
