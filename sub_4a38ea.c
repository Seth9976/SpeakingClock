// 函数: sub_4a38ea
// 地址: 0x4a38ea
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp1 + arg3:1.b u< temp1)
char* entry_result
arg1[(entry_result << 3) - 0x26d7ffba] += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg6
int32_t eflags
char temp0
char temp1_1
temp0, temp1_1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1_1
arg1[0x2d] += entry_result:1.b
arg1[0x6c00470e] += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
void* edi_1 = &arg6[2]
arg1[0xffffffe6] += arg1.b
*(arg5 + 3) += arg3.b
*arg1 += arg1.b
*arg1 += arg1.b
*entry_result += arg1.b
*arg1 += arg1.b
arg1[arg2 + 0x4540040] += entry_result:1.b
*arg1 += arg1.b
arg1.b = arg1.b
arg1[arg2 + 0x45c0040] += entry_result:1.b
*arg1 += arg1.b
arg1.b -= *arg1
char* edx = arg2 - 1
arg1[4] += (&arg1[1]):1.b
arg1[1] += (&arg1[1]).b
arg1[1] += (&arg1[1]).b
int16_t es
*0x5800400c = zx.d(es)
*0x58004008 = 0x5800400c
void* ebp = *(arg4 + 0x65) * 0x3643172
arg1[1] += (&arg1[1]).b
*(arg1 + 1) = &arg1[1 + *(arg1 + 1)]
char* eax_1 = &arg1[1] | 0x6e69614d
*0x58004004 = eax_1
int32_t* esp_1 = 0x58004004
uint16_t* esi_2 = __outsd(edx.w, *(arg5 + 3), arg5 + 3, eflags_1)
uint16_t* gsbase
esi_2 = __outsb(edx.w, *(gsbase + esi_2), esi_2, eflags_1)

if ((&arg1[1] | 0x6e69614d) != 0)
    goto label_4a39c2

eax_1 = &eax_1[*eax_1]
*edx += eax_1.b
*arg3 += arg3.b
void* ebp_1 = ebp - 1
char* esi_3 = __outsb(edx.w, *(gsbase + esi_2), esi_2, eflags_1)

if (ebp != 1)
    goto label_4a39ae

if (ebp == 1)
    eax_1 = &eax_1[*eax_1]
label_4a39ce:
    *entry_result += eax_1.b
    *arg3 += arg3.b
    *0x58004004
    *0x58004008
    ebp = *0x5800400c
    entry_result = *0x58004014
    *0x58004018
    *0x5800401c
    *0x58004020
    esp_1 = 0x58004024
    goto label_4a39d4

char temp0_2
temp0_2, edi_1 = __insd(edi_1, edx.w, eflags_1)
*edi_1 = temp0_2
int32_t ebp_2 = ebp_1 ^ *(entry_result + eax_1)
*edx += eax_1.b
*arg3 += arg3.b
ebp = ebp_2 - 1
esi_2 = __outsb(edx.w, *(gsbase + esi_3), esi_3, eflags_1)
bool c_2
bool z

if (ebp_2 == 1)
    if (ebp_2 == 1)
        eax_1 = &eax_1[*eax_1]
        *(eax_1 * 2) += eax_1.b
        goto label_4a39e1
    
    char temp0_3
    temp0_3, edi_1 = __insd(edi_1, edx.w, eflags_1)
    *edi_1 = temp0_3
    eax_1.b ^= 0x70
    eax_1 = &eax_1[*eax_1]
    *edx += eax_1.b
    *arg3 += arg3.b
    void* temp20_1 = ebp
    ebp -= 1
    esi_2 = __outsb(edx.w, *(gsbase + esi_2), esi_2, eflags_1)
    
    if (temp20_1 != 1)
        goto label_4a39ce
    
    if (temp20_1 == 1)
    label_4a39ec:
        esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
        eax_1 = &eax_1[*eax_1]
        *(eax_1 * 2) += eax_1.b
        char* temp17_1 = edx
        edx |= *(entry_result + 0x65)
        z = (temp17_1 | *(entry_result + 0x65)) == 0
        
        if (z)
            goto label_4a3a6d
        
        if (not(z))
            goto label_4a3a70
        
        goto label_4a39fc
    
    char temp0_4
    temp0_4, edi_1 = __insd(edi_1, edx.w, eflags_1)
    *edi_1 = temp0_4
    eax_1 ^= 0x374
    eax_1.b += *eax_1
    int32_t temp26_1 = *(ebp + 0x65)
    *(ebp + 0x65) |= arg3
    z = (temp26_1 | arg3) == 0
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    
    if (not(z))
        *(eax_1 * 2) += eax_1.b
        goto label_4a39e1
    
    if (z)
        goto label_4a39fc
    
    char* edi_2
    char temp0_5
    temp0_5, edi_2 = __insd(edi_1, edx.w, eflags_1)
    *edi_2 = temp0_5
    bool c_1
    bool s
    bool o
    
    if ((temp26_1 | arg3) s< 0)
        char temp43_1 = *eax_1
        *eax_1 += arg3.b
        c_1 = temp43_1 + arg3.b u< temp43_1
        ebp -= 1
        char* temp44_1 = arg3
        arg3 -= 1
        s = temp44_1 - 1 s< 0
        o = add_overflow(temp44_1, 0xffffffff)
    else
        *eax_1 += eax_1.b
        eax_1.b += *eax_1
        char temp45_1 = *(ebp + 0x49)
        *(ebp + 0x49) |= arg3.b
        c_1 = false
        s = (temp45_1 | arg3.b) s< 0
        o = false
    
    edi_1 = *0x58004004
    esp_1 = 0x58004008
    
    if (not(c_1))
        *eax_1 += eax_1.b
        char temp3_1 = eax_1.b
        eax_1.b = eax_1.b
        c_2 = temp3_1 u>= 0
        goto label_4a3a16
    
    int32_t edi_3 = *esp_1
    esi_3 = esp_1[1]
    ebp_1 = esp_1[2]
    entry_result = esp_1[4]
    edx = esp_1[5]
    arg3 = esp_1[6]
    eax_1 = esp_1[7]
    esp_1 = &esp_1[8]
    uint8_t* edi_4
    uint8_t temp0_6
    temp0_6, edi_4 = __insb(edi_3, edx.w, eflags_1)
    *edi_4 = temp0_6
    uint8_t* edi_5
    uint8_t temp0_7
    temp0_7, edi_5 = __insb(edi_4, edx.w, eflags_1)
    *edi_5 = temp0_7
    
    if (s != o)
        *esi_3 += eax_1.b
    else
        *eax_1 += eax_1.b
        eax_1.b += *eax_1
    label_4a39ae:
        *(esp_1 - 4) = zx.d(es)
        esp_1 -= 4
    
    ebp = ebp_1 - 1
    arg3 -= 1
    edi_1 = *esp_1
    esp_1 = &esp_1[1]
    __bound_gprv_mema32(ebp, *(arg3 + 0x67))
    *entry_result = *entry_result
    *edx += eax_1.b
    *edx += eax_1.b
    esi_2 = esi_3 - 1
    eax_1 ^= *(entry_result + eax_1 + 0x20000)
    goto label_4a39c4

*entry_result
*eax_1 += eax_1.b
label_4a39c2:
eax_1.b += *eax_1
label_4a39c4:
*(esp_1 - 4) = zx.d(es)
esp_1 -= 4
char* temp8_1 = arg3
arg3 = &arg3[1]
z = temp8_1 == 0xffffffff
__bound_gprv_mema32(ebp, *(edi_1 + 0x75))
int16_t cs
bool cond:2_1
bool cond:6_1

