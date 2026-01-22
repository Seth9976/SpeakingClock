// 函数: sub_46fd18
// 地址: 0x46fd18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (arg2 == *(ebx + 0x330))
    return 

*(ebx + 0x330) = arg2

if (arg2 == 1 && *(ebx + 0x334) != 0)
    sub_46fd6c(ebx, nullptr)

*(ebx + 0x340) = 0
*(ebx + 0x344) = 0

if (sub_45fc28(ebx).b != 0 && (*(ebx + 0x1c) & 0x10) == 0)
    sub_45c168(ebx)
