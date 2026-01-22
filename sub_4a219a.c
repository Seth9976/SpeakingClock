// 函数: sub_4a219a
// 地址: 0x4a219a
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp1 + arg3:1.b u< temp1)
void* entry_ebx
arg1[(entry_ebx << 3) - 0x26d7ffba] += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg4
int32_t eflags
char temp0
char temp1_1
temp0, temp1_1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1_1
arg1[0x2d] += entry_ebx:1.b
arg1[0x6c00470e] += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
arg1[0xffffffe6] += arg1.b
arg4[2] += arg1.b
*(entry_ebx + 0x22) += arg1:1.b
arg1[3] += arg1:1.b
*arg1 += arg1.b
*arg1 += arg1.b
int16_t es
*(__return_addr - 4) = zx.d(es)
*(__return_addr - 8) = arg1
int32_t edi_2 = *(__return_addr - 8)
uint16_t* esi = *(__return_addr - 4)
int32_t* ebx = *(__return_addr + 8)
int32_t edx = *(__return_addr + 0xc)
char* ecx = *(__return_addr + 0x10)
char* eax = *(__return_addr + 0x14)
__outsb(edx.w, *esi, esi, eflags_1)
uint8_t* edi_3
uint8_t temp0_2
temp0_2, edi_3 = __insb(edi_2, edx.w, eflags_1)
*edi_3 = temp0_2
*(ebx + eax) ^= __return_addr + 0x18
*ecx += eax.b
*edi_3 += eax.b
*eax += eax.b
int32_t edx_2 = (edx + 1) | ebx[0x1d]
uint8_t* edi_4 = *(__return_addr + 0x18)
char* esi_2 = *(__return_addr + 0x1c)
int32_t* ebp = *(__return_addr + 0x20)
char* ebx_1 = *(__return_addr + 0x28)
char* edx_3 = *(__return_addr + 0x2c)
int32_t ecx_1 = *(__return_addr + 0x30)
void* eax_1 = *(__return_addr + 0x34)
void* esp_11 = __return_addr + 0x38

if (edx_2 == 0)
    goto label_4a2256

char temp0_3
temp0_3, eflags_1 = __arpl_memw_gpr16(ebp[0x1e].w, edx_3.w)
ebp[0x1e].w = temp0_3
void* esp_6
void* esi_5
bool c_1

