// 函数: sub_454528
// 地址: 0x454528
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

POINT lppoint
GetWindowOrgEx(arg2, &lppoint)
SetWindowOrgEx(arg2, lppoint.x + *(arg1 + 0x40), lppoint.y + *(arg1 + 0x44), nullptr)
sub_458ac8(*(arg1 + 0x30), arg2)
return SetWindowOrgEx(arg2, lppoint.x, lppoint.y, nullptr)
