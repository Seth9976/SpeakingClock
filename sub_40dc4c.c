// 函数: sub_40dc4c
// 地址: 0x40dc4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4af8d8 == 0)
    return sub_408fc0(arg1, arg2)

uint32_t eax = arg1

if (eax != 0)
    eax = *(eax - 4)

void* result = sub_4052a8(arg2, eax)
int32_t ebx_1 = 1

if (eax s>= 1)
    do
        void* eax_4 = j_sub_40502c(arg2)
        *(eax_4 + ebx_1 - 1) = *(arg1 + ebx_1 - 1)
        
        if (not(test_bit(data_4aa800, zx.d(*(arg1 + ebx_1 - 1)))))
            result.b = *(*arg2 + ebx_1 - 1) - 0x41
            char temp0_1 = result.b
            result.b -= 0x1a
            
            if (temp0_1 u< 0x1a)
                result = j_sub_40502c(arg2)
                *(result + ebx_1 - 1) += 0x20
        else
            ebx_1 += 1
            result = j_sub_40502c(arg2)
            *(result + ebx_1 - 1) = *(arg1 + ebx_1 - 1)
        
        ebx_1 += 1
    while (eax s>= ebx_1)

return result
