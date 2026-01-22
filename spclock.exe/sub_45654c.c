// 函数: sub_45654c
// 地址: 0x45654c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax = *(arg1 + 0x10)
sub_403e18(eax, &data_468718)
int32_t eax_1 = eax[0x1d]
void* esi = *(arg1 + 0x18)
int32_t temp0 = *(esi + 0x160)

if (eax_1 == temp0)
    sub_403e18(*(arg1 + 0x10), &data_468718)
    sub_404fb0(*(esi + 0x15c), eax[0x1e])
    
    if (eax_1 == temp0)
        sub_403e18(*(arg1 + 0x10), &data_468718)
        
        if (eax[0x1c].b == *(esi + 0x158))
            return 1

return 0