if (z)
label_4a39fc:
    void* eax_10
    void* eax_11
    bool cond:30_1
    
    if (z)
    label_4a3a6d:
        __bound_gprv_mema32(ebp, *(edi_1 + 0x78))
    label_4a3a70:
        eax_1.b = *esi_2
        esi_2 += 1
    label_4a3a71:
        eax_1 = &eax_1[*eax_1]
        char temp14_1 = *0x6f480d00
        *0x6f480d00 += eax_1.b
        cond:30_1 = temp14_1 != neg.b(eax_1.b)
    else
        esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
        char temp0_10 = esp_1
        esp_1 = eax_1
        int32_t eax_5 = temp0_10
        eax_1 = eax_5 + *eax_5
        *(eax_1 * 2) += eax_1.b
        
        while (true)
            char temp5_1 = arg3.b
            arg3.b |= eax_1[0x65]
            bool z_1 = (temp5_1 | eax_1[0x65]) == 0
            uint8_t temp0_11
            temp0_11, edi_1 = __insb(edi_1, edx.w, eflags_1)
            *edi_1 = temp0_11
            
            if (not(z_1))
                __bound_gprv_mema32(ebp, *(edi_1 + 0x78))
                eax_1.b = 3
                *eax_1 += 3
                eax_1 = &eax_1[0x694d0c00]
                goto label_4a3a8d
            
            if (z_1)
                goto label_4a3a7e
            
            esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
            int32_t eax_6 = sx.d(eax_1.w)
            eax_1 = eax_6 + *eax_6
            char temp15_1 = *(eax_1 * 2)
            *(eax_1 * 2) += eax_1.b
            c_2 = temp15_1 + eax_1.b u< temp15_1
        label_4a3a16:
            *(esp_1 - 4) = zx.d(cs)
            esp_1 -= 4
            char* temp7_1 = arg3
            arg3 = &arg3[1]
            bool p_1 = unimplemented  {inc ecx}
            bool a_1 = unimplemented  {inc ecx}
            bool z_2 = temp7_1 == 0xffffffff
            bool s_2 = &temp7_1[1] s< 0
            uint16_t* esi_7 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
            uint16_t* esi_8 = __outsb(edx.w, *esi_7, esi_7, eflags_1)
            esi_2 = __outsd(edx.w, *esi_8, esi_8, eflags_1)
            
            if (not(z_2))
                z_2 = ebp == 1
                s_2 = ebp - 1 s< 0
                ebp = *(esi_2 + 0x32) * 0x6e696150
            label_4a3a93:
                
                if (z_2)
                    goto label_4a3af7
                
                esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
            label_4a3a96:
                
                if (not(s_2))
                    goto label_4a3a98
            else
                char temp0_12
                temp0_12, eflags_1 = __arpl_memw_gpr16(*(ebp + 0x42), esp_1.w)
                *(ebp + 0x42) = temp0_12
                
                if (not(z_2))
                    goto label_4a3a96
                
                if (z_2)
                    goto label_4a3a93
                
                uint16_t* esi_9 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
                bool d
                *(esp_1 - 4) = (add_overflow(temp7_1, 1) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
                    | (s_2 ? 1 : 0) << 7 | (z_2 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
                    | (p_1 ? 1 : 0) << 2 | (c_2 ? 1 : 0)
                esp_1 -= 4
                void* eax_7 = &eax_1[*eax_1]
                *(eax_7 * 2) += eax_7.b
                eax_1 = eax_7 | 0x6974704f
                uint16_t* esi_10 = __outsd(edx.w, *esi_9, esi_9, eflags_1)
                esi_2 = __outsb(edx.w, *esi_10, esi_10, eflags_1)
                
                if (eax_1 u>= 0)
                    eax_1 |= 0x72756f48
                    goto label_4a3a7b
                
                if (eax_1 != 0)
                    goto label_4a3aaa
                
                if (eax_1 == 0)
                    __bound_gprv_mema32(ebp, *(edi_1 + 0x78))
                label_4a3aaa:
                    eax_10 = 0x5000003
                    *entry_result += arg3.b
                    __outsd(edx.w, *esi_2, esi_2, eflags_1)
                    goto label_4a3ab3
                
                esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
                eax_1.b = *0x4000003
                *0x676e614c += arg3.b
                *(esp_1 - 4) = entry_result
                esp_1 -= 4
                uint8_t temp0_13
                temp0_13, edi_1 = __insb(edi_1, edx.w, eflags_1)
                *edi_1 = temp0_13
                char* temp28_1 = edx
                edx = &edx[1]
                cond:30_1 = temp28_1 != 0xffffffff
                
                if (temp28_1 != 0xffffffff)
                    *eax_1 += eax_1.b
                    eax_11 = &eax_1[0x65530c00]
                    goto label_4a3ac5
                
                if (temp28_1 == 0xffffffff)
                    if (&temp28_1[1] s< 0)
                        break
                    
                    goto label_4a3abd
            
            *edi_1 = *__outsb(edx.w, *esi_2, esi_2, eflags_1)
            void* eax_8 = &eax_1[*eax_1]
            *arg3 += eax_8.b
            *eax_8 += arg3.b
        label_4a3a55:
            edi_1 = *(esp_1 - 1)
            uint16_t* esi_12 = *(esp_1 + 3)
            int32_t ebp_4 = *(esp_1 + 7)
            entry_result = *(esp_1 + 0xf)
            edx = *(esp_1 + 0x13)
            arg3 = *(esp_1 + 0x17)
            eax_1 = *(esp_1 + 0x1b)
            esp_1 += 0x1f
            int32_t esi_13 = __outsb(edx.w, *esi_12, esi_12, eflags_1)
            ebp = ebp_4 - 1
            cond:6_1 = ebp_4 != 1
            esi_2 = __outsb(edx.w, *(gsbase + esi_13), esi_13, eflags_1)
        label_4a3a5b:
            
            if (not(cond:6_1))
                eax_1 = &eax_1[*eax_1]
                char temp16_1 = *0x6f480d00
                *0x6f480d00 += eax_1.b
                cond:2_1 = temp16_1 != neg.b(eax_1.b)
                goto label_4a3a65
    
    if (cond:30_1)
        goto label_4a3aed
    
label_4a3a7b:
    edx.b ^= eax_1[0x61]
label_4a3a7e:
    *(esi_2 + 0x74)
    eax_1 = &eax_1[*eax_1]
    *0x694d0c00 += eax_1.b
label_4a3a8d:
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    edx.b ^= eax_1[0x61]
    *(esi_2 + 0x74)
label_4a3a98:
    void* eax_9 = &eax_1[*eax_1]
    *0x694d0c00 += eax_9.b
    void* esi_14 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    *(eax_9 + 0x61) ^= edx
    *(esi_14 + 0x74)
    eax_10 = eax_9 + *eax_9
    *0x6f430b00 += eax_10.b
label_4a3ab3:
    uint8_t* edi_10
    uint8_t temp0_14
    temp0_14, edi_10 = __insb(edi_1, edx.w, eflags_1)
    *edi_10 = temp0_14
    *(esp_1 - 4) = eax_10
    *(esp_1 - 4)
    esi_2 = *esp_1
    esp_1[3]
    esp_1[4]
    arg3 = esp_1[5]
    eax_1 = esp_1[6]
    esp_1 = &esp_1[7]
    *(esi_2 + 0x74)
label_4a3abd:
    eax_11 = &eax_1[*eax_1]
    *0x65530c00 += eax_11.b
label_4a3ac5:
    int32_t eflags_2
    char temp0_15
    temp0_15, eflags_2 = __arpl_memw_gpr16(*arg3, esi_2.w)
    *arg3 = temp0_15
    *(esp_1 - 4) = eax_11
    int16_t esi_16 = (*esp_1).w
    int16_t* edx_5 = esp_1[4]
    int32_t eax_12 = esp_1[6]
    int32_t eax_13 = eax_12 + *eax_12
    *0x65530c00 += eax_13.b
    char temp0_16
    temp0_16, eflags_1 = __arpl_memw_gpr16(*edx_5, esi_16)
    *edx_5 = temp0_16
    esp_1[6] = eax_13
    edi_1 = esp_1[6]
    esi_2 = esp_1[7]
    esp_1[8]
    entry_result = esp_1[0xa]
    edx = esp_1[0xb]
    arg3 = esp_1[0xc]
    eax_1 = esp_1[0xd]
    esp_1 = &esp_1[0xe]
    goto label_4a3adc

*entry_result = eax_1.b
*eax_1 += eax_1.b
*(edx + 0x61) |= &eax_1[*eax_1]
label_4a39d4:
char temp0_8
temp0_8, eflags_1 = __arpl_memw_gpr16(*(entry_result + 0x50), ebp.w)
*(entry_result + 0x50) = temp0_8
int32_t edi_7 = *esp_1
uint16_t* esi_5 = esp_1[1]
esp_1[2]
int16_t* ebx = esp_1[4]
int16_t edx_2 = (esp_1[5]).w
arg3 = esp_1[6]
eax_1 = esp_1[7]
esp_1 = &esp_1[8]
__outsb(edx_2, *esi_5, esi_5, eflags_1)
uint8_t* edi_8
uint8_t temp0_9
temp0_9, edi_8 = __insb(edi_7, edx_2, eflags_1)
*edi_8 = temp0_9
*ebx = es
*eax_1 += eax_1.b
eax_1.b = eax_1.b
label_4a39e1:
bool cond:19_1 = (eax_1 | *(arg3 + 0x6c)) u< 0
edi_1 = *esp_1
esi_2 = esp_1[1]
ebp = esp_1[2]
entry_result = esp_1[4]
void* edx_3 = esp_1[5]
arg3 = esp_1[6]
eax_1 = esp_1[7]
esp_1 = &esp_1[8]

if (cond:19_1)
    goto label_4a3a55

edx = edx_3 + 1
cond:6_1 = edx_3 != 0xffffffff

if (edx_3 == 0xffffffff)
    if (edx_3 == 0xffffffff)
        goto label_4a3a5b
    
    goto label_4a39ec

*eax_1 += eax_1.b
char* temp13_1 = eax_1
eax_1 = &eax_1[0x6f480d00]
cond:2_1 = temp13_1 != 0x90b7f300
label_4a3a65:

if (not(cond:2_1))
    *(eax_1 + 0x61) ^= edx
    *(esi_2 + 0x74)
    goto label_4a3a71

edx.b ^= eax_1[0x61]
label_4a3adc:
ebp = *(esi_2 + 0x74) * 0xc4786f42
eax_1 = &eax_1[*eax_1]
char temp22_1 = *0x61440d00
*0x61440d00 += eax_1.b
void* esp_36
void* esp_38
void* esp_39
int16_t ss
bool c_9
bool c_10
bool z_7
bool o_5
void* esi_17
int32_t edi_17
bool c_3
bool z_3
bool z_4
bool z_5
bool s_3
bool o_2
bool o_7

if (temp22_1 == neg.b(eax_1.b))
    char* temp27_1 = edx
    edx = &edx[1]
    z_4 = temp27_1 == 0xffffffff
    s_3 = &temp27_1[1] s< 0
label_4a3b54:
    
    if (not(z_4))
        goto label_4a3bca
    
    bool c_5
    bool c_8
    bool z_6
    
    if (z_4)
        char temp0_20
        temp0_20, eflags_1 = __arpl_memw_gpr16(*(eax_1 + 0x4b), ebp.w)
        *(eax_1 + 0x4b) = temp0_20
    label_4a3bca:
        char* entry_result_1
        
        for (; not(s_3); s_3 = entry_result_1 - 1 s< 0)
            entry_result_1 = entry_result
            entry_result -= 1
        
        eax_1 = &eax_1[*eax_1]
        *edi_1 += eax_1.b
        char temp40_1 = *entry_result
        *entry_result += arg3.b
        c_5 = temp40_1 + arg3.b u< temp40_1
        z_6 = temp40_1 == neg.b(arg3.b)
        bool s_4 = temp40_1 + arg3.b s< 0
        *(esp_1 - 4) = entry_result
        esp_1 -= 4
        void* esp_31
        
        if (not(s_4))
        label_4a3c49:
            char temp0_26
            temp0_26, eflags_1 = __arpl_memw_gpr16(*(ebp + 0x42), esp_1.w)
            *(ebp + 0x42) = temp0_26
            
            if (z_6)
                if (z_6)
                    goto label_4a3cbf
                
                esi_17 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
                entry_result = &entry_result[1]
                uint8_t temp0_27
                temp0_27, edi_1 = __insb(edi_1, edx.w, eflags_1)
                *edi_1 = temp0_27
                esp_31 = *(entry_result + 0x6b) * 0x50000017
                goto label_4a3c5a
            
            eax_1 = *(arg3 + 0x6e) * 0x7475426e
        label_4a3cc9:
            
            if (z_6)
                arg3 -= 1
                
                if (not(z_6) && arg3 != 0)
                    goto label_4a3d94
                
                goto label_4a3d3c
            
            __outsb(edx.w, *esi_2, esi_2, eflags_1)
            uint8_t temp0_35
            temp0_35, edi_1 = __insb(edi_1, edx.w, eflags_1)
            *edi_1 = temp0_35
            esp_1 = *(entry_result + 0x6c) * 0x58980014
            edx -= 1
        label_4a3cd6:
            char temp47_1 = *0x535f494d
            *0x535f494d += arg3.b
            o_7 = add_overflow(temp47_1, arg3.b)
            goto label_4a3cdc
        
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
        
        if (not(c_5))
            if (not(s_4))
                goto label_4a3c24
            
            char temp0_21
            temp0_21, eflags_1 = __arpl_memw_gpr16(*(edi_1 + 0x6e), ebp.w)
            *(edi_1 + 0x6e) = temp0_21
            *(eax_1 * 2) += eax_1.b
            *eax_1 += arg3.b
            *edx += arg3.b
            *esp_1 = *esp_1
            *esp_1
            uint16_t* esi_20 = esp_1[1]
            ebp = esp_1[2]
            entry_result = esp_1[4]
            edx = esp_1[5]
            arg3 = esp_1[6]
            eax_1 = esp_1[7]
            esi_17 = __outsb(edx.w, *esi_20, esi_20, eflags_1)
            esp_1 = *(esi_17 + 0x65) * 0x4047473
            goto label_4a3bf1
        
        esi_17 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
        
        if (z_6)
            *eax_1 += eax_1.b
            *(esp_1 - 4) = eax_1
            esp_31 = esp_1 - 4
        label_4a3c5a:
            edx -= 1
            char temp60_1 = *eax_1
            *eax_1 += edx.b
            z_3 = temp60_1 == neg.b(edx.b)
            *(esp_31 - 4) = entry_result
            esp_1 = esp_31 - 4
            
            if (z_3)
                goto label_4a3cd6
            
            if (not(add_overflow(temp60_1, edx.b)))
                goto label_4a3c63
            
            edx = nullptr
            eax_1[0x4a] -= entry_result.b
            goto label_4a3cab
        
        char temp59_1 = *(edi_1 + (arg3 << 1) + 0x4113004a)
        *(edi_1 + (arg3 << 1) + 0x4113004a) += edx:1.b
        c_8 = temp59_1 + edx:1.b u< temp59_1
        z_6 = temp59_1 == neg.b(edx:1.b)
    label_4a3c44:
        uint16_t* esi_22 = __outsb(edx.w, *esi_17, esi_17, eflags_1)
        uint16_t* esi_23 = __outsb(edx.w, *esi_22, esi_22, eflags_1)
        esi_2 = __outsd(edx.w, *esi_23, esi_23, eflags_1)
        
        if (z_6)
            goto label_4a3c49
        
        esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    label_4a3cb8:
        *eax_1 = sbb.d(*eax_1, eax_1, c_8)
        eax_1 = *esp_1
        esp_1 = &esp_1[1]
        edx -= 1
        *edx += edx.b
    label_4a3cbf:
        z_6 = ebp == 1
        ebp = *(esi_2 + 0x69) * 0x426e6e41
        
        if (not(z_6))
            goto label_4a3d3d
        
        goto label_4a3cc9
    
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    arg7 = arg7 + fconvert.t(*entry_result)
    *eax_1 += eax_1.b
    eax_1.b += *eax_1
    char temp41_1 = arg3.b
    arg3.b += *(esi_2 + 0x35)
    
    if (temp41_1 != neg.b(*(esi_2 + 0x35)) && arg3 != 1)
        *0x74697845 += eax_1.b
    else
        *eax_1 += eax_1.b
    label_4a3b66:
        eax_1.b += *eax_1
    
    eax_1:1.b = 0
    char eax_19 = eax_1.b + (*eax_1).b
    *edx += eax_19
    *edx += eax_19
    esi_17 = esi_2 - 1
    eax_1, edx, arg3 = 0x24a3b7f()
    *edi_1 += arg3.b
    z_5 = ebp == 1
    s_3 = ebp - 1 s< 0
    *(esi_17 + 0x69)
    ebp = *(esi_17 + 0x69) * 0x657a696d
    c_3 = unimplemented  {imul ebp, dword [esi+0x69], 0x657a696d}
    o_2 = unimplemented  {imul ebp, dword [esi+0x69], 0x657a696d}
    void* esi_19
    bool c_4
    bool c_7
    
    if (not(z_5))
        if (z_5)
            goto label_4a3bfc
        
        edi_1 = *esp_1
        esi_17 = esp_1[1]
        ebp = esp_1[2]
        entry_result = esp_1[4]
        edx = esp_1[5]
        arg3 = esp_1[6]
        eax_1 = esp_1[7]
        esp_1 = &esp_1[8]
    label_4a3b8b:
        
        if (not(s_3))
            goto label_4a3bbe
        
        eax_1.b = __in_al_dx(edx.w, eflags_1)
        void* eax_20 = &eax_1[*eax_1]
        *0x544d0a00 += eax_20.b
        *(esp_1 - 4) = eax_20
        void* esi_18 = *esp_1
        entry_result = esp_1[3]
        edx = esp_1[4]
        int32_t ecx_3 = esp_1[5]
        int32_t eax_21 = esp_1[6]
        int32_t ebp_11 = *(esi_18 + 0x74) * 0xf0786f42
        int32_t eax_22 = eax_21 + *eax_21
        *edx += eax_22.b
        *edx += eax_22.b
        esi_19 = esi_18 - 1
        eax_1 = eax_22 + *eax_22
        *edx += eax_1.b
        char temp30_1 = *eax_1
        *eax_1 += ecx_3.b
        c_4 = temp30_1 + ecx_3.b u< temp30_1
        ebp = ebp_11 - 1
        arg3 = ecx_3 - 1
        edi_1 = esp_1[7]
        esp_1[7] = entry_result
        esp_1 = &esp_1[7]
        
        if (add_overflow(ecx_3, 0xffffffff))
            goto label_4a3c19
        
        esi_17 = esp_1[1]
        ebp = esp_1[2]
        entry_result = esp_1[4]
        edx = esp_1[5]
        arg3 = esp_1[6]
        eax_1 = esp_1[7]
        char* edi_12 = eax_1 * 3
        *eax_1 += eax_1.b
        esp_1[7] = zx.d(es)
        esp_1 = &esp_1[7]
        char temp37_1 = *edi_12
        *edi_12 += arg3.b
        c_3 = temp37_1 + arg3.b u< temp37_1
        edi_1 = &edi_12[1]
        s_3 = &edi_12[1] s< 0
        o_2 = add_overflow(edi_12, 1)
    label_4a3bbe:
        uint8_t temp0_18
        temp0_18, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_18
        esi_2 = __outsd(edx.w, *esi_17, esi_17, eflags_1)
        __bound_gprv_mema32(esp_1, *(arg3 + 0x6c))
        *(esp_1 - 4) = entry_result
        esp_1 -= 4
        
        if (not(o_2))
            char temp0_19
            temp0_19, eflags_1 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x4b), ebp.w)
            *(gsbase + eax_1 + 0x4b) = temp0_19
            goto label_4a3bca
        
        *(gsbase + eax_1) = adc.b(*(gsbase + eax_1), eax_1.b, c_3)
    label_4a3c2e:
        eax_1.b += 0x4d
        edx -= 1
        char temp48_1 = *arg3
        *arg3 += arg3.b
        c_7 = temp48_1 + arg3.b u< temp48_1
        esi_19 = esi_2 + 1
    label_4a3c34:
        esi_17 = __outsd(edx.w, *esi_19, esi_19, eflags_1)
        
        if (not(c_7))
            *(esp_1 - 4) = eax_1
            edi_1 = *(esp_1 - 4)
            esi_17 = *esp_1
            entry_result = esp_1[3]
            int32_t edx_7 = esp_1[4]
            void* ecx_4 = esp_1[5]
            eax_1 = esp_1[6]
            esp_1 = &esp_1[7]
            ebp = *(esi_17 + 0x74) * 0x4fb4001a
            edx = edx_7 - 1
            char temp54_1 = *entry_result
            *entry_result += edx.b
            c_8 = temp54_1 + edx.b u< temp54_1
            arg3 = ecx_4 + 1
            z_6 = ecx_4 == 0xffffffff
            goto label_4a3c44
        
        char temp0_34
        temp0_34, eflags_1 = __arpl_memw_gpr16(*(entry_result + 0x12), ebp.w)
        *(entry_result + 0x12) = temp0_34
        *eax_1 += arg3:1.b
        eax_1 = *esp_1
        esp_1 = &esp_1[1]
    label_4a3caa:
        edx -= 1
    label_4a3cab:
        char temp61_1 = *entry_result
        *entry_result += arg3.b
        c_8 = temp61_1 + arg3.b u< temp61_1
        esi_2 = __outsd(edx.w, *(esi_17 + 1), esi_17 + 1, eflags_1)
        
        if (c_8)
            esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
            
            if (esi_17 != 0xffffffff)
                goto label_4a3d95
            
            *(entry_result + 0x6c) ^= eax_1
            esp_1 = *(entry_result + 0x6b) * 0x58d80011
            goto label_4a3d2b
        
        char* entry_result_3 = entry_result
        entry_result -= 1
        
        if (entry_result_3 - 1 s>= 0)
            esp_38 = *(entry_result + 0x6b) * 0x58c80015
            goto label_4a3d00
        
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        
        if (entry_result_3 == 1 || c_8)
            goto label_4a3cb8
        
        edx = nullptr
        arg7 - fconvert.t(*(eax_1 + 0x4a))
        goto label_4a3d2c
    
    char* temp29_1 = arg3
    arg3 -= 1
    z_5 = temp29_1 == 1
