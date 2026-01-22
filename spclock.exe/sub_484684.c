// 函数: sub_484684
// 地址: 0x484684
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = *(arg1 + 0x18)
LPARAM lParam

if (arg2 == 0)
    lParam = SendMessageA(sub_45f888(ebx), 0x43b, 0, 0) & 0xfffffffe
else
    lParam = SendMessageA(sub_45f888(ebx), 0x43b, 0, 0) | 1

return SendMessageA(sub_45f888(ebx), 0x445, 0, lParam)
