// 函数: sub_496280
// 地址: 0x496280
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = 0
char eax = *(arg1 + 0x30)

if (eax u< 1)
    if (*(arg1 + 0x18) == 6)
        return zx.d(*(arg1 + 0x1a)) + zx.d(*(arg1 + 0x20))
    
    result = zx.d(*(arg1 + 0x21)) + zx.d(*(arg1 + 0x20))
    char eax_4 = *(arg1 + 0x19)
    
    if (eax_4 != 0 || *(arg1 + 0x18) != 0)
        uint32_t edx_1
        edx_1.b = eax_4 != 0
        int32_t esi_1 = result + zx.d(edx_1.b) * zx.d(*(arg1 + 0x1b))
        
        if (eax_4 - 3 u< 2)
            esi_1 += 1
        
        char eax_5 = *(arg1 + 0x18)
        int32_t edx_3
        edx_3.b = eax_5 != 0
        result = esi_1 + zx.d(edx_3.b) * zx.d(*(arg1 + 0x1a))
        
        if (eax_5 - 3 u< 2)
            return result + 1
else
    if (eax == 1)
        return sub_48d770(*(arg1 + 0x38)) + zx.d(*(arg1 + 0x20))
    
    if (eax == 2)
        if (0 != *(arg1 + 0x22))
            result = 2
        
        return result + zx.d(*(arg1 + 0x20))
    
    if (eax == 3)
        if (*(arg1 + 0x39) == 0)
            return zx.d(*(arg1 + 0x20)) + 2
        
        return 0

return result