label_4a3bf8:
    int32_t edi_14 = *esp_1
    *esp_1 = entry_result
    uint8_t temp0_22
    temp0_22, edi_1 = __insb(edi_14, edx.w, eflags_1)
    *edi_1 = temp0_22
label_4a3bfc:
    char temp0_23
    temp0_23, eflags_1 = __arpl_memw_gpr16(*(gsbase + esp_1 + (ebp << 1) + 0x61), esi_17.w)
    *(gsbase + esp_1 + (ebp << 1) + 0x61) = temp0_23
    esi_19 = __outsb(edx.w, *esi_17, esi_17, eflags_1)
    
    if (z_5)
        char temp0_24
        char temp1_2
        temp0_24, temp1_2, eflags_1 = __aaa(eax_1.b, eax_1:1.b, eflags_1)
        eax_1.b = temp0_24
        eax_1:1.b = temp1_2
        *edx += edx.b
        eax_1[0xb004a49] += eax_1.b
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
        *(ebp + 0x65)
        ebp = *(ebp + 0x65) * 0x69543172
        c_4 = unimplemented  {imul ebp, dword [ebp+0x65], 0x69543172}
        char temp0_25
        temp0_25, edi_1 = __insd(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_25
    label_4a3c19:
        
        if (c_4)
            char temp49_1 = *((arg3 << 1) + 0x4609004a)
            *((arg3 << 1) + 0x4609004a) += eax_1.b
            c_7 = temp49_1 + eax_1.b u< temp49_1
            goto label_4a3c34
        
        edx[eax_1 << 1] += edx:1.b
        edx -= 1
        char temp50_1 = *edx
        *edx += arg3.b
        c_5 = temp50_1 + arg3.b u< temp50_1
        esi_2 = __outsd(edx.w, *(esi_19 + 1), esi_19 + 1, eflags_1)
    label_4a3c24:
        
        if (c_5)
            goto label_4a3c93
        
        char* entry_result_2 = entry_result
        entry_result = &entry_result[1]
        
        if (not(c_5))
            edi_1 = *esp_1
            esi_2 = esp_1[1]
            ebp = esp_1[2]
            entry_result = esp_1[4]
            edx = esp_1[5]
            arg3 = esp_1[6]
            eax_1 = esp_1[7]
            esp_1 = &esp_1[8]
            
            if (entry_result_2 == 0xffffffff)
                goto label_4a3c91
            
            *eax_1 = adc.b(*eax_1, eax_1.b, c_5)
            goto label_4a3c2e
        
        if (not(c_5))
            goto label_4a3c90
        
        eax_1 = *esp_1
        esp_38 = &esp_1[1]
    label_4a3d00:
        edx -= 1
        char temp66_1 = *esi_2
        *esi_2 += arg3.b
        c_10 = temp66_1 + arg3.b u< temp66_1
        *(esp_38 - 4) = entry_result
        esp_39 = esp_38 - 4
        
        if (temp66_1 == neg.b(arg3.b))
            goto label_4a3d7b
        
        ebp = *(esi_2 + 0x67) * 0x6c433173
        esp_36 = *(entry_result + 0x6b) * 0x58d00016
        goto label_4a3d15
    
    esi_17 = __outsd(edx.w, *esi_19, esi_19, eflags_1)
label_4a3c67:
    __outsb(edx.w, *esi_17, esi_17, eflags_1)
    uint8_t* edi_15
    uint8_t temp0_28
    temp0_28, edi_15 = __insb(edi_1, edx.w, eflags_1)
    *edi_15 = temp0_28
    int32_t* esp_32 = *(entry_result + 0x6c) * 0x53800017
    char temp46_1 = *eax_1
    *eax_1 += (edx.w - 1).b
    c_9 = temp46_1 + (edx.w - 1).b u< temp46_1
    uint8_t* edi_16
    uint8_t temp0_29
    temp0_29, edi_16 = __insb(edi_15, edx.w - 1, eflags_1)
    *edi_16 = temp0_29
    edi_17 = *esp_32
    esi_2 = esp_32[1]
    ebp = esp_32[2]
    entry_result = esp_32[4]
    edx = esp_32[5]
    arg3 = esp_32[6]
    eax_1 = esp_32[7]
    esp_36 = &esp_32[8]
    
    if (c_9)
        goto label_4a3ce6
    
    char* temp53_1 = edx
    edx = &edx[1]
    z_7 = temp53_1 == 0xffffffff
    o_5 = add_overflow(temp53_1, 1)
    
    if (z_7)
        if (z_7)
            goto label_4a3ced
        
        esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
        entry_result = &entry_result[1]
        uint8_t* edi_18
        uint8_t temp0_30
        temp0_30, edi_18 = __insb(edi_17, edx.w, eflags_1)
        *edi_18 = temp0_30
        esp_1 = *(entry_result + 0x6b) * 0x57b0000c
        edx -= 1
        *0x72616c41 += eax_1.b
        char temp0_31
        temp0_31, edi_1 = __insd(edi_18, edx.w, eflags_1)
        *edi_1 = temp0_31
    label_4a3c90:
        *(esp_1 - 4) = zx.d(ss)
        esp_1 -= 4
    label_4a3c91:
        *eax_1 += entry_result.b
    label_4a3c93:
        int32_t eax_24 = *esp_1
        esp_1 = &esp_1[1]
        edx -= 1
        *edi_1 += arg3.b
        eax_1 = eax_24 - 1
        bool z_8 = eax_24 == 1
        uint8_t temp0_32
        temp0_32, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_32
        
        if (add_overflow(eax_24, 0xffffffff))
            goto label_4a3cde
        
        if (z_8)
            if (not(z_8))
                esi_17 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
                entry_result = &entry_result[1]
                uint8_t temp0_33
                temp0_33, edi_1 = __insb(edi_1, edx.w, eflags_1)
                *edi_1 = temp0_33
                esp_1 = *(entry_result + 0x6b) * 0x58280012
                goto label_4a3caa
            
            char temp0_40
            temp0_40, eflags_1 = __arpl_memw_gpr16(*(entry_result + 0x16), ebp.w)
            *(entry_result + 0x16) = temp0_40
        
        eax_1 = *esp_1
        esp_36 = &esp_1[1]
    label_4a3d15:
        edx -= 1
        char temp64_1 = *edi_1
        *edi_1 += arg3.b
        char* temp65_1 = eax_1
        eax_1 -= 1
        uint8_t temp0_41
        temp0_41, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_41
        
        if (add_overflow(temp65_1, 0xffffffff))
            eax_1 = adc.d(eax_1, 0x4a595000, temp64_1 + arg3.b u< temp64_1)
            goto label_4a3d63
        
        __bound_gprv_mema32(ebp, *(edi_1 + 0x75))
        
        if (temp65_1 == 1)
            goto label_4a3d53
        
        entry_result = &entry_result[1]
        uint8_t temp0_42
        temp0_42, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_42
        esp_1 = *(entry_result + 0x6b) * 0x58d80011
        goto label_4a3d2b
    
    char temp0_38
    temp0_38, edi_1 = __insd(edi_17, edx.w, eflags_1)
    *edi_1 = temp0_38
else
label_4a3aed:
    *(eax_1 + 0x61) ^= edx
    ebp = *(esi_2 + 0x74) * 0xc8786f62
label_4a3af7:
    eax_1 = &eax_1[*eax_1]
    char temp19_1 = *0x61440d00
    *0x61440d00 += eax_1.b
    
    if (temp19_1 == neg.b(eax_1.b))
        goto label_4a3b66
    
    void* eax_14 = &eax_1[*eax_1]
    *0x50410a00 += eax_14.b
    *(esp_1 - 4) = eax_14
    edi_1 = *(esp_1 - 4)
    esi_17 = *esp_1
    entry_result = esp_1[3]
    edx = esp_1[4]
    arg3 = esp_1[5]
    int32_t eax_15 = esp_1[6]
    esp_1 = &esp_1[7]
    ebp = *(esi_17 + 0x74) * 0xd0786f42
    eax_1 = eax_15 + *eax_15
    char temp21_1 = *0x694d0c00
    *0x694d0c00 += eax_1.b
    c_3 = temp21_1 + eax_1.b u< temp21_1
    z_3 = temp21_1 == neg.b(eax_1.b)
    s_3 = temp21_1 + eax_1.b s< 0
    o_2 = add_overflow(temp21_1, eax_1.b)
    
    if (c_3)
        *(esp_1 - 4) = eax_1
        int32_t ecx_1 = esp_1[5]
        int32_t eax_16 = esp_1[6]
        *0x65570f00 += eax_16.b + (*eax_16).b
        void** esp_17 = *(gsbase + ecx_1 + 0x79) * 0x50
        edi_1 = *esp_17
        esi_2 = esp_17[1]
        entry_result = esp_17[4]
        void* edx_6 = esp_17[5]
        arg3 = esp_17[6]
        int32_t eax_18 = esp_17[7]
        eax_1 = eax_18 + *eax_18
        *(eax_1 * 2) += eax_1.b
        esp_17[7] = zx.d(cs)
        esp_1 = &esp_17[7]
        ebp = *(esi_2 + 0x69) * 0x657a696d
        edx = edx_6 + 1
        z_4 = edx_6 == 0xffffffff
        s_3 = edx_6 + 1 s< 0
        goto label_4a3b54
    
    if (not(c_3))
        goto label_4a3b8b
    
    if (c_3)
        eax_1.b += 4
    label_4a3bf1:
        *eax_1 += eax_1.b
        char temp34_1 = eax_1.b
        char temp35_1 = *eax_1
        eax_1.b += *eax_1
        bool c_6 = temp34_1 + temp35_1 u< temp34_1
        int32_t temp36_1 = *(ebp + 0x49)
        *(ebp + 0x49) = adc.d(temp36_1, arg3, c_6)
        z_5 = adc.d(temp36_1, arg3, c_6) == 0
        goto label_4a3bf8
    
label_4a3c63:
    
    if (z_3)
        if (z_3)
            goto label_4a3cd6
        
        goto label_4a3c67
    
    o_7 = add_overflow(arg3, 0xffffffff)
    edi_1 = *esp_1
    *esp_1 = entry_result
label_4a3cdc:
    
    if (o_7)
        goto label_4a3d43
    
label_4a3cde:
    edi_17 = *esp_1
    esp_1[1]
    void* ebx_5 = esp_1[4]
    edx = esp_1[5]
    arg3 = esp_1[6]
    esp_36 = &esp_1[8]
    eax_1 = *(ebx_5 + 0x6c) * 0x69
    char temp0_36
    temp0_36, eflags_1 = __arpl_memw_gpr16(*(ebx_5 + 0x17), (esp_1[2]).w)
    *(ebx_5 + 0x17) = temp0_36
label_4a3ce6:
    char temp51_1 = eax_1[0x10004a58]
    eax_1[0x10004a58] += eax_1:1.b
    c_9 = temp51_1 + eax_1:1.b u< temp51_1
    z_7 = arg3 == 0xffffffff
    o_5 = add_overflow(arg3, 1)
label_4a3ced:
    uint8_t* edi_19
    uint8_t temp0_37
    temp0_37, edi_19 = __insb(edi_17, edx.w, eflags_1)
    *edi_19 = temp0_37
    edi_1 = *esp_36
    esi_2 = *(esp_36 + 4)
    ebp = *(esp_36 + 8)
    entry_result = *(esp_36 + 0x10)
    edx = *(esp_36 + 0x14)
    arg3 = *(esp_36 + 0x18)
    eax_1 = *(esp_36 + 0x1c)
    esp_36 += 0x20
    
    if (c_9)
        eax_1 = adc.d(eax_1, 0x4a595000, c_9)
        goto label_4a3d63

if (not(c_9))
    entry_result = &entry_result[1]
    goto label_4a3d5a

if (not(z_7))
    if (not(o_5))
        entry_result = &entry_result[1]
        uint8_t temp0_39
        temp0_39, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_39
        esp_38 = *(entry_result + 0x6b) * 0x58c80015
        goto label_4a3d00
    
    eax_1 = *esp_36
    esp_1 = esp_36 + 4
label_4a3d2b:
    edx -= 1
label_4a3d2c:
    *edx += arg3.b
    void* temp70_1 = ebp
    ebp += 1
    
    if (temp70_1 + 1 s< 0)
        goto label_4a3d9a
    
    if (temp70_1 == 0xffffffff)
        *(esp_1 - 4) = zx.d(cs)
        esp_36 = esp_1 - 4
    else
        uint8_t temp0_43
        temp0_43, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_43
        esp_1 = *(entry_result + 0x6c) * 0x58e00014
    label_4a3d3c:
        edx -= 1
    label_4a3d3d:
        *0x735f494d += arg3.b
    label_4a3d43:
        char* edi_20
        char temp0_44
        temp0_44, edi_20 = __insd(edi_1, edx.w, eflags_1)
        *edi_20 = temp0_44
        esi_2 = esp_1[1]
        ebp = esp_1[2]
        void* ebx_7 = esp_1[4]
        int32_t edx_9 = esp_1[5]
        arg3 = esp_1[6]
        eax_1 = esp_1[7]
        uint8_t* edi_22
        uint8_t temp0_45
        temp0_45, edi_22 = __insb(*esp_1, edx_9.w, eflags_1)
        *edi_22 = temp0_45
        uint8_t* edi_23
        uint8_t temp0_46
        temp0_46, edi_23 = __insb(edi_22, edx_9.w, eflags_1)
        *edi_23 = temp0_46
        entry_result = ebx_7 + 1
        uint8_t* edi_24
        uint8_t temp0_47
        temp0_47, edi_24 = __insb(edi_23, edx_9.w, eflags_1)
        *edi_24 = temp0_47
        esp_36 = *(entry_result + 0x6b) * 0x59180012
        edx = edx_9 - 1
        *entry_result += arg3.b
    label_4a3d53:
        ebp -= 1
        arg3 -= 1
        edi_1 = *esp_36
        __bound_gprv_mema32(ebp, *(arg3 + 0x67))
        entry_result = &entry_result[1]
    label_4a3d5a:
        uint8_t temp0_48
        temp0_48, edi_1 = __insb(edi_1, edx.w, eflags_1)
        *edi_1 = temp0_48
        esp_36 = *(entry_result + 0x6b) * 0x59500015
        edx -= 1
    label_4a3d63:
        *esi_2 += arg3.b
    
    *(esp_36 - 4) = entry_result
    *(esp_36 - 8) = eax_1
    arg3 -= 1
    char temp0_49
    temp0_49, eflags_1 = __arpl_memw_gpr16(*(edi_1 + 0x6e), ebp.w)
    *(edi_1 + 0x6e) = temp0_49
    goto label_4a3d6c

esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
label_4a3d6c:
__bound_gprv_mema32(ebp, *(entry_result + (eax_1 << 1) + 0x6c))
esp_39 = *(entry_result + 0x6b) * 0x59780012
edx -= 1
char temp67_1 = *entry_result
*entry_result += arg3.b
c_10 = temp67_1 + arg3.b u< temp67_1
esi_2 += 1
label_4a3d7b:
esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)

