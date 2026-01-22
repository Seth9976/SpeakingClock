// 函数: sub_44dc14
// 地址: 0x44dc14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* i

for (i = *(arg1 + 0x64); i != 0; i = *(i + 0x64))
    if (*(i + 0x7c) != 0)
        break

if (i != 0)
    return *(i + 0x7c)

void* eax = sub_44ea50(arg1)

if (eax == 0)
    return 0

return *(eax + 0x48)
