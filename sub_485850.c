// 函数: sub_485850
// 地址: 0x485850
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HCURSOR result = sub_45dd30(arg1, arg2)

if (*(arg2 + 0xc) != 0)
    return result

*(arg2 + 0xc) = 1
POINT point
GetCursorPos(&point)
int16_t var_a_1 = point.y.w
int32_t eax_3 = point.x.w.d
sub_458ac8(arg1, zx.d(eax_3.w) | zx.d(eax_3:2.w) << 0x10)
return 0xfffffff8
