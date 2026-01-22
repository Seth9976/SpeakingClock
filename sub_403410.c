// 函数: sub_403410
// 地址: 0x403410
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int16_t eax = *(arg1 + 4)

if (eax u>= 0xd7b1 && eax u<= 0xd7b3)
    if ((eax & 0xd7b2) == 0xd7b2)
        result = (*(arg1 + 0x1c))()
    
    if (result == 0)
        result = (*(arg1 + 0x24))()
    
    if (result != 0)
        sub_403024(result)
else if (arg1 != 0x4ad04c)
    sub_403024(0x67)

return result
