// 函数: sub_44222c
// 地址: 0x44222c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

bool c = false
int32_t eflags
void* entry_ebx
uint16_t* esi_10
void* edi
bool z
int16_t* esp
uint8_t** esp_1
uint16_t* esi_1
bool c_1

if (z)
label_442274:
    *arg3 = sbb.b(*arg3, arg2:1.b, c)
    arg4 = &arg4[1]
    *arg1 += arg2:1.b
    arg1.b += *arg1
    *(esp - 4) = *arg1
    arg1.b += *arg1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x4f0f0034] += arg1.b
    esi_1 = __outsb(arg2.w, *arg5, arg5, eflags)
    char* temp1_1 = arg3
    arg3 = &arg3[1]
    uint8_t temp0_2
    temp0_2, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0_2
    *(edi + 0x6e)
    esp_1 = *(edi + 0x6e) * 0x69736f50
    c_1 = unimplemented  {imul esp, dword [edi+0x6e], 0x69736f50}
    
    if (temp1_1 == 0xffffffff)
        goto label_442305
    
    uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    arg1[0xb0ff0000] += arg2:1.b
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp6_1 = arg1[0x4f0b0035]
    arg1[0x4f0b0035] += arg1.b
    bool c_2 = temp6_1 + arg1.b u< temp6_1
    __outsb(arg2.w, *esi_3, esi_3, eflags)
    bool p_1 = unimplemented  {inc ebx}
    arg6 = *esp_1
    uint16_t* esi_5 = esp_1[1]
    arg4 = esp_1[2]
    entry_ebx = esp_1[4]
    arg2 = esp_1[5]
    arg3 = esp_1[6]
    arg1 = esp_1[7]
    arg5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
    esp_1[7] = arg2
    esp_1 = &esp_1[7]
    
    if (c_2)
        if (not(p_1))
            arg1.b -= 0x71
            *arg1 += arg2.b
            *arg1 = &arg1[*arg1]
            int32_t* eax = (*arg1)()
            *eax += eax
            char* eax_1
            eax_1, arg2, arg3 = (*(arg6 + (entry_ebx << 2) + 0x45))()
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 = *eax_1
            eax_1[0x4f070036] += eax_1.b
            goto label_4422e0
        
        *arg1 += arg1.b
    
    *arg1
label_44232e:
    int16_t cs
    *(esp_1 - 4) = zx.d(cs)
    edi = arg6 - 1
    uint16_t* esi_7 = __outsb(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_8 = __outsd(arg2.w, *esi_7, esi_7, eflags)
    uint16_t* esi_9 = __outsb(arg2.w, *esi_8, esi_8, eflags)
    
    if (entry_ebx != 0xffffffff)
        if (entry_ebx + 1 s>= 0)
            jump("Popup")
        
        *arg1 += arg1.b
        undefined
    
    *arg1 += arg1.b
    arg1[0x4f0a003b] += arg1.b
    esi_10 = __outsb(arg2.w, *esi_9, esi_9, eflags)
    __bound_gprv_mema32(arg4, *(entry_ebx + 1 + (arg1 << 1) + 0x6c))
    *(entry_ebx + 0x6c)
    *arg1
    entry_ebx:1.b = (entry_ebx + 1):1.b * 2
else
    arg6[entry_ebx << 2] += arg2:1.b
    arg4 = &arg4[1]
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    arg1.b ^= *arg1
    uint16_t* var_2_1 = arg5
    uint16_t* esi = *(entry_ebx + 0x69) * 0xb0656c62
    *arg4 ^= arg1.b
    *arg2 -= arg1.b
    entry_ebx:1.b *= 2
    *arg2 -= arg1.b
    entry_ebx:1.b *= 2
    *arg1 = &arg1[*arg1]
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    *arg1
    arg1 ^= *arg1
    arg3 = adc.d(arg3, *(arg6 + 0x6e), false) + 1
    uint8_t temp0_1
    temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_1
    *(arg6 + 0x6e)
    esp = *(arg6 + 0x6e) * 0x65736e49
    c = unimplemented  {imul esp, dword [edi+0x6e], 0x65736e49}
    
    if (c)
        goto label_4422e2
    
    arg2 = &arg2[1]
    uint16_t* gsbase
    arg5 = __outsw(arg2.w, *(gsbase + esi), esi, eflags)
    
    if (not(c))
        goto label_442274
    
    *arg1 += arg1.b
    *arg5 = *arg5
    *esp
    arg6 -= 1
label_4422e0:
    esi = __outsb(arg2.w, *arg5, arg5, eflags)
    entry_ebx += 1
label_4422e2:
    uint8_t temp0_3
    temp0_3, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0_3
    esp_1 = *(entry_ebx + 0x6b) * &data_45276c
    arg1 = 0xb8ff0000
    *0xb8ff0000 = *0xb8ff0000
    *arg3 += 1
    *0xb8ff0000 = *0xb8ff0000
    *0xb8ff0000 = *0xb8ff0000
    *0xb8ff0000 = *0xb8ff0000
    *0xb8ff0000 = *0xb8ff0000
    char temp8_1 = *0x8120037
    *0x8120037 = *0x8120037
    c_1 = temp8_1 u< temp8_1
    uint16_t* esi_6 = __outsb(arg2.w, *esi, esi, eflags)
    entry_ebx += 1
    esi_1 = __outsd(arg2.w, *esi_6, esi_6, eflags)
label_442305:
    arg5 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    bool c_3
    
    if (not(c_1))
        *(edi + 0x6e)
        arg3.b |= *(edi + 0x6e)
        c_3 = false
    else
        if (not(c_1))
            arg4 = *(arg5 + 0x65) * 0x73655264
            arg6 = *(arg2 + 0x65) * 0x4528f8
            *arg3 &= arg1.b
            entry_ebx:1.b *= 2
            *arg3 &= arg1.b
            entry_ebx:1.b *= 2
            *arg1 = &arg1[*arg1]
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1[0x80000000] += arg1.b
            *arg1
            goto label_44232e
        
        *arg1 = &arg1[*arg1]
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp12_1 = arg1[0x4f0a003a]
        arg1[0x4f0a003a] += arg1.b
        c_3 = temp12_1 + arg1.b u< temp12_1
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    
    esi_10 = __outsd(arg2.w, *arg5, arg5, eflags)
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x4f), arg4.w)
    *(entry_ebx + 0x4f) = temp0_4
    
    if (esp_1 == 0xffffffff || c_3)
        *(edi + 0x6e)
        arg3.b |= *(edi + 0x6e)
        
        if (edi == 1)
            jump(0x44245a)
        
        jump("rd$E")
    
    if (not(c_3))
        if (not(add_overflow(esp_1, 1)))
            jump(0x4423cb)
        
        jump(0x44238a)
*arg1
entry_ebx:1.b *= 2
*arg1 = &arg1[*arg1]
*arg1 += arg1.b
*arg1 += arg1.b
arg1[0x80000000] += arg1.b
arg3.b |= *(edi + 0x6e)

if (arg3.b u>= 0)
    if (arg3.b u< 0)
        jump(0x44243f)
    
    jump("p4#E")

*arg1 = *arg1
char temp18 = arg1[0x4f09003f]
arg1[0x4f09003f] += arg1.b
uint16_t* esi_11 = __outsb(arg2.w, *esi_10, esi_10, eflags)
__outsb(arg2.w, *esi_11, esi_11, eflags)

if (temp18 + arg1.b u< temp18)
    jump("GetSiteInfo")

jump("g,qA")
