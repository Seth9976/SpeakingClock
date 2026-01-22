// 函数: sub_46c0c0
// 地址: 0x46c0c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t ebx = arg1

if (*(ebx + 0x57) == 0)
    return 

arg1 = zx.d(*(ebx + 0x5b))
char temp0_1 = arg1.b
arg1.b -= 1
char temp1_1

if (temp0_1 u>= 1)
    temp1_1 = arg1.b
    arg1.b -= 2

if (temp0_1 u>= 1 && temp1_1 != 2)
    char temp2_1 = arg1.b
    arg1.b -= 1
    
    if (temp2_1 == 1)
        *(arg2 - 0xc) += *(ebx + 0x48)
    
    return 

if (*(ebx + 0x5b) != 3)
    arg1.b = 5 & *(ebx + 0x61)

if (*(ebx + 0x5b) != 3 && 1 != arg1.b)
    return 

arg1 = *(arg2 - 4)
uint32_t edx_5 = *(*(arg2 - 8) + 0xc) + *(ebx + 0x40) + *(ebx + 0x48)

if (edx_5 s>= arg1)
    arg1 = edx_5

*(arg2 - 4) = arg1
