// 函数: sub_470cdc
// 地址: 0x470cdc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg1[0xd6].b & 0x10) == 0)
    sub_45bef8(arg1)
else
    WPARAM wParam = sub_45f888(arg1)
    SendMessageA(*(*(data_4b1ce0 + 0x44) + 0x29c), 0x221, wParam, 0)

arg1[0xa7] = 0
return 0
