// 函数: sub_40ac6c
// 地址: 0x40ac6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0

if (arg3 u< 0x18 && arg2 u< 0x3c && arg1 u< 0x3c && arg5 u< 0x3e8)
    *arg4 = fconvert.d(
        float.t(zx.d(arg3) * 0x36ee80 + zx.d(arg2) * 0xea60 + zx.d(arg1) * 0x3e8 + zx.d(arg5))
        / fconvert.t(86400000f))
    var_5 = 1

return zx.d(var_5)