if (edx_2 != 0)
    uint8_t temp0_4
    temp0_4, edi_4 = __insb(edi_4, edx_3.w, eflags_1)
    *edi_4 = temp0_4
    eax_1 += *eax_1
    *edx_3 += eax_1.b
    char temp4_1 = *ebx_1
    *ebx_1 += ecx_1.b
    c_1 = temp4_1 + ecx_1.b u< temp4_1
    bool z_1 = temp4_1 == neg.b(ecx_1.b)
    *(esp_11 - 4) = ebx_1
    esp_6 = esp_11 - 4
    
    if (z_1)
        esi_5 = __outsd(edx_3.w, *esi_2, esi_2, eflags_1)
        goto label_4a2260
    
    if (z_1)
        *((edx_3 << 2) + 0x8df00047) += eax_1.b
        ebx_1 = &ebx_1[1]
    else
        char temp0_5
        temp0_5, eflags_1 = __arpl_memw_gpr16(ebp[0x1e].w, edx_3.w)
        ebp[0x1e].w = temp0_5
        
        if (z_1)
            goto label_4a2237
        
        void* esp_7
        bool cond:7_1
        bool cond:9_1
        bool cond:10_1
        
        if (not(add_overflow(temp4_1, ecx_1.b)))
            *eax_1 += eax_1.b
            int32_t edx_4 = edx_3 | *(ebx_1 + 0x74)
            cond:7_1 = edx_4 == 0
            cond:9_1 = edx_4 == 0
            cond:10_1 = edx_4 == 0
            edi_4 = *esp_6
            esi_2 = *(esp_6 + 4)
            ebp = *(esp_6 + 8)
            ebx_1 = *(esp_6 + 0x10)
            edx_3 = *(esp_6 + 0x14)
            ecx_1 = *(esp_6 + 0x18)
            eax_1 = *(esp_6 + 0x1c)
            esp_7 = esp_6 + 0x20
        label_4a220f:
            
            if (cond:7_1)
                goto label_4a227b
            
            char temp0_6
            temp0_6, eflags_1 = __arpl_memw_gpr16(ebp[0x1e].w, edx_3.w)
            ebp[0x1e].w = temp0_6
            
            if (cond:9_1)
                goto label_4a224a
            
            if (cond:10_1)
                *esi_2 += eax_1.b
            else
                *eax_1 += eax_1.b
                *eax_1
                *(esp_7 - 4) = zx.d(es)
                esp_7 -= 4
            
            edi_4 = *(esp_7 - 1)
            *(esp_7 + 3)
            ebp = *(esp_7 + 7)
            ebx_1 = *(esp_7 + 0xf)
            edx_3 = *(esp_7 + 0x13)
            ecx_1 = *(esp_7 + 0x17)
            eax_1 = *(esp_7 + 0x1b)
            esp_11 = esp_7 + 0x1f
            __bound_gprv_mema32(esp_11, *(ebp + 0x6c))
            *(eax_1 + 3) ^= edi_4
            goto label_4a2226
        
        char temp12_1 = *ebx_1
        *ebx_1 += ecx_1.b
        cond:7_1 = temp12_1 == neg.b(ecx_1.b)
        cond:9_1 = temp12_1 == neg.b(ecx_1.b)
        cond:10_1 = temp12_1 == neg.b(ecx_1.b)
        *(esp_6 - 4) = ebx_1
        esp_7 = esp_6 - 4
        
        if (temp12_1 != neg.b(ecx_1.b))
            goto label_4a220f
    
    eax_1:1.b += ebx_1.b
    edx_3 -= 1
    ebx_1 = &ebx_1[1]
    goto label_4a2274

if (edx_2 s>= 0)
label_4a2226:
    *eax_1 += eax_1.b
    *eax_1 += eax_1
    *esp_11
    goto label_4a222b

*edi_4 += eax_1.b
label_4a222b:
edx_3 = &edx_3[1]
*(edx_3 + (eax_1 << 1) + 0x74)
*(edx_3 + (eax_1 << 1) + 0x74)
bool c_2 = unimplemented  {imul esi, dword [edx+eax*2+0x74], 0x2326e}
eax_1.b = adc.b(eax_1.b, *eax_1, c_2)
eax_1 = sx.d(eax_1.w)
label_4a2237:
ecx_1.b &= *edx_3
ecx_1 |= *(ecx_1 + 0x62)
uint8_t temp0_7
temp0_7, edi_4 = __insb(edi_4, edx_3.w, eflags_1)
*edi_4 = temp0_7
*(ebx_1 + 0x6c) ^= eax_1
*(ebx_1 + 0x6b)
label_4a224a:
edx_3 -= 1
edx_3[eax_1 << 1] += ecx_1.b
esi_2 = *(edx_3 + (eax_1 << 1) + 0x74) * 0x6c43326e
label_4a2256:
*(ebx_1 + 0x6b)
esp_6 = *(ebx_1 + 0x6b) * 0x6e495409
c_1 = unimplemented  {imul esp, dword [ebx+0x6b], 0x6e495409}
esi_5 = __outsw(edx_3.w, *esi_2, esi_2, eflags_1)
label_4a2260:
esi_2 = __outsd(edx_3.w, *(esi_5 + 1), esi_5 + 1, eflags_1)

