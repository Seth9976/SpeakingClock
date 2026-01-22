// 函数: sub_48c396
// 地址: 0x48c396
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = *arg3
*arg3 += (arg1 - 1).b
int16_t cs
uint32_t var_4 = zx.d(cs)
uint32_t* var_8 = &var_4
void** gsbase

if (arg2 == 0xffffffff || temp1 + (arg1 - 1).b u< temp1)
    *(gsbase + arg1 - 1) = &(arg1 - 1)[*(gsbase + arg1 - 1)]
    *(arg1 - 1) += (arg1 - 1).b
    *arg5 += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    char* result
    result:1.b = (arg1 - 1):1.b + (arg2 + 1):1.b
    return result

int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, (arg2 + 1).w, eflags)
*edi = temp0
uint8_t* var_c = edi
void arg_5c
void* esp_1 = *(&arg_5c + (arg5 << 1))
*(arg2 + 1) += (arg2 + 1):1.b
*(arg1 - 1) += (arg1 - 1).b
*(arg4 - 0x3c47ffc1) += arg3.b
void* eax = arg1 - 2
char temp3 = *arg3
*arg3 += eax.b
bool c_1 = temp3 + eax.b u< temp3
uint32_t xmm1[0x4] = __andps_xmmxud_memxud(arg7, *(arg4 - 1 + (arg3 << 1) + 0x44))
void* edx_1 = arg2 + 2
uint16_t* esi = __outsd(edx_1.w, *arg5, arg5, eflags)
void* ebx
void* esp_6
void* esp_20
void* esp_22
void* ebp_1
char* esi_3
uint16_t* esi_4
uint8_t* edi_1
TEB* fsbase
bool c_4

