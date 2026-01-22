// 函数: sub_430e14
// 地址: 0x430e14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (*(ebx + 8) == 0 || *(ebx + 0x14) != 0)
    return 

sub_43107c(arg1)

if (*(ebx + 0x30) == 0)
    GetObjectA(*(ebx + 8), 0x54, ebx + 0x18)
    *(ebx + 0x30) = 0x28
    *(ebx + 0x34) = *(ebx + 0x1c)
    *(ebx + 0x38) = *(ebx + 0x20)
    *(ebx + 0x3c) = 1
    *(ebx + 0x3e) = *(ebx + 0x28) * *(ebx + 0x2a)

void* var_c_2 = ebx + 0x18
*(ebx + 0x10)
*(ebx + 0x14) = sub_42fd44(*(ebx + 8), nullptr)
