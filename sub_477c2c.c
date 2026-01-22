// 函数: sub_477c2c
// 地址: 0x477c2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = *(arg1 + 0x84)

if (esi == 0 || sub_45fc28(esi).b == 0 || IsWindowVisible(sub_45f888(*(arg1 + 0x84))) == 0)
    return 

if ((*(**(arg1 + 0x84) + 0xf0))() == 0)
    sub_477a68(arg1, *(arg1 + 0x74), 1)
else
    ShowWindow(sub_45f888(*(arg1 + 0x84)), SW_HIDE)
    sub_4576f8(*(arg1 + 0x84), 0)
