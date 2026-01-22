// 函数: sub_46935c
// 地址: 0x46935c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx

if (arg2 == arg1[0x1d])
    return arg2

int32_t esi_2 = *(arg1[0x14] + 8) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* eax_4 = *(*(arg1[0x14] + 4) + (edi_1 << 2))
        sub_403e18(eax_4, 0x468820)
        
        if (eax_4 != 0)
            (*(*eax_4 + 0x5c))(arg2)
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x1d] = arg2
return (*(*arg1 + 0x30))(arg2)
