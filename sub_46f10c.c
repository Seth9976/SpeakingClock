// 函数: sub_46f10c
// 地址: 0x46f10c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_14 = arg3
*arg2 &= 0xfff4ffff
*arg3 &= 0xfffffbff
var_14.b = *(arg1 + 0x271)

if (*(arg1 + 0x277) == 1)
    char eax_1 = var_14.b
    char temp2_1
    
    if (eax_1 != 0)
        temp2_1 = eax_1
    
    if (eax_1 == 0 || temp2_1 == 3)
        var_14.b = 2

char ebx = *(arg1 + 0x270)
char eax_2 = var_14.b

if (eax_2 u< 1)
    ebx = 0
else if (eax_2 == 3)
    ebx &= 9
else if (eax_2 - 4 u< 2)
    ebx &= 1

char eax_6 = var_14.b

if (eax_6 u< 3 && (*(arg1 + 0x277) != 1 || (ebx & 1) != 0))
    if ((ebx & 2) != 0)
        *arg2 |= 0x20000
    
    if ((ebx & 4) != 0)
        *arg2 |= 0x10000

if ((ebx & 1) != 0)
    *arg2 |= 0x80000

if ((ebx & 8) != 0)
    *arg3 |= 0x400

return eax_6 - 3
