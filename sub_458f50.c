// 函数: sub_458f50
// 地址: 0x458f50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 u< 1)
    void* ebx_1 = *(*(arg2 - 4) + 0x20)
    int32_t eax_2
    
    if (ebx_1 != 0 && *(ebx_1 + 0x180) != *(*(arg2 - 8) + 0x180))
        eax_2.b = 1
        return eax_2
    
    if (*(*(arg2 - 4) + 0x20) == 0
            && (*(*(arg2 - 8) + 0x5b) != 0 || 0 == (*(*(arg2 - 8) + 0x61) & 1))
            && *(*(arg2 - 8) + 0x180) != *(*(arg2 - 8) + 0x40))
        eax_2.b = 1
        return eax_2
else if (arg1 == 1)
    void* ebx_2 = *(*(arg2 - 4) + 0x20)
    int32_t eax_15
    
    if (ebx_2 != 0 && *(ebx_2 + 0x184) != *(*(arg2 - 8) + 0x184))
        eax_15.b = 1
        return eax_15
    
    if (*(*(arg2 - 4) + 0x20) == 0
            && (*(*(arg2 - 8) + 0x5b) != 0 || 0 == (*(*(arg2 - 8) + 0x61) & 2))
            && *(*(arg2 - 8) + 0x184) != *(*(arg2 - 8) + 0x44))
        eax_15.b = 1
        return eax_15
else if (arg1 == 2)
    void* ebx_3 = *(*(arg2 - 4) + 0x20)
    int32_t eax_28
    
    if (ebx_3 != 0 && *(ebx_3 + 0x188) != *(*(arg2 - 8) + 0x188))
        eax_28.b = 1
        return eax_28
    
    if (*(*(arg2 - 4) + 0x20) == 0
            && (*(*(arg2 - 8) + 0x5b) != 0 || 5 == (*(*(arg2 - 8) + 0x61) & 5))
            && *(*(arg2 - 8) + 0x188) != *(*(arg2 - 8) + 0x48))
        eax_28.b = 1
        return eax_28
else if (arg1 == 3)
    void* ebx_4 = *(*(arg2 - 4) + 0x20)
    int32_t eax_41
    
    if (ebx_4 != 0 && *(ebx_4 + 0x18c) != *(*(arg2 - 8) + 0x18c))
        eax_41.b = 1
        return eax_41
    
    if (*(*(arg2 - 4) + 0x20) == 0
            && (*(*(arg2 - 8) + 0x5b) != 0 || 0xa == (*(*(arg2 - 8) + 0x61) & 0xa))
            && *(*(arg2 - 8) + 0x18c) != *(*(arg2 - 8) + 0x4c))
        eax_41.b = 1
        return eax_41

return 0
