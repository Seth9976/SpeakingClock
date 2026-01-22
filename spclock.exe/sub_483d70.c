// 函数: sub_483d70
// 地址: 0x483d70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45f864(*(arg1 + 4))
char result = sub_45fc28(*(arg1 + 4))

if (result == 0)
    return result

int32_t esi
esi.w = 0xffc7

if (sub_403e64(*(arg1 + 4), esi) != 0)
    int16_t eax_4 = *(arg2 + 0x18)
    
    if (eax_4 == 1)
        *(arg2 + 0x18) = 2
    else if (eax_4 == 2)
        *(arg2 + 0x18) = 1

return SendMessageA(sub_45f888(*(arg1 + 4)), 0x447, 0, arg2)