if (not(c_1))
    void* entry_ebx
    
    if (not(c_1))
        int32_t esp_2 = *(esp_1 + (esi << 1) + 0x68)
        entry_ebx:1.b *= 2
        *eax += eax.b
        *(entry_ebx + 0x48c3d8c0) += arg3.b
        char temp6_1 = *arg3
        *arg3 += eax.b
        *(esp_2 - 4) = zx.d(cs)
        *(esp_2 - 8) = esp_2 - 4
        ebp_1 = arg4 - 2
        esp_6 = esp_2 - 8
        ebx = entry_ebx + 1
        uint16_t* esi_1 = __outsd(edx_1.w, *esi, esi, eflags)
        uint8_t temp0_1
        temp0_1, edi_1 = __insb(edi, edx_1.w, eflags)
        *edi_1 = temp0_1
        uint16_t* esi_2 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
        
        if (temp6_1 + eax.b u< temp6_1)
            __bound_gprv_mema32(esi_2, *(esi_2 + 0x52))
            goto label_48c42a
        
        esi_3 = __outsd(edx_1.w, *esi_2, esi_2, eflags)
        
        if (entry_ebx != 0xffffffff)
            goto label_48c455
        
        if (entry_ebx == 0xffffffff)
            *eax += eax.b
            eax:1.b += arg3:1.b
        else
            eax.b += *eax
            *eax += eax.b
            eax.b = __in_al_dx(edx_1.w, eflags)
        
        *eax += eax.b
        *(ebp_1 - 0x3c07ffc0) += arg3.b
        eax -= 1
        char temp24_1 = *ebx
        *ebx += eax.b
        *(esp_6 - 4) = zx.d(cs)
        *(esp_6 - 8) = esp_6 - 4
        void* temp25_1 = edx_1
        edx_1 += 1
        bool z_1 = temp25_1 == 0xffffffff
        
        if (not(z_1) && temp24_1 + eax.b u>= temp24_1)
            uint8_t* edi_2
            uint8_t temp0_3
            temp0_3, edi_2 = __insb(edi_1, edx_1.w, eflags)
            *edi_2 = temp0_3
            *(esp_6 - 0xc) = ebx
            
            if (z_1)
                jump(0x48c47f)
            
            jump(0x48c406)
        
        goto label_48c468
    
    *(edx_1 + 0x76)
    *(edx_1 + 0x76) |= esp_1
    void* temp5_1 = esp_1
    esp_1 -= 1
    esi_4 = __outsd(edx_1.w, *esi, esi, eflags)
    
    if (temp5_1 == 1)
        *(fsbase + edx_1 + 0x76) |= eax:1.b
        goto label_48c429
    
    *(edx_1 + 0x6d)
    *(edx_1 + 0x6d) |= eax:1.b
    
    if (entry_ebx == 0xffffffff)
        if (entry_ebx == 0xffffffff)
            __outsd(edx_1.w + 1, *esi_4, esi_4, eflags)
            jump(sub_48c4de+0x79)
        
        int16_t* edi_9
        int16_t temp0_9
        temp0_9, edi_9 = __insd(edi, edx_1.w, eflags)
        *edi_9 = temp0_9
        char temp18_1 = eax:1.b
        eax:1.b |= *(edx_1 + 0x6d)
        c_4 = false
        bool z_6 = (temp18_1 | *(edx_1 + 0x6d)) == 0
        *(esp_1 - 4) = entry_ebx + 1
        esp_20 = esp_1 - 4
        
        if (not(z_6))
            goto label_48c497
        
        *esp_20
        *(esp_20 + 8)
        edx_1 = *(esp_20 + 0x14)
        *(esp_20 + 0x18)
        *(esp_20 + 0x1c)
        esp_22 = esp_20 + 0x20
        *(*(esp_20 + 0x10) + 0x65)
    label_48c500:
        *(esp_22 - 4) = edx_1
        esp_1 = esp_22 - 4
    
    edi_1 = *esp_1
    *(esp_1 + 8)
    edx_1 = *(esp_1 + 0x14)
    *(esp_1 + 0x18)
    eax = *(esp_1 + 0x1c)
    *(*(esp_1 + 0x10) + 0x65)
    char temp14_1 = eax.b
    eax.b |= 0x6c
    *(esp_1 + 0x1c) = zx.d(cs)
    uint8_t temp0_12
    temp0_12, edi_1 = __insb(edi_1, edx_1.w, eflags)
    *edi_1 = temp0_12
    
    if ((temp14_1 | 0x6c) s>= 0)
        jump(0x48c621)
    
    *(gsbase + eax) += eax
    *eax += eax.b
    *edi_1 += eax.b
    *eax += eax.b
    char temp29 = *(eax + 0xd0048c5)
    *(eax + 0xd0048c5) += eax:1.b
    
    if (temp29 == neg.b(eax:1.b))
        jump(sub_48c5a1+0x75)
    
    jump(sub_48c5a1+0x23)

*(edx_1 + 0x76) |= eax:1.b
label_48c429:
*(esp_1 - 4) = edx_1
esp_6 = esp_1 - 4
label_48c42a:
void* ebp_5 = *(esp_6 + 8)
int32_t* ebx_4 = *(esp_6 + 0x10)
edx_1 = *(esp_6 + 0x14)
arg3 = *(esp_6 + 0x18)
eax = *(esp_6 + 0x1c)
*(ebx_4 + 0x65)
c_4 = unimplemented  {imul esi, dword [ebx+0x65], 0x76620e64}
uint16_t* esi_6 = *(ebx_4 + 0x65) * 0x76620e64 + 1
void* esp_13
uint8_t** esp_19
int16_t* edi_4
bool c_5

