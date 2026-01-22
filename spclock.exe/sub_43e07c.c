// 函数: sub_43e07c
// 地址: 0x43e07c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = sub_4659bc()

if (sub_46665c(arg1) == 0)
    return (*(*arg1 - 0x10))()

if (*(arg1[0xc] + 0x240) == 0)
    int32_t eax_6 = sub_45f888(arg1)
    sub_465c5c(*(arg2 + 4), eax_6, eax, 0, 0, nullptr)
else
    sub_454528(arg1, *(arg2 + 4))

HGDIOBJ result = GetStockObject(HOLLOW_BRUSH)
*(arg2 + 0xc) = result
return result
