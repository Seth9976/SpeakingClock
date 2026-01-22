// 函数: sub_44b79c
// 地址: 0x44b79c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = arg1

if (arg2 != 0 && (*(arg2 + 0x1c) & 8) != 0)
    return 

arg1 = *(ebx + 0x68)

if (arg2 == arg1)
    return 

if (arg1 != 0)
    *(arg1 + 0x6c) = 0

*(ebx + 0x68) = arg2

if (arg2 != 0)
    *(arg2 + 0x6c) = ebx
    sub_423408(arg2, ebx)

sub_44b814(ebx)