if (c_1)
    if (esi_5 != 0xffffffff)
        goto label_4a234b
    
    void* temp6_1 = eax_1
    eax_1 -= 0x65746561
    char* eax_9
    
    if (temp6_1 u< 0x65746561)
        *(esp_6 + edi_4) += ebx_1.b
    label_4a234b:
        *(eax_1 + 0x300046d8) += edx_3.b
        eax_9 = eax_1 - 0x21a3ffb9
    label_4a2357:
        *edi_4 += ecx_1.b
        eax_9[0xec0046d9] += (ecx_1 + 1).b
        *(esi_2 + 1)
        ebx_1.b = 0
        char temp8 = eax_9.b
        char temp9 = eax_9.b
        eax_9.b *= 2
        char* esi_19
        char* edi_7
        
        if (temp8 != neg.b(temp9))
            *edi_4 = esi_2[2]
            edi_7 = &edi_4[1]
            esi_19 = &esi_2[3]
            
            if (temp8 != neg.b(temp9))
                goto label_4a23fb
            
            goto label_4a23b3
        
        eax_9.b = eax_9.b
        *edx_3
        ebx_1:1.b += eax_9:1.b
        *(edi_4 + &esi_2[3] + 0x36d00042) += edx_3:1.b
        edi_7 = &edi_4[1]
        eax_9[0x540046d3] = eax_9[0x540046d3]
        *ebp += 1
        *(esp_6 - 4) = eax_9
        *(esp_6 - 8) = ecx_1 + 1
        *(esp_6 - 0xc) = edx_3
        *(esp_6 - 0x10) = ebx_1
        *(esp_6 - 0x14) = esp_6 - 0x10
        *(esp_6 - 0x18) = ebp
        *(esp_6 - 0x1c) = &esi_2[3]
        *(esp_6 - 0x20) = edi_7
        esp_6 -= 0x20
        eax_9[0xd4ac45ae] += ebx_1:1.b
        *ebx_1 += edx_3:1.b
        esi_19 = &esi_2[5]
        *(esi_19 * 9 + 0x45) = *(esi_19 * 9 + 0x45)
        eax_9.b = (&eax_9[0x4ac0046]).b + ebx_1:1.b
        eax_9:1.b += ebx_1:1.b
        *eax_9 += (ecx_1 + 1):1.b
        eax_9.b = __in_al_immb(0x46, eflags_1)
        eax_9[0xffffffa1] += edx_3:1.b
        *(ebx_1 + esi_19 + 0x75a40047) = *(ebx_1 + esi_19 + 0x75a40047)
        ebp += 5
    label_4a23b3:
        edx_3[ebp << 1] += edx_3:1.b
        void* ebp_5 = ebp + 1
        char temp13_1 = *eax_9
        *eax_9 += edx_3:1.b
        
        if (temp13_1 != neg.b(edx_3:1.b) && temp13_1 + edx_3:1.b u>= temp13_1)
            eax_9:1.b += ebx_1.b
        else
            esi_19[0x46] += eax_9.b
            *eax_9 += eax_9.b
            void* eax_14 = __in_oeax_immb(0x46, eflags_1)
            *(eax_14 + (edi_7 << 1) + 0x45) += (ecx_1 + 1):1.b
            *(eax_14 - 0x19) += eax_14.b
            eax_9 = *0xf6b00045
            eax_9[0xfffffff7] += edx_3:1.b
            ebp = ebp_5 + 2
            edx_3[(&esi_19[1] << 3) + 0x45] += eax_9:1.b
            edi_7[(&esi_19[1] << 3) + 0x45] += edx_3.b
            eax_9[0x140046d2] += (ecx_1 + 1).b
            __out_dx_oeax(edx_3.w, eax_9, eflags_1)
            esi_19 = &esi_19[2]
            *(edi_7 * 5 + 0x2e40045) += eax_9:1.b
            edx_3[ecx_1 + 1] += (ecx_1 + 1):1.b
            *eax_9 += ebx_1:1.b
            edi_7[2] |= eax_9.b
        label_4a23fb:
            eax_9[0xffffffc0] += eax_9:1.b
            ebp_5 = ebp + 2
            eax_9[0xdc00470b] += (ecx_1 + 1):1.b
        
        eax_9.b |= 0x47
        eax_9[0x400045be] += ebx_1.b
        char* eax_15 = eax_9 | 0xf89c0046
        *(esp_6 + edx_3) += edx_3.b
        *(esp_6 + ecx_1 + 1 - 0xaf3ffba) += edx_3:1.b
        esi_19[ecx_1 + 1] += eax_15.b
        *(&esi_19[1] + ebp_5 + 2 - 0x3397ffb9) += edx_3.b
        *eax_15 += ebx_1.b
        undefined
    
    int32_t edi_6 = *esp_6
    esi_2 = *(esp_6 + 4)
    ebp = *(esp_6 + 8)
    *(esp_6 + 0x10)
    edx_3 = *(esp_6 + 0x14)
    ecx_1 = *(esp_6 + 0x18)
    int32_t* eax_8 = *(esp_6 + 0x1c)
    esp_6 += 0x20
    int32_t eflags_2
    int32_t cs
    char temp0_9
    temp0_9, eflags_2 = __arpl_memw_gpr16(*(cs + edi_6 + 0x6d), ebp.w)
    *(cs + edi_6 + 0x6d) = temp0_9
    int32_t eflags_3
    char temp0_10
    temp0_10, eflags_3 = __das(eax_8.b, eflags_2)
    eax_8.b = temp0_10
    char temp0_11
    temp0_11, eflags_1 = __arpl_memw_gpr16(*(edi_6 + (ebp << 1) + 0x63), ebp.w)
    *(edi_6 + (ebp << 1) + 0x63) = temp0_11
    eax_9 = 0
    *eax_9 += eax_9.b
    edi_4 = edi_6 - 1
    
    if (add_overflow(edi_6, 0xffffffff))
        *0xde5c0046 ^= eax_9.b
        goto label_4a2357
    
    __outsb(edx_3.w, *esi_2, esi_2, eflags_1)
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *data_4ac2fc
else
    int32_t eax_3 = esp_6
    ebp = sbb.d(eax_3, *(eax_3 * 2 + 4), eax_1.b u>= 0)
    edi_4 = &edi_4[1]
    eax_1 = ebx_1
    *(edx_3 + 0x43)
