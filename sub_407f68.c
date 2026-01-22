// 函数: sub_407f68
// 地址: 0x407f68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t cs
uint32_t var_4 = zx.d(cs)
int32_t entry_ebx
arg2.b |= *(entry_ebx + (arg2 << 1) + 0x65)
void* const __return_addr_1 = __return_addr
void* ebp = arg4
int32_t edx = arg6
char* ecx = arg7
int32_t* eax = arg8
void arg_1c
void* esp = &arg_1c
char temp2_1

if (arg2.b u>= 0)
    __builtin_strncpy(&arg8, "Rec`", 4)
    esp = &arg8
    *eax += eax
    *ecx += eax.b
    *eax += eax.b
    *(var_4 * 3 + 0x40) += edx.b
    *(eax * 2) += edx.b
    *eax += eax.b
    *(var_4 + 0x40) s>>= 1
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    temp2_1 = eax.b
    eax.b += edx.b

int32_t eflags

if (arg2.b u< 0 || temp2_1 s> neg.b(edx.b))
    while (true)
        *eax += eax.b
        *ecx += eax.b
        *eax += eax.b
        *(eax + edx + 0x40040) += arg5:1.b
        *eax += eax.b
        int32_t temp1_1 = *(ebp + 0x78) | eax
        *(ebp + 0x78) = temp1_1
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(ebp + 0x70), esp.w)
        *(ebp + 0x70) = temp0_1
        
        if (temp1_1 == 0)
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            goto label_40805d
        
        uint16_t* esi = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags)
        __return_addr_1 = __outsb(edx.w, *esi, esi, eflags)
        eax[0x10].b
    label_407ff2:
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        eax[0x30010].b
        *eax += eax.b
        *(var_4 + 0x40)
        *(eax - 0x43ffbfc2) += edx:1.b
        void* eax_6
        eax_6.b = (eax + 1).b * 2
        void* eax_7
        eax_7:1.b = (eax_6 + 1):1.b + (eax_6 + 1).b
        *(eax_7 + 0x403f) += arg5:1.b
        *(esp + var_4) += arg5.b
        *(eax_7 + 0x3e) += arg5.b
        eax = eax_7 + 3
        *__return_addr_1 += eax.b
        ebp += 1
        char* temp4_1 = ecx
        ecx = &ecx[1]
        __bound_gprv_mema32(ebp, *(var_4 + 0x72))
        
        if (temp4_1 != 0xffffffff)
            int16_t es
            eax[0x10].w = es
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            eax[0x40010].w = es
            break
        
        *(esp - 4) = zx.d(cs)
        esp -= 4
    label_407fd1:
        *eax += eax.b
else
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    char temp3_1 = edx.b
    edx.b += eax:1.b
    bool o_1 = add_overflow(temp3_1, eax:1.b)
    
    if (temp3_1 == neg.b(eax:1.b) || temp3_1 + eax:1.b s< 0 != o_1)
        *(eax * 2) += ecx.b
        *eax += eax.b
        arg3 f- fconvert.t(*eax)
        *(eax - 0x43ffbfc1) += edx:1.b
        void* eax_2
        eax_2.b = (eax + 2).b * 2
        void* eax_3
        eax_3:1.b = (eax_2 + 1):1.b + (eax_2 + 1).b
        *(eax_3 + 0x403f) += arg5:1.b
        *(&arg8 + var_4) += arg5.b
        *(eax_3 + 0x3e) += arg5.b
        eax = eax_3 + 3
        *__return_addr_1 += ecx.b
        goto label_407fd1
    
    if (not(o_1))
        ebp = *(var_4 + 0x6e) * 0x408038
        *eax += eax.b
        goto label_407ff2
    
label_40805d:
    *eax += eax.b
    *(eax * 5 + 0x100040) += ecx.b

*eax += eax.b
*(var_4 + 0x40)
*(eax - 0x43ffbfc2) += edx:1.b
void* eax_10
eax_10.b = (eax + 1).b * 2
void* eax_11
eax_11:1.b = (eax_10 + 1):1.b + (eax_10 + 1).b
*(eax_11 + 0x403f) += arg5:1.b
*(eax_11 + 1 + (edx << 3)) += arg5:1.b
*(eax_11 + 0x3e) += arg5.b
*__return_addr_1 += ecx.b
bool o_2 = add_overflow(eax_11 + 3, 0xffffffff)
int16_t* edi_1 = *esp
uint16_t* esi_1 = *(esp + 4)
int32_t ebp_1 = *(esp + 8)
char* ebx_1 = *(esp + 0x10)
char* edx_1 = *(esp + 0x14)
uint16_t* ecx_1 = *(esp + 0x18)
char* eax_15 = *(esp + 0x1c)
void* esp_2 = esp + 0x20
void* eax_19
void* eax_21
bool c_1

if (o_2)
    eax_19 = 0x403e
