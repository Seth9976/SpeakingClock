// 函数: sub_406d16
// 地址: 0x406d16
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
int32_t eax_13
int32_t ecx
char* edx
eax_13, edx, ecx = (*(eax + 0x406d1c))()
char* eax_1 = eax_13 + *edx
int32_t* cs
*cs ^= eax_1
eax_1.b = eax_1.b
char temp1 = *eax_1
*eax_1 += eax_1.b
*(arg1 + 0x40) = sbb.b(*(arg1 + 0x40), ecx:1.b, temp1 + eax_1.b u< temp1)
*edx += ecx.b
int32_t eflags
uint16_t* esi = __outsd(edx.w, *arg2, arg2, eflags)
int32_t var_7
void* esp_1 = &var_7:3
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg3, edx.w, eflags)
*edi = temp0
int32_t eflags_1
int32_t gsbase
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg1 + 0x64), esi.w)
*(gsbase + arg1 + 0x64) = temp0_1
char temp2 = edi[0x64] | ecx:1.b
edi[0x64] = temp2
bool cond:1 = temp2 u< 0
bool cond:3 = temp2 u>= 0
bool cond:5 = temp2 u< 0
void* edi_1 = &edi[1]
bool c_1
bool z_2
int32_t eflags_2
void* entry_ebx
void* ebx
void* ebx_1
TEB* fsbase

if (temp2 u< 0)
label_406d9f:
    
    if (cond:1)
        goto label_406e17
    
    int32_t temp4_1 = *(fsbase + entry_ebx) ^ ecx
    *(fsbase + entry_ebx) = temp4_1
    cond:3 = temp4_1 u>= 0
    cond:5 = temp4_1 u< 0
