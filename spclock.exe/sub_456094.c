// 函数: sub_456094
// 地址: 0x456094
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1
void* esi = *(ebx + 0x58)

if (esi == 0)
    return 

if (sub_457ee4(esi).b == 0)
    *(ebx + 0x54) &= 0xffffff7f
else
    *(ebx + 0x54) |= 0x80