if (c_10)
    goto label_4a3deb

void* esp_43 = esp_39 + 1
int32_t esp_52
char* edi_25
bool c_11
bool z_14
bool z_18
bool s_7
bool s_9

if (c_10)
    if (c_10)
        goto label_4a3df3
    
    if (esp_39 + 1 s< 0)
        eax_1[0xa004a59] += edx.b
        *(esp_43 - 4) = esp_43
        *(esp_43 - 8) = 0x64616572
        esp_1 = esp_43 - 7
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    label_4a3d94:
        esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    label_4a3d95:
        *(esp_1 - 4) = zx.d(ss)
        esp_43 = esp_1 - 4
    
    eax_1.b *= 2
    arg3 = *esp_43
    esp_1 = esp_43 + 4
label_4a3d9a:
    edx -= 1
    char temp69_1 = *edi_1
    *edi_1 += arg3.b
    c_10 = temp69_1 + arg3.b u< temp69_1
    bool s_6 = temp69_1 + arg3.b s< 0
    *(esp_1 - 4) = entry_result
    char* edi_29
    bool z_13
    bool o_9
    bool o_11
    
    if (s_6)
        *(esp_1 - 8) = esp_1 - 4
        esp_39 = esp_1 - 8
        
        if (c_10)
            esp_52 = 0x11004a5a
        label_4a3e0a:
            edi_25 = *(esp_52 - 1)
            uint16_t* esi_31 = *(esp_52 + 3)
            int32_t ebp_13 = *(esp_52 + 7)
            entry_result = *(esp_52 + 0xf)
            edx = *(esp_52 + 0x13)
            arg3 = *(esp_52 + 0x17)
            eax_1 = *(esp_52 + 0x1b)
            esp_43 = esp_52 + 0x1f
            int32_t esi_32 = __outsb(edx.w, *esi_31, esi_31, eflags_1)
            ebp = ebp_13 - 1
            z_13 = ebp_13 == 1
            o_11 = add_overflow(ebp_13, 0xffffffff)
            esi_2 = __outsb(edx.w, *(gsbase + esi_32), esi_32, eflags_1)
            
            if (z_13)
                if (z_13)
                    if (not(c_10))
                        goto label_4a3e8f
                    
                    goto label_4a3e7b
                
                char temp0_57
                temp0_57, edi_29 = __insd(edi_25, edx.w, eflags_1)
                *edi_29 = temp0_57
                goto label_4a3e16
            
            *(esp_43 - 4) = ebp
            esp_43 -= 4
        label_4a3e5c:
            
            if (o_11)
                goto label_4a3ec2
            
            edi_25 = *esp_43
            esi_2 = *(esp_43 + 4)
            ebp = *(esp_43 + 8)
            entry_result = *(esp_43 + 0x10)
            edx = *(esp_43 + 0x14)
            arg3 = *(esp_43 + 0x18)
            eax_1 = *(esp_43 + 0x1c)
            esp_43 += 0x20
            
            if (z_13)
                goto label_4a3ec6
            
            char* temp96_1 = eax_1
            eax_1 -= 1
            esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
            
            if (temp96_1 != 1)
                goto label_4a3ed7
            
            if (not(c_10))
                goto label_4a3e7b
            
            *entry_result += eax_1.b
            edx -= 1
        label_4a3e6b:
            char temp79_1 = *0x61647055
            *0x61647055 += arg3.b
            c_10 = temp79_1 + arg3.b u< temp79_1
            z_14 = temp79_1 == neg.b(arg3.b)
            goto label_4a3e71
        
        void* esp_47
        
        if (not(s_6))
            *eax_1 = sbb.d(*eax_1, eax_1, c_10)
        label_4a3deb:
            *(esp_39 - 4) = eax_1
            *(esp_39 - 8) = arg3
            *(esp_39 - 0xc) = edx
            *(esp_39 - 0x10) = entry_result
            *(esp_39 - 0x14) = esp_39 - 0x10
            *(esp_39 - 0x18) = ebp
            *(esp_39 - 0x1c) = esi_2
            *(esp_39 - 0x20) = edi_1
            edx = *(esp_39 - 0x20)
            esp_47 = esp_39 - 0x1c
        label_4a3dee:
            char temp71_1 = *(edx - 1)
            *(edx - 1) += (edx - 1).b
            c_10 = temp71_1 + (edx - 1).b u< temp71_1
            edi_1 = *(esp_47 - 1)
            uint16_t* esi_29 = *(esp_47 + 3)
            *(esp_47 + 7)
            entry_result = *(esp_47 + 0xf)
            edx = *(esp_47 + 0x13)
            arg3 = *(esp_47 + 0x17)
            eax_1 = *(esp_47 + 0x1b)
            esp_43 = esp_47 + 0x1f
            esi_2 = __outsb(edx.w, *esi_29, esi_29, eflags_1)
        label_4a3df3:
            *(esp_43 - 4) = entry_result
            esp_43 -= 4
            uint8_t temp0_53
            temp0_53, edi_25 = __insb(edi_1, edx.w, eflags_1)
            *edi_25 = temp0_53
            goto label_4a3df7
        
        __bound_gprv_mema32(ebp, *(entry_result + (eax_1 << 1) + 0x6c))
        esp_47 = *(entry_result + 0x6b) * 0x59f40012
        edx -= 1
        *entry_result += arg3.b
        void* ecx_7 = &arg3[1]
        __bound_gprv_mema32(ebp, *(edi_1 + 0x75))
        
        if (arg3 == 0xffffffff)
            eax_1[0x5a] += eax_1:1.b
            goto label_4a3dee
        
        entry_result = &entry_result[1]
        uint8_t temp0_50
        temp0_50, edi_25 = __insb(edi_1, edx.w, eflags_1)
        *edi_25 = temp0_50
        *(entry_result + 0x6b)
        edx -= 1
        *entry_result += ecx_7.b
        arg3 = ecx_7 + 1
        __bound_gprv_mema32(ebp, *(edi_25 + 0x75))
        
        if (ecx_7 == 0xffffffff)
            goto label_4a3dfe
        
        entry_result = &entry_result[1]
        uint8_t* edi_26
        uint8_t temp0_51
        temp0_51, edi_26 = __insb(edi_25, edx.w, eflags_1)
        *edi_26 = temp0_51
        esp_43 = *(entry_result + 0x6b) * 0x5a200019
        edx -= 1
        *edx += edx.b
        edi_25 = edi_26 - 1
        o_9 = add_overflow(edi_26, 0xffffffff)
        
        if (o_9)
            *(esp_43 - 4) = entry_result
            esp_43 -= 4
            goto label_4a3e4f
        
        ebp = *(edi_25 + 0x6e) * 0x74754273
        
        if (edi_26 == 1)
            char temp0_61
            temp0_61, eflags_1 = __arpl_memw_gpr16(*(eax_1 + 0x12), ebp.w)
            *(eax_1 + 0x12) = temp0_61
            goto label_4a3e55
        
        __outsb(edx.w, *esi_2, esi_2, eflags_1)
        uint8_t* edi_27
        uint8_t temp0_52
        temp0_52, edi_27 = __insb(edi_25, edx.w, eflags_1)
        *edi_27 = temp0_52
        esp_47 = *(entry_result + 0x6c) * 0x5a600019
        goto label_4a3dee
    
    char temp0_56
    temp0_56, edi_29 = __insd(edi_1, edx.w, eflags_1)
    *edi_29 = temp0_56