else
    if (eax_11 + 2 s< 0)
        goto label_4080f8
    
    if (o_2)
        void* eax_34
        void* esp_3
        int32_t ebp_2
        
        while (true)
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            esp_2 += 1
            *eax_15 += 0x10
            edi_1[0x20].b
            eax_15[0xbc00403e] += edx_1:1.b
            void* eax_22
            eax_22.b = (&eax_15[1]).b * 2
            void* eax_23
            eax_23:1.b = (eax_22 + 1):1.b + (eax_22 + 1).b
            *(eax_23 + 0x403f) += ebx_1:1.b
            *(esp_2 + edi_1) += ebx_1.b
            *(eax_23 + 0x3e) += ebx_1.b
            eax_21 = eax_23 + 3
            char temp7_1 = *ebx_1
            *ebx_1 += ecx_1.b
            c_1 = temp7_1 + ecx_1.b u< temp7_1
            ebp_2 = ebp_1 + 1
            ecx_1 -= 1
            esi_1 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
            int16_t* temp8_1 = edi_1
            edi_1 -= 1
            
            if (temp8_1 != 1)
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                eax_21:1.b += edx_1:1.b
                *eax_21 += 0x10
                *(esp_2 - 4) = eax_21
                *eax_21 += sub_403eb0
                esp_3 = 0xc000403e
                void* eax_33
                eax_33:1.b = (eax_21 + 1):1.b + (eax_21 + 1).b
                eax_34 = eax_33 + 1
                *(eax_34 + 0x403e) += ebx_1:1.b
                goto label_4081eb
            
            ebp_1 = ebp_2 + 1
            
            if (c_1)
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                trap(0xd)
            
            esi_1 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
            
            if (not(c_1))
                *eax_21 = *eax_21
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                *eax_21 += eax_21.b
                break
            
            edi_1 -= 1
        label_4080ee:
            ebp_1.w -= 1
            int16_t temp0_2
            temp0_2, edi_1 = __insd(edi_1, edx_1.w, eflags)
            *edi_1 = temp0_2
            esi_1 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
            
            if (c_1)
                break
            
            eax_15 = eax_21
        label_4080f8:
            esp_2 += 1
            *eax_15 = *eax_15
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
        
        char temp9_1 = *eax_21
        *eax_21 += eax_21.b
        bool p_1 = unimplemented  {add byte [eax], al}
        bool a_1 = unimplemented  {add byte [eax], al}
        bool d
        *(esp_2 - 4) = (add_overflow(temp9_1, eax_21.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
            | (temp9_1 + eax_21.b s< 0 ? 1 : 0) << 7 | (temp9_1 == neg.b(eax_21.b) ? 1 : 0) << 6
            | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (temp9_1 + eax_21.b u< temp9_1 ? 1 : 0)
        esp_3 = esp_2 - 4
        *eax_21 += 0x10
        edi_1[0x20].b
        *(eax_21 - 0x43ffbfc2) += edx_1:1.b
        void* eax_26
        eax_26.b = (eax_21 + 1).b * 2
        void* eax_27
        eax_27:1.b = (eax_26 + 1):1.b + (eax_26 + 1).b
        *(eax_27 + 0x403f) += ebx_1:1.b
        *(esp_3 + edi_1) += ebx_1.b
        *(eax_27 + 0x3e) += ebx_1.b
        void* eax_30 = eax_27 + 3
        char temp10_1 = *ecx_1
        *ecx_1 += ecx_1.b
        int32_t ebp_4 = ebp_1 + 2
        
        if (ebp_1 + 2 s< 0)
            goto label_408215
        
        if (temp10_1 + ecx_1.b u>= temp10_1)
            *(esp_3 + 4)
            *(esp_3 + 8)
            *(esp_3 + 0x10)
            *(esp_3 + 0x18)
            *(esp_3 + 0x1c)
            uint8_t* edi_3
            uint8_t temp0_3
            temp0_3, edi_3 = __insb(*esp_3, (*(esp_3 + 0x14)).w, eflags)
            *edi_3 = temp0_3
            trap(0xd)
        
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *eax_30 += eax_30.b
        *(esp_3 - 4) = esp_3
        esp_3 -= 4
        *eax_30 += 0x10
        
        while (true)
            *eax_30 += eax_30.b
            *(eax_30 - 0x7f) += edx_1.b
            *(eax_30 - 0x43ffbfc1) += edx_1:1.b
            void* eax_37
            eax_37.b = (eax_30 + 2).b * 2
            void* eax_38
            eax_38:1.b = (eax_37 + 1):1.b + (eax_37 + 1).b
            *(eax_38 + 0x403f) += ebx_1:1.b
            *(esp_3 + edi_1) += ebx_1.b
            *(eax_38 + 0x3e) += ebx_1.b
            eax_30 = eax_38 + 3
            char temp14_1 = *ecx_1
            *ecx_1 += ecx_1.b
            bool c_5 = temp14_1 + ecx_1.b u< temp14_1
            ebp_2 = ebp_4 + 1
            uint16_t* temp15_1 = ecx_1
            ecx_1 -= 1
            esi_1 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
            
            if (temp15_1 == 1)
                *eax_30 += eax_30.b
            label_4082a3:
                *(esp_3 + edi_1) += ebx_1.b
                *(eax_30 + 0x3d) += ebx_1.b
                *edx_1 += ecx_1.b
                esp_3 += 1
                uint16_t* esi_3 = *(esi_1 + 0x42) * 0x72655a79
                esi_1 = __outsd(edx_1.w, *esi_3, esi_3, eflags)
                void* eax_44
                eax_44.b = (eax_30 + 2).b - 0x7d
                eax_30 = eax_44 + 1
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                ebx_1[eax_30 << 2] += eax_30.b
            else
                if (not(c_5))
                    esi_1 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
                    void* eax_41
                    
                    if (not(c_5))
                        edx_1[(eax_30 << 2) + 0x40] = edx_1[(eax_30 << 2) + 0x40]
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                    label_40826d:
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        edx_1[(eax_30 << 2) + 0x100040] += ecx_1:1.b
                        *eax_30 += eax_30.b
                        edx_1[0x3eb00040] |= eax_30.b
                        eax_41 = eax_30 + 1
                        break
                    
                    eax_34 = eax_30 + 1
                label_4081eb:
                    *(esp_3 + edi_1) += ebx_1.b
                    *(eax_34 + 0x3d) += ebx_1.b
                    eax_30 = eax_34 + 2
                    char temp12_1 = *edx_1
                    *edx_1 += edx_1.b
                    
                    if (ebp_2 + 2 s< 0)
                        goto label_40826d
                    
                    if (temp12_1 + edx_1.b u< temp12_1)
                        goto label_40826a
                    
                    int32_t edi_4 = *esp_3
                    esi_1 = *(esp_3 + 4)
                    uint16_t* ebp_7 = *(esp_3 + 8)
                    ebx_1 = *(esp_3 + 0x10)
                    edx_1 = *(esp_3 + 0x14)
                    ecx_1 = *(esp_3 + 0x18)
                    eax_30 = *(esp_3 + 0x1c)
                    esp_3 += 0x20
                    uint8_t temp0_4
                    temp0_4, edi_1 = __insb(edi_4, edx_1.w, eflags)
                    *edi_1 = temp0_4
                    
                    if (ebp_7 + 1 s< 0)
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                    label_40826a:
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                    else if (not(add_overflow(ebp_7, 1)))
                        ebp_4 = *(edi_1 + 0x6e) * 0x40825490
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                    label_408215:
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        *eax_30 += eax_30.b
                        edx_1[(eax_30 << 2) + 0x40] += edx_1.b
                        *eax_30 += edx_1.b
                        continue
                    
                    *eax_30 += eax_30.b
                    *eax_30 += eax_30.b
                    *eax_30 += eax_30.b
                    *eax_30 += eax_30.b
                    eax_30.b = *esi_1
                    esi_1 += 1
                    *eax_30 += 0x10
                    *eax_30 += eax_30.b
                    *eax_30 += ecx_1.b
                    *eax_30 -= 0x50
                    eax_41 = eax_30 + 1
                label_40828f:
                    *(esi_1 + edi_1 + 0x3ec00040) += ebx_1:1.b
                    void* eax_42
                    eax_42:1.b = (eax_41 + 1):1.b + (eax_41 + 1).b
                    eax_30 = eax_42 + 1
                    *(eax_30 + 0x403e) += ebx_1:1.b
                    goto label_4082a3
                
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                *eax_30 += eax_30.b
                eax_30.b -= 0x7d
            
            *(eax_30 + 1) += edx_1.b
            *(eax_30 + 1) += (eax_30 + 1).b
            *(eax_30 + 1) += ecx_1.b
            *(eax_30 + 1) -= 0x50
            *(esi_1 + edi_1 + 0x3ec00040) += ebx_1:1.b
            void* eax_47
            eax_47:1.b = (eax_30 + 3):1.b + (eax_30 + 3).b
            void* eax_48 = eax_47 + 1
            *(eax_48 + 0x403e) += ebx_1:1.b
            int32_t* eax_50
            
            while (true)
                *(esp_3 + edi_1) += ebx_1.b
                *(eax_48 + 0x3d) += ebx_1.b
                char temp17_1 = *ebx_1
                *ebx_1 += ecx_1.b
                bool c_6 = temp17_1 + ecx_1.b u< temp17_1
                *(esp_3 - 4) = edx_1
                edi_1 = *(esp_3 - 4)
                uint16_t* esi_4 = *esp_3
                int32_t ebp_8 = *(esp_3 + 4)
                ebx_1 = *(esp_3 + 0xc)
                edx_1 = *(esp_3 + 0x10)
                ecx_1 = *(esp_3 + 0x14)
                eax_50 = *(esp_3 + 0x18)
                esp_3 += 0x1c
                uint16_t* esi_5 = __outsb(edx_1.w, *esi_4, esi_4, eflags)
                int32_t ebp_9 = ebp_8 + 1
                
                if (c_6)
                    *eax_50 += eax_50.b
                    *eax_50 += eax_50.b
                    *eax_50 += eax_50.b
                    *eax_50 += eax_50.b
                    *eax_50 += eax_50.b
                    *eax_50 += eax_50.b
                    eax_50 = 0x10004083
                    goto label_408391
                
                uint16_t* esi_6 = __outsd(edx_1.w, *esi_5, esi_5, eflags)
                
                if (c_6)
                    break
                
                *eax_50 = *eax_50
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                *eax_50 += eax_50.b
                ebx_1[(eax_50 << 2) + 0x40] += ebx_1.b
                *eax_50 += edx_1.b
                *eax_50 += eax_50.b
                *eax_50 += ecx_1.b
                *eax_50 -= 0x50
                *(esi_6 + edi_1 + 0x3ec00040) += ebx_1:1.b
                void* eax_52
                eax_52:1.b = (eax_50 + 2):1.b + (eax_50 + 2).b
                eax_48 = eax_52 + 1
                *(eax_48 + 0x403e) += ebx_1:1.b
                *(esp_3 + edi_1) += ebx_1.b
                
                while (true)
                    *(eax_48 + 0x3d) += ebx_1.b
                    eax_48 += 2
                    char temp20_1 = *((eax_48 << 1) + 0x4f746e49)
                    *((eax_48 << 1) + 0x4f746e49) += ecx_1.b
                    bool c_7 = temp20_1 + ecx_1.b u< temp20_1
                    bool z_3 = temp20_1 == neg.b(ecx_1.b)
                    void* eax_61
                    uint16_t* esi_8
                    
                    if (not(z_3) && not(c_7))
                        if (c_7)
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            char temp23_1 = *eax_48
                            *eax_48 += eax_48.b
                            *(eax_48 * 3 + 0x1000) = adc.b(*(eax_48 * 3 + 0x1000), eax_48.b, 
                                temp23_1 + eax_48.b u< temp23_1)
                            ebx_1[(eax_48 << 2) + 0x40] += ecx_1:1.b
                            *(eax_48 - 0x43ffbfc2) += edx_1:1.b
                            void* eax_60
                            eax_60.b = (eax_48 + 1).b * 2
                            eax_61 = eax_60 + 1
                            goto label_4083fb
                        
                        uint8_t temp0_5
                        temp0_5, edi_1 = __insb(edi_1, edx_1.w, eflags)
                        *edi_1 = temp0_5
                        __outsd(edx_1.w, *esi_6, esi_6, eflags)
                        
                        if (not(z_3) && not(c_7))
                            *eax_48 += eax_48.b
                            break
                        
                        eax_50 = eax_48 + 1
                        *(eax_50 + 0x4083) += ebx_1:1.b
                    label_408371:
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *eax_50 += eax_50.b
                        *(eax_50 + 0x10004083) += ebx_1:1.b
                    label_408391:
                        *eax_50 += eax_50.b
                        *(eax_50 - 0x7f) += edx_1.b
                        *(eax_50 - 0x43ffbfc1) += edx_1:1.b
                        void* eax_55
                        eax_55.b = (eax_50 + 2).b * 2
                        void* eax_56
                        eax_56:1.b = (eax_55 + 1):1.b + (eax_55 + 1).b
                        *(eax_56 + 0x403f) += ebx_1:1.b
                        *(esp_3 + edi_1) += ebx_1.b
                        *(eax_56 + 0x3e) += ebx_1.b
                        char temp18_1 = *edx_1
                        *edx_1 += ecx_1.b
                        bool c_8 = temp18_1 + ecx_1.b u< temp18_1
                        bool cond:5_1 = ebp_9 == 0
                        edi_1 = *esp_3
                        esi_8 = *(esp_3 + 4)
                        ebp_9 = *(esp_3 + 8)
                        ebx_1 = *(esp_3 + 0x10)
                        edx_1 = *(esp_3 + 0x14)
                        ecx_1 = *(esp_3 + 0x18)
                        eax_48 = *(esp_3 + 0x1c)
                        esp_3 += 0x20
                        
                        if (not(cond:5_1))
                            ebp_9 += 1
                            
                            if (c_8)
                                goto label_408433
                            
                            esi_6 = __outsd(edx_1.w, *esi_8, esi_8, eflags)
                            
                            if (c_8)
                                eax_48.b = sbb.b(eax_48.b, 0x3c, c_8)
                                continue
                            else
                                *(eax_48 * 3) = adc.b(*(eax_48 * 3), eax_48.b, c_8)
                            
                            goto label_4083cb
                        
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *(esp_3 - 4) = 0x10004084
                        esp_3 -= 4
                        goto label_408441
                    
                    *eax_48 += eax_48.b
                label_4083cb:
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += edx_1.b
                    *eax_48
                    *eax_48 = adc.b(*eax_48, eax_48.b, false)
                    *eax_48 += eax_48.b
                    uint8_t temp0_6
                    temp0_6, edi_1 = __insb(edi_1, edx_1.w, eflags)
                    *edi_1 = temp0_6
                    *eax_48 -= 0x50
                    *(esi_6 + edi_1 + 0x3ec00040) += ebx_1:1.b
                    eax_61 = eax_48 + 2
                label_4083fb:
                    eax_61:1.b += eax_61.b
                    *(eax_61 + 0x403f) += ebx_1:1.b
                    *(esp_3 + edi_1) += ebx_1.b
                    *(eax_61 + 0x3e) += ebx_1.b
                    eax_48 = eax_61 + 3
                    char temp27_1 = *edx_1
                    *edx_1 += ecx_1.b
                    bool c_10 = temp27_1 + ecx_1.b u< temp27_1
                    ebp_9 += 1
                    uint16_t* temp28_1 = ecx_1
                    ecx_1 -= 1
                    esi_8 = __outsb(edx_1.w, *esi_6, esi_6, eflags)
                    void* eax_70
                    
                    if (temp28_1 != 1 && not(c_10))
                        uint8_t temp0_7
                        temp0_7, edi_1 = __insb(edi_1, edx_1.w, eflags)
                        *edi_1 = temp0_7
                        esp_3 = *(edi_1 + (ecx_1 << 1) + 0x70) * 0x40846890
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                    label_408433:
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *eax_48 += eax_48.b
                        *(eax_48 - 0x7c) += ecx_1:1.b
                        eax_48 += 1
                        *eax_48 += edx_1.b
                    label_408441:
                        *eax_48 += eax_48.b
                        ebx_1[(eax_48 << 2) + 0x40] += ecx_1:1.b
                        *(eax_48 - 0x43ffbfc2) += edx_1:1.b
                        void* eax_64
                        eax_64.b = (eax_48 + 1).b * 2
                        void* eax_65
                        eax_65:1.b = (eax_64 + 1):1.b + (eax_64 + 1).b
                        void* eax_66 = eax_65 + 1
                        void* eax_68
                        
                        while (true)
                            *(eax_66 + 0x403e) += ebx_1:1.b
                            *(esp_3 + edi_1) += ebx_1.b
                            *(eax_66 + 0x3d) += ebx_1.b
                            eax_68 = eax_66 + 2
                            char temp21_1 = *ebx_1
                            *ebx_1 += ecx_1.b
                            ebp_9 += 1
                            edx_1 = *esp_3
                            esp_3 += 4
                            
                            if (temp21_1 + ecx_1.b u>= temp21_1)
                                break
                            
                            while (true)
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += eax_68.b
                                *eax_68 += ebx_1.b
                                *eax_68
                                *eax_68 = adc.b(*eax_68, eax_68.b, false)
                                *eax_68 += eax_68.b
                                uint8_t* edi_5
                                uint8_t temp0_10
                                temp0_10, edi_5 = __insb(edi_1, edx_1.w, eflags)
                                *edi_5 = temp0_10
                                *eax_68 -= 0x50
                                *(esi_8 + edi_5 + 0x3ec00040) += ebx_1:1.b
                                void* eax_74
                                eax_74:1.b = (eax_68 + 2):1.b + (eax_68 + 2).b
                                *(eax_74 + 0x403f) += ebx_1:1.b
                                *(esp_3 + edi_5) += ebx_1.b
                                *(eax_74 + 0x3e) += ebx_1.b
                                eax_70 = eax_74 + 3
                                char temp25_1 = *edx_1
                                *edx_1 += ecx_1.b
                                bool c_13 = temp25_1 + ecx_1.b u< temp25_1
                                int32_t temp26_1 = ebp_9
                                ebp_9 += 1
                                *(esp_3 - 4) = ebp_9
                                esp_3 -= 4
                                uint16_t* esi_9 = __outsb(edx_1.w, *esi_8, esi_8, eflags)
                                
                                if (c_13)
                                    goto label_408586
                                
                                uint8_t temp0_11
                                temp0_11, edi_1 = __insb(edi_5, edx_1.w, eflags)
                                *edi_1 = temp0_11
                                esi_8 = __outsd(edx_1.w, *esi_9, esi_9, eflags)
                                
                                if (temp26_1 != 0xffffffff && not(c_13))
                                    *(eax_70 * 3) += ebx_1:1.b
                                    goto label_4084b7
                                
                                char* eax_72
                                
                                if (add_overflow(temp26_1, 1))
                                label_4084ab:
                                    eax_70:1.b += eax_70.b
                                    eax_70 += 1
                                    *(eax_70 + 0x403e) += ebx_1:1.b
                                label_4084b7:
                                    *(esp_3 + edi_1) += ebx_1.b
                                    *(eax_70 + 0x3d) += ebx_1.b
                                    eax_72 = eax_70 + 2
                                    char temp30_1 = *ecx_1
                                    *ecx_1 += ecx_1.b
                                    bool c_12 = temp30_1 + ecx_1.b u< temp30_1
                                    ebp_9 += 1
                                    int16_t* temp31_1 = edi_1
                                    edi_1 -= 1
                                    bool z_5 = temp31_1 == 1
                                    
                                    if (not(z_5) && not(c_12))
                                        if (c_12)
                                            goto label_40852d
                                        
                                        uint8_t temp0_9
                                        temp0_9, edi_1 = __insb(edi_1, edx_1.w, eflags)
                                        *edi_1 = temp0_9
                                        esi_8 = __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                        
                                        if (z_5 || c_12)
                                            goto label_4084cb
                                        
                                        eax_66 = &eax_72[1]
                                        break
                                    
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    char temp32_1 = *eax_72
                                    *eax_72 += eax_72.b
                                    c_12 = temp32_1 + eax_72.b u< temp32_1
                                    
                                    if (add_overflow(temp32_1, eax_72.b))
                                    label_4084cb:
                                        *eax_72 = rrc.b(*eax_72, 0x85, c_12)
                                        eax_68 = &eax_72[1]
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        *eax_68 += eax_68.b
                                        continue
                                        continue
                                else
                                    eax_72 = eax_70 + 1
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                label_40852d:
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    *eax_72 += eax_72.b
                                    eax_72[0xffffff85] += edx_1:1.b
                                
                                eax_72[1] += edx_1.b
                                eax_72[1] += (&eax_72[1]).b
                                eax_72[0xffffff81] += (&eax_72[1]).b
                                eax_72[0xbc004040] += edx_1:1.b
                                void* eax_80
                                eax_80.b = (&eax_72[3]).b * 2
                                void* eax_81 = eax_80 + 1
                                
                                while (true)
                                    eax_81:1.b += eax_81.b
                                    *(eax_81 + 0x403f) += ebx_1:1.b
                                    *(eax_81 + 1 + (edx_1 << 3)) += ebx_1:1.b
                                    *(eax_81 + 0x3e) += ebx_1.b
                                    eax_70 = eax_81 + 3
                                    char temp33_1 = *edi_1
                                    *edi_1 += ecx_1.b
                                    bool c_14 = temp33_1 + ecx_1.b u< temp33_1
                                    ebp_9 += 1
                                    uint16_t* temp34_1 = ecx_1
                                    ecx_1 -= 1
                                    esi_8 = __outsb(edx_1.w, *esi_8, esi_8, eflags)
                                    
                                    if (temp34_1 == 1 || c_14)
                                        char* eax_98
                                        
                                        if (not(c_14))
                                        label_40864d:
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            esi_8[eax_70 * 2 + 0x80020].b += eax_70.b
                                            *eax_70 += eax_70.b
                                            *(esp_3 - 4) = eax_70
                                            *eax_70 += sub_403eb0
                                            esp_3 = 0xc000403e
                                            void* eax_91
                                            eax_91:1.b = (eax_70 + 1):1.b + (eax_70 + 1).b
                                            *(eax_91 + 0x403f) += ebx_1:1.b
                                            *(0xc000403e + edi_1) += ebx_1.b
                                            *(eax_91 + 0x3e) += ebx_1.b
                                            eax_70 = eax_91 + 3
                                            char temp36_1 = *eax_70
                                            *eax_70 += edx_1.b
                                            ebp_9 += 1
                                            ecx_1 += 1
                                            int16_t temp0_15
                                            temp0_15, eflags =
                                                __arpl_memw_gpr16(*(ebx_1 + 0x65), 0x403e)
                                            *(ebx_1 + 0x65) = temp0_15
                                            
                                            if (temp36_1 + edx_1.b u>= temp36_1)
                                                while (true)
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    edi_1[eax_70 * 2].b += ebx_1:1.b
                                                    *(eax_70 + 1) += edx_1.b
                                                    *(eax_70 + 1) += (eax_70 + 1).b
                                                    *(eax_70 - 0x7e) += edx_1.b
                                                    *(eax_70 - 0x43ffbfc0) += edx_1:1.b
                                                    void* eax_103
                                                    eax_103.b = (eax_70 + 3).b * 2
                                                    void* eax_104
                                                    eax_104:1.b =
                                                        (eax_103 + 1):1.b + (eax_103 + 1).b
                                                    *(eax_104 + 0x403f) += ebx_1:1.b
                                                    *(esp_3 + edi_1) += ebx_1.b
                                                    *(eax_104 + 0x3e) += ebx_1.b
                                                    eax_98 = eax_104 + 3
                                                    char temp37_1 = *esi_8
                                                    *esi_8 += ecx_1.b
                                                    bool c_20 = temp37_1 + ecx_1.b u< temp37_1
                                                    int32_t temp38_1 = ebp_9
                                                    ebp_9 += 1
                                                    bool z_10 = temp38_1 == 0xffffffff
                                                    *(esp_3 - 4) = ebx_1
                                                    esp_3 -= 4
                                                    void* eax_111
                                                    char* eax_114
                                                    
                                                    if (not(z_10))
                                                        int16_t temp0_20
                                                        temp0_20, eflags = __arpl_memw_gpr16(
                                                            *(ebx_1 + 0x4f), ebp_9.w)
                                                        *(ebx_1 + 0x4f) = temp0_20
                                                        
                                                        if (z_10 || c_20)
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            eax_98.b += edx_1:1.b
                                                            int16_t temp0_27 = *eax_98
                                                            *eax_98 = eax_98
                                                            eax_114 = temp0_27
                                                            goto label_4087c8
                                                        
                                                        if (c_20)
                                                            goto label_4087ae
                                                        
                                                        uint8_t temp0_21
                                                        temp0_21, edi_1 =
                                                            __insb(edi_1, edx_1.w, eflags)
                                                        *edi_1 = temp0_21
                                                        esi_8 =
                                                            __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                        char* eax_100
                                                        
                                                        if (not(z_10) && not(c_20))
                                                            eax_98.b = sbb.b(eax_98.b, 0x3c, c_20)
                                                        label_4086df:
                                                            eax_98[0x3d] += ebx_1.b
                                                            eax_100 = &eax_98[2]
                                                            char temp43_1 = *edx_1
                                                            *edx_1 += ecx_1.b
                                                            bool c_19 =
                                                                temp43_1 + ecx_1.b u< temp43_1
                                                            int32_t temp44_1 = ebp_9
                                                            ebp_9 += 1
                                                            *(esp_3 - 4) = eax_100
                                                            esp_3 -= 4
                                                            
                                                            if (not(c_19))
                                                                if (temp44_1 != 0xffffffff && not(c_19))
                                                                    uint8_t temp0_19
                                                                    temp0_19, edi_1 =
                                                                        __insb(edi_1, edx_1.w, eflags)
                                                                    *edi_1 = temp0_19
                                                                    eax_70 = &eax_100[1]
                                                                    *eax_70 += eax_70.b
                                                                    *eax_70 += eax_70.b
                                                                    *eax_70 += eax_70.b
                                                                    *eax_70 += eax_70.b
                                                                    *eax_70 += eax_70.b
                                                                    *eax_70 += eax_70.b
                                                                    continue
                                                                
                                                            label_408754:
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                *eax_100 += eax_100.b
                                                                char temp47_1 = *eax_100
                                                                *eax_100 += eax_100.b
                                                                int32_t eax_108 = sx.d(eax_100.w)
                                                                int16_t temp0_23 = *eax_108
                                                                *eax_108 = eax_108
                                                                char* eax_109 = temp0_23
                                                                *eax_109 = adc.b(*eax_109, eax_109.b, 
                                                                    temp47_1 + eax_100.b u< temp47_1)
                                                                *eax_109 += eax_109.b
                                                                *(esp_3 - 4) = eax_109
                                                                *eax_109 += sub_403eb0
                                                                esp_3 = 0xc000403e
                                                                void* eax_110
                                                                eax_110:1.b =
                                                                    (&eax_109[1]):1.b + (&eax_109[1]).b
                                                                eax_111 = eax_110 + 1
                                                                *(eax_111 + 0x403e) += ebx_1:1.b
                                                                goto label_40878f
                                                        else
                                                            int32_t eax_107 = sx.d(eax_98.w)
                                                            int16_t temp0_22 = *eax_107
                                                            *eax_107 = eax_107
                                                            eax_100 = temp0_22
                                                            *eax_100 += eax_100.b
                                                        
                                                        *eax_100 += eax_100.b
                                                        break
                                                    
                                                    while (true)
                                                        int16_t temp0_25 = *eax_98
                                                        *eax_98 = eax_98
                                                        eax_98 = temp0_25
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                    label_4087ae:
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        *eax_98 += eax_98.b
                                                        int16_t temp0_26 = *eax_98
                                                        *eax_98 = eax_98
                                                        eax_114 = temp0_26
                                                    label_4087c8:
                                                        eax_114.b = eax_114.b
                                                        *eax_114 += eax_114.b
                                                        edi_1[0x20].b
                                                        eax_114[0xbc00403e] += edx_1:1.b
                                                        void* eax_115
                                                        eax_115.b = (&eax_114[1]).b * 2
                                                        void* eax_116
                                                        eax_116:1.b =
                                                            (eax_115 + 1):1.b + (eax_115 + 1).b
                                                        *(eax_116 + 0x403f) += ebx_1:1.b
                                                        *(esp_3 + edi_1) += ebx_1.b
                                                        *(eax_116 + 0x3e) += ebx_1.b
                                                        *0x72615645 += ecx_1.b
                                                        *(ecx_1 + 0x6e)
                                                        esp_3 = *(ecx_1 + 0x6e) * 0x72724574
                                                        bool c_22 = unimplemented  {imul esp, 
                                                            dword [ecx+0x6e], 0x72724574}
                                                        esi_8 =
                                                            __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                        
                                                        if (not(c_22))
                                                            (eax_116 + 3)[(ecx_1 << 2) + 0x40] = ror
                                                                .b((eax_116 + 3)[(ecx_1 << 2) + 0x40], 
                                                                0)
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            *(eax_116 + 3) += (eax_116 + 3).b
                                                            esp_3 -= 1
                                                            *(eax_116 + 3) = (eax_116 + 3).b
                                                            eax_98.b = (eax_116 + 3).b
                                                            break
                                                        
                                                        eax_111 = eax_116 + 4
                                                        *eax_111 += eax_111.b
                                                    label_40878f:
                                                        *(esp_3 + edi_1) += ebx_1.b
                                                        *(eax_111 + 0x3d) += ebx_1.b
                                                        eax_98 = eax_111 + 2
                                                        *ecx_1 += ecx_1.b
                                                        ebp_9 += 1
                                                        char* temp45_1 = ebx_1
                                                        ebx_1 = &ebx_1[1]
                                                        uint16_t* esi_10 =
                                                            __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                        esi_8 = __outsb(edx_1.w, *esi_10, esi_10, 
                                                            eflags)
                                                        
                                                        if (temp45_1 == 0xffffffff)
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            *eax_98 += eax_98.b
                                                            eax_98[(ecx_1 << 2) + 0x40] += ecx_1.b
                                                            *(eax_98 * 2) += ecx_1.b
                                                        label_408826:
                                                            *eax_98 += eax_98.b
                                                            edi_1[0x20].b
                                                            eax_98[0xbc00403e] += edx_1:1.b
                                                            void* eax_119
                                                            eax_119.b = (&eax_98[1]).b * 2
                                                            void* eax_120
                                                            eax_120:1.b =
                                                                (eax_119 + 1):1.b + (eax_119 + 1).b
                                                            *(eax_120 + 0x403f) += ebx_1:1.b
                                                            *(esp_3 + edi_1) += ebx_1.b
                                                            *(eax_120 + 0x3e) += ebx_1.b
                                                            char* eax_123 = eax_120 + 3
                                                            char temp46 = *eax_123
                                                            *eax_123 += edx_1.b
                                                            bool c_23 = temp46 + edx_1.b u< temp46
                                                            char* ecx_3 = ecx_1 + 1
                                                            void* ebp_11
                                                            
                                                            while (true)
                                                                if (not(c_23))
                                                                    goto label_4088c4
                                                                
                                                                if (not(c_23))
                                                                    break
                                                                
                                                                while (true)
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    ecx_3[0xc0040] |= ecx_3.b
                                                                    *eax_123 += eax_123.b
                                                                    edi_1[0x20].b
                                                                    eax_123[0xbc00403e] += edx_1:1.b
                                                                    void* eax_129
                                                                    eax_129.b = (&eax_123[1]).b * 2
                                                                    void* eax_130
                                                                    eax_130:1.b =
                                                                        (eax_129 + 1):1.b + (eax_129 + 1).b
                                                                    *(eax_130 + 0x403f) += ebx_1:1.b
                                                                    *(esp_3 + edi_1) += ebx_1.b
                                                                    *(eax_130 + 0x3e) += ebx_1.b
                                                                    eax_123 = eax_130 + 3
                                                                    char temp48_1 = *esi_8
                                                                    *esi_8 += ecx_3.b
                                                                    bool c_24 =
                                                                        temp48_1 + ecx_3.b u< temp48_1
                                                                    esi_8 =
                                                                        __outsb(edx_1.w, *esi_8, esi_8, eflags)
                                                                    char* eax_138
                                                                    void* eax_141
                                                                    char* esp_13
                                                                    void* ebp_14
                                                                    char* edi_6
                                                                    bool c_27
                                                                    bool z_11
                                                                    bool s_6
                                                                    
                                                                    if (ecx_3 != 1)
                                                                        edi_1 = *esp_3
                                                                        esi_8 = *(esp_3 + 4)
                                                                        void* ebp_12 = *(esp_3 + 8)
                                                                        ebx_1 = *(esp_3 + 0x10)
                                                                        edx_1 = *(esp_3 + 0x14)
                                                                        ecx_3 = *(esp_3 + 0x18)
                                                                        eax_123 = *(esp_3 + 0x1c)
                                                                        esp_3 += 0x20
                                                                        
                                                                        if (not(c_24))
                                                                            goto label_408986
                                                                        
                                                                        ebp_11 = ebp_12 + 1
                                                                        
                                                                        if (c_24)
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *(ecx_3 * 5 + 0xc0040) += ebx_1:1.b
                                                                            *eax_123 += eax_123.b
                                                                            edi_1[0x20].b
                                                                            eax_123[0xbc00403e] += edx_1:1.b
                                                                            void* eax_140
                                                                            eax_140.b = (&eax_123[1]).b * 2
                                                                            eax_141 = eax_140 + 1
                                                                            goto label_4089a7
                                                                        
                                                                        void* eax_135
                                                                        
                                                                        do
                                                                            esi_8 =
                                                                                __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                                            
                                                                            if (not(c_24))
                                                                                TEB* fsbase
                                                                                *(fsbase + eax_123) = eax_123
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                *eax_123 += eax_123.b
                                                                                char temp51_1 = *eax_123
                                                                                *eax_123 += eax_123.b
                                                                                *(fsbase + eax_123) = eax_123
                                                                                *eax_123 = adc.b(*eax_123, eax_123.b, 
                                                                                    temp51_1 + eax_123.b u< temp51_1)
                                                                                *eax_123 += eax_123.b
                                                                                edi_1[0x20].b
                                                                                eax_123[0xbc00403e] += edx_1:1.b
                                                                                void* eax_134
                                                                                eax_134.b = (&eax_123[1]).b * 2
                                                                                eax_135 = eax_134 + 1
                                                                                goto label_40894f
                                                                            
                                                                            eax_123 = *esp_3
                                                                            esp_3 += 4
                                                                        label_4088ab:
                                                                            char temp53_1 = *esi_8
                                                                            *esi_8 += ecx_3.b
                                                                            c_24 = temp53_1 + ecx_3.b u< temp53_1
                                                                            ebp_11 += 1
                                                                            ecx_3 = &ecx_3[1]
                                                                            __bound_gprv_mema32(esi_8, 
                                                                                *(ebx_1 + 0x74))
                                                                        while (c_24)
                                                                        
                                                                        int16_t temp0_28
                                                                        temp0_28, eflags = __arpl_memw_gpr16(
                                                                            *(ebp_11 + (eax_123 << 1) + 0x72), 
                                                                            esi_8.w)
                                                                        *(ebp_11 + (eax_123 << 1) + 0x72) =
                                                                            temp0_28
                                                                        
                                                                        if (c_24)
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            *(ecx_3 * 5 + 0x40) += eax_123:1.b
                                                                            *eax_123 += edx_1.b
                                                                            *eax_123 += eax_123.b
                                                                            *(edi_1 * 3 + 0x3eb00040) += eax_123.b
                                                                            *(esi_8 + edi_1 + 0x3ec00040) +=
                                                                                ebx_1:1.b
                                                                            eax_135 = &eax_123[2]
                                                                        label_40894f:
                                                                            eax_135:1.b += eax_135.b
                                                                            *(eax_135 + 0x403f) += ebx_1:1.b
                                                                            *(esp_3 + edi_1) += ebx_1.b
                                                                            *(eax_135 + 0x3e) += ebx_1.b
                                                                            eax_138 = eax_135 + 3
                                                                            char temp54_1 = *eax_138
                                                                            *eax_138 += ecx_3.b
                                                                            bool c_26 =
                                                                                temp54_1 + ecx_3.b u< temp54_1
                                                                            edi_6 = edi_1 - 1
                                                                            *(esp_3 - 4) = ebx_1
                                                                            ebp_14 = ebp_11 + 2
                                                                            
                                                                            if (not(c_26))
                                                                                __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                                                
                                                                                if (c_26)
                                                                                    jump(0x4088fb)
                                                                                
                                                                                jump(0x40896e)
                                                                            
                                                                            esp_13 = 0x48004010
                                                                            *eax_138 += eax_138.b
                                                                            char temp57_1 =
                                                                                *(eax_138 + edx_1 + 0x53080040)
                                                                            *(eax_138 + edx_1 + 0x53080040) +=
                                                                                ebx_1:1.b
                                                                            c_27 = temp57_1 + ebx_1:1.b u< temp57_1
                                                                            z_11 = temp57_1 == neg.b(ebx_1:1.b)
                                                                            s_6 = temp57_1 + ebx_1:1.b s< 0
                                                                        else
                                                                            if (c_24)
                                                                                char temp60_1 = *(ebp_11 + 0x41)
                                                                                *(ebp_11 + 0x41) =
                                                                                    adc.b(temp60_1, eax_123.b, c_24)
                                                                                c_23 = adc.b(temp60_1, eax_123.b, c_24)
                                                                                    u< temp60_1 || (c_24
                                                                                    && adc.b(temp60_1, eax_123.b, c_24)
                                                                                    == temp60_1)
                                                                                break
                                                                            
                                                                            ecx_3[0x40] |= ecx_3.b
                                                                            *eax_123 += eax_123.b
                                                                        label_4088c4:
                                                                            *eax_123 += eax_123.b
                                                                            *eax_123 += eax_123.b
                                                                            continue
                                                                        
                                                                        goto label_4089eb
                                                                    
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                label_408986:
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    *eax_123 += eax_123.b
                                                                    esp_3 = 0xc004089
                                                                    *eax_123 += eax_123.b
                                                                    *(edi_1 * 3 + 0x3eb00040) += eax_123.b
                                                                    *(esi_8 + edi_1 + 0x3ec00040) +=
                                                                        ebx_1:1.b
                                                                    eax_141 = &eax_123[2]
                                                                label_4089a7:
                                                                    eax_141:1.b += eax_141.b
                                                                    *(eax_141 + 0x403f) += ebx_1:1.b
                                                                    *(esp_3 + edi_1) += ebx_1.b
                                                                    *(eax_141 + 0x3e) += ebx_1.b
                                                                    *edx_1 += edx_1.b
                                                                    *(esp_3 - 4) = ebx_1
                                                                    int32_t edi_7 = *(esp_3 - 4)
                                                                    esi_8 = *esp_3
                                                                    void* ebp_15 = *(esp_3 + 4)
                                                                    ebx_1 = *(esp_3 + 0xc)
                                                                    edx_1 = *(esp_3 + 0x10)
                                                                    ecx_3 = *(esp_3 + 0x14)
                                                                    eax_138 = *(esp_3 + 0x18)
                                                                    esp_13 = esp_3 + 0x1c
                                                                    int32_t gsbase
                                                                    int16_t temp0_29
                                                                    temp0_29, eflags = __arpl_memw_gpr16(
                                                                        *(gsbase + ecx_3 + 0x6c), esp_13.w)
                                                                    *(gsbase + ecx_3 + 0x6c) = temp0_29
                                                                    uint8_t temp0_30
                                                                    temp0_30, edi_6 =
                                                                        __insb(edi_7, edx_1.w, eflags)
                                                                    *edi_6 = temp0_30
                                                                    ebp_14 = ebp_15 + 1
                                                                    void* eax_147
                                                                    void* eax_146
                                                                    
                                                                    if (ebp_15 + 1 s< 0)
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                        *eax_138 += eax_138.b
                                                                    label_408a40:
                                                                        *eax_138 += eax_138.b
                                                                        char temp52_1 = *eax_138
                                                                        *eax_138 += eax_138.b
                                                                        
                                                                        if (add_overflow(temp52_1, eax_138.b))
                                                                            char temp0_31
                                                                            char temp1_2
                                                                            temp0_31, temp1_2, eflags =
                                                                                __aam_immb(0x89, eax_138.b)
                                                                            eax_138.b = temp0_31
                                                                            eax_138:1.b = temp1_2
                                                                            eax_138 = &eax_138[1]
                                                                            goto label_4089d3
                                                                        
                                                                        *(&eax_138[1] * 2) += (&eax_138[1]).b
                                                                        char temp55_1 = (&eax_138[1]).b
                                                                        char* eax_144
                                                                        eax_144.b = (&eax_138[1]).b + ebx_1.b
                                                                        *eax_144 = adc.b(*eax_144, eax_144.b, 
                                                                            temp55_1 + ebx_1.b u< temp55_1)
                                                                        eax_144.b = 0x3e
                                                                        *(esi_8 + edi_6 + 0x3ec00040) +=
                                                                            ebx_1:1.b
                                                                        eax_146 = &eax_144[2]
                                                                    label_408a5b:
                                                                        eax_146:1.b += eax_146.b
                                                                        eax_147 = eax_146 + 1
                                                                        *(eax_147 + 0x403e) += ebx_1:1.b
                                                                    else
                                                                        if (add_overflow(ebp_15, 1))
                                                                            goto label_408a40
                                                                        
                                                                        ebp_14 = *(edi_6 + 0x6e) * 0x4089d490
                                                                    label_4089d3:
                                                                        *ecx_3 += edx_1.b
                                                                        ebp_14 += *esi_8
                                                                        char temp0_32
                                                                        char temp1_3
                                                                        temp0_32, temp1_3, eflags =
                                                                            __aaa(eax_138.b, eax_138:1.b, eflags)
                                                                        eax_138.b = temp0_32
                                                                        eax_138:1.b = temp1_3
                                                                        eax_138.b ^= 4
                                                                        *eax_138 += eax_138.b
                                                                        *(eax_138 + edx_1 + 0x480040) +=
                                                                            ebx_1:1.b
                                                                        char temp56_1 = *eax_138
                                                                        *eax_138 += eax_138.b
                                                                        c_27 = temp56_1 + eax_138.b u< temp56_1
                                                                        z_11 = temp56_1 == neg.b(eax_138.b)
                                                                        s_6 = temp56_1 + eax_138.b s< 0
                                                                        *0x800400c = ebx_1
                                                                        esp_13 = 0x800400c
                                                                    label_4089eb:
                                                                        
                                                                        if (s_6)
                                                                            *(esp_13 - 4) = ebp_14
                                                                            esp_13 -= 4
                                                                            
                                                                            if (z_11)
                                                                                eax_146 = &eax_138[1]
                                                                                goto label_408a5b
                                                                            
                                                                            uint8_t* edi_8
                                                                            uint8_t temp0_33
                                                                            temp0_33, edi_8 =
                                                                                __insb(edi_6, edx_1.w, eflags)
                                                                            *edi_8 = temp0_33
                                                                            
                                                                            if (not(c_27))
                                                                                jump(0x40897e)
                                                                            
                                                                            jump(0x4089f3)
                                                                        
                                                                        eax_147 = 0x403e
                                                                    *(esp_13 + edi_6) += ebx_1.b
                                                                    *(eax_147 + 1) += (eax_147 + 1).b
                                                                    __out_immb_oeax(0x40, eax_147 + 1, 
                                                                        eflags)
                                                                    char temp58 = *ebx_1
                                                                    *ebx_1 += edx_1.b
                                                                    *(esp_13 - 4) = esp_13
                                                                    *(esp_13 - 8) = esp_13 - 4
                                                                    *(esp_13 - 0xc) = 0x64616572
                                                                    uint16_t* esi_13 =
                                                                        __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                                    int32_t eflags_1
                                                                    int16_t temp0_34
                                                                    temp0_34, eflags_1 = __arpl_memw_gpr16(
                                                                        *(ecx_3 + 0x6c), (esp_13 - 0xd).w)
                                                                    *(ecx_3 + 0x6c) = temp0_34
                                                                    __outsd(edx_1.w, *esi_13, esi_13, 
                                                                        eflags_1)
                                                                    
                                                                    if (ebx_1 == 0xffffffff)
                                                                        if (ebx_1 == 0xffffffff)
                                                                            undefined
                                                                        
                                                                        jump(0x408a83)
                                                                    
                                                                    if (ebx_1 != 0xffffffff && ecx_3 != 1)
                                                                        *(ebp_14 + 0x53)
                                                                        *(ebp_14 + 0x53)
                                                                        bool c_30 = unimplemented  {imul esi, 
                                                                            dword [ebp+0x53], 0x68636e79}
                                                                        
                                                                        if (c_30)
                                                                            jump(sub_408bd4+7)
                                                                        
                                                                        jump(sub_408ac5+0xa7)
                                                                    
                                                                    *0x408ac43f = sbb.d(*0x408ac43f, edi_6, 
                                                                        temp58 + edx_1.b u< temp58)
                                                                    *((eax_147 + 1) * 2) += (ecx_3 - 1):1.b
                                                                    *(eax_147 + 1) += (eax_147 + 1).b
                                                                    *(eax_147 + 1) += (eax_147 + 1).b
                                                                    *(eax_147 + 1) += (eax_147 + 1).b
                                                                    *(eax_147 + 1)
                                                                    
                                                                    if (esp_13 != 0xe && ecx_3 != 2)
                                                                        jump(sub_408a8d+3)
                                                                    
                                                                    jump(sub_408ac5+0x41)
                                                            
                                                            ebp_11 = *(edi_1 + 0x6e) * 0x6c696146
                                                            char* eax_124
                                                            eax_124.b = *esi_8
                                                            void* esi_11 = esi_8 + 1
                                                            *eax_124 = eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            *eax_124 += eax_124.b
                                                            eax_124.b = *esi_11
                                                            esi_8 = esi_11 + 1
                                                            *eax_124 = eax_124.b
                                                            eax_124.b = eax_124.b
                                                            *eax_124 += eax_124.b
                                                            edi_1[0x20].b
                                                            eax_124[0xbc00403e] += edx_1:1.b
                                                            void* eax_125
                                                            eax_125.b = (&eax_124[1]).b * 2
                                                            void* eax_126
                                                            eax_126:1.b =
                                                                (eax_125 + 1):1.b + (eax_125 + 1).b
                                                            *(eax_126 + 0x403f) += ebx_1:1.b
                                                            *(esp_3 + edi_1) += ebx_1.b
                                                            *(eax_126 + 0x3e) += ebx_1.b
                                                            eax_123 = eax_126 + 3
                                                            goto label_4088ab
                                                        
                                                        esi_8 =
                                                            __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                        uint8_t temp0_24
                                                        temp0_24, edi_1 =
                                                            __insb(edi_1, edx_1.w, eflags)
                                                        *edi_1 = temp0_24
                                                        ebx_1 = &ebx_1[1]
                                                    
                                                    goto label_408826
                                                
                                                goto label_408754
                                            
                                            *0xc000403a = esi_8
                                            esp_3 = 0xc000403a
                                            ebp_9 = *(edi_1 + 0x6c) * 0x6f697461
                                        label_408694:
                                            esi_8 = __outsb(edx_1.w, *esi_8, esi_8, eflags)
                                            void* eax_94
                                            eax_94.b = __in_al_immb(0x86, eflags)
                                            eax_70 = eax_94 + 1
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                        label_4086a5:
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            *eax_70 += eax_70.b
                                            char temp40_1 = eax_70:1.b
                                            char temp41_1 = eax_70:1.b
                                            eax_70:1.b *= 2
                                            char temp0_18 = *eax_70
                                            *eax_70 = eax_70.b
                                            eax_70.b = temp0_18
                                            *eax_70 = adc.b(*eax_70, eax_70.b, 
                                                temp40_1 + temp41_1 u< temp40_1)
                                            *eax_70 += eax_70.b
                                            *(esp_3 - 4) = eax_70
                                            *eax_70 += sub_403eb0
                                            esp_3 = 0xc000403e
                                        else
                                            void* eax_86 = eax_70
                                            esi_8[0x20].b -= eax_86.b
                                            
                                            while (true)
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                *eax_86 += eax_86.b
                                                esi_8[0x60020].b -= eax_86.b
                                                *eax_86 += eax_86.b
                                                edi_1[0x20].b
                                                *(eax_86 - 0x43ffbfc2) += edx_1:1.b
                                                void* eax_87
                                                eax_87.b = (eax_86 + 1).b * 2
                                                void* eax_88
                                                eax_88:1.b = (eax_87 + 1):1.b + (eax_87 + 1).b
                                                *(eax_88 + 0x403f) += ebx_1:1.b
                                                *(esp_3 + edi_1) += ebx_1.b
                                                *(eax_88 + 0x3e) += ebx_1.b
                                                eax_70 = eax_88 + 3
                                                char temp39_1 = *0x6e6f4345
                                                *0x6e6f4345 += ecx_1.b
                                                bool c_16 = temp39_1 + ecx_1.b u< temp39_1
                                                
                                                if (temp39_1 == neg.b(ecx_1.b) || c_16)
                                                    goto label_408694
                                                
                                                if (c_16)
                                                    goto label_4086a5
                                                
                                                ebp_9 += 1
                                                
                                                if (c_16)
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    eax_70.b = __in_al_immb(0x86, eflags)
                                                    *(eax_70 + 1) += edx_1.b
                                                    *(eax_70 + 1) += (eax_70 + 1).b
                                                    *(eax_70 - 0x7e) += edx_1.b
                                                    *(eax_70 - 0x43ffbfc0) += edx_1:1.b
                                                    eax_70.b = (eax_70 + 3).b * 2
                                                    break
                                                
                                                esi_8 = __outsd(edx_1.w, *esi_8, esi_8, eflags)
                                                
                                                if (not(c_16))
                                                    esi_8[eax_70 * 2 + 0x20].b =
                                                        rol.b(esi_8[eax_70 * 2 + 0x20].b, 0)
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    *eax_70 += eax_70.b
                                                    goto label_40864d
                                                
                                                *(esp_3 + edi_1) += ebx_1.b
                                                *(eax_70 + 0x3e) += ebx_1.b
                                                *(((eax_70 + 3) << 1) + 0x61766e49) += ecx_1.b
                                                uint8_t temp0_13
                                                temp0_13, edi_1 = __insb(edi_1, edx_1.w, eflags)
                                                *edi_1 = temp0_13
                                                esp_3 = *(ebx_1 + ((eax_70 + 3) << 1) + 0x61)
                                                    * 0x408d7473
                                                *(eax_70 + 3) += ecx_1:1.b
                                                char temp0_14 = *(eax_70 + 3)
                                                *(eax_70 + 3) = (eax_70 + 3).b
                                                eax_86.b = temp0_14
                                                *eax_86 += eax_86.b
                                        
                                        void* eax_97
                                        eax_97:1.b = (eax_70 + 1):1.b + (eax_70 + 1).b
                                        eax_98 = eax_97 + 1
                                        eax_98[0x403e] += ebx_1:1.b
                                        *(esp_3 + edi_1) += ebx_1.b
                                        goto label_4086df
                                    
                                    uint8_t temp0_12
                                    temp0_12, edi_1 = __insb(edi_1, edx_1.w, eflags)
                                    *edi_1 = temp0_12
                                    *(eax_70 + (edx_1 << 1) + 0x6f)
                                    esp_3 = *(eax_70 + (edx_1 << 1) + 0x6f) * 0x65746e69
                                    bool c_15 = unimplemented  {imul esp, dword [eax+edx*2+0x6f], 
                                        0x65746e69}
                                    
                                    if (not(c_15))
                                        *eax_70
                                        *eax_70 += eax_70.b
                                        break
                                    
                                    *eax_70 -= 0x50
                                    *(esi_8 + edi_1 + 0x3ec00040) += ebx_1:1.b
                                    eax_81 = eax_70 + 2
                                
                            label_408586:
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                *eax_70 += eax_70.b
                                breakpoint
                        
                        esp_3 += 1
                        esi_8 = *(esi_8 + 0x69) * 0x84c06564
                        eax_48 = eax_68 + 1
                    
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    *eax_48 += eax_48.b
                    eax_48.b *= 2
                    *eax_48
                    *eax_48 = adc.b(*eax_48, eax_48.b, false)
                    *eax_48 += eax_48.b
                    uint8_t temp0_8
                    temp0_8, edi_1 = __insb(edi_1, edx_1.w, eflags)
                    *edi_1 = temp0_8
                    *eax_48 -= 0x50
                    *(esi_8 + edi_1 + 0x3ec00040) += ebx_1:1.b
                    eax_70 = eax_48 + 2
                    goto label_4084ab
            
            *eax_50 = *eax_50
            goto label_408371
        
        goto label_40828f
    
    ebp_1 = *(edi_1 + 0x6e) * 0x4080e890
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    eax_15.b += ecx_1:1.b
    *eax_15 += 0x10
    *eax_15 += eax_15.b
    eax_15[0xffffff80] += eax_15.b
    eax_15[0xbc00403f] += edx_1:1.b
    void* eax_17
    eax_17.b = (&eax_15[2]).b * 2
    void* eax_18
    eax_18:1.b = (eax_17 + 1):1.b + (eax_17 + 1).b
    eax_19 = eax_18 + 1
    *(eax_19 + 0x403e) += ebx_1:1.b

*(eax_19 + (edx_1 << 3)) += ebx_1:1.b
*(eax_19 + 0x3d) += ebx_1.b
eax_21 = eax_19 + 2
char temp6_1 = *((eax_21 << 1) + 0x4f74754f)
*((eax_21 << 1) + 0x4f74754f) += ecx_1.b
c_1 = temp6_1 + ecx_1.b u< temp6_1
goto label_4080ee
