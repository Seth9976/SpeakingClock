// 函数: sub_4099cc
// 地址: 0x4099cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = arg1

if (eax != 0)
    eax = *(eax - 4)

int32_t ebx = eax

if (ebx == 0)
    return 0

while (sub_40d88c(arg1, ebx) == 2)
    ebx -= 1

return arg1 + ebx - 1