label_4a3e16:
    uint8_t* edi_30
    uint8_t temp0_58
    temp0_58, edi_30 = __insb(edi_29, edx.w, eflags_1)
    *edi_30 = temp0_58
    void* esp_55 = *(entry_result + 0x6c) * 0x5b440013
    char temp73_1 = *(esp_55 + (arg3 << 1))
    *(esp_55 + (arg3 << 1)) += arg3.b
    c_11 = temp73_1 + arg3.b u< temp73_1
    __outsd(edx.w - 1, *esi_2, esi_2, eflags_1)
    edi_25 = *(esp_55 + 0x1f)
    uint16_t* esi_34 = *(esp_55 + 0x23)
    ebp = *(esp_55 + 0x27)
    entry_result = *(esp_55 + 0x2f)
    edx = *(esp_55 + 0x33)
    arg3 = *(esp_55 + 0x37)
    eax_1 = *(esp_55 + 0x3b)
    esp_43 = esp_55 + 0x3f
    esi_2 = __outsb(edx.w, *esi_34, esi_34, eflags_1)
    
    if (esp_55 != 0xffffffe1)
        goto label_4a3e8c
    
    char* temp75_1 = eax_1
    int32_t temp76_1 = *(gsbase + entry_result + esi_2)
    eax_1 = adc.d(temp75_1, temp76_1, c_11)
    bool o_12 = unimplemented  {adc eax, dword [gs:bx+si]}
    
    if (not(o_12))
        edx -= 1
        char temp80_1 = *((eax_1 << 1) + 0x6c62616e)
        *((eax_1 << 1) + 0x6c62616e) += arg3.b
        *(esp_43 - 4) = entry_result
        esp_43 -= 4
        
        if (add_overflow(temp80_1, arg3.b))
            *(gsbase + eax_1) = adc.d(*(gsbase + eax_1), eax_1, temp80_1 + arg3.b u< temp80_1)
            edx -= 1
            goto label_4a3ea8
        
        char temp0_59
        temp0_59, eflags_1 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x14), ebp.w)
        *(gsbase + eax_1 + 0x14) = temp0_59
        *((entry_result << 1) + 0x440d004a) += edx:1.b
        *(entry_result + 0x61)
        esi_2 = *(entry_result + 0x61) * 0x53656c62
        o_9 = unimplemented  {imul esi, dword [ebx+0x61], 0x53656c62}
    label_4a3e4f:
        
        if (o_9)
            goto label_4a3eb7
        
        char temp0_60
        temp0_60, eflags_1 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x12), ebp.w)
        *(gsbase + eax_1 + 0x12) = temp0_60
    label_4a3e55:
        char temp99_1 = *(ebp + (entry_result << 1) + 0x550b004a)
        *(ebp + (entry_result << 1) + 0x550b004a) += arg3:1.b
        c_10 = temp99_1 + arg3:1.b u< temp99_1
        z_13 = temp99_1 == neg.b(arg3:1.b)
        o_11 = add_overflow(temp99_1, arg3:1.b)
        goto label_4a3e5c
    
    eax_1 = adc.d(eax_1, 0x4a660400, 
        adc.d(temp75_1, temp76_1, c_11) u< temp75_1
            || (c_11 && adc.d(temp75_1, temp76_1, c_11) == temp75_1))