if (not(c_4))
    int16_t temp0_4
    temp0_4, edi_4 = __insd(*esp_6, edx_1.w, eflags)
    *edi_4 = temp0_4
    esp_13 = esp_6 + 0x1f
    esi_3 = __outsd(edx_1.w, *esi_6, esi_6, eflags)
    
    if (esp_6 != 0xffffffe1 && not(c_4))
        goto label_48c4a0
    
    if (c_4)
        *(gsbase + edx_1 + 0x6d) |= esp_13
        goto label_48c4a6
    
    int32_t edx_2 = *(esp_13 + 0x14)
    int16_t* edi_6
    int16_t temp0_5
    temp0_5, edi_6 = __insd(*esp_13, edx_2.w, eflags)
    *edi_6 = temp0_5
    *(esp_13 + 0x1c) = edx_2
    edi_1 = *(esp_13 + 0x1c)
    int32_t ebp_3 = *(esp_13 + 0x24)
    void* ebx_1 = *(esp_13 + 0x2c)
    edx_1 = *(esp_13 + 0x30)
    arg3 = *(esp_13 + 0x34)
    eax = *(esp_13 + 0x38)
    *(ebx_1 + 0x65)
    c_5 = unimplemented  {imul esi, dword [ebx+0x65], 0x76620864}
    uint16_t* esi_8 = *(ebx_1 + 0x65) * 0x76620864 - 1
    esi_3 = __outsd(edx_1.w, *esi_8, esi_8, eflags)
    
    if (c_5)
        ebp_1 = ebp_3 - 1
        esp_19 = esp_13 + 0x3d
    label_48c4c2:
        void* temp28_1 = edx_1
        edx_1 += 1
        esi_3 = __outsd(edx_1.w, *esi_3, esi_3, eflags)
        
        if (c_5)
            if (ebp_1 + 1 s< 0)
                jump(sub_48c5a1+2)
            
            jump(0x48c52f)
        
        if (not(c_5))
            if (temp28_1 == 0xffffffff)
                jump(0x48c544)
            
            jump(0x48c4cb)
        
        if (not(c_5))
            jump(0x48c583)
        
        goto label_48c51e
    
    esi_3 = *(esp_13 + 0x40)
    ebp_1 = *(esp_13 + 0x44)
    ebx = *(esp_13 + 0x4c)
    edx_1 = *(esp_13 + 0x50)
    arg3 = *(esp_13 + 0x54)
    eax = *(esp_13 + 0x58)
    esp_6 = esp_13 + 0x5c
    uint8_t temp0_6
    temp0_6, edi_1 = __insb(*(esp_13 + 0x3c), edx_1.w, eflags)
    *edi_1 = temp0_6
label_48c455:
    *(edx_1 + 0x76) |= eax:1.b
    *(esp_6 - 4) = ebx
    *(esp_6 - 8) = 0x776f6461
    *(ebp_1 + (arg3 << 1) + 0x44)
    *(ebp_1 + (arg3 << 1) + 0x44) |= arg3.b
    uint8_t* temp13_1 = edi_1
    edi_1 = &edi_1[1]
    
    if (not(add_overflow(temp13_1, 1)))
    label_48c468:
        uint8_t* edi_8
        uint8_t temp0_7
        temp0_7, edi_8 = __insb(edi_1, edx_1.w, eflags)
        *edi_8 = temp0_7
        int32_t ecx
        int16_t es_1
        ecx, es_1 = __les_gprz_memp(*eax)
        *0x444d4c54
        
        if (edx_1 == 0xffffffff || ecx + *0x444d4c54 u< ecx)
            jump(0x48c4db)
        
        jump(0x48c476)
    
    *eax += eax.b
    *esi_3 += arg3.b
    *eax += eax.b
    char temp20 = *(eax + 0x60048c4)
    *(eax + 0x60048c4) += ebx:1.b
    uint8_t* edi_11
    uint8_t temp0_10
    temp0_10, edi_11 = __insb(edi_1, edx_1.w, eflags)
    *edi_11 = temp0_10
    
    if (temp20 + ebx:1.b u>= temp20)
        jump(0x48c52c)
    
    return sub_48c4de(eax, edx_1, arg3, esi_3, edi_11) __tailcall

