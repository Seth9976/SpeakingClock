// 函数: sub_420fbc
// 地址: 0x420fbc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg3
var_8 = arg2

if (var_8 s>= 0xffffff80 && var_8 s<= 0x7f)
    arg2.b = 2
    sub_4229ec(arg3, arg2.b)
    return sub_420654(arg1, &var_8, 1)

if (var_8 s>= 0xffff8000 && var_8 s<= 0x7fff)
    arg2.b = 3
    sub_4229ec(arg3, arg2.b)
    return sub_420654(arg1, &var_8, 2)

arg2.b = 4
sub_4229ec(arg3, arg2.b)
return sub_420654(arg1, &var_8, 4)