label_4a3e93:
    char temp84_1 = *esi_2
    *esi_2 += arg3.b
    c_10 = temp84_1 + arg3.b u< temp84_1
    bool z_15 = temp84_1 == neg.b(arg3.b)
    *(esp_43 - 4) = ebp
    esp_43 -= 4
    
    if (not(add_overflow(temp84_1, arg3.b)))
        edi_25 = *esp_43
        void* esi_35 = *(esp_43 + 4)
        ebp = *(esp_43 + 8)
        entry_result = *(esp_43 + 0x10)
        edx = *(esp_43 + 0x14)
        arg3 = *(esp_43 + 0x18)
        eax_1 = *(esp_43 + 0x1c)
        esp_43 += 0x20
        
        if (z_15)
            char temp0_63
            temp0_63, eflags_1 = __arpl_memw_gpr16(*(gsbase + ebp + 0x74), esi_35.w)
            *(gsbase + ebp + 0x74) = temp0_63
        label_4a3f04:
            eax_1.b = adc.b(eax_1.b, 0, c_10)
            int32_t esp_69 = *esp_43
            *edx |= 0xd
            entry_result = &entry_result[1]
            *(esp_69 - 4) = 0x526b6365
            esp_43 = esp_69 - 4
            goto label_4a3f12
        
        *(esi_35 + 0x69)
        ebp = *(esi_35 + 0x69) * 0x656d6954
        bool c_14 = unimplemented  {imul ebp, dword [esi+0x69], 0x656d6954}
        *eax_1 = adc.d(*eax_1, eax_1, c_14)
        edx -= 1
        goto label_4a3ea8
    
    if (z_15)
        goto label_4a3efe
    
    if (z_15)
        eax_1:1.b += arg3:1.b
    label_4a3f89:
        *(esp_43 - 4) = 0x4a
        esp_43 -= 4
    label_4a3f8b:
        *entry_result += edx.b
        ebp = *(esi_2 + 0x69) * 0x657a696d
        char* temp98_1 = edx
        edx = &edx[1]
        z_18 = temp98_1 == 0xffffffff
        s_9 = &temp98_1[1] s< 0
        
        if (not(z_18))
            if (z_18)
                goto label_4a407e
            
            goto label_4a400f
        
        if (not(z_18))
            goto label_4a3f9a
        
        char* edi_37
        char temp0_77
        temp0_77, edi_37 = __insd(edi_25, edx.w, eflags_1)
        *edi_37 = temp0_77
    label_4a400a:
        *(edx + 0x65)
    label_4a4011:
        edi_25 = *esp_43
        esi_2 = *(esp_43 + 4)
        ebp = *(esp_43 + 8)
        entry_result = *(esp_43 + 0x10)
        edx = *(esp_43 + 0x14)
        arg3 = *(esp_43 + 0x18)
        eax_1 = *(esp_43 + 0x1c)
        esp_43 += 0x20
        
        if (not(s_9))
            goto label_4a4046
        
        entry_result = &entry_result[1]
        uint8_t temp0_78
        temp0_78, edi_25 = __insb(edi_25, edx.w, eflags_1)
        *edi_25 = temp0_78
        goto label_4a4016
    
    eax_1[0x6a] += edx:1.b
label_4a3f72:
    char temp108_1 = *(edx - 1)
    *(edx - 1) += (edx - 1).b
    c_10 = temp108_1 + (edx - 1).b u< temp108_1
    void* ebx_12 = *(esp_43 + 0x10)
    char temp0_68
    temp0_68, eflags_1 = __arpl_memw_gpr16(*(ebx_12 + 0x50), (*(esp_43 + 8)).w)
    *(ebx_12 + 0x50) = temp0_68
    int32_t edi_32 = *(esp_43 + 0x20)
    uint16_t* esi_42 = *(esp_43 + 0x24)
    uint16_t* ebp_19 = *(esp_43 + 0x28)
    entry_result = *(esp_43 + 0x30)
    edx = *(esp_43 + 0x34)
    arg3 = *(esp_43 + 0x38)
    eax_1 = *(esp_43 + 0x3c)
    esp_43 += 0x40
    uint16_t* esi_43 = __outsb(edx.w, *esi_42, esi_42, eflags_1)
    uint8_t temp0_69
    temp0_69, edi_25 = __insb(edi_32, edx.w, eflags_1)
    *edi_25 = temp0_69
    ebp = ebp_19 - 1
    z_14 = ebp_19 == 1
    s_7 = ebp_19 - 1 s< 0
    esi_2 = __outsd(edx.w, *esi_43, esi_43, eflags_1)
    
    if (z_14)
        void* temp114_1 = esp_43
        esp_43 += 1
        z_14 = temp114_1 == 0xffffffff
        s_7 = temp114_1 + 1 s< 0
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        
        if (z_14 || c_10)
            eax_1.b = sbb.b(eax_1.b, *eax_1, c_10)
            eax_1.b = __in_al_dx(edx.w, eflags_1)
            goto label_4a3f89
    
    if (not(z_14))
        goto label_4a3ff6
    
label_4a4068:
    *(esp_43 - 4) = esp_43
    esp_43 -= 4
    
    if (not(c_10))
        goto label_4a406b
    
label_4a40cc:
    edi_25 = *esp_43
    esi_2 = *(esp_43 + 4)
    *(esp_43 + 8)
    *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    eax_1 = *(esp_43 + 0x1c)
    esp_43 += 0x20
label_4a40cd:
    *(esi_2 + 0x46)
label_4a40d4:
    *edx
    *edi_25 = *esi_2
    *(edi_25 + 1) = *(esi_2 + 1)
    *eax_1 += arg3:1.b
    *esp_43
    esi_2 = *(esp_43 + 4)
    *(esp_43 + 8)
    *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    *(esp_43 + 0x1c)
    esp_43 += 0x20
    goto label_4a40e0

uint8_t temp0_54
temp0_54, edi_25 = __insb(edi_1, edx.w, eflags_1)
*edi_25 = temp0_54
label_4a3df7:
char* temp72_1 = edx
edx = &edx[1]
z_14 = temp72_1 == 0xffffffff
s_7 = &temp72_1[1] s< 0

if (z_14)
    if (z_14)
        goto label_4a3e6b
    
    __outsb(edx.w, *esi_2, esi_2, eflags_1)
label_4a3dfe:
    uint8_t* edi_28
    uint8_t temp0_55
    temp0_55, edi_28 = __insb(edi_25, edx.w, eflags_1)
    *edi_28 = temp0_55
    esp_52 = *(entry_result + 0x6c) * 0x5abc0018
    char temp82_1 = *arg3
    *arg3 += edx.b - 1
    c_10 = temp82_1 + edx.b - 1 u< temp82_1
    goto label_4a3e0a

bool o_17

if (not(add_overflow(temp72_1, 1)))
    edi_25 = *esp_43
    esi_2 = *(esp_43 + 4)
    *(esp_43 + 8)
    entry_result = *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    eax_1 = *(esp_43 + 0x1c)
    esp_43 += 0x20
label_4a3e71:
    
    if (z_14)
        goto label_4a3ed9
    
    *(esi_2 + 0x75)
label_4a3e7b:
    char temp89_1 = entry_result[0x550d004a]
    entry_result[0x550d004a] += edx:1.b
    c_11 = temp89_1 + edx:1.b u< temp89_1
    z_14 = temp89_1 == neg.b(edx:1.b)
    
    if (add_overflow(temp89_1, edx:1.b))
        goto label_4a3ee8
    
    edi_25 = *esp_43
    esi_2 = *(esp_43 + 4)
    ebp = *(esp_43 + 8)
    entry_result = *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    eax_1 = *(esp_43 + 0x1c)
    esp_43 += 0x20
    
    if (z_14)
        __outsb(edx.w, *esi_2, esi_2, eflags_1)
        
        if (c_11)
            *eax_1 += entry_result:1.b
            goto label_4a3ef2
        
        entry_result[(eax_1 << 2) + 0x4a] += entry_result.b
        *0x63656843 += arg3.b
        edx = *(edx + 0x65) * 0x67
        esi_2 = *(entry_result + 0x74) * 0x137972
        goto label_4a3f1b
    
    *(esp_43 - 4) = entry_result
    esp_43 -= 4
    char temp0_62
    temp0_62, eflags_1 = __arpl_memw_gpr16(*(gsbase + edi_25 + 0x6e), ebp.w)
    *(gsbase + edi_25 + 0x6e) = temp0_62
label_4a3e8c:
    
    if (c_11)
    label_4a3e8f:
        *esi_2 += eax_1.b
        edx -= 1
        goto label_4a3e93
    
    *(esp_43 + 0x4a) += eax_1:1.b
