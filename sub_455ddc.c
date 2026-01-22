// 函数: sub_455ddc
// 地址: 0x455ddc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

POINT lppoint
GetWindowOrgEx(arg1, &lppoint)
return SetWindowOrgEx(arg1, lppoint.x - arg2, lppoint.y - arg3, nullptr)
