// 函数: sub_42fbf0
// 地址: 0x42fbf0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *(arg1 + 8)

if (eax != 0)
    sub_42f900(eax)
    HGDIOBJ ho = *(arg1 + 8)
    
    if (ho != *(arg1 + 0x14))
        DeleteObject(ho)

int32_t eax_1 = *(arg1 + 0xc)

if (eax_1 != 0)
    sub_42f900(eax_1)
    DeleteObject(*(arg1 + 0xc))
    *(arg1 + 0xc) = 0

sub_42a41c(*(arg1 + 0x10))
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
return 0
