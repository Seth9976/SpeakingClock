// 函数: sub_4833d8
// 地址: 0x4833d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_45fc28(arg1)

if (result == 0)
    return result

if (arg1[0x9e] == 0 && arg1[0x9f] == 0)
    return SendMessageA(sub_45f888(arg1), 0x413, 1, 0)

return SendMessageA(sub_45f888(arg1), 0x40a, 1, zx.d(arg1[0x9e].w) | zx.d(arg1[0x9f].w) << 0x10)
