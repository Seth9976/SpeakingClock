// 函数: sub_43eef8
// 地址: 0x43eef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
int32_t eflags
__out_dx_oeax(arg2.w, &arg1[1], eflags)
*(&arg1[1] * 2) += arg3.b
arg1[1] += (&arg1[1]).b
*(arg6 + 0x40)
arg1[0xbc00403f] += arg2:1.b
void* eax_1
eax_1.b = (&arg1[2]).b * 2
void* eax_2
eax_2:1.b = (eax_1 + 1):1.b + (eax_1 + 1).b
void* entry_ebx
*(eax_2 + 0x403f) += (entry_ebx + 1):1.b
*(&__return_addr + arg6) += (entry_ebx + 1).b
*(eax_2 + 0x3e) += (entry_ebx + 1).b
void* eax_5 = eax_2 + 3
char temp1 = *eax_5
*eax_5 += arg3.b
bool c = temp1 + arg3.b u< temp1
void* var_4 = eax_5

if (not(c))
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    
    if (arg4 == 0xffffffff)
        if (c)
            eax_5.b ^= 1
            char temp3_1 = eax_5.b
            eax_5.b = neg.b(eax_5.b)
            return sbb.d(eax_5, eax_5, temp3_1 != 0)
        
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (arg4 == 0xffffffff)
            eax_5 = sbb.d(eax_5, 0xd8f60134, c)
            bool c_2 = unimplemented  {sbb eax, 0xd8f60134}
            return sbb.d(eax_5, eax_5, c_2)
        
        if (not(c))
            return sub_43efb4(eax_5) __tailcall
        
        *(arg5 + 0x74)
    else
        if (c)
            *(entry_ebx + 1) ^= arg3.b
            return DocumentPropertiesA() __tailcall
        
        eax_5 += 1
    
    *(eax_5 + 0x43ef) += (entry_ebx + 1).b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *(eax_5 + 0x43ef) += (entry_ebx + 1).b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *(arg2 + 0x300043ef) += arg3:1.b
    *eax_5 += eax_5.b
    char temp5_1 = eax_5.b
    eax_5.b += (entry_ebx + 1).b
    *eax_5 = adc.b(*eax_5, eax_5.b, temp5_1 + (entry_ebx + 1).b u< temp5_1)
    eax_5.b = 0x3e
    arg5[arg6 + 0x3ec00040] += (entry_ebx + 1):1.b
    void* eax_7
    eax_7:1.b = (eax_5 + 2):1.b + (eax_5 + 2).b
    *(eax_7 + 0x403f) += (entry_ebx + 1):1.b
    *(&var_4 + arg6) += (entry_ebx + 1).b
    eax_5 = eax_7 + 2
    (entry_ebx + 1)[(arg5 << 3) + 0x43] += (entry_ebx + 1):1.b
    *arg5 += arg3.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *arg3 += eax_5.b
    *eax_5 += eax_5.b
    *(eax_5 + arg2 + 0x180040) += (entry_ebx + 1):1.b
    *eax_5 += eax_5.b
    *(eax_5 + (arg2 << 1) + 0x72) |= arg2.b

*(arg5 + 0x74)
char* result = *eax_5

if (*eax_5 != 0)
    char* result_1 = *eax_5
    
    while (*result_1 == 0x20)
        result_1 = &result_1[1]
    
    result = result_1
    
    while (true)
        char ecx_1 = *result_1
        
        if (ecx_1 == 0)
            break
        
        if (ecx_1 == 0x2c)
            break
        
        result_1 = &result_1[1]
    
    if (*result_1 == 0x2c)
        *result_1 = 0
        result_1 = &result_1[1]
    
    *eax_5 = result_1

return result
