// 函数: sub_45171c
// 地址: 0x45171c
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
int16_t ss = __return_addr.w
*arg1 += arg3.b
*arg1 += arg1.b
*arg5 = ss
arg1[0x2400403e] += arg2:1.b
arg1[0x4b] += arg1.b
arg1:1.b += arg1.b
int32_t entry_ebx
arg1[0x403f] += entry_ebx:1.b
*(&__return_addr:2 + arg6) += entry_ebx.b
arg1[0x3e] += entry_ebx.b
arg1[0xdc00454d] += arg3:1.b
void* eax_2
eax_2:1.b = (&arg1[3]):1.b + (arg2 - 2):1.b
void* edx_2 = arg2 - 3
*(eax_2 + (arg3 << 1) + 0x45) += arg3:1.b
*(eax_2 + 0x4a) += entry_ebx.b
*eax_2 += edx_2:1.b
void* eax_3 = eax_2 - 1
*eax_3 += eax_3.b
*(arg3 * 3 + 0x4b200045) += (entry_ebx - 1):1.b
*(edx_2 + (arg3 << 1) + 0x4a340045) += eax_3.b
char temp1 = *(&__return_addr:2 + (edx_2 << 1))
*(&__return_addr:2 + (edx_2 << 1)) += edx_2.b
int32_t eflags
int32_t ecx
void* ebx_1
void* ebp_17

if (temp1 + edx_2.b u< temp1)
    *eax_3 += eax_3:1.b
    *(arg3 * 3 + 0x486c0045) += (entry_ebx - 1).b
    eax_3:1.b += (entry_ebx - 1).b
    ebx_1 = entry_ebx - 2
    *eax_3 += edx_2:1.b
    *(eax_3 - 0x43ffbab8) += ebx_1:1.b
    ebp_17 = arg4 + 0x10
    eax_3:1.b = (eax_3 - 1):1.b + (eax_3 - 1).b
    ecx = arg3 - 2
else
    ebx_1 = entry_ebx
    uint16_t* esi = __outsd(edx_2.w, *arg5, arg5, eflags)
    arg5 = __outsb(edx_2.w, *esi, esi, eflags)
    
    if (entry_ebx != 0)
        uint16_t esi_1 = __outsd(edx_2.w, *arg5, arg5, eflags)
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, edx_2.w, eflags)
        *edi = temp0_1
        __bound_gprv_mema32(arg4 + 0xb, *(edx_2 + 0x65))
        int32_t eflags_1
        int16_t temp0_2
        temp0_2, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0xb + (eax_3 << 1) + 0x78), esi_1)
        *(arg4 + 0xb + (eax_3 << 1) + 0x78) = temp0_2
        trap(0xd)
    
    ecx = arg3 - 1
    ebp_17 = arg4 + 0xc
    *(ecx * 3 + 0x49c40045) += ebx_1:1.b

*(&__return_addr:3 + (ecx << 1)) += ebx_1:1.b
*(ebx_1 + (ecx << 1) + 0x45) += eax_3.b
void arg_48
*(&arg_48 + (ecx << 1)) += ebx_1:1.b
eax_3.b += ebx_1:1.b
*((ecx << 1) + 0x4d300045) += ecx.b
char* ebp_21 = ebp_17 + 4
char temp3 = *((ecx << 1) + 0x540f0045)
*((ecx << 1) + 0x540f0045) += ecx:1.b
void* esp_1 = &__return_addr:3

if (temp3 + ecx:1.b u< temp3)
label_45189b:
    *(eax_3 + 0x2400403e) += edx_2:1.b
    edx_2 -= 1
    *eax_3 += ebx_1:1.b
    eax_3:1.b += eax_3.b
    *(eax_3 + 0x403f) += ebx_1:1.b
    *(esp_1 + arg6) += ebx_1.b
    *(ebx_1 + (ecx << 1) + 0x4aa80045) += ecx:1.b
    *(eax_3 + 2) += (eax_3 + 2):1.b
    *(ecx * 3 + 0x486c0045) += ebx_1.b
    void* eax_6
    eax_6:1.b = (eax_3 + 2):1.b + ebx_1.b
    ebx_1 -= 1
    *eax_6 += edx_2:1.b
    eax_3 = eax_6 - 1
    *(eax_3 - 0x43ffbab7) += ebx_1:1.b
    ecx -= 1
    ebp_21 = &ebp_21[7]
