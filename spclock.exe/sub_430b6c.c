// 函数: sub_430b6c
// 地址: 0x430b6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1[0xa]

if (*(ebx + 4) s> 1)
    sub_430e98(arg1)
    HPALETTE eax_1
    
    if (*(ebx + 0x71) == 0)
        eax_1 = *(ebx + 0x10)
    else
        eax_1 = nullptr
    
    return sub_4307b8(eax_1, *(ebx + 8), arg1, ebx + 0x18)

int32_t result = *(ebx + 8)

if (result != 0 && result != *(ebx + 0x14))
    HGDIOBJ ho = *(ebx + 0x14)
    
    if (ho != 0 && DeleteObject(ho) == 0)
        sub_42ca98()
    
    *(ebx + 0x14) = 0
    result = 0
    *(ebx + 0x2c) = 0

return result