label_4a3ea8:
    char temp83_1 = *edx
    *edx += arg3.b
    bool c_15 = temp83_1 + arg3.b u< temp83_1
    bool z_16 = temp83_1 == neg.b(arg3.b)
    *(esp_43 - 4) = ebp
    
    if (add_overflow(temp83_1, arg3.b))
        *(esp_43 - 8) = edx
        esp_43 -= 8
    label_4a3f12:
        esi_2 = *(gsbase + ebp + edi_25 + 0x74) * 0x137972
    label_4a3f1b:
        edx[0x4a] += entry_result:1.b
        char temp97_1 = edi_25[arg3 << 1]
        edi_25[arg3 << 1] += arg3.b
        
        if (add_overflow(temp97_1, arg3.b))
            eax_1.b = __in_al_dx(edx.w, eflags_1)
            goto label_4a3f89
        
        __outsb(edx.w, *esi_2, esi_2, eflags_1)
        *(esp_43 - 4) = edx
        esp_43 -= 4
        *(gsbase + ebp + edi_25 + 0x74)
        arg3[0x4a]
        goto label_4a3f31
    
    edi_25 = *(esp_43 - 4)
    esi_2 = *esp_43
    ebp = *(esp_43 + 4)
    entry_result = *(esp_43 + 0xc)
    edx = *(esp_43 + 0x10)
    arg3 = *(esp_43 + 0x14)
    eax_1 = *(esp_43 + 0x18)
    esp_43 += 0x1c
    
    if (not(z_16))
        bool cond:45_1 = esp_43 == 0xffffffff
        edi_25 = *(esp_43 + 1)
        esi_2 = *(esp_43 + 5)
        ebp = *(esp_43 + 9)
        entry_result = *(esp_43 + 0x11)
        edx = *(esp_43 + 0x15)
        arg3 = *(esp_43 + 0x19)
        eax_1 = *(esp_43 + 0x1d)
        esp_43 += 0x21
        
        if (cond:45_1)
            *eax_1
            goto label_4a3f1b
        
        *eax_1 = adc.d(*eax_1, eax_1, c_15)
    label_4a3eb7:
        *(esp_43 - 4) = 0x4a
        *edx += arg3.b
        entry_result = &entry_result[1]
        *(esp_43 - 8) = 0x65676e61
        esp_43 -= 8
        ebp -= 1
    label_4a3ec2:
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        *esp_43
        esp_43 += 2
    label_4a3ec6:
        char temp94_1 = edi_25[(ebp << 1) + 0x4310004a]
        edi_25[(ebp << 1) + 0x4310004a] += eax_1:1.b
        c_10 = temp94_1 + eax_1:1.b u< temp94_1
        *(esp_43 - 4) = 0x65676e61
        esp_43 -= 4
        char* temp95_1 = edx
        edx = &edx[1]
        z_14 = temp95_1 == 0xffffffff
        s_7 = &temp95_1[1] s< 0
        o_17 = add_overflow(temp95_1, 1)
        
        if (not(z_14))
            if (z_14)
                goto label_4a3fa2
            
            goto label_4a3f4b
        
        if (z_14)
            c_10 = false
            z_14 = (eax_1 | 0x57746547) == 0
            s_7 = (eax_1 | 0x57746547) s< 0
            goto label_4a3f4b
        
        goto label_4a3ed7
    
    if (not(c_15))
        goto label_4a3f8b
    
    if (not(c_15))
        *eax_1
        goto label_4a3f1b
    
    edi_25 = *(edx + 0x65) * 0x74747542
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
label_4a3f9a:
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    entry_result = &entry_result[1]
    uint8_t temp0_71
    temp0_71, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_71
    *(entry_result + 0x6b)
    edx -= 1
label_4a3fa5:
    *edx += arg3.b
    void* temp116_1 = ebp
    ebp += 1
    
    if (temp116_1 + 1 s>= 0)
        if (temp116_1 == 0xffffffff)
        label_4a3fdf:
            uint8_t* edi_33
            uint8_t temp0_75
            temp0_75, edi_33 = __insb(edi_25, edx.w, eflags_1)
            *edi_33 = temp0_75
            esp_43 = *(entry_result + 0x6c) * 0x79b4001b
            edx -= 1
            char temp123_1 = *((arg3 << 1) + 0x6d696e69)
            *((arg3 << 1) + 0x6d696e69) += edx.b
            s_7 = temp123_1 + edx.b s< 0
        label_4a3fef:
            *(edx + 0x65)
        label_4a3ff6:
            *(esp_43 + 4)
            *(esp_43 + 8)
            int32_t edx_16 = *(esp_43 + 0x14)
            int32_t ecx_9 = *(esp_43 + 0x18)
            
            if (not(s_7))
                *(esp_43 + 0x1c) = *(esp_43 + 0x1c)
                esp_43 += 0x1c
                goto label_4a402b
            
            void* ebx_15 = *(esp_43 + 0x10) + 1
            uint8_t* edi_36
            uint8_t temp0_76
            temp0_76, edi_36 = __insb(*esp_43, edx_16.w, eflags_1)
            *edi_36 = temp0_76
            esp_43 = *(ebx_15 + 0x6b) * 0x79c0001b
            edx = edx_16 - 1
            char temp122_1 = *((ecx_9 << 1) + 0x6d696e69)
            *((ecx_9 << 1) + 0x6d696e69) += edx.b
            s_9 = temp122_1 + edx.b s< 0
            goto label_4a400a
        
        goto label_4a3fac
    
    eax_1.b ^= entry_result[0x6c]
label_4a4016:
    int32_t esp_83 = *(entry_result + 0x6b) * 0x79cc0016
    *edi_25 += arg3.b
    *(esp_83 - 4) = esp_83
    *(esp_83 - 8) = eax_1
    *(esp_83 - 8)
    *(esp_83 + 8)
    *(esp_83 + 0xc)
    *(esp_83 + 0x10)
    *(esp_83 + 0x14)
    esp_43 = esp_83 + 0x18
    *(*(esp_83 - 4) + 0x74)
label_4a402b:
    *esp_43
    char* ebx_17 = *(esp_43 + 0x10)
    *(esp_43 + 0x14)
    char ecx_11 = (*(esp_43 + 0x18)).b
    int32_t* eax_31 = *(esp_43 + 0x1c)
    *(*(esp_43 + 4) + 0x74)
    char temp117_1 = *ebx_17
    *ebx_17 += ecx_11
    *(esp_43 + 0x1c) = ebx_17
    
    if (add_overflow(temp117_1, ecx_11))
        *eax_31 |= eax_31
        trap(0xd)
    
    edi_25 = *(esp_43 + 0x1c)
    *(esp_43 + 0x20)
    ebp = *(esp_43 + 0x24)
    entry_result = *(esp_43 + 0x2c)
    edx = *(esp_43 + 0x30)
    arg3 = *(esp_43 + 0x34)
    eax_1 = *(esp_43 + 0x38)
    goto label_4a403a

void* esp_97
void* esp_72

if (z_14)
    *(esp_43 - 4) = edi_25
    esp_43 -= 4
label_4a3f4b:
    edi_25 = *esp_43
    esi_2 = *(esp_43 + 4)
    ebp = *(esp_43 + 8)
    entry_result = *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    eax_1 = *(esp_43 + 0x1c)
    esp_72 = esp_43 + 0x20
label_4a3f4c:
    
    if (z_14 || c_10)
        *(esp_72 - 4) = eax_1
        *(esp_72 - 8) = arg3
        *(esp_72 - 0xc) = edx
        *(esp_72 - 0x10) = entry_result
        *(esp_72 - 0x14) = esp_72 - 0x10
        *(esp_72 - 0x18) = ebp
        *(esp_72 - 0x1c) = esi_2
        *(esp_72 - 0x20) = edi_25
        esp_43 = esp_72 - 0x20
        
        if (s_7)
            goto label_4a3fb6
        
        arg3[0x4a]
        arg3[0x4a] = arg3[0x4a]
        bool c_18 = unimplemented  {sar byte [ecx+0x4a], 0x0}
        char temp101_1 = eax_1.b
        eax_1.b = adc.b(temp101_1, 0x4d, c_18)
        z_18 = adc.b(temp101_1, 0x4d, c_18) == 0
        s_9 = adc.b(temp101_1, 0x4d, c_18) s< 0
        ebp = *(esi_2 + 0x69) * 0x657a696d
        
        if (z_18)
            goto label_4a407e
        
    label_4a400f:
        
        if (not(z_18))
            goto label_4a4011
        
        uint8_t temp0_85
        temp0_85, edi_25 = __insb(edi_25, edx.w, eflags_1)
        *edi_25 = temp0_85
        goto label_4a4084
    
    *(esp_72 - 4) = esi_2
    esp_43 = esp_72 - 4
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    uint8_t temp0_67
    temp0_67, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_67
    bool c_17
    bool o_20
    
    if (not(z_14))
        *(esp_43 - 4) = arg3
        esp_43 -= 4
    label_4a3fc2:
        
        if (not(z_14))
            goto label_4a4029
        
        if (not(c_10))
            char temp121_1 = *esi_2
            *esi_2 += edx.b
            c_17 = temp121_1 + edx.b u< temp121_1
            z_18 = temp121_1 == neg.b(edx.b)
            s_9 = temp121_1 + edx.b s< 0
            o_20 = add_overflow(temp121_1, edx.b)
            *(esp_43 - 4) = edi_25
            edi_25 = *(esp_43 - 4)
            void* esi_44 = *esp_43
            ebp = *(esp_43 + 4)
            entry_result = *(esp_43 + 0xc)
            edx = *(esp_43 + 0x10)
            arg3 = *(esp_43 + 0x14)
            eax_1 = *(esp_43 + 0x18)
            esp_43 += 0x1c
            esi_2 = __outsb(edx.w, *esi_44, esi_44, eflags_1)
        
        if (not(c_10) && not(z_18))
            goto label_4a3fd2
        
        char temp0_80
        temp0_80, eflags_1 = __arpl_memw_gpr16(*(entry_result + 0x1d), ebp.w)
        *(entry_result + 0x1d) = temp0_80
        char temp120_1 = eax_1.b
        eax_1.b += edx:1.b
        
        if (temp120_1 + edx:1.b s>= 0)
            goto label_4a4090
        
        goto label_4a4046
    
    *(gsbase + eax_1) = sbb.d(*(gsbase + eax_1), eax_1, c_10)
    edx[0x4a]
    char temp104_1 = *edx
    *edx += edx.b
    c_17 = temp104_1 + edx.b u< temp104_1
    char* temp105_1 = eax_1
    eax_1 -= 1
    z_18 = temp105_1 == 1
    s_9 = temp105_1 - 1 s< 0
    o_20 = add_overflow(temp105_1, 0xffffffff)
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    
    if (z_18)
        goto label_4a3f5f
    
    char temp0_74
    temp0_74, edi_25 = __insd(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_74
label_4a3fd2:
    __outsd(edx.w, *esi_2, esi_2, eflags_1)
    
    if (not(c_17))
        edi_25.w = *esp_43
        esi_2.w = *(esp_43 + 2)
        ebp.w = *(esp_43 + 4)
        int16_t* esp_80
        esp_80.w = (esp_43 + 6).w + 2
        entry_result.w = *esp_80
        edx.w = esp_80[1]
        arg3.w = esp_80[2]
        eax_1.w = esp_80[3]
        esp_43 = &esp_80[4]
        
        if (z_18)
            goto label_4a404f
        
        if (c_17)
            eax_1 = sbb.d(eax_1, 0x4a79f000, c_17)
            goto label_4a4046
        
        if (not(c_17))
            goto label_4a400f
        
        goto label_4a3fdf
    
label_4a403a:
    esi_2 = *arg3 * 0x43
    uint8_t temp0_79
    temp0_79, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_79
    esp_43 = *(entry_result + 0x6b) * 0x79f0001d
    edx -= 1
label_4a4046:
    char temp118_1 = *esi_2
    *esi_2 += edx.b
    c_17 = temp118_1 + edx.b u< temp118_1
    z_18 = edi_25 == 0xffffffff
    s_9 = &edi_25[1] s< 0
    o_20 = add_overflow(edi_25, 1)
    uint8_t temp0_81
    temp0_81, edi_25 = __insb(&edi_25[1], edx.w, eflags_1)
    *edi_25 = temp0_81
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    __bound_gprv_mema32(esp_43, *(arg3 + 0x6c))
    *(esp_43 - 4) = entry_result
    esp_43 -= 4
label_4a404f:
    
    if (o_20)
        goto label_4a40b6
    
    int32_t eflags_3
    char temp0_82
    temp0_82, eflags_3 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x4b), ebp.w)
    *(gsbase + eax_1 + 0x4b) = temp0_82
    
    if (not(s_9))
        *eax_1 += arg3.b
        goto label_4a40a5
    
    if (not(s_9))
        goto label_4a409f
    
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_3)
    
    if (not(z_18) && not(c_17))
        goto label_4a40cc
    
    *eax_1 = sbb.d(*eax_1, eax_1, c_17)
    eax_1:1.b = 0x84
    edx -= 1
    char temp125_1 = *edx
    *edx += edx.b
    c_10 = temp125_1 + edx.b u< temp125_1
    z_14 = temp125_1 == neg.b(edx.b)
    s_7 = temp125_1 + edx.b s< 0
    *(esp_43 - 4) = entry_result
    esp_43 -= 4
    
    if (s_7)
        goto label_4a4068
    
    *(esp_43 - 4) = 0x616d0400
    esp_43 -= 4
