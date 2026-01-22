// 函数: sub_484634
// 地址: 0x484634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = *(arg1 + 0x18)

if (*(edi + 0x1da) != 0)
    int32_t eax
    eax.b = arg2.b ^ 1
    SendMessageA(sub_45f888(edi), 0xb, eax & 0x7f, 0)

if (arg2.b == 0)
    sub_457dd8(*(arg1 + 0x18))
    sub_458ac8(*(arg1 + 0x18), 0)
