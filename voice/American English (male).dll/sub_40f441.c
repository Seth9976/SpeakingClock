// 函数: sub_40f441
// 地址: 0x40f441
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t eflags
int32_t eflags_2
char temp0_4
temp0_4, eflags_2 = __daa(arg1.b, eflags)
arg1.b = temp0_4
int32_t eax
eax.b = (arg1 + 1).b + arg2:1.b
int32_t eflags_1
char temp0
temp0, eflags_1 = __daa(eax.b, eflags_2)
eax.b = temp0
char temp1 = (eax + 1).b
int32_t eax_1
eax_1.b = (eax + 1).b + arg3.b
bool c = temp1 + arg3.b u< temp1
char temp2 = eax_1.b
char temp3 = *arg3
eax_1.b = adc.b(temp2, temp3, c)
bool c_1 = adc.b(temp2, temp3, c) u< temp2 || (c && adc.b(temp2, temp3, c) == temp2)
int32_t temp5 = *arg3
char* eax_2 = adc.d(eax_1, temp5, c_1)
bool z = adc.d(eax_1, temp5, c_1) == 0
void* var_3 = &__return_addr:1
void* entry_ebx

if (not(z))
    char* edi_1
    int32_t temp0_1
    temp0_1, edi_1 = __insd(entry_ebx, arg9.w, eflags_1)
    *edi_1 = temp0_1
    *edi_1 = *var_3
    trap(0xd)

void* eax_12
void* esp_2
int32_t* edi_4

if (z)
    void* var_f = entry_ebx
    esp_2 = &var_f
    
    if (z)
        goto label_40f5b3
    
    edi_4 = var_f
    arg5 = entry_ebx
    arg4 = entry_ebx
    entry_ebx = __return_addr
    arg2 = arg7
    arg3 = arg8
    eax_12 = arg9
    esp_2 = &arg10
else
    void* edi_3 = entry_ebx
    void* esi_2 = entry_ebx
    entry_ebx = arg7
    arg2 = arg8
    void* eax_4 = arg10
    int32_t* esp_1 = &arg11
    int32_t temp0_2
    temp0_2, edi_4 = __insd(edi_3, arg2.w, eflags_1)
    *edi_4 = temp0_2
    void* eax_5
    eax_5.b = sbb.b(eax_4.b, 0xf5, 
        adc.d(eax_1, temp5, c_1) u< eax_1 || (c_1 && adc.d(eax_1, temp5, c_1) == eax_1))
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += (eax_5 + 1).b
    *(eax_5 + 1) += entry_ebx:1.b
    *(eax_5 + 2) += arg9.b
    *(eax_5 + 2) += (eax_5 + 2).b
    *(eax_5 - 0xa) += entry_ebx.b
    *(eax_5 + 3 + esi_2 + 0x30c80040) += entry_ebx:1.b
    void* eax_9
    eax_9:1.b = (eax_5 + 4):1.b + arg9.b
    *eax_9 ^= eax_9.b
    *eax_9 <<= 1
    void* eax_10
    eax_10:1.b = (eax_9 + 1):1.b + (eax_9 + 1).b
    *eax_10 ^= eax_10.b
    *(esi_2 + var_3 + 0x40) += eax_10:1.b
    *(eax_10 + 0x16) += arg2.b
    char temp7_1 = eax_10.b
    eax_12.b = eax_10.b + entry_ebx.b
    bool c_3 = temp7_1 + entry_ebx.b u< temp7_1
    int32_t temp8_1 = *(arg9 + 1)
    *(arg9 + 1) = adc.d(temp8_1, eax_12, c_3)
    bool o_1 = unimplemented  {adc dword [ecx], eax}
    
    if (adc.d(temp8_1, eax_12, c_3) s< 0 != o_1)
        arg3 = arg9 + 2
    else
        char temp12_1 = *(eax_12 + 0x30004114)
        *(eax_12 + 0x30004114) += arg2.b
        eax_12.b = adc.b(eax_12.b, 0x41, temp12_1 + arg2.b u< temp12_1)
        *(eax_12 + 0x14) += eax_12.b
        arg3 = arg9 + 3
        char temp13_1 = eax_12.b
        eax_12.b += arg3.b
        bool c_5 = temp13_1 + arg3.b u< temp13_1
        char temp14_1 = eax_12.b
        char temp15_1 = *arg3
        eax_12.b = adc.b(temp14_1, temp15_1, c_5)
        arg10 = eax_12
        esp_1 = &arg10
        eax_12.b = adc.b(eax_12.b, 0x41, 
            adc.b(temp14_1, temp15_1, c_5) u< temp14_1
                || (c_5 && adc.b(temp14_1, temp15_1, c_5) == temp14_1))
    
    *entry_ebx += arg3.b
    *(esp_1 - 4) = esp_1
    esp_2 = esp_1 - 4
    arg5 = esi_2 + 1
    *(var_3 + 0x53)
    arg4 = *(var_3 + 0x53) * 0x61657274

