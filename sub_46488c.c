// 函数: sub_46488c
// 地址: 0x46488c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = *(*(arg1 - 4) + 0x18)
void* esi = *(*(arg1 - 4) + 0x60)
int32_t result

if (*(*(esi + 0x14) + 0x10) != 1)
    int32_t eax_11 = sub_461c40(esi, 2) + ebx
    
    if (eax_11 s>= *(*(arg1 - 4) + 0x50))
        *(*(arg1 - 4) + 0x50) = eax_11
    
    result = sub_4640f0(*(arg1 - 4), *(*(arg1 - 4) + 0x60)) - ebx
    
    if (result s<= *(*(arg1 - 4) + 0x50))
        *(*(arg1 - 4) + 0x50) = result
else
    int32_t eax_5 = sub_461c40(esi, 1) + ebx
    
    if (eax_5 s>= *(*(arg1 - 4) + 0x54))
        *(*(arg1 - 4) + 0x54) = eax_5
    
    result = sub_4640f0(*(arg1 - 4), *(*(arg1 - 4) + 0x60)) - ebx
    
    if (result s<= *(*(arg1 - 4) + 0x54))
        *(*(arg1 - 4) + 0x54) = result

return result
