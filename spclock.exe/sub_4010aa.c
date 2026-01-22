// 函数: sub_4010aa
// 地址: 0x4010aa
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
void* eax_1
char* ecx_2
char* edx_1
eax_1, edx_1, ecx_2 = (*(eax + 0x4010b0))()
eax_1.b += 6
void** entry_ebx
void** var_4 = entry_ebx
*(arg1 + 0x67)
char temp1 = (eax_1 + 1).b
char* eax_2
eax_2.b = (eax_1 + 1).b * 2
*eax_2 = adc.b(*eax_2, eax_2.b, temp1 + (eax_1 + 1).b u< temp1)
char temp3 = eax_2.b
eax_2.b |= *arg1
int32_t eflags
void* eax_5
char* esp_3
void* esi_1
uint32_t var_8
int16_t es

if ((temp3 | *arg1) == 0)
    *eax_2 += eax_2.b
    *eax_2 = &eax_2[*eax_2]
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    eax_2.b *= 2
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    esi_1 = &arg1[1]
    var_8 = zx.d(es)
    void** var_c = entry_ebx
    esp_3 = &var_c
    
    if (&arg1[1] s< 0)
        if (arg1 != 0xffffffff)
            int16_t* edi
            int16_t temp0_2
            temp0_2, edi = __insd(arg2, edx_1.w, eflags)
            *edi = temp0_2
            *eax_2
            undefined
        
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
    
    *eax_2 += eax_2.b
    char temp8_1 = *eax_2
    *eax_2 += eax_2.b
    *edx_1 = sbb.b(*edx_1, edx_1.b, temp8_1 + eax_2.b u< temp8_1)
    eax_5 = &eax_2[1]
    *(eax_5 * 2) += ecx_2.b
else
    *eax_2 = adc.d(*eax_2, eax_2, false)
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp6_1 = *eax_2
    *eax_2 += eax_2.b
    var_8 = zx.d(es)
    void* esp_1 = &var_8
    *(esp_1 - 4) = entry_ebx
    
    if (temp6_1 + eax_2.b s< 0)
        if (temp6_1 == neg.b(eax_2.b))
            jump(sub_40119f+0xf)
        
        jump(0x401149)
    
    *eax_2 += eax_2.b
    esi_1 = &arg1[1]
    esp_3 = esp_1
    *eax_2 = adc.d(*eax_2, eax_2, test_bit(*(esp_1 - 4), 0))
    *eax_2 |= eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp11_1 = *eax_2
    *eax_2 += eax_2.b
    *edx_1 = sbb.b(*edx_1, edx_1.b, temp11_1 + eax_2.b u< temp11_1)
    ecx_2[0x4011] += ecx_2:1.b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    char temp12_1 = eax_2[1]
    eax_2[1] += entry_ebx.b
    eax_5.b = adc.b((&eax_2[1]).b, eax_2[1], temp12_1 + entry_ebx.b u< temp12_1)
    eax_5.b = eax_5.b
*eax_5 += eax_5.b
arg3 f- fconvert.t(*eax_5)
*(eax_5 - 0x2fffbfc1) += edx_1:1.b
void* eax_7
eax_7:1.b = (eax_5 + 2):1.b + entry_ebx.b
void* eax_8
eax_8:1.b = (eax_7 + 1):1.b + (eax_7 + 1).b
*(eax_8 - 0x13ffbfc1) += entry_ebx:1.b
*(esp_3 + arg2) += entry_ebx.b
*(eax_8 + 0x3f) += entry_ebx.b
char temp9 = *ecx_2
*ecx_2 += edx_1.b
*(esp_3 - 4) = esp_3
char* esi_2 = __outsb(edx_1.w, *esi_1, esi_1, eflags)

if (ecx_2 == 1)
    entry_ebx:1.b s>>= 0x25
    void* eax_12
    eax_12.b = *esi_2
    *entry_ebx -= ecx_2 - 1
    return FindClose() __tailcall

if (temp9 + edx_1.b u< temp9)
    jump(0x401286)

jump(sub_40119f+0x81)
