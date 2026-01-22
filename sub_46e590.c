// 函数: sub_46e590
// 地址: 0x46e590
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg1[0xd6].b & 1) == 0)
    if (arg2 != 0 && arg2 != *(arg1 + 0x57))
        sub_46ff10(arg1)
    
    sub_4576f8(arg1, arg2)
else
    if (arg2 == 0)
        arg1[0xd6].b &= 0xfd
        return 
    
    arg1[0xd6].b |= 2
