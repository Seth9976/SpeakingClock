// 函数: sub_4711d0
// 地址: 0x4711d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x276) = arg2
HWND result = arg1[0xb1]
int32_t ecx

if (result != 0)
    result, ecx = sub_458ac8(result, 0)

if (arg2 == 0)
    return result

if (arg1[0x9a] == 0 && (arg1[7].b & 0x10) == 0)
    ecx.b = 1
    sub_470d84(arg1, sub_45fd4c(arg1, 0, ecx, 0, 1))

sub_471284(arg1, 1)
return sub_471158(arg1)
