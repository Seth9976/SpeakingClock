// 函数: sub_4716c0
// 地址: 0x4716c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_46b8c0(sub_45f888(arg1)) != 0)
    PAINTSTRUCT paint
    DrawIcon(BeginPaint(sub_45f888(arg1), &paint), 0, 0, sub_4713f8(arg1))
    return EndPaint(sub_45f888(arg1), &paint)

arg1[0x15].w |= 0x100
sub_45d738(arg1, arg2)
int16_t result = 0xfeff & arg1[0x15].w
arg1[0x15].w = result
return result