label_406da5:
    uint16_t* esi_10 = __outsd(edx.w, *esi, esi, eflags_1)
    *(esp_1 - 4) = edx
    esp_1 -= 4
    
    if (cond:3)
        goto label_406e10
    
    if (cond:5)
        char temp7_1 = entry_ebx:1.b
        entry_ebx:1.b s>>= 0x25
        bool o_1 = unimplemented  {sar bh, 0x25}
        
        if (temp7_1 s>> 0x25 s< 0 != o_1)
            goto label_406e57
        
        goto label_406e29
    
    ecx.b ^= *(fsbase + esi_10)
    uint16_t* esi_11 = __outsd(edx.w, *esi_10, esi_10, eflags_1)
    ebx_1 = entry_ebx + 1
    z_2 = entry_ebx == 0xffffffff
    uint16_t* esi_12 = __outsd(edx.w, *esi_11, esi_11, eflags_1)
    int16_t* edi_3
    int16_t temp0_8
    temp0_8, edi_3 = __insd(edi_1, edx.w, eflags_1)
    *edi_3 = temp0_8
    __bound_gprv_mema32(arg1, *(edi_3 + 0x42))
    __outsd(edx.w, *esi_12, esi_12, eflags_1)
    
    if (entry_ebx + 1 s< 0)
    label_406e01:
        *(ebx_1 - 0x73da0040) += ecx.b
        int32_t eflags_9
        char temp0_14
        temp0_14, eflags_9 = __das(eax_1.b, eflags_1)
        eax_1.b = temp0_14
        entry_ebx = ebx_1 - 1
        *(entry_ebx - 0x77da0040) += ecx.b
        char temp0_15
        temp0_15, eflags_1 = __das(eax_1.b, eflags_9)
        eax_1.b = temp0_15
    label_406e10:
        entry_ebx -= 1
        *(entry_ebx - 0x7bda0040) += ecx.b
    label_406e17:
        int32_t eflags_10
        char temp0_16
        temp0_16, eflags_10 = __das(eax_1.b, eflags_1)
        eax_1.b = temp0_16
        *(entry_ebx - 0x7fda0041) += ecx.b
        int32_t eflags_11
        char temp0_17
        temp0_17, eflags_11 = __das(eax_1.b, eflags_10)
        eax_1.b = temp0_17
        entry_ebx -= 2
        *(entry_ebx + 0x7c25ffc0) += ecx.b
        char temp0_18
        temp0_18, eflags_1 = __das(eax_1.b, eflags_11)
        eax_1.b = temp0_18
    label_406e29:
        *(entry_ebx + 0x7825ffbf) += ecx.b
        int32_t eflags_12
        char temp0_19
        temp0_19, eflags_12 = __das(eax_1.b, eflags_1)
        eax_1.b = temp0_19
        ebx = entry_ebx - 2
        *(ebx + 0x7425ffc0) += ecx.b
        char temp0_20
        temp0_20, eflags_2 = __das(eax_1.b, eflags_12)
        eax_1.b = temp0_20
        *(ebx + 0x6c25ffbf) += ecx.b
        int32_t eflags_13
        char temp0_21
        temp0_21, eflags_13 = __das(eax_1.b, eflags_2)
        eax_1.b = temp0_21
        *(ebx + 0x6825ffbe) += ecx.b
        int32_t eflags_14
        char temp0_22
        temp0_22, eflags_14 = __das(eax_1.b, eflags_13)
        eax_1.b = temp0_22
        *(ebx + 0x6425ffbd) += ecx.b
        char temp0_23
        temp0_23, eflags_1 = __das(eax_1.b, eflags_14)
        eax_1.b = temp0_23
        entry_ebx = ebx - 4
        *(entry_ebx + 0x6025ffc0) += ecx.b
    label_406e57:
        int32_t eflags_15
        char temp0_24
        temp0_24, eflags_15 = __das(eax_1.b, eflags_1)
        eax_1.b = temp0_24
        *(entry_ebx + 0x5c25ffbf) += ecx.b
        int32_t eflags_16
        char temp0_25
        temp0_25, eflags_16 = __das(eax_1.b, eflags_15)
        eax_1.b = temp0_25
        *(entry_ebx + 0x5825ffbe) += ecx.b
        int32_t eflags_17
        char temp0_26
        temp0_26, eflags_17 = __das(eax_1.b, eflags_16)
        eax_1.b = temp0_26
        *(entry_ebx - 0x1374aa43) += ecx.b
        int32_t eax_8 = *(arg1 + 0x10)
        *(esp_1 - 4) = eax_8
        *(esp_1 - 8) = (sbb.d(eax_8, eax_8, *(arg1 + 0xc) u< 1) + 1) & 0x7f
        *(esp_1 - 0xc) = *(arg1 + 8)
        int32_t result = CreateMutexA()
        *esp_1
        return result
    
    *(fsbase + edi_3 + eax_1 + 0x57)
    *(fsbase + edi_3 + eax_1 + 0x57)
    c_1 = unimplemented  {imul esi, dword [fs:edi+eax+0x57], 0x6f646e69}
