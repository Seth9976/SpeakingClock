// 函数: sub_49058c
// 地址: 0x49058c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = *arg1
int32_t var_8 = arg1[1]
int32_t ecx_1
ecx_1.w = arg1[2].w
int16_t var_4 = ecx_1.w

if ((arg2 + 1) * 0xa s> 1)
    int32_t i_1 = arg2
    
    if (i_1 s> 0)
        int32_t* edx = arg1 + 0xa
        int32_t i
        
        do
            long double x87_r7_1 = *edx
            long double x87_r6_1 = var_c.t
            x87_r6_1 - x87_r7_1
            arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                var_c = *edx
                int32_t* var_8_1 = edx[1]
                arg1.w = edx[2].w
                int16_t var_4_1 = arg1.w
            
            edx += 0xa
            i = i_1
            i_1 -= 1
        while (i != 1)

return var_c.t