label_4a2274:
    ebp[0x89f0010].b += ecx_1.b
label_4a227b:
    *edi_4 += eax_1.b
    int32_t temp11_1 = *(ecx_1 * 3 + 0x6e) | (edx_3 - 1)
    *(ecx_1 * 3 + 0x6e) = temp11_1
    uint16_t* esi_8 = __outsw((edx_3 - 1).w, *esi_2, esi_2, eflags_1) + 1
    uint8_t* esi_9 = __outsd((edx_3 - 1).w, *esi_8, esi_8, eflags_1)
    
    if (temp11_1 u>= 0)
        *edi_4 = *esi_9
        void* esi_10 = &esi_9[4]
        *eax_1 += ecx_1:1.b
        eax_1.b += 0x69
        uint16_t* esi_12 = __outsb((edx_3 - 1).w, *(esi_10 + 1), esi_10 + 1, eflags_1)
        __outsw((edx_3 - 1).w, *esi_12, esi_12, eflags_1)
        *eax_1 += eax_1.b
        *0xa4004a1c = ebx_1
        *0xa4004a18 = 1
        *0xa4004a14 = 0
        *0xa4004a10 = 0
        *0xa4004a0c = &data_4a22c4
        *0xa4004a08 = &data_4a22e8
        void* edx_5
        edx_5.b = 1
        *0xa4004a04 = sub_45f888(sub_46bf24(eax_1))
        ShellExecuteA()
        *0xa4004a1c
        return 
    
    ebx_1[0xbac93300] += ecx_1.b
    char* eax_12 = eax_1 | *eax_1
    *eax_12 += eax_12.b

sub_47744c()