*(esp_6 + 0x20)
esi_4 = *(esp_6 + 0x24)
*(esp_6 + 0x28)
*(esp_6 + 0x30)
edx_1 = *(esp_6 + 0x34)
*(esp_6 + 0x38)
*(esp_6 + 0x3c)
esp_20 = esp_6 + 0x40
label_48c497:
__outsb(edx_1.w, *esi_4, esi_4, eflags)
edi_4 = *esp_20
esi_3 = *(esp_20 + 4)
ebp_5 = *(esp_20 + 8)
ebx_4 = *(esp_20 + 0x10)
edx_1 = *(esp_20 + 0x14)
arg3 = *(esp_20 + 0x18)
eax = *(esp_20 + 0x1c)
esp_22 = esp_20 + 0x20

if (c_4)
    goto label_48c500

int16_t es
*(esp_22 - 4) = zx.d(es)
esp_13 = esp_22 - 4
__bound_gprv_mema32(ebp_5, *(ebp_5 + 0x45))
label_48c4a0:
*(gsbase + ebp_5 + esi_3 + 0x6d) |= esp_13
label_48c4a6:
*(esp_13 - 4) = edi_4
*(esi_3 + 0x64)
c_5 = unimplemented  {imul ebp, dword [esi+0x64], 0x873776f}
ebp_1 = *(esi_3 + 0x64) * 0x873776f - 1
esp_19 = esp_13 - 4
edi_1 = edi_4 + 1
bool z_7 = edi_4 == 0xffffffff
void* ebp_8

if (not(c_5))
    if (not(add_overflow(edi_4, 1)))
        esp_19 = 0x30048c4
        __andps_xmmxud_memxud(xmm1, *(ebp_1 + (arg3 << 1) + 0x44))
        goto label_48c4c2
    
label_48c51e:
    ebp_8 = ebp_1 + 1
    
    if (ebp_1 + 1 s>= 0)
        goto label_48c522
    
    char temp31 = *(&fsbase->User32Reserved + ebp_8 + (arg3 << 1)) | arg3.b
    *(&fsbase->User32Reserved + ebp_8 + (arg3 << 1)) = temp31
    
    if (temp31 u< 0)
        jump(sub_48c588+0x77)
    
    jump(sub_48c588+0x16)

__bound_gprv_mema32(arg3, *ebx_4)
uint8_t temp0_11
temp0_11, edi_1 = __insb(edi_1, edx_1.w, eflags)
*edi_1 = temp0_11

if (not(c_5))
    *(esi_3 + 0x67)
    ebp_8 = *(esi_3 + 0x67) * 0x6f4c656c
    c_5 = unimplemented  {imul ebp, dword [esi+0x67], 0x6f4c656c}
else
    edi_1 = *esp_19
    ebp_8 = esp_19[2]
    void* ebx_6 = esp_19[4]
    edx_1 = esp_19[5]
    esp_19[6]
    eax = esp_19[7]
    esp_19 = &esp_19[8]
    esi_3 = *(ebx_6 + 0x65) * 0x74784564
label_48c522:
    char temp32_1 = eax.b
    eax.b |= 0x6c
    c_5 = false
    z_7 = (temp32_1 | 0x6c) == 0
    esi_3 = __outsd(edx_1.w, *esi_3, esi_3, eflags)

if (not(z_7) && not(c_5))
    if (c_5)
        jump(0x48c5ea)
    
    jump(0x48c5dd)

if (not(c_5))
    *(esp_19 - 4) = zx.d(cs)
    uint8_t* edi_13
    uint8_t temp0_13
    temp0_13, edi_13 = __insb(edi_1, edx_1.w, eflags)
    *edi_13 = temp0_13
    
    if (not(c_5))
        jump(0x48c5c0)
    
    jump(0x48c57c)

uint16_t* esi_14 = __outsb(edx_1.w, *esi_3, esi_3, eflags)
*(ebp_8 + 0x6e)
*(ebp_8 + 0x6e)
bool c_8 = unimplemented  {imul esp, dword [ebp+0x6e], 0x49}
uint16_t* esi_15 = __outsb(edx_1.w, *esi_14, esi_14, eflags)
__outsb(edx_1.w, *esi_15, esi_15, eflags)

if (c_8)
    jump(sub_48c588+0x70)

jump(sub_48c588+0x63)
