// 函数: sub_40660c
// 地址: 0x40660c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

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
arg1.w += 1
*arg1 += arg2.b
*arg1 += arg1.b
arg1.b += arg3.b
int32_t entry_ebx
*(&arg1[1] + arg5 + 0x30c80040) += entry_ebx:1.b
void* eax_1
eax_1:1.b = (&arg1[2]):1.b + arg3.b
*eax_1 ^= eax_1.b
*eax_1 <<= 1
void* eax_2
eax_2:1.b = (eax_1 + 1):1.b + (eax_1 + 1).b
*eax_2 ^= eax_2.b
*(arg5 + arg4 + 0x40) += eax_2:1.b
char temp1 = *(eax_2 + 0x800402e)
*(eax_2 + 0x800402e) += eax_2:1.b
bool c = temp1 + eax_2:1.b u< temp1
*(&__return_addr - 4) = entry_ebx
void* ebp_1 = arg4 + 2
void* const* var_4
int32_t eflags

if (not(c))
    char* esi = __outsd(arg2.w, *arg5, arg5, eflags)
    void* eax_5
    
    if (c)
        *(eax_2 + 0x2e) += arg3.b
        eax_5 = eax_2 + 1
        *(esi + ebp_1 + 0x40) += eax_5:1.b
        char temp3_1 = *(eax_5 + 0xe00402e)
        *(eax_5 + 0xe00402e) += eax_5:1.b
        ebp_1 += 1
        void* temp4_1 = arg3
        arg3 -= 1
        esi = __outsb(arg2.w, *esi, esi, eflags)
        
        if (temp4_1 != 1)
            *(var_4 - 4)
            *var_4
            var_4[1]
            var_4[3]
            var_4[4]
            var_4[5]
            var_4[6]
            
            if (temp3_1 + eax_5:1.b u>= temp3_1)
                jump(0x406676)
            
            jump(0x406602)
        
        *eax_5 += eax_5.b
    else
        eax_5 = eax_2 + 1
        esi[0x40] += arg3:1.b
    
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    eax_5.b = *esi
    eax_5.w += 1
    *(eax_5 * 2) += arg3.b
    *eax_5 += eax_5.b
    *(var_4 - 8) = ebp_1
    *eax_5 ^= eax_5.b
    breakpoint

*eax_2 += arg2.b
*(eax_2 + 1) += arg3.b
*(eax_2 + 1) += (eax_2 + 1).b
*(eax_2 + 1) += arg2.b
char temp2 = *(eax_2 + 2)
*(eax_2 + 2) += arg3.b
*(var_4 - 8) = entry_ebx
void* esp_4 = var_4 - 8
void* eax_11

if (temp2 + arg3.b s>= 0)
    int16_t es_1
    arg5, es_1 = __les_gprz_memp(*(eax_2 + 2))
    *(eax_2 + 0x31) += arg3.b
    eax_11 = eax_2 + 4
else
    *(esp_4 - 4) = ebp_1
    esp_4 -= 4
    
    if (temp2 != neg.b(arg3.b))
        uint8_t* edi_1
        uint8_t temp0
        temp0, edi_1 = __insb(arg6 - 1, arg2.w, eflags)
        *edi_1 = temp0
        
        if (temp2 + arg3.b u>= temp2)
            jump(0x40666e)
        
        jump(0x4066e3)
    
    *(eax_2 + 2) ^= (eax_2 + 2).b
    *(eax_2 + 2) <<= 1
    void* eax_8
    eax_8:1.b = (eax_2 + 3):1.b + (eax_2 + 3).b
    *eax_8 ^= eax_8.b
    eax_11 = eax_8

*(arg5 + ebp_1 + 0x40) += eax_11:1.b
char temp5 = *(eax_11 + 0x130040b2)
*(eax_11 + 0x130040b2) += arg2:1.b
*(esp_4 - 4) = esp_4
*(esp_4 - 8) = esp_4 - 4
*(esp_4 - 0xc) = 0x64616572
uint16_t* esi_2 = __outsd(arg2.w, *arg5, arg5, eflags)
int32_t eflags_1
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x6c), (esp_4 - 8).w - 5)
*(arg3 + 0x6c) = temp0_1
__outsd(arg2.w, *esi_2, esi_2, eflags_1)

if (entry_ebx == 0xffffffff)
    if (entry_ebx == 0xffffffff)
        undefined
    
    jump(0x406773)

if (entry_ebx != 0xffffffff && arg3 != 1)
    *(ebp_1 + 0x53)
    *(ebp_1 + 0x53)
    bool c_4 = unimplemented  {imul esi, dword [ebp+0x53], 0x68636e79}
    
    if (c_4)
        jump(sub_4068bc+0xf)
    
    jump(sub_4067b4+0xa8)

*0x4067b43f = sbb.d(*0x4067b43f, arg6 - 1, temp5 + arg2:1.b u< temp5)
*(eax_11 * 2) += (arg3 - 1):1.b
*eax_11 += eax_11.b
*eax_11 += eax_11.b
*eax_11 += eax_11.b
void* eax_12
eax_12.b = (eax_11 + 1).b + arg2.b
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
*(eax_12 + 1 + (ebp_1 << 1)) += (entry_ebx.w + 1):1.b
*(eax_12 + 2) += arg2:1.b
*(eax_12 + 2) += (eax_12 + 2).b
char temp8 = *(eax_12 + 2)
*(eax_12 + 2) += (eax_12 + 2).b
*(eax_12 + 2) = adc.d(*(eax_12 + 2), eax_12 + 2, temp8 + (eax_12 + 2).b u< temp8)
*(eax_12 - 0x2fffbfae) += (eax_12 + 3):1.b
*(eax_12 + 3) ^= (eax_12 + 3).b
int32_t esi_4
int16_t es_2
esi_4, es_2 = __les_gprz_memp(*(eax_12 + 3))
*(eax_12 + 0x64004053) += arg2:1.b
*((esi_4 << 2) + 0x94004070) += arg2.b
*(0x94004030 + (arg2 << 1)) += ((eax_12 + 4).w + 1):1.b

if (ebp_1 != 1)
    jump(sub_406898+0x15)

jump(sub_4067b4+0x8d)
