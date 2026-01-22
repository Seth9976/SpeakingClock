// 函数: sub_45e310
// 地址: 0x45e310
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2

if (*(arg1 + 0x1b0) != 0 || *(arg1 + 0x1dc) == 0 || *(arg1 + 0x1db) == 0)
    sub_406568(esi, *(arg1 + 0x1b0))
else
    arg2.b = 1
    int32_t* edx = (*(data_4ab864 + 0x44))()
    
    if (edx != 0)
        edx -= 0xffffff88
    
    sub_406568(esi, edx)

char result

if (*(arg1 + 0x240) != 0 || *esi != 0)
    result = 1
else
    result = 0

*(arg1 + 0x240) = result
return result
