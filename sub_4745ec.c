// 函数: sub_4745ec
// 地址: 0x4745ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0xffffffff)
    return 0

void** i

for (i = *(arg1 + 0x5c); i != 0; i = *i)
    if (arg2 == i[1])
        break

if (i != 0)
    return i[2]

return *(arg1 + 0x60)
