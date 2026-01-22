// 函数: sub_490aa0
// 地址: 0x490aa0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx = 0

if (*arg1 == 0x80)
    int16_t i_1 = arg3 - 1
    
    if (i_1 u> 0)
        int32_t esi
        esi.w = 1
        int16_t i
        
        do
            uint32_t edx_1 = zx.d(esi.w)
            *(arg2 + edx_1 - 1) = arg1[edx_1]
            edx = esi
            esi += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return edx

int32_t esi_1 = 0
edx.w = 3
uint16_t var_14_1 = (zx.d(arg1[1]) << 8).w + zx.w(arg1[2])
char var_12_1 = 0x10

if (3 u< arg3)
    do
        if (var_12_1 == 0)
            var_14_1 = (zx.d(arg1[zx.d(edx.w)]) << 8).w + zx.w(arg1[zx.d(edx.w) + 1])
            var_12_1 = 0x10
            edx.w += 2
        
        if ((var_14_1:1.b & 0x80) != 0)
            uint16_t ecx_10 =
                (zx.d(arg1[zx.d(edx.w)]) << 4).w + (zx.d(arg1[zx.d(edx.w) + 1]) u>> 4).w
            
            if (ecx_10 != 0)
                uint16_t ecx_19 = (zx.w(arg1[zx.d(edx.w) + 1]) & 0xf) + 2
                
                if (ecx_19 u>= 0)
                    int16_t j_3 = ecx_19 + 1
                    int16_t var_16_2 = 0
                    int16_t j
                    
                    do
                        *(arg2 + zx.d(esi_1.w) + zx.d(var_16_2)) =
                            *(arg2 + zx.d(esi_1.w) - zx.d(ecx_10) + zx.d(var_16_2))
                        var_16_2 += 1
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                
                edx.w += 2
                esi_1.w += ecx_19 + 1
            else
                uint16_t ecx_13 =
                    (zx.d(arg1[zx.d(edx.w) + 1]) << 8).w + zx.w(arg1[zx.d(edx.w) + 2]) + 0xf
                
                if (ecx_13 u>= 0)
                    int16_t j_2 = ecx_13 + 1
                    int16_t var_16_1 = 0
                    int16_t j_1
                    
                    do
                        *(arg2 + zx.d(esi_1.w) + zx.d(var_16_1)) = arg1[zx.d(edx.w) + 3]
                        var_16_1 += 1
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                edx.w += 4
                esi_1.w += ecx_13 + 1
        else
            *(arg2 + zx.d(esi_1.w)) = arg1[zx.d(edx.w)]
            edx += 1
            esi_1 += 1
        
        var_14_1 <<= 1
        var_12_1 -= 1
    while (edx.w u< arg3)

return esi_1