else
    if (&edi[1] s>= 0)
        goto label_406da5
    
    ecx:1.b |= *(&fsbase->User32Reserved[8] + edi_1)
    void* esi_1 = *(entry_ebx + 0x61) * 0x64656c62
    *(edi_1 + 0x64) |= arg1
    __builtin_strncpy(&var_7, "ecke", 4)
    *(&fsbase->User32Reserved[8] + edi_1) |= arg1
    uint16_t* esi_3 = __outsd(edx.w, *(esi_1 + 1), esi_1 + 1, eflags_1)
    int16_t temp0_2
    temp0_2, eflags_2 = __arpl_memw_gpr16(*(arg1 + 0x73), esi_3.w)
    *(arg1 + 0x73) = temp0_2
    *(&fsbase->User32Reserved[8] + edi_1)
    *(&fsbase->User32Reserved[8] + edi_1) |= arg1
    bool z_1 = &var_7 == 0xffffffff
    edi_1.w = var_7:1.w
    esi_3.w = entry_ebx.w
    arg1.w = entry_ebx:2.w
    void* const* esp_2
    esp_2.w = &__return_addr:2
    ebx.w = *esp_2
    edx.w = *(esp_2 + 2)
    ecx.w = esp_2[1].w
    eax_1.w = *(esp_2 + 6)
    esp_1 = &esp_2[2]
    
    if (not(z_1))
        if (not(z_1))
            return RegQueryValueExA() __tailcall
        
        if (z_1)
            return CloseHandle() __tailcall
        
        if (z_1)
            return CompareStringA() __tailcall
        
        void* ebx_2 = ebx + *eax_1
        int16_t* edi_4
        int16_t temp0_9
        temp0_9, edi_4 = __insd(edi_1, edx.w, eflags_2)
        *edi_4 = temp0_9
        *(ebx_2 - 0x63da0040) += ecx.b
        int32_t eflags_6
        char temp0_10
        temp0_10, eflags_6 = __das((&eax_1[1]).b, eflags_2)
        eax_1.b = temp0_10
        *(ebx_2 - 0x67da0041) += ecx.b
        int32_t eflags_7
        char temp0_11
        temp0_11, eflags_7 = __das(eax_1.b, eflags_6)
        eax_1.b = temp0_11
        *(ebx_2 - 0x6bda0042) += ecx.b
        int32_t eflags_8
        char temp0_12
        temp0_12, eflags_8 = __das(eax_1.b, eflags_7)
        eax_1.b = temp0_12
        *(ebx_2 - 0x6fda0043) += ecx.b
        char temp0_13
        temp0_13, eflags_1 = __das(eax_1.b, eflags_8)
        eax_1.b = temp0_13
        ebx_1 = ebx_2 - 4
        goto label_406e01
    
    if (z_1)
        goto label_406d79
    
    uint16_t* esi_4 = __outsd(edx.w, *esi_3, esi_3, eflags_2)
    z_2 = eax_1 == 1
    esi_3 = __outsd(edx.w, *esi_4, esi_4, eflags_2)
    
    if (not(z_2))
        esp_1 = *(edi_1 + 0x68) * 0x646f0a74
    label_406d79:
        __outsb(edx.w, *esi_3, esi_3, eflags_2)
        int32_t edi_2 = *esp_1
        int32_t esi_6 = *(esp_1 + 4)
        arg1 = *(esp_1 + 8)
        entry_ebx = *(esp_1 + 0x10)
        edx = *(esp_1 + 0x14)
        int32_t ecx_1 = *(esp_1 + 0x18)
        int32_t eax_2 = *(esp_1 + 0x1c)
        int32_t eflags_3
        int16_t temp0_3
        temp0_3, eflags_3 = __arpl_memw_gpr16(*(ecx_1 + (arg1 << 1) + 0x76), esi_6.w)
        *(ecx_1 + (arg1 << 1) + 0x76) = temp0_3
        *(gsbase + edi_2 + 0x64) |= arg1
        void* esi_8 = __outsd(edx.w, *(esi_6 - 1), esi_6 - 1, eflags_3)
        ecx = ecx_1 + 1
        int32_t eflags_4
        int16_t temp0_4
        temp0_4, eflags_4 = __arpl_memw_gpr16(*(entry_ebx + 0x65), (esp_1 + 0x20).w)
        *(entry_ebx + 0x65) = temp0_4
        uint8_t temp0_5
        temp0_5, edi_1 = __insb(edi_2, edx.w, eflags_4)
        *edi_1 = temp0_5
        eax_1 = eax_2 | 0x6f4e646f
        cond:1 = eax_1 u< 0
        esi = __outsd(edx.w, *(esi_8 + 1), esi_8 + 1, eflags_4)
        int32_t eflags_5
        int16_t temp0_6
        temp0_6, eflags_5 = __arpl_memw_gpr16(*(arg1 + 0x73), esi.w)
        *(arg1 + 0x73) = temp0_6
        *(esp_1 + 0x1c) = edx
        int16_t temp0_7
        temp0_7, eflags_1 = __arpl_memw_gpr16(*(gsbase + entry_ebx + ecx + 0x6f), esi.w)
        *(gsbase + entry_ebx + ecx + 0x6f) = temp0_7
        *(esp_1 + 0x18) = edx
        esp_1 += 0x18
        
        if (eax_1 u>= 0)
            return RegDeleteValueA() __tailcall
        
        goto label_406d9f
    
    *(edi_1 + eax_1 - 1 + 0x57)
    *(edi_1 + eax_1 - 1 + 0x57)
    c_1 = unimplemented  {imul esi, dword [edi+eax+0x57], 0x6f646e69}

if (not(z_2) && not(c_1))
    return CloseHandle() __tailcall

breakpoint
