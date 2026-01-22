// 函数: sub_49eed8
// 地址: 0x49eed8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0xd8) != 0)
    return 

POINT point
GetCursorPos(&point)
int32_t edx_1 = *(arg1 + 0xd0)
int32_t x = point.x

if (edx_1 s<= x && point.y s>= *(arg1 + 0xd4) && edx_1 s>= x && point.y s<= *(arg1 + 0xd4))
    return 

*(arg1 + 0xd8) = 1
int32_t esi
esi.w = 0xffe8
sub_403e64(arg1, esi, edx_1)