else
    uint16_t* esi_2 = __outsd(edx_2.w, *arg5, arg5, eflags)
    int32_t eflags_2
    int16_t temp0_3
    temp0_3, eflags_2 = __arpl_memw_gpr16(*(ebx_1 + 0x4f), ebp_21.w)
    *(ebx_1 + 0x4f) = temp0_3
    __bound_gprv_mema32(ebp_21, *(edx_2 + 0x65))
    int32_t eflags_3
    int16_t temp0_4
    temp0_4, eflags_3 = __arpl_memw_gpr16(*(eax_3 + (ecx << 1) + 0x18), esi_2.w)
    *(eax_3 + (ecx << 1) + 0x18) = temp0_4
    *arg6 += eax_3.b
    __andps_xmmxud_memxud(arg7, *(edx_2 + (esi_2 << 1) + 0x61))
    void arg_5
    esp_1 = &arg_5
    uint16_t* esi_3 = __outsd(edx_2.w, *esi_2, esi_2, eflags_3)
    int32_t eflags_4
    int16_t temp0_5
    temp0_5, eflags_4 = __arpl_memw_gpr16(*(ebx_1 + 0x4f), (&ebp_21[1]).w)
    *(ebx_1 + 0x4f) = temp0_5
    __bound_gprv_mema32(&ebp_21[1], *(edx_2 + 0x65))
    int16_t arg_1c[0x16]
    int16_t temp0_6
    temp0_6, eflags = __arpl_memw_gpr16(arg_1c[esi_3 * 4], esi_3.w)
    arg_1c[esi_3 * 4] = temp0_6
    *(eax_3 + 0x16) += ebx_1.b
    ebp_21 = &ebp_21[3]
    *eax_3 += eax_3.b
    *eax_3 += ecx.b
    void* temp4_1 = ebx_1
    ebx_1 += 1
    uint16_t* esi_4 = __outsd(edx_2.w, *esi_3, esi_3, eflags)
    arg5 = __outsb(edx_2.w, *esi_4, esi_4, eflags)
    
    if (temp4_1 != 0xffffffff)
        arg5 = __outsd(edx_2.w, *arg5, arg5, eflags)
        uint8_t temp0_7
        temp0_7, arg6 = __insb(arg6, edx_2.w, eflags)
        *arg6 = temp0_7
        *(ebx_1 + 0x4518bcc0) += ecx.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        char temp8_1 = eax_3:1.b
        eax_3:1.b += ebx_1:1.b
        *ebp_21 = sbb.b(*ebp_21, eax_3.b, temp8_1 + ebx_1:1.b u< temp8_1)
        *eax_3 += eax_3.b
        goto label_45189b

eax_3:1.b += eax_3.b
uint16_t* ecx_2 = ecx - 1
*(esp_1 + (ecx_2 << 1)) += ebx_1:1.b
*(ebx_1 + (ecx_2 << 1) + 0x45) += eax_3.b
*(esp_1 + (ecx_2 << 1) + 0x45) += ebx_1:1.b
eax_3.b += ebx_1:1.b
*((ecx_2 << 1) + 0x4d300045) += ecx_2.b
int32_t* ebp_37 = &ebp_21[4]
char temp5 = *((ecx_2 << 1) + 0x54110045)
*((ecx_2 << 1) + 0x54110045) += ecx_2:1.b
bool c_3 = temp5 + ecx_2:1.b u< temp5
void* esp_3 = esp_1
void* eax_7
uint16_t* esi_5

if (not(c_3))
    esi_5 = __outsd(edx_2.w, *arg5, arg5, eflags)
    int32_t eflags_5
    int16_t temp0_8
    temp0_8, eflags_5 = __arpl_memw_gpr16(*(ebx_1 + 0x4f), ebp_37.w)
    *(ebx_1 + 0x4f) = temp0_8
    __bound_gprv_mema32(ebp_37, *(edx_2 + 0x65))
    int16_t temp0_9
    temp0_9, eflags = __arpl_memw_gpr16(*(ebp_37 + (eax_3 << 1) + 0x78), esi_5.w)
    *(ebp_37 + (eax_3 << 1) + 0x78) = temp0_9
    eax_7 = eax_3
    esp_3 = *(esp_3 + 1)
    *ebp_37 = sbb.d(*ebp_37, eax_7, c_3)
    goto label_451914