int32_t* edi_5
int32_t temp0_3
temp0_3, edi_5 = __insd(edi_4, arg2.w, eflags_1)
*edi_5 = temp0_3
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 0x140040f6) += arg2.b
*(eax_12 + 1) += (eax_12 + 1).b
*(eax_12 + 1 + arg2) += arg3.b
*(eax_12 + 2 + arg5 + 0x30c80040) += entry_ebx:1.b
void* eax_15
eax_15:1.b = (eax_12 + 3):1.b + arg3.b
*eax_15 ^= eax_15.b
*eax_15 <<= 1
void* result
result:1.b = (eax_15 + 1):1.b + (eax_15 + 1).b
*result ^= result.b

while (true)
    *(arg5 + arg4 + 0x40) += result:1.b
    *(result - 0xa) += arg2:1.b
    char temp17_1 = *arg3
    *arg3 += arg3.b
    *(esp_2 - 4) = esp_2
    *(esp_2 - 8) = arg2
    esp_2 -= 8
    arg6 = edi_5 + 1
    
    if (temp17_1 + arg3.b u< temp17_1)
        *(arg4 - 1) = arg2.b
        entry_ebx = result + 1
        int32_t ecx_5
        int32_t edx_2
        ecx_5, edx_2 = sub_402e80(arg3, 0)
        edx_2.b = 1
        int32_t eax_28
        int32_t ecx_6
        int32_t edx_3
        eax_28, ecx_6, edx_3 = sub_402e80(ecx_5, edx_2)
        *(entry_ebx + 4) = eax_28
        edx_3.b = 1
        int32_t eax_30
        int32_t ecx_7
        int32_t edx_4
        eax_30, ecx_7, edx_4 = sub_402e80(ecx_6, edx_3)
        *(entry_ebx + 8) = eax_30
        edx_4.b = 1
        int32_t* eax_32 = sub_402e80(ecx_7, edx_4)
        *(entry_ebx + 0xc) = eax_32
        sub_40f918(eax_32, arg3)
        
        if (*(arg4 - 1) != 0)
            sub_403150(entry_ebx)
            TEB* fsbase
            fsbase->NtTib.ExceptionList = *esp_2
            esp_2 += 4
        label_40f663:
            esp_2 += 0xc
        
        result = entry_ebx
    else
        if (edi_5 != 0xffffffff)
            *(esp_2 - 4) = arg4
            *(entry_ebx - 0x742dcc28) -= 1
            return result + 1
        
        eax_2, arg2, arg3 = 0x413696()
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
    label_40f5b3:
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2.b += arg3:1.b
        *(&eax_2[1] * 2) += (&eax_2[1]):1.b
        eax_2[1] += (&eax_2[1]).b
        void* eax_20
        eax_20.b = (&eax_2[1]).b | 0x10
        *(eax_20 + 1 + arg5 + 0x30c80040) += entry_ebx:1.b
        void* eax_22
        eax_22:1.b = (eax_20 + 2):1.b + arg3.b
        *eax_22 ^= eax_22.b
        *eax_22 <<= 1
        void* eax_23
        eax_23:1.b = (eax_22 + 1):1.b + (eax_22 + 1).b
        *eax_23 ^= eax_23.b
        *(arg5 + arg4 + 0x40) += eax_23:1.b
        result.b = eax_23.b + arg3:1.b
        int32_t temp10_1 = *result & 0x6552540a
        edi_5 = arg6 + 1
        
        if (temp10_1 u< 0)
            *result += result.b
            *result += result.b
            break
        
        if (arg6 != 0xffffffff)
            *(entry_ebx - 0x3c74f33c) += result.b
        else
            if (temp10_1 u< 0)
                return sub_40f5f4(result, arg2, arg3) __tailcall
            
            continue
    
    *esp_2
    *(esp_2 + 4)
    *(esp_2 + 8)
    *(esp_2 + 0xc)
    *(esp_2 + 0x10)
    return result

goto label_40f663
