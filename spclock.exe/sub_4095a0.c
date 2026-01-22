// 函数: sub_4095a0
// 地址: 0x4095a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0

if (arg2 s>= 0)
    int32_t i_1 = arg2 + 1
    int32_t* ebx_1 = arg1
    int32_t i
    
    do
        int32_t cchCount1_1 = *(arg3 - 4)
        int32_t cchCount2_1 = *ebx_1
        int32_t cchCount1 = cchCount1_1
        
        if (cchCount1 != 0)
            cchCount1 = *(cchCount1 - 4)
        
        int32_t cchCount2 = cchCount2_1
        
        if (cchCount2 != 0)
            cchCount2 = *(cchCount2 - 4)
        
        char* lpString2 = sub_405018(cchCount2_1)
        int32_t eax_5
        eax_5.b =
            CompareStringA(0x400, 1, sub_405018(cchCount1_1), cchCount1, lpString2, cchCount2) == 2
        
        if (eax_5.b != 0)
            var_5 = 1
            break
        
        ebx_1 = &ebx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.d(var_5)