while (true)
    *arg6 += (ecx_2 + 1).b
    ecx_2 = &ecx_2[1]
    *(eax_3 + (ecx_2 << 3) - 0x376fffbe) += eax_3:1.b
    edx_2 += 1
    char temp6_1 = *(eax_3 + 0xe00455f)
    *(eax_3 + 0xe00455f) += eax_3:1.b
    bool c_4 = temp6_1 + eax_3:1.b u< temp6_1
    *(esp_3 - 4) = esp_3
    esp_3 -= 4
    void* temp7_1 = ebx_1
    ebx_1 += 1
    uint16_t* esi_7 = __outsd(edx_2.w, *arg5, arg5, eflags)
    esi_5 = __outsb(edx_2.w, *esi_7, esi_7, eflags)
    void* eax_12
    void* edx_3
    void* esi_11
    void* esi_15
    int16_t es
    int16_t cs
    
    if (temp7_1 == 0xffffffff)
        eax_12 = eax_3 + 1
        *eax_12 += eax_12.b
    label_4519f3:
        *(esp_3 + arg6) += ebx_1.b
        eax_7 = eax_12 + 1
    label_4519f7:
        *eax_7 += edx_2.b
        esi_5 += 1
        *(eax_7 - 0x70) += eax_7:1.b
    label_4519fe:
        esi_11 = esi_5 + 1
        eax_7:1.b += eax_7.b
        edx_3 = edx_2 + 1
    label_451a03:
        *arg6 += ecx_2.b
        ecx_2 += 1
        *(arg6 + esi_11 + 0x3d040042) += ebx_1.b
        edx_2 = edx_3 + 1
        *(ecx_2 * 5) += edx_2.b
        esi_15 = esi_11 + 1
        *((edx_2 << 2) + 0x3ad80046) += edx_2:1.b
    label_451a1b:
        *(arg6 + esi_15 + 0x37b40042) += ebx_1:1.b
        eax_7.b += eax_7:1.b
        *(edx_2 + 2)
        char* esp_9 = 0xc400468f
        eax_7:1.b += ebx_1:1.b
        arg6[0x3d000042] += ecx_2:1.b
        *(eax_7 - 0x76) += ecx_2:1.b
        *(ebx_1 + ((edx_2 + 4) << 2) + 0x46) += ebx_1.b
        eax_7:1.b += (edx_2 + 4):1.b
        void* edx_8 = eax_7
        char* eax_13 = edx_2 + 4
        *(esi_15 + 2 + (edx_8 << 2)) += edx_8:1.b
        void* esi_19 = esi_15 + 3
        char temp13 = *(0xc400468f + (edx_8 << 1))
        *(0xc400468f + (edx_8 << 1)) += edx_8.b
        void* ebx_2 = ebx_1 + 1
        char* eax_14
        
        if (ebx_1 != 0xffffffff)
            esp_9 = 0xc000403e
            eax_13 = &eax_13[1]
        label_451acf:
            eax_13:1.b += eax_13.b
            eax_13[0x403f] += ebx_2:1.b
            *(esp_9 + arg6) += ebx_2.b
            eax_14 = &eax_13[2]
            *(ebx_2 + arg6 + 0x61e40042) += ecx_2:1.b
        label_451ae6:
            ebp_37 += 1
            eax_14.b += eax_14:1.b
            *edx_8
        else
            if (ebx_1 == 0xffffffff)
                *(esi_19 + arg6 + 0x3ec00040) += ebx_2:1.b
                eax_13 = &eax_13[2]
                goto label_451acf
            
            int16_t temp0_14
            temp0_14, arg6 = __insd(arg6, edx_8.w, eflags)
            *arg6 = temp0_14
            void* temp17_1 = ebx_2
            ebx_2 += 1
            uint16_t* esi_20 = __outsd(edx_8.w, *esi_19, esi_19, eflags)
            esi_19 = __outsb(edx_8.w, *esi_20, esi_20, eflags)
            
            if (temp17_1 == 0xffffffff)
                goto label_451acf
            
            uint16_t* esi_21 = __outsd(edx_8.w, *esi_19, esi_19, eflags)
            uint8_t* edi_6
            uint8_t temp0_15
            temp0_15, edi_6 = __insb(arg6, edx_8.w, eflags)
            *edi_6 = temp0_15
            ecx_2 += 1
            int16_t temp0_16
            temp0_16, eflags = __arpl_memw_gpr16(*(&ecx_2[ebp_37] + 0x6f), esi_21.w)
            *(&ecx_2[ebp_37] + 0x6f) = temp0_16
            uint16_t* esi_22 = __outsb(edx_8.w, *esi_21, esi_21, eflags)
            uint8_t* edi_7
            uint8_t temp0_17
            temp0_17, edi_7 = __insb(edi_6, edx_8.w, eflags)
            *edi_7 = temp0_17
            eax_14.b = sbb.b(eax_13.b, *ebp_37, temp13 + edx_8.b u< temp13)
            bool c_8 = unimplemented  {sbb al, byte [ebp]}
            es = *0xc400468f
            esp_9 = 0xc4004691
            char temp20_1 = eax_14.b
            eax_14.b = adc.b(temp20_1, 0x54, c_8)
            void* ebx_3 = ebx_2 + 1
            
            if (ebx_2 != 0xffffffff)
                goto label_451ae5
            
            if (ebx_2 == 0xffffffff)
                eax_14:1.b *= 2
            label_451ae5:
                arg6 = *0xc4004691
                esi_19 = *0xc4004695
                ebp_37 = *0xc4004699
                ebx_2 = *0xc40046a1
                edx_8 = *0xc40046a5
                ecx_2 = *0xc40046a9
                eax_14 = *0xc40046ad
                esp_9 = 0xc40046b1
                goto label_451ae6
            
            int16_t temp0_18
            temp0_18, arg6 = __insd(edi_7, edx_8.w, eflags)
            *arg6 = temp0_18
            ebx_2 = ebx_3 + 1
            uint16_t* esi_23 = __outsd(edx_8.w, *esi_22, esi_22, eflags)
            esi_19 = __outsb(edx_8.w, *esi_23, esi_23, eflags)
            
            if (ebx_3 != 0xffffffff)
                uint16_t* esi_24 = __outsd(edx_8.w, *esi_19, esi_19, eflags)
                uint8_t* edi_8
                uint8_t temp0_19
                temp0_19, edi_8 = __insb(arg6, edx_8.w, eflags)
                *edi_8 = temp0_19
                int32_t eflags_6
                int16_t temp0_20
                temp0_20, eflags_6 =
                    __arpl_memw_gpr16(*(ecx_2 + 1 + (ebp_37 << 1) + 0x6f), esi_24.w)
                *(ecx_2 + 1 + (ebp_37 << 1) + 0x6f) = temp0_20
                char* esi_25 = __outsb(edx_8.w, *esi_24, esi_24, eflags_6)
                *ebp_37 = sbb.d(*ebp_37, eax_14, 
                    adc.b(temp20_1, 0x54, c_8) u< temp20_1
                        || (c_8 && adc.b(temp20_1, 0x54, c_8) == temp20_1))
                eax_14.b = *esi_25
                uint16_t* esi_26 = &esi_25[1]
                int16_t temp0_21 = *esi_26
                *esi_26 = eax_14
                int32_t eax_15 = temp0_21
                char temp42 = *(ebx_2 + 0x6f) | (eax_15.b + (*eax_15).b)
                *(ebx_2 + 0x6f) = temp42
                __outsb(edx_8.w, *esi_26, esi_26, eflags_6)
                
                if (temp42 == 0)
                    jump(0x451b04)
                
                jump(0x451a92)
        
        uint8_t* edi_11
        uint8_t temp0_22
        temp0_22, edi_11 = __insb(arg6, edx_8.w, eflags)
        *edi_11 = temp0_22
        *(esp_9 + edi_11) += edx_8.b
        *eax_14 += eax_14:1.b
        *(ebx_2 + edi_11 + 0x42) += eax_14:1.b
        eax_14.b += ebx_2:1.b
        *(edx_8 + 1)
        eax_14.b += (edx_8 + 1):1.b
        __bound_gprv_mema32(eax_14, *(ebp_37 + 2))
        *(esi_19 + 0x63780046)
        char temp22 = *eax_14
        *eax_14 += eax_14.b
        *esi_19 = *(esp_9 - 1)
        eax_14.b = adc.b(eax_14.b, 0x8f, temp22 + eax_14.b u< temp22)
        ebp_37[0x12].b += ecx_2.b
        eax_14.b *= 2
        int32_t eflags_7
        int16_t temp0_23
        temp0_23, eflags_7 = __arpl_memw_gpr16(*(ebp_37 + 3), eax_14.w)
        *(ebp_37 + 3) = temp0_23
        *(esp_9 - 1) = eax_14
        *(esi_19 + 1) = *(esp_9 - 1)
        TEB* fsbase
        *(fsbase + esi_19 + 1) = *(esp_9 + 3)
        *(ebp_37 + 3 + (eax_14 << 1))
        *(edi_11 + 0x64940046) = cs
        edi_11[(ecx_2 << 2) + 0x64b80046] += (edx_8 + 1).b
        edi_11[(ecx_2 << 2) + 0x65d40046] += ebx_2.b
        *(ebp_37 + 0x65f4004b) += (edx_8 + 1):1.b
        eax_14:1.b += ebx_2.b
        eax_14[0xb400468f] += (edx_8 + 1):1.b
        *(esi_19 + 1) = *(esp_9 + 7)
        *(ebp_37 + 0x4d) += eax_14:1.b
        *(ebx_2 + 0x45) += eax_14:1.b
        *(ebx_2 + 0x63f80045) += ecx_2:1.b
        *eax_14 += eax_14.b
        __bound_gprv_mema32(eax_14, *(ebp_37 + 9))
        eax_14:1.b = 0x64
        eax_14.b += ebx_2.b
        *(esi_19 + 1) += (edx_8 + 1).b
        char temp23 = *(edx_8 + 1)
        *(edx_8 + 1) += (edx_8 + 1).b
        bool c_11 = temp23 + (edx_8 + 1).b u< temp23
        *(esp_9 + 7) = &esp_9[0xb]
        uint16_t* esi_29 = __outsd((edx_8 + 1).w, *(esi_19 + 1), esi_19 + 1, eflags_7)
        uint16_t* esi_30 = __outsb((edx_8 + 1).w, *esi_29, esi_29, eflags_7)
        char* edx_9
        void* ebx_4
        void* esp_17
        void* esp_32
        void* ebp_49
        char* edi_13
        bool c_13
        
        if (ebx_2 == 0xffffffff)
            edi_11.w = *(esp_9 + 7)
            esi_30.w = *(esp_9 + 9)
            ebp_49.w = *(esp_9 + 0xb)
            int16_t* esp_19
            esp_19.w = (&esp_9[0xd]).w + 2
            ebx_4.w = *esp_19
            edx_9.w = esp_19[1]
            ecx_2.w = esp_19[2]
            eax_14.w = esp_19[3]
            esp_17 = &esp_19[4]
            bool cond:10_1
            
            if (ebx_2 == 0xffffffff)
                if (ebx_2 == 0xffffffff)
                    goto label_451c02
                
                int16_t* edi_12
                int16_t temp0_27
                temp0_27, edi_12 = __insd(edi_11, edx_9.w, eflags_7)
                *edi_12 = temp0_27
                char* ebp_52 = *(esp_17 + 8)
                char* ecx_6 = *(esp_17 + 0x18)
                cond:10_1 = ecx_6 == 0xffffffff
                int16_t temp0_28
                temp0_28, eflags_7 =
                    __arpl_memw_gpr16(*(ecx_6 + 1 + (ebp_52 << 1) + 0x76), (*(esp_17 + 4)).w)
                *(ecx_6 + 1 + (ebp_52 << 1) + 0x76) = temp0_28
                edi_13 = *(esp_17 + 0x20)
                esi_30 = *(esp_17 + 0x24)
                ebp_49 = *(esp_17 + 0x28)
                *(esp_17 + 0x30)
                edx_9 = *(esp_17 + 0x34)
                ecx_2 = *(esp_17 + 0x38)
                *(esp_17 + 0x3c)
                esp_17 += 0x40
                
                if (ecx_6 != 0xffffffff)
                    goto label_451c02
                
                goto label_451c67
            
            int16_t temp0_33
            temp0_33, edi_13 = __insd(edi_11, edx_9.w, eflags_7)
            *edi_13 = temp0_33
            uint16_t* temp28_1 = ecx_2
            ecx_2 += 1
            cond:10_1 = temp28_1 == 0xffffffff
            
            if (temp28_1 != 0xffffffff)
                goto label_451cdb
            
        label_451c67:
            __outsd(edx_9.w, *esi_30, esi_30, eflags_7)
            int16_t* edi_18
            int16_t temp0_34
            temp0_34, edi_18 = __insd(edi_13, edx_9.w, eflags_7)
            *edi_18 = temp0_34
            edi_13 = *esp_17
            esi_30 = *(esp_17 + 4)
            ebp_49 = *(esp_17 + 8)
            ebx_4 = *(esp_17 + 0x10)
            edx_9 = *(esp_17 + 0x14)
            ecx_2 = *(esp_17 + 0x18)
            eax_14 = *(esp_17 + 0x1c)
            esp_17 += 0x20
            
            if (cond:10_1)
                *eax_14 += eax_14.b
                *ecx_2 += eax_14.b
                *eax_14 += eax_14.b
            label_451cdb:
                char temp30_1 = eax_14:1.b
                char temp31_1 = eax_14.b
                eax_14:1.b += eax_14.b
                c_13 = temp30_1 + temp31_1 u< temp30_1
                goto label_451cdd
            
            int16_t temp0_35
            temp0_35, eflags_7 = __arpl_memw_gpr16(*eax_14, ecx_2.w)
            *eax_14 = temp0_35
            void* temp36_1 = ebx_4
            ebx_4 += 1
            uint16_t* esi_46 = __outsd(edx_9.w, *esi_30, esi_30, eflags_7)
            uint16_t* esi_47 = __outsb(edx_9.w, *esi_46, esi_46, eflags_7)
            
            if (temp36_1 != 0xffffffff)
                esi_30 = __outsd(edx_9.w, *esi_47, esi_47, eflags_7)
                goto label_451c74
            
            edi_13 = *esp_17
            esi_30 = *(esp_17 + 4)
            ebp_49 = *(esp_17 + 8)
            ebx_4 = *(esp_17 + 0x10)
            edx_9 = *(esp_17 + 0x14)
            ecx_2 = *(esp_17 + 0x18)
            *(esp_17 + 0x1c)
            esp_32 = esp_17 + 0x20
        else
            uint16_t* esi_31 = __outsd((edx_8 + 1).w, *esi_30, esi_30, eflags_7)
            uint8_t* edi_9
            uint8_t temp0_24
            temp0_24, edi_9 = __insb(edi_11, (edx_8 + 1).w, eflags_7)
            *edi_9 = temp0_24
            int16_t temp0_25
            temp0_25, eflags_7 =
                __arpl_memw_gpr16(*(ecx_2 + 1 + (&ebp_37[3] << 1) + 0x6f), esi_31.w)
            *(ecx_2 + 1 + (&ebp_37[3] << 1) + 0x6f) = temp0_25
            uint16_t* esi_32 = __outsb((edx_8 + 1).w, *esi_31, esi_31, eflags_7)
            esp_17 = &esp_9[6]
            int32_t ebp_50 = *(esi_32 + 0x6b) * 0x451b9090
            *(ebx_2 + 1) += eax_14.b
            eax_14.b |= 0x54
            c_11 = false
            ebp_49 = ebp_50 - 1
            bool cond:9_1 = ebp_50 == 1
            esi_30 = __outsd((edx_8 + 1).w, *esi_32, esi_32, eflags_7)
            
            if (ebp_50 == 1)
                edx_9 = edx_8 + 2
                
                if (edx_8 == 0xfffffffe)
                    if (edx_8 != 0xfffffffe)
                        uint16_t* esi_33 = __outsb(edx_9.w, *esi_30, esi_30, eflags_7)
                        *eax_14 = &eax_14[*eax_14]
                        *eax_14 += eax_14.b
                        *edx_9 += eax_14.b
                        *eax_14 += eax_14.b
                        char temp41 = *((ebx_2 + 1) * 2 + 0x6d060045)
                        *((ebx_2 + 1) * 2 + 0x6d060045) += (ecx_2 + 1).b
                        __bound_gprv_mema32(ecx_2 + 1, *(ebp_49 + 0x66))
                        
                        if (temp41 == neg.b((ecx_2 + 1).b))
                            *(ebp_49 + 0x62) |= (ecx_2 + 1):1.b
                        else
                            int16_t* edi_10
                            int16_t temp0_26
                            temp0_26, edi_10 = __insd(edi_9, edx_9.w, eflags_7)
                            *edi_10 = temp0_26
                            __bound_gprv_mema32(edx_9, *(edx_9 + 0x69))
                            *(esp_17 - 4) = 0x626d0874
                            esp_17 -= 4
                        
                        *(esp_17 + 0x6c)
                        __outsb(edx_9.w, *esi_33, esi_33, eflags_7)
                        
                        if (ebp_49 == 1)
                            jump(sub_451c34+7)
                        
                        jump(0x451bc9)
                    
                label_451c0e:
                    __outsb(edx_9.w, *esi_30, esi_30, eflags_7)
                
                int32_t esi_37 = *(esp_17 + 4)
                void* ebp_53 = *(esp_17 + 8)
                *(esp_17 + 0x10)
                int16_t edx_10 = (*(esp_17 + 0x14)).w
                int32_t ecx_11 = *(esp_17 + 0x18)
                *(esp_17 + 0x1c)
                char** esp_26 = esp_17 + 0x20
                
                if (ebp_49 != 0xffffffff)
                    int16_t* edi_15
                    int16_t temp0_30
                    temp0_30, edi_15 = __insd(*esp_17, edx_10, eflags_7)
                    *edi_15 = temp0_30
                    int32_t ebp_54 = esp_26[2]
                    int32_t ecx_12 = esp_26[6]
                    uint16_t* esi_39 = esp_26[1] - 1
                    uint16_t esi_40 = __outsd((esp_26[5]).w, *esi_39, esi_39, eflags_7)
                    int16_t temp0_31
                    temp0_31, eflags_7 =
                        __arpl_memw_gpr16(*(ecx_12 + 1 + (ebp_54 << 1) + 0x76), esi_40)
                    *(ecx_12 + 1 + (ebp_54 << 1) + 0x76) = temp0_31
                    esp_26[8]
                    esi_37 = esp_26[9]
                    ebp_53 = esp_26[0xa]
                    esp_26[0xc]
                    edx_10 = (esp_26[0xd]).w
                    ecx_11 = esp_26[0xe]
                    esp_26[0xf]
                    esp_26 = &esp_26[0x10]
                    
                    if (ecx_12 == 0xffffffff)
                        edi_13 = *esp_26
                        esi_30 = esp_26[1]
                        ebp_49 = esp_26[2]
                        ebx_4 = esp_26[4]
                        edx_9 = esp_26[5]
                        ecx_2 = esp_26[6]
                        eax_14 = esp_26[7]
                        esp_17 = &esp_26[8]
                        
                        if (ecx_12 == 0xffffffff)
                            jump(0x451ced)
                        
                        goto label_451c88
                
                char temp37_1 = ecx_11:1.b
                char temp38_1 = *(ebp_53 + 0x61)
                ecx_11:1.b = adc.b(temp37_1, temp38_1, c_11)
                uint16_t esi_42 = __outsd(edx_10, *(esi_37 - 1), esi_37 - 1, eflags_7)
                int16_t temp0_32
                temp0_32, eflags_7 = __arpl_memw_gpr16(*(ecx_11 + 1 + (ebp_53 << 1) + 0x76), esi_42)
                *(ecx_11 + 1 + (ebp_53 << 1) + 0x76) = temp0_32
                edi_13 = *esp_26
                esi_30 = esp_26[1]
                ebp_49 = esp_26[2]
                ebx_4 = esp_26[4]
                edx_9 = esp_26[5]
                ecx_2 = esp_26[6]
                esp_17 = &esp_26[8]
                
                if (ecx_11 == 0xffffffff)
                    eax_14.b = sbb.b(esp_26[7].b, 0x45, 
                        adc.b(temp37_1, temp38_1, c_11) u< temp37_1
                            || (c_11 && adc.b(temp37_1, temp38_1, c_11) == temp37_1))
                    goto label_451c94
                
                __outsb(edx_9.w, *esi_30, esi_30, eflags_7)
                *(esp_17 + 0x10)
                
                if (ebp_49 == 0xffffffff)
                    jump(&data_451c3c)
                
                return sub_451c34(*(esp_17 + 0x1c), *(esp_17 + 0x14), *(esp_17 + 0x18), 
                    *(esp_17 + 8), *(esp_17 + 4), *esp_17) __tailcall
            
            while (true)
                edi_13 = *esp_17
                esi_30 = *(esp_17 + 4)
                ebp_49 = *(esp_17 + 8)
                ebx_4 = *(esp_17 + 0x10)
                edx_9 = *(esp_17 + 0x14)
                ecx_2 = *(esp_17 + 0x18)
                *(esp_17 + 0x1c)
                esp_17 += 0x20
                
                if (not(cond:9_1))
                    goto label_451c0e
                
                if (not(c_11))
                label_451c74:
                    uint8_t temp0_36
                    temp0_36, edi_13 = __insb(edi_13, edx_9.w, eflags_7)
                    *edi_13 = temp0_36
                    
                    if (not(c_11))
                    label_451c02:
                        char temp32_1 = *(ebp_49 + 0x61)
                        *(ebp_49 + 0x61) = adc.b(temp32_1, ecx_2:1.b, c_11)
                        c_11 = adc.b(temp32_1, ecx_2:1.b, c_11) u< temp32_1
                            || (c_11 && adc.b(temp32_1, ecx_2:1.b, c_11) == temp32_1)
                        cond:9_1 = ecx_2 == 0xffffffff
                        int16_t temp0_29
                        temp0_29, eflags_7 =
                            __arpl_memw_gpr16(*(ecx_2 + 1 + (ebp_49 << 1) + 0x76), esi_30.w)
                        *(ecx_2 + 1 + (ebp_49 << 1) + 0x76) = temp0_29
                        continue
                    else
                        *(esp_17 + ebx_4 + 0x45) = *(esp_17 + ebx_4 + 0x45)
                        uint16_t* temp45_1 = ecx_2
                        ecx_2 += *edx_9
                        c_11 = temp45_1 + *edx_9 u< temp45_1
                        *(esp_17 - 4) = esp_17
                        esp_17 -= 3
                        
                        if (not(c_11))
                            jump(sub_451c34+0x4e)
                
                esp_32 = esp_17 + 1
                
                if (not(c_11))
                    break
                
                int32_t edi_19 = *esp_32
                uint16_t* esi_49 = *(esp_32 + 4)
                int32_t ebp_56 = *(esp_32 + 8)
                *(esp_32 + 0x10)
                int32_t ecx_17 = *(esp_32 + 0x18)
                int32_t eax_27 = *(esp_32 + 0x1c)
                int32_t edx_15 = *(*(esp_32 + 0x14) + 0x69) * 0x67
                *(esp_32 + 0x1c) = 0x6b610874
                int32_t esi_50 = __outsd((edx_15 + 1).w, *esi_49, esi_49, eflags_7)
                
                if (edx_15 == 0xffffffff)
                    jump(&data_451dcc:2)
                
                return sub_451d5a(eax_27, edx_15 + 1, ecx_17, ebp_56, esi_50, edi_19) __tailcall
        
        *(esp_32 - 4) = zx.d(es)
        esp_17 = esp_32 - 4
        
        while (true)
            eax_14 = *(fsbase + edi_13 + (ebp_49 << 1) + 0x63) * 0x6b
            char temp43_1 = *(ebx_4 + 0x6f)
            *(ebx_4 + 0x6f) |= eax_14.b
            uint16_t* esi_48 = __outsb(edx_9.w, *esi_30, esi_30, eflags_7)
            
            if ((temp43_1 | eax_14.b) == 0)
                *(ebp_49 + ebx_4 + 0x45) += ecx_2:1.b
                *esi_48 += (&eax_14[1]).b
                char temp48 = ecx_2[&eax_14[0x38]].b | edx_9.b
                ecx_2[&eax_14[0x38]].b = temp48
                int32_t eflags_8
                int16_t temp0_38
                temp0_38, eflags_8 = __arpl_memw_gpr16(*(eax_14 + 0x70), ebp_49.w)
                *(eax_14 + 0x70) = temp0_38
                
                if (temp48 u>= 0)
                    *(eax_14 + 1)
                    *(eax_14 + 1) += esp_17
                    unimplemented  {sbb eax, 0x80900045}
                    bool c_16 = unimplemented  {sbb eax, 0xf010045}
                    *(esp_17 - 4) = esp_17
                    uint16_t* esi_51 = __outsd(edx_9.w, *esi_48, esi_48, eflags_8)
                    __outsb(edx_9.w, *esi_51, esi_51, eflags_8)
                    
                    if (not(c_16))
                        *(ebx_4 + 1 + (edx_9 << 1) + 0x69) =
                            adc.b(*(ebx_4 + 1 + (edx_9 << 1) + 0x69), edx_9.b, c_16)
                        bool p = unimplemented  {adc byte [ebx+edx*2+0x69], dl}
                        
                        if (p)
                            jump(0x451e67)
                        
                        jump(0x451e02)
                    
                    if (c_16)
                        jump(0x451deb)
                    
                    jump("intSi")
                
                *(esp_17 - 4) = &eax_14[1]
                *(esp_17 - 8) = ecx_2
                *(esp_17 - 0xc) = edx_9
                *(esp_17 - 0x10) = ebx_4
                *(esp_17 - 0x14) = esp_17 - 0x10
                *(esp_17 - 0x18) = ebp_49
                *(esp_17 - 0x1c) = esi_48
                *(esp_17 - 0x20) = edi_13
                *esi_48 - *edi_13
                void* edi_20 = &edi_13[4]
                *edi_20 += ecx_2.b + 1
                int32_t edi_21 = *(esp_17 - 0x20)
                int32_t esi_54 = *(esp_17 - 0x1c)
                int32_t ebx_11 = *(esp_17 - 0x10)
                void* edx_18 = *(esp_17 - 0xc)
                int32_t ecx_20 = *(esp_17 - 8)
                int32_t ebp_59 = *(esp_17 - 0x18) + 1
                char* eax_32
                eax_32.b = (*(esp_17 - 4)).b * 2
                *(esp_17 - 4) = eax_32
                *(esp_17 - 8) = ecx_20
                *(esp_17 - 0xc) = edx_18
                *(esp_17 - 0x10) = ebx_11
                *(esp_17 - 0x14) = esp_17 - 0x10
                *(esp_17 - 0x18) = ebp_59
                *(esp_17 - 0x1c) = esi_54
                *(esp_17 - 0x20) = edi_21
                char temp56 = *eax_32
                *eax_32 += edx_18.b
                *(esp_17 - 0x24) = esp_17 - 0x20
                *(esp_17 - 0x28) = ebx_11
                *(edx_18 + 0x65)
                
                if (temp56 == neg.b(edx_18.b))
                    *(esp_17 - 0x28)
                    *(esp_17 - 0x24)
                    *(esp_17 - 0x20)
                    *(esp_17 - 0x18)
                    *(esp_17 - 0x14)
                    *(esp_17 - 0x10)
                    *(esp_17 - 0xc)
                    
                    if (ebp_59 s< 0)
                        jump(sub_451e22+0xb3)
                    
                    jump(sub_451d5a+0x124)
                
                char* edi_23 = *(esp_17 - 0x28)
                void* esi_55 = *(esp_17 - 0x24)
                int32_t ebx_12 = *(esp_17 - 0x18)
                int32_t edx_19 = *(esp_17 - 0x14)
                *(esp_17 - 0x10)
                *(esi_55 + 0x74)
                *(esi_55 + 0x74)
                bool c_17 = unimplemented  {imul ebp, dword [esi+0x74], 0x408d73}
                char eax_33 = adc.b((*(esp_17 - 0xc)).b, 0x1e, c_17)
                char temp59 = *edi_23
                *edi_23 += eax_33
                *(ebx_12 + (edx_19 << 1) + 0x69) =
                    adc.b(*(ebx_12 + (edx_19 << 1) + 0x69), edx_19.b, temp59 + eax_33 u< temp59)
                bool p_1 = unimplemented  {adc byte [ebx+edx*2+0x69], dl}
                
                if (p_1)
                    jump(sub_451d5a+0x126)
                
                jump(sub_451d5a+0xc1)
            
            esi_30 = __outsd(edx_9.w, *esi_48, esi_48, eflags_7)
            uint8_t temp0_37
            temp0_37, edi_13 = __insb(edi_13, edx_9.w, eflags_7)
            *edi_13 = temp0_37
        label_451c88:
            *eax_14 = &eax_14[*eax_14]
            *eax_14 += eax_14.b
            *edx_9 += eax_14.b
            *eax_14 += eax_14.b
            eax_14[0x1c] += ebx_4:1.b
            ebp_49 += 1
        label_451c94:
            char temp49_1 = *ebx_4
            *ebx_4 += ecx_2.b
            c_13 = temp49_1 + ecx_2.b u< temp49_1
            
            if (c_13)
                if (c_13)
                    jump(0x451cfc)
                
                jump(0x451c9b)
            
        label_451cdd:
            eax_14.b = sbb.b(eax_14.b, 0x45, c_13)
            *esi_30 += eax_14.b
            *(fsbase + edx_9 + (esi_30 << 1) + 0x61)
            *(esp_17 - 4) = zx.d(es)
            esp_17 -= 4
    else
        __outsd(edx_2.w, *esi_5, esi_5, eflags)
        uint8_t* edi_3
        uint8_t temp0_10
        temp0_10, edi_3 = __insb(arg6, edx_2.w, eflags)
        *edi_3 = temp0_10
        bool z_1 = ebx_1 == 0xffffffff
        arg6 = *esp_3
        uint16_t* esi_9 = *(esp_3 + 4)
        ebp_37 = *(esp_3 + 8)
        ebx_1 = *(esp_3 + 0x10)
        edx_2 = *(esp_3 + 0x14)
        ecx_2 = *(esp_3 + 0x18)
        eax_7 = *(esp_3 + 0x1c)
        esp_3 += 0x20
        esi_5 = __outsb(edx_2.w, *esi_9, esi_9, eflags)
        
        if (z_1 || c_4)
            eax_7:1.b += ebx_1:1.b
            void* eax_11 = eax_7 ^ *edx_2
            arg6, es = __les_gprz_memp(*esi_5)
            eax_12 = eax_11 + 1
            *(eax_12 + 0x403e) += ebx_1:1.b
            goto label_4519f3
        
        if (c_4)
            *ecx_2 = ebx_1.b
            ebp_37 += 1
            char temp10_1 = *arg6
            *arg6 += eax_7.b
            bool c_5 = temp10_1 + eax_7.b u< temp10_1
            *(esp_3 - 4) = zx.d(cs)
            *(esp_3 - 8) = esp_3 - 4
            void* temp11_1 = ebx_1
            ebx_1 += 1
            uint16_t* esi_10 = __outsd(edx_2.w, *esi_5, esi_5, eflags)
            esi_11 = __outsb(edx_2.w, *esi_10, esi_10, eflags)
            
            if (temp11_1 == 0xffffffff)
                edx_3 = edx_2 + 1
                goto label_451a03
            
            __outsd(edx_2.w, *esi_11, esi_11, eflags)
            uint8_t* edi_4
            uint8_t temp0_11
            temp0_11, edi_4 = __insb(arg6, edx_2.w, eflags)
            *edi_4 = temp0_11
            bool z_2 = ebx_1 == 0xffffffff
            arg6 = *(esp_3 - 8)
            uint16_t* esi_13 = *(esp_3 - 4)
            ebp_37 = *esp_3
            ebx_1 = *(esp_3 + 8)
            edx_2 = *(esp_3 + 0xc)
            ecx_2 = *(esp_3 + 0x10)
            eax_7 = *(esp_3 + 0x14)
            esi_5 = __outsb(edx_2.w, *esi_13, esi_13, eflags)
            
            if (z_2 || c_5)
                *(eax_7 - 0x6f9fffba) = adc.b(*(eax_7 - 0x6f9fffba), edx_2.b, c_5)
                goto label_4519fe
            
            if (not(c_5))
                goto label_4519f7
            
            *ebp_37 = sbb.d(*ebp_37, eax_7, c_5)
            char temp15_1 = *(edx_2 + (eax_7 << 1) + 0x8000400)
            *(edx_2 + (eax_7 << 1) + 0x8000400) += ebx_1.b
            bool c_6 = temp15_1 + ebx_1.b u< temp15_1
            void* temp16_1 = ebx_1
            ebx_1 += 1
            uint16_t* esi_14 = __outsd(edx_2.w, *esi_5, esi_5, eflags)
            esi_15 = __outsb(edx_2.w, *esi_14, esi_14, eflags)
            
            if (temp16_1 == 0xffffffff)
                goto label_451a1b
            
            __outsd(edx_2.w, *esi_15, esi_15, eflags)
            uint8_t* edi_5
            uint8_t temp0_12
            temp0_12, edi_5 = __insb(arg6, edx_2.w, eflags)
            *edi_5 = temp0_12
            
            if (not(c_6))
                jump(0x4519ac)
            
            jump(0x4519ac)
label_451914:
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *ecx_2 = ebx_1.b
    ebp_37 += 1
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *(ecx_2 + ebx_1 + 0x45) += edx_2:1.b
    *(eax_7 * 2) += eax_7:1.b
    *(ebx_1 * 5 + 0x3eb00042) += edx_2.b
    *(esi_5 + arg6 + 0x3ec00040) += ebx_1:1.b
    void* eax_9
    eax_9:1.b = (eax_7 + 2):1.b + (eax_7 + 2).b
    *(eax_9 + 0x403f) += ebx_1:1.b
    *(esp_3 + arg6) += ebx_1.b
    arg6[(ebx_1 << 1) + 0x45] += edx_2:1.b
    eax_3.b = (eax_9 + 2).b + edx_2:1.b
    *esi_5 - *arg6
    void* esi_6 = &esi_5[2]
    void* edi_2 = &arg6[4]
    ecx_2 += 1
    eax_3.b += ebx_1:1.b
    *esi_6 - *edi_2
    arg5 = esi_6 + 4
    arg6 = edi_2 + 4
