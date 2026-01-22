// 函数: sub_46c130
// 地址: 0x46c130
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t ebx = arg1

if (*(ebx + 0x57) == 0)
    return 

arg1 = zx.d(*(ebx + 0x5b))
char temp0_1 = arg1.b
arg1.b -= 2

if (temp0_1 u< 2)
    if (*(ebx + 0x5b) != 1)
        arg1.b = 0xa & *(ebx + 0x61)
    
    if (*(ebx + 0x5b) == 1 || 2 == arg1.b)
        arg1 = *(arg2 - 4)
        uint32_t edx_5 = *(*(arg2 - 8) + 0xc) + *(ebx + 0x44) + *(ebx + 0x4c)
        
        if (edx_5 s>= arg1)
            arg1 = edx_5
        
        *(arg2 - 4) = arg1
else if (temp0_1 == 2)
    *(arg2 - 0xc) += *(ebx + 0x4c)
