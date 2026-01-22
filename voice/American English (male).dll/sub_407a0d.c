// 函数: sub_407a0d
// 地址: 0x407a0d
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i_2
i_2.w = arg2[2].w
int32_t i_1 = i_2
int32_t result = i_2 & 0x7fff
int16_t* entry_ebx

if (result == 0)
    i_1 = 0
    *(entry_ebx + 3) = 0
else if (result != 0x7fff)
    long double x87_r7_1 = *arg2
    *(arg1 - 8) = (((result - 0x3fff) * 0x4d10) s>> 0x10) + 1
    *(arg1 - 4)
    int16_t eax_5
    long double st0_1
    eax_5, st0_1 = j_sub_402a34(0x12 - *(arg1 - 8), fabs(x87_r7_1))
    long double x87_r7_4 = roundint.t(st0_1)
    void* edi_1 = *(arg1 - 4)
    long double x87_r6_1 = *(edi_1 + 0x41316c)
    x87_r6_1 - x87_r7_4
    *(arg1 - 0xa) = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800
    
    if ((*(arg1 - 0xa) & 0x4100) != 0)
        x87_r7_4 = x87_r7_4 / float.t(*(edi_1 + &data_413178))
        *(arg1 - 8) += 1
    
    *(arg1 - 0x18) = __fbst(x87_r7_4)
    void* edi_2 = entry_ebx + 3
    i_1 = 9
    int32_t i
    
    do
        eax_5.b = *(i_1 + arg1 - 0x19)
        eax_5:1.b = eax_5.b
        eax_5.b u>>= 4
        eax_5:1.b &= 0xf
        *edi_2 = eax_5 + 0x3030
        edi_2 += 2
        i = i_1
        i_1 -= 1
    while (i != 1)
    *edi_2 = 0
    int32_t edi_4 = *(arg1 - 8)
    int32_t edi_5 = edi_4 + *(arg1 + 8)
    
    if (edi_4 + *(arg1 + 8) s>= 0)
        if (edi_5 u>= *(arg1 + 0xc))
            edi_5 = *(arg1 + 0xc)
        
        if (edi_5 u>= 0x12)
            edi_5 = 0x12
        label_407b07:
            
            do
                *(entry_ebx + edi_5 + 3) = 0
                int32_t temp4_1 = edi_5
                edi_5 -= 1
                
                if (temp4_1 - 1 s< 0)
                    i_1 = 0
                    goto label_407b0d
            while (*(entry_ebx + edi_5 + 3) == 0x30)
        else
            if (*(entry_ebx + edi_5 + 3) u< 0x35)
                goto label_407b07
            
            do
                *(entry_ebx + edi_5 + 3) = 0
                int32_t temp5_1 = edi_5
                edi_5 -= 1
                
                if (temp5_1 - 1 s< 0)
                    *(entry_ebx + 3) = 0x31
                    *(arg1 - 8) += 1
                    break
                
                *(entry_ebx + edi_5 + 3) += 1
            while (*(entry_ebx + edi_5 + 3) u> 0x39)
        
        i_1.w = arg2[2].w
    label_407b0d:
        result = *(arg1 - 8)
    else
        result = 0
        i_1 = 0
        *(entry_ebx + 3) = 0
else if ((*(arg2 + 6) & 0x8000) == 0 || (*arg2 == 0 && arg2[1] == 0x80000000))
    *(entry_ebx + 3) = 0
else
    result += 1
    i_1 = 0
    *(entry_ebx + 3) = 0

i_1.w u>>= 0xf
*entry_ebx = result.w
entry_ebx[1].b = i_1.b
return result
