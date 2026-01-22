// 函数: sub_42d034
// 地址: 0x42d034
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*data_4ac3d4)
int32_t ecx_1 = arg2 - 1

if (arg2 - 1 s>= 0)
    if (result s<= 2)
        int32_t temp2_1
        
        do
            int32_t eax_3 = *(arg1 + (ecx_1 << 2))
            int32_t ebx_1
            ebx_1:1.b = eax_3.b
            ebx_1.b = eax_3:1.b
            result = eax_3 u>> 0x10
            int32_t ebx_2
            ebx_2.b = result.b
            *(arg1 + (ecx_1 << 2)) = ebx_2
            temp2_1 = ecx_1
            ecx_1 -= 1
        while (temp2_1 - 1 s>= 0)
    else
        int32_t temp1_1
        
        do
            result = _bswap(*(arg1 + (ecx_1 << 2))) u>> 8
            *(arg1 + (ecx_1 << 2)) = result
            temp1_1 = ecx_1
            ecx_1 -= 1
        while (temp1_1 - 1 s>= 0)

return result
