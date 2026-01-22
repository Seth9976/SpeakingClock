// 函数: sub_49f408
// 地址: 0x49f408
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax = *(arg1 + 4)
sub_403e18(eax, &data_453234)

if (eax != 0 && *(arg1 + 0xf0) != 0)
    int32_t dwNewLong = *(arg1 + 0xf0)
    sub_403e18(*(arg1 + 4), &data_453234)
    SetWindowLongA(sub_45f888(eax), 0xfffffffc, dwNewLong)

void* eax_4 = *(arg1 + 0xf4)

if (eax_4 != 0)
    sub_424aac(eax_4)

*(arg1 + 0xf4) = 0
*(arg1 + 0xf0) = 0
return 0
