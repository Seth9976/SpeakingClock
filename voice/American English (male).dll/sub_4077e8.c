// 函数: sub_4077e8
// 地址: 0x4077e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

bool c
void* result = adc.d(arg1, 0x71004078, c)
void* edi_1
bool c_1

if (result s< 0)
    arg2[0x74003e80] ^= arg3:1.b
    c_1 = arg3.b u< arg2[0xf7aafb45]
label_40783b:
    int16_t x87status_1
    uint224_t temp0_1
    temp0_1, x87status_1 = __fnstenv_memmem28()
    *(result - 0x14550cd0) = temp0_1
    int16_t entry_ebx
    entry_ebx:1.b = sbb.b(entry_ebx:1.b, *(arg3 + 1), c_1)
    arg2 = &arg2[1]
    
    while (true)
        result.b = *arg5
        arg5 = &arg5[1]
        result.b = result.b
        
        if (result.b == 0)
            result.b = 0x30
            __builtin_memset(arg6, 0x30, arg3)
            break
        
        *arg6 = result.b
        arg6 += 1
        arg3 -= 1
        
        if (arg3 == 0)
            result.b = *arg5
            arg5 = &arg5[1]
            result.b = result.b
            
            if (result.b == 0)
                goto label_407868
            
            result:1.b = result.b
            result.b = *(arg4 - 5)
            *arg6 = result.w
            edi_1 = &arg6[1]
            goto label_40785c
else
    char temp2_1 = *(result - 0x57ffbf88)
    *(result - 0x57ffbf88) += arg3:1.b
    
    if (temp2_1 + arg3:1.b s>= 0)
        char temp3_1 = *arg2
        *arg2 += arg2.b
        c_1 = temp3_1 + arg2.b u< temp3_1
        
        if (temp3_1 + arg2.b s>= 0)
            goto label_40783b
        
        *(arg3 + 0x4e) += arg3.b
        return sub_407802(arg5 - 1) __tailcall
    
    arg4 += 1
    int32_t eflags
    __sti(eflags)
    *arg6 = result.b
    result.b = 0x30
    edi_1 = __builtin_memset(arg6 + 1, 0x30, neg.d(arg3))
label_40785c:
    
    while (true)
        result.b = *arg5
        arg5 = &arg5[1]
        result.b = result.b
        
        if (result.b == 0)
            break
        
        *edi_1 = result.b
        edi_1 += 1
label_407868:

if (arg2 == 0)
    return result

return sub_40788e(arg4) __tailcall
