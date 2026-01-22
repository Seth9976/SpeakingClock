// 函数: sub_45a058
// 地址: 0x45a058
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t i_1 = arg2

if (i_1 s> 0)
    int32_t result_1 = 1
    double* edx_1 = arg1 + 8
    int32_t i
    
    do
        long double x87_r7_1 = fconvert.t(*edx_1)
        long double temp0_1 = fconvert.t(*(arg1 + (result << 3)))
        x87_r7_1 - temp0_1
        void* eax
        eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax:1.b, 0))
            result = result_1
        
        result_1 += 1
        edx_1 = &edx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
