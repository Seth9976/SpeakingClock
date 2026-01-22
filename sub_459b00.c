// 函数: sub_459b00
// 地址: 0x459b00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (*(ebx + 0x8e) == 0)
    return 

arg1.b = (*(ebx + 0x1c) & 0x10) != 0
void* edx_1
edx_1.b = (*(*(ebx + 0x30) + 0x1c) & 0x10) != 0

if (arg1.b == edx_1.b)
    sub_457928(ebx, *(*(ebx + 0x30) + 0x8d))
    *(ebx + 0x8e) = 1
