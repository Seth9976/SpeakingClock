// 函数: sub_467a58
// 地址: 0x467a58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
void* ebx = arg1
*(ebx + 0x58) = 1

if (*(ebx + 0x5c) s> 0)
    return 

arg1 = *(ebx + 0x4c)

if (arg1 != 0)
    int32_t edi_2 = *(arg1 + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t ebp_1 = 0
        int32_t i
        
        do
            esi.w = 0xffff
            sub_403e64(sub_41a0f4(*(ebx + 0x4c), ebp_1), esi)
            ebp_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

if (*(ebx + 0x62) != 0)
    *(ebx + 0x64)
    (*(ebx + 0x60))()
