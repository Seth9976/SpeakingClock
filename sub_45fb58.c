// 函数: sub_45fb58
// 地址: 0x45fb58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == *(arg1 + 0x1d8))
    return 

*(arg1 + 0x1d8) = arg2

if (sub_45fc28(arg1) != 0)
    int32_t dwNewLong = GetWindowLongA(*(arg1 + 0x1b4), 0xfffffff0) & 0xfffeffff
    
    if (arg2 != 0)
        dwNewLong |= 0x10000
    
    SetWindowLongA(*(arg1 + 0x1b4), 0xfffffff0, dwNewLong)

sub_458ac8(arg1, 0)
