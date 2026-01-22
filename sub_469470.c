// 函数: sub_469470
// 地址: 0x469470
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
var_10.w = arg2
int16_t result = var_10.w

if (result == arg1[0x21].w)
    return result

int32_t esi_2 = *(arg1[0x14] + 8) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* eax_3 = *(*(arg1[0x14] + 4) + (edi_1 << 2))
        sub_403e18(eax_3, 0x468820)
        
        if (eax_3 != 0)
            (*(*eax_3 + 0x70))(var_10)
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x21].w = var_10.w
return (*(*arg1 + 0x30))(var_10)