label_4a40e0:
    *esi_2
label_4a40e7:
    esp_43 -= 0x38
    edi_25 = arg3
    esi_2 = edx
label_4a40ee:
    entry_result = nullptr
label_4a40f0:
    *(esp_43 - 4) = 0x34
    *(esp_43 - 8) = esp_43 + 4
    *(esp_43 - 0xc) = 0xffffffff
    esp_97 = esp_43
    
    if (waveOutGetDevCapsA() == 0 && (*(esp_97 + 0x34) & 4) == 4)
        goto label_4a410e
else
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
label_4a3ed7:
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
label_4a3ed9:
    __outsd(edx.w, *esi_2, esi_2, eflags_1)
    bool o_18 = unimplemented  {adc eax, dword [gs:eax]}
    char* eax_25 = *esp_43
    esp_43 += 4
    void* esi_40
    
    if (not(o_18))
        char temp90_1 = entry_result[edx << 1]
        entry_result[edx << 1] += arg3.b
        c_10 = temp90_1 + arg3.b u< temp90_1
        z_14 = temp90_1 == neg.b(arg3.b)
        s_7 = temp90_1 + arg3.b s< 0
        edi_25 = *esp_43
        esi_2 = *(esp_43 + 4)
        ebp = *(esp_43 + 8)
        entry_result = *(esp_43 + 0x10)
        edx = *(esp_43 + 0x14)
        arg3 = *(esp_43 + 0x18)
        eax_1 = *(esp_43 + 0x1c)
        esp_72 = esp_43 + 0x20
        
        if (z_14 || c_10)
            goto label_4a3f4c
        
        *(esp_72 - 4) = entry_result
        esp_43 = esp_72 - 4
    label_4a3ee8:
        
        if (z_14)
        label_4a3f5f:
            *(eax_1 + 0x61) ^= edx
            *(esi_2 + 0x74)
        label_4a3f69:
            *esp_43
            void* esi_41 = *(esp_43 + 4)
            *(esp_43 + 0x10)
            edx = *(esp_43 + 0x14)
            *(esp_43 + 0x18)
            *(esp_43 + 0x1c)
            esp_43 += 0x20
            *(esi_41 + 0x74)
            goto label_4a3f72
        
        ebp = *(esi_2 + 0x67) * 0x38001673
    label_4a3ef2:
        ebp -= 1
        edx -= 1
        *edi_25 += arg3.b
        *(edx + 0x73)
        esi_2 = *(edx + 0x73) * 0x6e755274
        c_10 = unimplemented  {imul esi, dword [edx+0x73], 0x6e755274}
    label_4a3efe:
        void* temp92_1 = ebp
        ebp += 1
        s_7 = temp92_1 + 1 s< 0
        
        if (not(s_7))
            char temp0_64
            temp0_64, eflags_1 = __arpl_memw_gpr16(*(ebp + 0x74), esi_2.w)
            *(ebp + 0x74) = temp0_64
            goto label_4a3f04
        
        esi_40 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        
        if (s_7)
            goto label_4a3fb9
        
        goto label_4a3f69
    
    if (adc.d(eax_1, *(gsbase + eax_1), c_10) s>= 0)
        eax_25:1.b *= 2
    label_4a3f45:
        char temp106_1 = *0x57746547
        *0x57746547 += arg3.b
        c_10 = temp106_1 + arg3.b u< temp106_1
        z_14 = temp106_1 == neg.b(arg3.b)
        s_7 = temp106_1 + arg3.b s< 0
        goto label_4a3f4b
    
    *eax_25 += entry_result:1.b
    arg3 = &arg3[1]
label_4a3f31:
    char temp107_1 = *0x57746553
    *0x57746553 += arg3.b
    bool c_16 = temp107_1 + arg3.b u< temp107_1
    bool z_17 = temp107_1 == neg.b(arg3.b)
    s_7 = temp107_1 + arg3.b s< 0
    edi_25 = *esp_43
    esi_2 = *(esp_43 + 4)
    ebp = *(esp_43 + 8)
    entry_result = *(esp_43 + 0x10)
    edx = *(esp_43 + 0x14)
    arg3 = *(esp_43 + 0x18)
    eax_1 = *(esp_43 + 0x1c)
    esp_43 += 0x20
    
    if (z_17 || c_16)
        *arg3
        edx = nullptr
        o_17 = unimplemented  {imul edx, dword [ecx], 0x0}
    label_4a3fa2:
        *(esp_43 - 4) = eax_1
        esp_43 -= 4
        
        if (o_17)
            goto label_4a3fef
        
        goto label_4a3fa5
    
    *(esp_43 - 4) = esi_2
    esp_43 -= 4
    esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    uint8_t temp0_65
    temp0_65, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_65
    
    if (z_17)
        eax_1.b = adc.b(eax_1.b, 0, c_16)
        eax_1.b = __in_al_immb(0x40, eflags_1)
        goto label_4a3f45
    
label_4a3fac:
    entry_result = &entry_result[1]
    uint8_t temp0_72
    temp0_72, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_72
    esp_43 = *(entry_result + 0x6b) * 0x79600015
    edx -= 1
label_4a3fb6:
    char temp102_1 = *esi_2
    *esi_2 += arg3.b
    c_10 = temp102_1 + arg3.b u< temp102_1
    esi_40 = esi_2 + 1
    s_7 = esi_2 + 1 s< 0
label_4a3fb9:
    esi_2 = __outsd(edx.w, *esi_40, esi_40, eflags_1)
    
    if (not(c_10))
        char* entry_result_4 = entry_result
        entry_result = &entry_result[1]
        z_14 = entry_result_4 == 0xffffffff
        s_7 = &entry_result_4[1] s< 0
        uint8_t temp0_73
        temp0_73, edi_25 = __insb(edi_25, edx.w, eflags_1)
        *edi_25 = temp0_73
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        
        if (c_10)
            *(esp_43 - 4) = arg3
            esp_43 -= 4
            goto label_4a3fc2
        
        if (z_14)
            edi_25 = *esp_43
            esi_2 = *(esp_43 + 4)
            ebp = *(esp_43 + 8)
            entry_result = *(esp_43 + 0x10)
            edx = *(esp_43 + 0x14)
            arg3 = *(esp_43 + 0x18)
            eax_1 = *(esp_43 + 0x1c)
            esp_43 += 0x20
        label_4a406b:
            
            if (not(s_7))
                goto label_4a40b6
            
            char temp0_83
            temp0_83, eflags_1 = __arpl_memw_gpr16(*(edi_25 + 0x6e), ebp.w)
            *(edi_25 + 0x6e) = temp0_83
            *(esp_43 - 4) = entry_result
            esp_43 -= 4
            
            if (z_14)
                goto label_4a40d4
            
            if (c_10)
                unimplemented  {enter 0xf98b, 0x8b}
                entry_result = nullptr
                goto label_4a40f0
            
            if (not(z_14))
                goto label_4a40e7
            
            eax_1 = sbb.d(eax_1, 0x4a58a800, c_10)
            goto label_4a407c
        
        esi_2 = __outsd(edx.w, *esi_2, esi_2, eflags_1)
    
label_4a4029:
    
    if (not(s_7))
        goto label_4a402b
    
    edx -= 1
label_4a407c:
    *esi_2 += edx.b
label_4a407e:
    ebp -= 1
    char* temp112_1 = arg3
    arg3 -= 1
    z_18 = temp112_1 == 1
    int32_t edi_42 = *esp_43
    *esp_43 = entry_result
    uint8_t temp0_84
    temp0_84, edi_25 = __insb(edi_42, edx.w, eflags_1)
    *edi_25 = temp0_84
label_4a4084:
    char temp0_86
    temp0_86, eflags_1 = __arpl_memw_gpr16(*(gsbase + esp_43 + (ebp << 1) + 0x61), esi_2.w)
    *(gsbase + esp_43 + (ebp << 1) + 0x61) = temp0_86
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags_1)
    
    if (not(z_18))
        goto label_4a40ee
    
    entry_result = &entry_result[1]
label_4a4090:
    uint8_t temp0_87
    temp0_87, edi_25 = __insb(edi_25, edx.w, eflags_1)
    *edi_25 = temp0_87
    esp_43 = *(entry_result + 0x6b) * 0x614d5409
    ebp = *(esi_2 + 0x46) * 0x96d726f
label_4a409f:
    char temp124_1 = eax_1:1.b
    eax_1:1.b += edx:1.b
    *(eax_1 * 2 + 8) = sbb.b(*(eax_1 * 2 + 8), eax_1.b, temp124_1 + edx:1.b u< temp124_1)
label_4a40a5:
    *edi_25 = *esi_2
    edi_25 = &edi_25[4]
    esi_2 = &esi_2[2]
    esp_43 += 1
    *((entry_result << 2) + 0xd2900044) += eax_1.b
    arg3 -= 1
    *(ebp + (arg3 << 2) + 0xd780047) += arg3:1.b
label_4a40b6:
    esp_43 += 1
    eax_1[0x19] += entry_result:1.b
    *eax_1 += (arg3 - 1).b
    arg3 -= 2
    
    if (arg3 == 0)
        *(ebp + (edi_25 << 3) + 0x49) += eax_1:1.b
        eax_1.b += arg3.b
        eax_1 = &eax_1[1]
        edx -= 1
        *edi_25 += eax_1.b
        *(ebp + (arg3 << 1) + 0x61) |= edx
        goto label_4a40cd
    
    eax_1.b -= 0x7d
    eax_1.b += 0x75
    int16_t ds
    *(esp_43 - 4) = zx.d(ds)
    esp_97 = esp_43 - 4
label_4a410e:
    *(esp_97 - 4) = esp_97
    *(esp_97 - 8) = 0xffffffff
    entry_result.b = waveOutGetVolume() == 0
    *esi_2 = zx.d(*esp_97)
    *edi_25 = zx.d((*esp_97 u>> 0x10).w)
*(esp_97 + 0x38)
*(esp_97 + 0x3c)
*(esp_97 + 0x40)
return entry_result
