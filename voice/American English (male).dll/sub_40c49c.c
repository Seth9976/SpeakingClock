// 函数: sub_40c49c
// 地址: 0x40c49c
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
int32_t eflags
arg1.b = __in_al_immb(0xc4, eflags)
void* eax_1 = &arg1[1]
*(eax_1 * 2) += arg3.b
label_40c4be:
*eax_1 += eax_1.b
uint16_t* entry_ebx
void* esp
*(esp + 1 + arg5 + 0x30c80040) += entry_ebx:1.b
char* eax_4
eax_4:1.b = (esp + 2):1.b + arg3.b
*eax_4 ^= eax_4.b
*eax_4 <<= 1
void* eax_5
eax_5:1.b = (&eax_4[1]):1.b + (&eax_4[1]).b
*eax_5 ^= eax_5.b
*(arg5 + arg4 + 0x40) += eax_5:1.b
char temp1_1 = *(eax_5 + 0x1600402e)
*(eax_5 + 0x1600402e) += eax_5:1.b
bool c_1 = temp1_1 + eax_5:1.b u< temp1_1
bool z_1 = arg4 == 0xffffffff
bool s_1 = arg4 + 1 s< 0
bool o_1 = add_overflow(arg4, 1)
*(eax_1 - 4) = arg5
int32_t edi_1 = *(eax_1 - 4)
uint16_t* esi = *eax_1
arg4 = *(eax_1 + 4)
uint16_t* ebx = *(eax_1 + 0xc)
int16_t edx = (*(eax_1 + 0x10)).w
arg3 = *(eax_1 + 0x14)
void* eax_8 = *(eax_1 + 0x18)
esp = eax_1 + 0x1c

if (not(c_1))
    goto label_40c4ea

if (o_1)
    goto label_40c5ba

while (true)
    *esp
    esi = *(esp + 4)
    void* ebp = *(esp + 8)
    entry_ebx = *(esp + 0x10)
    edx = (*(esp + 0x14)).w
    arg3 = *(esp + 0x18)
    eax_8 = *(esp + 0x1c)
    esp += 0x20
    
    if (c_1)
        arg4 = ebp + 1
        z_1 = ebp == 0xffffffff
        s_1 = ebp + 1 s< 0
        void* eax_30
        void* eax_60
        uint16_t* esi_9
        uint16_t* esi_12
        char* edi_9
        bool z_4
        bool s_2
        bool o_2
        
        if (c_1)
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            char temp10_1 = *eax_8
            *eax_8 += eax_8.b
            edx:1.b = adc.b(edx:1.b, eax_8.b, temp10_1 + eax_8.b u< temp10_1)
            *((eax_8 + 1) * 2) += arg3.b
            *(eax_8 + 1) += (eax_8 + 1).b
            char temp0_6 = esp
            esp = eax_8 + 1
            *(temp0_6 + 1 + esi + 0x30c80040) += entry_ebx:1.b
            char* eax_28
            eax_28:1.b = (temp0_6 + 2):1.b + arg3.b
            *eax_28 ^= eax_28.b
            *eax_28 <<= 1
            void* eax_29
            eax_29:1.b = (&eax_28[1]):1.b + (&eax_28[1]).b
            *eax_29 ^= eax_29.b
            eax_8 = eax_29 - 1
        label_40c605:
            eax_30 = eax_8 + 1
        label_40c607:
            *(esi + arg4 + 0x40) += eax_30:1.b
            char temp6_1 = *(eax_30 + 0x1700402e)
            *(eax_30 + 0x1700402e) += eax_30:1.b
            c_1 = temp6_1 + eax_30:1.b u< temp6_1
        label_40c611:
            z_1 = arg4 == 0xffffffff
            s_1 = arg4 + 1 s< 0
            *(esp - 4) = esi
            *(esp - 4)
            int32_t esi_5 = *esp
            *(esp + 4)
            *(esp + 0xc)
            *(esp + 0x10)
            *(esp + 0x14)
            *(esp + 0x18)
            void* esp_13 = esp + 0x1c
            
            if (c_1)
                goto label_40c67f
            
            edi_1 = *esp_13
            uint16_t* esi_6 = *(esp_13 + 4)
            arg4 = *(esp_13 + 8)
            ebx = *(esp_13 + 0x10)
            edx = (*(esp_13 + 0x14)).w
            arg3 = *(esp_13 + 0x18)
            eax_8 = *(esp_13 + 0x1c)
            esp = esp_13 + 0x20
            esi = __outsb(edx, *esi_6, esi_6, eflags)
            
            if (not(z_1))
                esi = __outsb(edx, *esi, esi, eflags)
            label_40c61b:
                
                if (z_1 || c_1)
                    goto label_40c67e
                
            label_40c61d:
                uint8_t* edi_8
                uint8_t temp0_7
                temp0_7, edi_8 = __insb(edi_1, edx, eflags)
                *edi_8 = temp0_7
                *(arg3 + (eax_8 << 1) + 0x72)
                esp = *(arg3 + (eax_8 << 1) + 0x72) * 0x72724567
                c_1 = unimplemented  {imul esp, dword [ecx+eax*2+0x72], 0x72724567}
            label_40c626:
                esi = __outsd(edx, *esi, esi, eflags)
                
                if (c_1)
                    goto label_40c69d
                
                *eax_8 = 0
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                esi[eax_8 * 4 + 0x20].b += edx:1.b
            label_40c64b:
                *(eax_8 * 2) += arg3.b
                *eax_8 += eax_8.b
                char temp0_8 = esp
                esp = eax_8
                *(temp0_8 + 1 + esi + 0x30c80040) += ebx:1.b
                char* eax_34
                eax_34:1.b = (temp0_8 + 2):1.b + arg3.b
                *eax_34 ^= eax_34.b
                *eax_34 <<= 1
                eax_8 = &eax_34[1]
                goto label_40c663
            
        label_40c663:
            eax_8:1.b += eax_8.b
        label_40c665:
            *eax_8 ^= eax_8.b
            *(esi + arg4 + 0x40) += eax_8:1.b
            char temp13_1 = *(eax_8 + 0x1700402e)
            *(eax_8 + 0x1700402e) += eax_8:1.b
            c_1 = temp13_1 + eax_8:1.b u< temp13_1
            bool z_3 = arg4 == 0xffffffff
            s_1 = arg4 + 1 s< 0
            *(esp - 4) = esi
            edi_9 = *(esp - 4)
            esi = *esp
            arg4 = *(esp + 4)
            ebx = *(esp + 0xc)
            edx = (*(esp + 0x10)).w
            arg3 = *(esp + 0x14)
            eax_8 = *(esp + 0x18)
            esp += 0x1c
            
            if (c_1)
            label_40c6e3:
                uint16_t* temp19_1 = arg3
                arg3 -= 1
                z_3 = temp19_1 == 1
                s_1 = temp19_1 - 1 s< 0
                goto label_40c6e5
            
            while (true)
                *esp
                uint16_t* esi_7 = *(esp + 4)
                *(esp + 8)
                *(esp + 0x10)
                int16_t edx_2 = (*(esp + 0x14)).w
                *(esp + 0x18)
                *(esp + 0x1c)
                esp += 0x20
                __outsb(edx_2, *esi_7, esi_7, eflags)
                
                if (z_3)
                    goto label_40c6c0
                
            label_40c67e:
                *esp
                esi_5 = *(esp + 4)
                *(esp + 8)
                *(esp + 0x10)
                *(esp + 0x14)
                *(esp + 0x18)
                *(esp + 0x1c)
                esp_13 = esp + 0x20
            label_40c67f:
                *(esp_13 - 4) = esi_5
                edi_9 = *(esp_13 - 4)
                esi = *esp_13
                arg4 = *(esp_13 + 4)
                ebx = *(esp_13 + 0xc)
                edx = (*(esp_13 + 0x10)).w
                arg3 = *(esp_13 + 0x14)
                eax_8 = *(esp_13 + 0x18)
                esp = esp_13 + 0x1c
                void* eax_54
                
                if (c_1)
                    eax_8 = adc.d(eax_8, 0x72615645, c_1)
                    *(arg3 + 0x6e)
                    esp = *(arg3 + 0x6e) * 0x64614274
                    c_1 = unimplemented  {imul esp, dword [ecx+0x6e], 0x64614274}
                    uint16_t* temp18_1 = arg3
                    arg3 -= 1
                    z_3 = temp18_1 == 1
                    s_1 = temp18_1 - 1 s< 0
                label_40c6e5:
                    esi = __outsb(edx, *esi, esi, eflags)
                    
                    if (s_1)
                        *(eax_8 + 0x2e) += arg3.b
                        eax_54 = eax_8 + 1
                        goto label_40c733
                    
                    if (c_1)
                    label_40c75e:
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *edi_9 = *esi
                        esi_9 = esi + 1
                        *eax_8 = 0xc
                        char temp0_12 = esp
                        esp = eax_8
                        *(temp0_12 + 1 + esi_9 + 0x30c80040) += ebx:1.b
                        char* eax_57
                        eax_57:1.b = (temp0_12 + 2):1.b + arg3.b
                        *eax_57 ^= eax_57.b
                        *eax_57 <<= 1
                        void* eax_58
                        eax_58:1.b = (&eax_57[1]):1.b + (&eax_57[1]).b
                        *eax_58 ^= eax_58.b
                        eax_60 = eax_58
                        goto label_40c79b
                    
                    esi = __outsd(edx, *esi, esi, eflags)
                    
                    if (c_1)
                        continue
                    else
                        edi_9[eax_8 << 3] s>>= 0x40
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        edi_9[eax_8 << 3] += ebx:1.b
                else
                    if (not(s_1))
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                    else
                        arg4 += 1
                        
                        if (not(c_1))
                            goto label_40c68a
                    
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                
                *((eax_8 + 1) * 2) += arg3.b
                *(eax_8 + 1) += (eax_8 + 1).b
                char temp0_10 = esp
                esp = eax_8 + 1
                *(temp0_10 + 1 + esi + 0x30c80040) += ebx:1.b
                char* eax_51
                eax_51:1.b = (temp0_10 + 2):1.b + arg3.b
                *eax_51 ^= eax_51.b
                *eax_51 <<= 1
                void* eax_52
                eax_52:1.b = (&eax_51[1]):1.b + (&eax_51[1]).b
                *eax_52 ^= eax_52.b
                eax_54 = eax_52
            label_40c733:
                *(esi + arg4 + 0x40) += eax_54:1.b
                char temp21_1 = *(eax_54 + 0x1800402e)
                *(eax_54 + 0x1800402e) += eax_54:1.b
                c_1 = temp21_1 + eax_54:1.b u< temp21_1
                z_4 = arg4 == 0xffffffff
                s_2 = arg4 + 1 s< 0
                o_2 = add_overflow(arg4, 1)
                *(esp - 4) = esi
                *(esp - 4)
                esi_12 = *esp
                arg4 = *(esp + 4)
                ebx = *(esp + 0xc)
                edx = (*(esp + 0x10)).w
                arg3 = *(esp + 0x14)
                eax_8 = *(esp + 0x18)
                esp += 0x1c
                
                if (c_1)
                    goto label_40c7ab
                
                edi_9 = *esp
                uint16_t* esi_13 = *(esp + 4)
                arg4 = *(esp + 8)
                ebx = *(esp + 0x10)
                edx = (*(esp + 0x14)).w
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
                esi_9 = __outsb(edx, *esi_13, esi_13, eflags)
                
                if (z_4)
                    eax_8.b += arg3.b
                    *eax_8 ^= eax_8.b
                    breakpoint
                
                if (c_1)
                    if (not(c_1))
                        goto label_40c7bc
                    
                    goto label_40c82b
                
                edi_9 = *esp
                esi_9 = *(esp + 4)
                arg4 = *(esp + 8)
                ebx = *(esp + 0x10)
                edx = (*(esp + 0x14)).w
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
                break
            
            goto label_40c749
        
        arg5 = __outsd(edx, *esi, esi, eflags)
        
        if (not(c_1))
            arg4[eax_8 * 4 + 0x20].b = arg4[eax_8 * 4 + 0x20].b
            *eax_8 += eax_8.b
        label_40c569:
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            arg4[eax_8 * 4 + 0x60020].b += arg3:1.b
            *eax_8 += eax_8.b
            char temp0_4 = esp
            esp = eax_8
            *(temp0_4 + 1 + arg5 + 0x30c80040) += entry_ebx:1.b
            char* eax_20
            eax_20:1.b = (temp0_4 + 2):1.b + arg3.b
            *eax_20 ^= eax_20.b
            *eax_20 <<= 1
            void* eax_21
            eax_21:1.b = (&eax_20[1]):1.b + (&eax_20[1]).b
            *eax_21 ^= eax_21.b
            void* eax_23 = eax_21
            *(arg5 + arg4 + 0x40) += eax_23:1.b
            
            while (true)
                char temp11_1 = *(eax_23 + 0x1500402e)
                *(eax_23 + 0x1500402e) += eax_23:1.b
                c_1 = temp11_1 + eax_23:1.b u< temp11_1
                z_1 = arg4 == 0xffffffff
                s_1 = arg4 + 1 s< 0
                *(esp - 4) = arg5
                edi_1 = *(esp - 4)
                esi = *esp
                arg4 = *(esp + 4)
                ebx = *(esp + 0xc)
                edx = (*(esp + 0x10)).w
                arg3 = *(esp + 0x14)
                eax_8 = *(esp + 0x18)
                esp += 0x1c
                
                if (c_1)
                    break
                
                edi_1 = *esp
                uint16_t* esi_3 = *(esp + 4)
                arg4 = *(esp + 8)
                ebx = *(esp + 0x10)
                edx = (*(esp + 0x14)).w
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
                esi = __outsb(edx, *esi_3, esi_3, eflags)
                
                if (z_1)
                    goto label_40c605
                
                if (z_1 || c_1)
                    goto label_40c61d
                
                if (c_1)
                    goto label_40c620
                
            label_40c5ba:
                uint8_t* edi_6
                uint8_t temp0_5
                temp0_5, edi_6 = __insb(edi_1, edx, eflags)
                *edi_6 = temp0_5
                esi = __outsd(edx, *esi, esi, eflags)
                
                if (not(z_1) && not(c_1))
                    *(eax_8 + 0x2e) += arg3.b
                    eax_30 = eax_8 + 1
                    goto label_40c607
                
                if (c_1)
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    char temp7_1 = *eax_8
                    *eax_8 += eax_8.b
                    c_1 = temp7_1 + eax_8.b u< temp7_1
                    
                    if (temp7_1 != neg.b(eax_8.b))
                        eax_8 += 1
                        goto label_40c64b
                    
                    *esp
                    esp += 2
                    goto label_40c611
                
                __outsd(edx, *esi, esi, eflags)
                
                if (not(c_1))
                    *eax_8 = rlc.b(*eax_8, 0xc6, c_1)
                    goto label_40c5c6
                
            label_40c54e:
                *esp
                uint16_t* esi_2 = *(esp + 4)
                arg4 = *(esp + 8)
                *(esp + 0x10)
                edx = (*(esp + 0x14)).w
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
                arg5 = __outsb(edx, *esi_2, esi_2, eflags)
                
                if (not(z_1))
                    goto label_40c552
                
                eax_23 = eax_8 + 1
            
            goto label_40c61b
        
    label_40c4ea:
        int32_t edi_2 = *esp
        uint16_t* esi_1 = *(esp + 4)
        arg4 = *(esp + 8)
        entry_ebx = *(esp + 0x10)
        edx = (*(esp + 0x14)).w
        arg3 = *(esp + 0x18)
        eax_8 = *(esp + 0x1c)
        esp += 0x20
        arg5 = __outsb(edx, *esi_1, esi_1, eflags)
        
        if (z_1)
            break
        
        arg5 = __outsb(edx, *arg5, arg5, eflags)
        
        if (not(z_1) && not(c_1))
            uint8_t* edi_3
            uint8_t temp0_2
            temp0_2, edi_3 = __insb(edi_2, edx, eflags)
            *edi_3 = temp0_2
            *(edi_3 + (arg3 << 1) + 0x70)
            esp = *(edi_3 + (arg3 << 1) + 0x70) * 0x6f727245
            bool c_2 = unimplemented  {imul esp, dword [edi+ecx*2+0x70], 0x6f727245}
            
            while (true)
                char* eax_10
                
                if (not(c_2))
                    int16_t ds_1
                    eax_10, ds_1 = __lds_gprz_memp(*(eax_8 - 1))
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    goto label_40c506
                
                *esp
                arg5 = *(esp + 4)
                arg4 = *(esp + 8)
                entry_ebx = *(esp + 0x10)
                *(esp + 0x14)
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
                
                if (not(c_2))
                    *esp
                    uint16_t* esi_24 = *(esp + 4)
                    arg4 = *(esp + 8)
                    entry_ebx = *(esp + 0x10)
                    int16_t edx_18 = (*(esp + 0x14)).w
                    arg3 = *(esp + 0x18)
                    eax_10 = *(esp + 0x1c)
                    esp += 0x20
                    arg5 = __outsb(edx_18, *esi_24, esi_24, eflags)
                    
                    if (not(z_1))
                        *eax_10 += eax_10.b
                        char* eax_102
                        eax_102.b = __in_al_immb(0xc4, eflags)
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        eax_102[1] += (&eax_102[1]).b
                        void* eax
                        eax:1.b = (&eax_102[1]):1.b * 2
                        int16_t es_1
                        eax_1, es_1 = __les_gprz_memp(*eax)
                        eax_1.b = eax_1.b
                        goto label_40c4be
                    
                label_40c506:
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    char* eax_12
                    int16_t ds_2
                    eax_12, ds_2 = __lds_gprz_memp(*(eax_10 - 1))
                    eax_12.b = eax_12.b
                    *eax_12 += eax_12.b
                    char temp0_3 = esp
                    esp = eax_12
                    *(temp0_3 + 1 + arg5 + 0x30c80040) += entry_ebx:1.b
                    char* eax_15
                    eax_15:1.b = (temp0_3 + 2):1.b + arg3.b
                    *eax_15 ^= eax_15.b
                    *eax_15 <<= 1
                    eax_8 = &eax_15[1]
                    break
                
                if (c_2)
                    goto label_40c569
            
        label_40c537:
            eax_8:1.b += eax_8.b
            *eax_8 ^= eax_8.b
            *(arg5 + arg4 + 0x40) += eax_8:1.b
            char temp3_1 = *(eax_8 + 0x1500402e)
            *(eax_8 + 0x1500402e) += eax_8:1.b
            c_1 = temp3_1 + eax_8:1.b u< temp3_1
            z_1 = arg4 == 0xffffffff
            s_1 = arg4 + 1 s< 0
            *(esp - 4) = arg5
            edi_1 = *(esp - 4)
            esi = *esp
            arg4 = *(esp + 4)
            ebx = *(esp + 0xc)
            edx = (*(esp + 0x10)).w
            arg3 = *(esp + 0x14)
            eax_8 = *(esp + 0x18)
            esp += 0x1c
            
            if (not(c_1))
                goto label_40c54e
            
            if (not(c_1))
                goto label_40c5ba
            
        label_40c620:
            arg3 += 1
            
            if (c_1)
            label_40c68a:
                esi = __outsd(edx, *esi, esi, eflags)
                
                if (c_1)
                    goto label_40c665
                
                *eax_8 = 0
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
            label_40c69d:
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                eax_8.b += ebx.b
                *eax_8 = 0xc
                *eax_8 += eax_8.b
                *(esp + 0x30bc0040) += edx.b
                void* eax_42
                eax_42.b = (eax_8 + 1).b + arg3.b
                *eax_42 ^= eax_42.b
            label_40c6c0:
                breakpoint
            
            arg4 += 1
            
            if (not(c_1))
                goto label_40c626
            
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *((eax_8 + 1) * 2) += arg3.b
            *(eax_8 + 1) += (eax_8 + 1).b
            *(esp + 1 + esi + 0x30c80040) += ebx:1.b
            char* eax_43
            eax_43:1.b = (esp + 2):1.b + arg3.b
            *eax_43 ^= eax_43.b
            *eax_43 <<= 1
            void* eax_44
            eax_44:1.b = (&eax_43[1]):1.b + (&eax_43[1]).b
            *eax_44 ^= eax_44.b
            *(esi + arg4 + 0x40) += eax_44:1.b
            char temp15_1 = *(eax_44 + 0x1500402e)
            *(eax_44 + 0x1500402e) += eax_44:1.b
            c_1 = temp15_1 + eax_44:1.b u< temp15_1
            z_4 = arg4 == 0xffffffff
            s_2 = arg4 + 1 s< 0
            o_2 = add_overflow(arg4, 1)
            *(eax_8 - 3) = esi
            edi_9 = *(eax_8 - 3)
            esi_9 = *(eax_8 + 1)
            arg4 = *(eax_8 + 5)
            ebx = *(eax_8 + 0xd)
            edx = (*(eax_8 + 0x11)).w
            arg3 = *(eax_8 + 0x15)
            void* esp_23 = eax_8 + 0x19
            eax_8 = *esp_23
            esp = esp_23 + 4
            
            if (not(c_1))
                *esp
                uint16_t* esi_10 = *(esp + 4)
                *(esp + 8)
                *(esp + 0x10)
                *(esp + 0x18)
                *(esp + 0x1c)
                __outsb((*(esp + 0x14)).w, *esi_10, esi_10, eflags)
                
                if (z_4)
                    breakpoint
                
                edi_9 = *(esp + 0x20)
                esi = *(esp + 0x24)
                arg4 = *(esp + 0x28)
                ebx = *(esp + 0x30)
                edx = (*(esp + 0x34)).w
                arg3 = *(esp + 0x38)
                eax_8 = *(esp + 0x3c)
                esp += 0x40
                goto label_40c6e3
            
            uint16_t* esi_14
            
            if (c_1)
            label_40c7aa:
                *esp
                esi_12 = *(esp + 4)
                arg4 = *(esp + 8)
                ebx = *(esp + 0x10)
                edx = (*(esp + 0x14)).w
                arg3 = *(esp + 0x18)
                eax_8 = *(esp + 0x1c)
                esp += 0x20
            label_40c7ab:
                esi_9 = __outsb(edx, *esi_12, esi_12, eflags)
                
                if (z_4)
                    eax_8.b += arg3.b
                    *eax_8 ^= eax_8.b
                    breakpoint
                
                if (not(c_1))
                    edi_9 = *esp
                    esi_9 = *(esp + 4)
                    arg4 = *(esp + 8)
                    ebx = *(esp + 0x10)
                    edx = (*(esp + 0x14)).w
                    arg3 = *(esp + 0x18)
                    eax_8 = *(esp + 0x1c)
                    esp += 0x20
                    goto label_40c7b1
                
            label_40c823:
                *(eax_8 - 0x37) += edx:1.b
                eax_8 += 2
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
            label_40c82b:
                *eax_8 += eax_8.b
            label_40c82d:
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *(eax_8 - 0x38) += edx:1.b
                *((eax_8 + 1) * 2) += arg3.b
                *(eax_8 + 1) += (eax_8 + 1).b
                char temp0_15 = esp
                esp = eax_8 + 1
                *(temp0_15 + 1 + esi_9 + 0x30c80040) += ebx:1.b
                char* eax_75
                eax_75:1.b = (temp0_15 + 2):1.b + arg3.b
                *eax_75 ^= eax_75.b
                *eax_75 <<= 1
                eax_8:1.b = (&eax_75[1]):1.b + (&eax_75[1]).b
                *eax_8 ^= eax_8.b
            else
            label_40c749:
                
                if (s_2)
                    goto label_40c74b
                
                *(eax_8 + 0x2e) += arg3.b
                eax_60 = eax_8 + 1
            label_40c79b:
                *(esi_9 + arg4 + 0x40) += eax_60:1.b
                char temp23_1 = *(eax_60 + 0x1800402e)
                *(eax_60 + 0x1800402e) += eax_60:1.b
                c_1 = temp23_1 + eax_60:1.b u< temp23_1
                z_4 = arg4 == 0xffffffff
                s_2 = arg4 + 1 s< 0
                o_2 = add_overflow(arg4, 1)
                *(esp - 4) = esi_9
                edi_9 = *(esp - 4)
                esi_14 = *esp
                arg4 = *(esp + 4)
                ebx = *(esp + 0xc)
                edx = (*(esp + 0x10)).w
                arg3 = *(esp + 0x14)
                eax_8 = *(esp + 0x18)
                esp += 0x1c
                
                if (not(c_1))
                    goto label_40c7aa
                
            label_40c813:
                esi_9 = __outsb(edx, *esi_14, esi_14, eflags)
                
                if (not(z_4))
                    esi_9 = __outsd(edx, *esi_9, esi_9, eflags)
                    goto label_40c817
            
            void* eax_78 = eax_8
        label_40c867:
            *(esi_9 + arg4 + 0x40) += eax_78:1.b
            char temp27_1 = *(eax_78 + 0x1800402e)
            *(eax_78 + 0x1800402e) += eax_78:1.b
            c_1 = temp27_1 + eax_78:1.b u< temp27_1
            bool cond:6_1 = arg4 == 0xffffffff
            bool cond:7_1 = arg4 == 0xffffffff
            bool cond:8_1 = arg4 + 1 s< 0
            bool cond:9_1 = arg4 != 0xffffffff
            *(esp - 4) = esi_9
            int32_t edi_17 = *(esp - 4)
            uint16_t* esi_16 = *esp
            arg4 = *(esp + 4)
            ebx = *(esp + 0xc)
            int16_t edx_5 = (*(esp + 0x10)).w
            arg3 = *(esp + 0x14)
            eax_8 = *(esp + 0x18)
            void* esp_45 = esp + 0x1c
            int32_t eax_89
            void* ebx_9
            uint16_t* esi_18
            TEB* fsbase
            void* eax_88
            uint16_t* edx_7
            void* esp_58
            uint16_t* esi_15
            void* esi_20
            
            if (c_1)
                while (true)
                    esi_15 = __outsb(edx_5, *esi_16, esi_16, eflags)
                    
                    if (cond:6_1)
                    label_40c937:
                        char temp33_1 = *(eax_8 + 0x1500402e)
                        *(eax_8 + 0x1500402e) += eax_8:1.b
                        bool cond:11_1 = arg4 == 0xffffffff
                        *(esp_45 - 4) = esi_15
                        *(esp_45 - 4)
                        esi_20 = *esp_45
                        arg4 = *(esp_45 + 4)
                        edx_7 = *(esp_45 + 0x10)
                        *(esp_45 + 0x14)
                        eax_88 = *(esp_45 + 0x18)
                        
                        if (temp33_1 + eax_8:1.b u< temp33_1)
                            *(esp_45 - 4) = *(esp_45 + 0xc)
                            esp_58 = esp_45 - 4
                            break
                        
                        *(esp_45 + 0x1c)
                        uint16_t* esi_21 = *(esp_45 + 0x20)
                        arg4 = *(esp_45 + 0x24)
                        ebx_9 = *(esp_45 + 0x2c)
                        int16_t edx_8 = (*(esp_45 + 0x30)).w
                        *(esp_45 + 0x34)
                        eax_89 = *(esp_45 + 0x38)
                        esp_45 += 0x3c
                        __outsb(edx_8, *esi_21, esi_21, eflags)
                        
                        if (not(cond:11_1))
                            *(ebx_9 + 0x70)
                            esi_18 = *(ebx_9 + 0x70) * 0x68637461
                            c_1 = unimplemented  {imul esi, dword [ebx+0x70], 0x68637461}
                            uint16_t* temp36_1 = arg4
                            arg4 += 1
                            cond:6_1 = temp36_1 == 0xffffffff
                            cond:8_1 = temp36_1 + 1 s< 0
                            
                            if (c_1)
                                goto label_40c9c2
                            
                            __outsd(edx_8, *esi_18, esi_18, eflags)
                        label_40c951:
                            
                            if (c_1)
                            label_40c8de:
                                edi_17 = *esp_45
                                esi_16 = *(esp_45 + 4)
                                arg4 = *(esp_45 + 8)
                                ebx = *(esp_45 + 0x10)
                                edx_5 = (*(esp_45 + 0x14)).w
                                arg3 = *(esp_45 + 0x18)
                                eax_8 = *(esp_45 + 0x1c)
                                esp_45 += 0x20
                                continue
                            else
                                *(arg4 - 0x75) = rlc.b(*(arg4 - 0x75), 0xec, c_1)
                            label_40c957:
                                *(esp_45 - 4) = 0
                                eax_8 = nullptr
                                *(esp_45 - 8) = arg4
                                *(esp_45 - 0xc) = j_sub_40338c
                                *(esp_45 - 0x10) = fsbase->NtTib.ExceptionList
                                esp_45 -= 0x10
                            
                            goto label_40c964
                    else
                        uint16_t* esi_19 = __outsb(edx_5, *esi_15, esi_15, eflags)
                        
                        if (cond:8_1)
                            eax_8.b = __in_al_dx(edx_5, eflags)
                            goto label_40c957
                        
                        int32_t gsbase
                        char temp0_17
                        temp0_17, eflags = __arpl_memw_gpr16(*(gsbase + &arg4[0x32]), esi_19.w)
                        *(gsbase + &arg4[0x32]) = temp0_17
                        arg4 += 1
                        
                        if (not(c_1))
                            esi_15 = __outsd(edx_5, *esi_19, esi_19, eflags)
                            
                            if (not(c_1))
                                uint16_t* esp_46 = arg4
                                arg4 = *esp_46
                                esp = &esp_46[2]
                            label_40c8f2:
                                eax_8 += 1
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                            label_40c8f9:
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                            label_40c8fd:
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *(arg3 * 9) += ebx:1.b
                                *((eax_8 + 1) * 2) += arg3.b
                                *(eax_8 + 1) += (eax_8 + 1).b
                                esp_45 = eax_8 + 1
                                *(esp + 1 + esi_15 + 0x30c80040) += ebx:1.b
                                char* eax_86
                                eax_86:1.b = (esp + 2):1.b + arg3.b
                                *eax_86 ^= eax_86.b
                                *eax_86 <<= 1
                                eax_8:1.b = (&eax_86[1]):1.b + (&eax_86[1]).b
                            
                            *eax_8 ^= eax_8.b
                            *(esi_15 + arg4 + 0x40) += eax_8:1.b
                            goto label_40c937
                        
                        *(edi_17 * 9 + 0x30) += eax_8:1.b
                    label_40c964:
                        *(fsbase + eax_8) = esp_45
                        sub_4053d8(data_4134a0, &arg4[-2])
                        int32_t edx_10
                        edx_10.b = 1
                        sub_4033c4(sub_409ee8(0x40c548, edx_10, *(arg4 - 4)))
                        eax_89 = 0
                    
                    *(esp_45 + 8)
                    *(fsbase + eax_89) = *esp_45
                    *(esp_45 + 8) = sub_40c9a5
                    sub_4039ec(&arg4[-2])
                    return 
                
            label_40c9af:
                *(esp_58 - 4) = esi_20
                esp_45 = esp_58 - 4
                *(arg4 - 0x14) = 0
                *(arg4 - 0x18) = 0
                *(arg4 - 0x1c) = 0
                esi_18 = edx_7
                ebx_9 = eax_88
            else
                int32_t edi_18 = *esp_45
                uint16_t* esi_17 = *(esp_45 + 4)
                arg4 = *(esp_45 + 8)
                ebx = *(esp_45 + 0x10)
                edx = (*(esp_45 + 0x14)).w
                arg3 = *(esp_45 + 0x18)
                eax_8 = *(esp_45 + 0x1c)
                esp = esp_45 + 0x20
                esi_15 = __outsb(edx, *esi_17, esi_17, eflags)
                
                if (cond:7_1)
                    *eax_8 ^= eax_8.b
                else
                    if (cond:9_1)
                        goto label_40c8f2
                    
                    int32_t edi_16 = edi_18 - 1
                    
                    while (true)
                        arg4.w -= 1
                        char temp0_16
                        temp0_16, edi_9 = __insd(edi_16, edx, eflags)
                        *edi_9 = temp0_16
                        esi_15 = __outsd(edx, *esi_15, esi_15, eflags)
                        
                        if (c_1)
                            goto label_40c8fd
                        
                        uint16_t* temp31_1 = arg4
                        arg4 += 1
                        z_4 = temp31_1 == 0xffffffff
                        o_2 = add_overflow(temp31_1, 1)
                        
                        if (c_1)
                            goto label_40c8f9
                        
                        esi_9 = __outsd(edx, *esi_15, esi_15, eflags)
                        
                        do
                            if (not(c_1))
                                eax_8.b = (eax_8 + 1).b + ebx.b
                                *(esp - 4) = arg4
                                esp -= 0x44
                                goto label_40c891
                            
                        label_40c817:
                            
                            if (z_4)
                                *(eax_8 + 0x2f) += arg3.b
                                eax_78 = eax_8 + 2
                                goto label_40c867
                            
                            char temp0_14
                            temp0_14, edi_9 = __insd(edi_9, edx, eflags)
                            *edi_9 = temp0_14
                        label_40c81a:
                        while (o_2)
                        
                        uint16_t* temp32_1 = arg4
                        arg4 += 1
                        z_4 = temp32_1 == 0xffffffff
                        s_2 = temp32_1 + 1 s< 0
                        o_2 = add_overflow(temp32_1, 1)
                    label_40c81d:
                        
                        if (c_1)
                        label_40c891:
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            *eax_8 += eax_8.b
                            eax_8.b += ebx.b
                            unimplemented  {enter 0x40, 0xc}
                            *eax_8 += eax_8.b
                            *(esp + 0x30bc0040) += edx.b
                            void* eax_79
                            eax_79.b = (eax_8 + 1).b + arg3.b
                            *eax_79 ^= eax_79.b
                            breakpoint
                        
                        esi_9 = __outsd(edx, *esi_9, esi_9, eflags)
                        
                        if (not(c_1))
                            goto label_40c823
                        
                        if (not(c_1))
                        label_40c7b1:
                            void* eax_70
                            
                            if (not(s_2))
                                uint64_t* eax_66
                                eax_66.b = (eax_8 + 1).b + edx.b
                                *eax_66 ^= eax_66.b
                                int16_t es_2
                                esi_9, es_2 = __les_gprz_memp(*eax_66)
                                *(eax_66 + 0x2f) += arg3.b
                                eax_70 = eax_66 + 2
                            else
                                if (c_1)
                                    goto label_40c81a
                                
                                edi_9 = *esp
                                esi_9 = *(esp + 4)
                                arg4 = *(esp + 8)
                                ebx = *(esp + 0x10)
                                edx = (*(esp + 0x14)).w
                                arg3 = *(esp + 0x18)
                                eax_8 = *(esp + 0x1c)
                                esp += 0x20
                                
                                if (z_4)
                                    goto label_40c81d
                                
                                arg4 += 1
                                
                                if (c_1)
                                    goto label_40c82d
                                
                                esi_9 = __outsd(edx, *esi_9, esi_9, eflags)
                            label_40c7bc:
                                
                                if (c_1)
                                label_40c74b:
                                    esi_9 = __outsd(edx, *esi_9, esi_9, eflags)
                                    char temp0_11
                                    temp0_11, eflags = __arpl_memw_gpr16(*(ebx + 0x65), arg4.w)
                                    *(ebx + 0x65) = temp0_11
                                    arg4 += 1
                                    
                                    if (not(c_1))
                                        esi = __outsd(edx, *esi_9, esi_9, eflags)
                                        
                                        if (c_1)
                                            goto label_40c6e3
                                        
                                        eax_8 += 1
                                        edi_9[(eax_8 << 3) + 0x40] += eax_8:1.b
                                        goto label_40c75e
                                else
                                    *(eax_8 + 1 + (arg3 << 3)) += arg3.b
                                    eax_8 += 2
                                    *eax_8 += eax_8.b
                                
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *eax_8 += eax_8.b
                                *(eax_8 + (arg3 << 3)) += arg3.b
                                *((eax_8 + 1) * 2) += arg3.b
                                *(eax_8 + 1) += (eax_8 + 1).b
                                char temp0_13 = esp
                                esp = eax_8 + 1
                                *(temp0_13 + 1 + esi_9 + 0x30c80040) += ebx:1.b
                                char* eax_65
                                eax_65:1.b = (temp0_13 + 2):1.b + arg3.b
                                *eax_65 ^= eax_65.b
                                *eax_65 <<= 1
                                void* eax_67
                                eax_67:1.b = (&eax_65[1]):1.b + (&eax_65[1]).b
                                *eax_67 ^= eax_67.b
                                eax_70 = eax_67
                            
                            *(esi_9 + arg4 + 0x40) += eax_70:1.b
                            char temp25_1 = *(eax_70 + 0x1400402e)
                            *(eax_70 + 0x1400402e) += eax_70:1.b
                            c_1 = temp25_1 + eax_70:1.b u< temp25_1
                            z_4 = arg4 == 0xffffffff
                            o_2 = add_overflow(arg4, 1)
                            *(esp - 4) = esi_9
                            edi_16 = *(esp - 4)
                            esi_15 = *esp
                            arg4 = *(esp + 4)
                            ebx = *(esp + 0xc)
                            edx = (*(esp + 0x10)).w
                            arg3 = *(esp + 0x14)
                            eax_8 = *(esp + 0x18)
                            esp += 0x1c
                            
                            if (c_1)
                                if (z_4)
                                    break
                                
                                continue
                        
                        edi_9 = *esp
                        esi_14 = *(esp + 4)
                        arg4 = *(esp + 8)
                        ebx = *(esp + 0x10)
                        edx = (*(esp + 0x14)).w
                        arg3 = *(esp + 0x18)
                        eax_8 = *(esp + 0x1c)
                        esp += 0x20
                        goto label_40c813
                
                *(esi_15 + arg4 + 0x40) += eax_8:1.b
                char temp29_1 = *(eax_8 + 0x1700402e)
                *(eax_8 + 0x1700402e) += eax_8:1.b
                c_1 = temp29_1 + eax_8:1.b u< temp29_1
                cond:6_1 = arg4 == 0xffffffff
                cond:8_1 = arg4 + 1 s< 0
                bool cond:12_1 = arg4 == 0xffffffff
                *(esp - 4) = esi_15
                *(esp - 4)
                esi_18 = *esp
                *(esp + 0xc)
                *(esp + 0x10)
                *(esp + 0x14)
                *(esp + 0x18)
                esp_45 = esp + 0x1c
                
                if (not(c_1))
                    goto label_40c8de
                
                if (c_1)
                    *esp_45
                    esi_20 = *(esp_45 + 4)
                    arg4 = *(esp_45 + 8)
                    *(esp_45 + 0x10)
                    edx_7 = *(esp_45 + 0x14)
                    *(esp_45 + 0x18)
                    eax_88 = *(esp_45 + 0x1c)
                    esp_58 = esp_45 + 0x20
                    
                    if (cond:12_1)
                        goto label_40c9af
                    
                    *(esp_58 - 4) = 0x6f727245
                    esp_45 = esp_58 - 4
                    goto label_40c951
                
                arg4 = *(esp + 4) - 1
                void* eax_82
                eax_82.b = __in_al_immb(0x8b, eflags)
                ebx_9 = eax_82
            eax_89 = 0
            *(esp_45 - 4) = arg4
            esp_45 -= 4
        label_40c9c2:
            *(esp_45 - 4) = j_sub_40338c
            *(esp_45 - 8) = *(fsbase + eax_89)
            *(fsbase + eax_89) = esp_45 - 8
            sub_40e554(ebx_9.w, &arg4[-0xa])
            *(arg4 - 0x10) = *(arg4 - 0x14)
            arg4[-6].b = 0xb
            sub_40e554(esi_18.w, &arg4[-0xc])
            *(arg4 - 8) = *(arg4 - 0x18)
            arg4[-2].b = 0xb
            *(esp_45 - 0xc) = &arg4[-8]
            *(esp_45 - 0x10) = 1
            sub_4053d8(data_4133b0, &arg4[-0xe])
            *(arg4 - 0x1c)
            int32_t edx_15
            edx_15.b = 1
            int32_t eax_100
            void* ebp_7
            eax_100, ebp_7 = sub_409f24(0x40c548, edx_15)
            sub_4033c4(eax_100)
            *(esp_45 - 8)
            fsbase->NtTib.ExceptionList = *(esp_45 - 0x10)
            *(esp_45 - 8) = sub_40ca3e
            sub_403a10(ebp_7 - 0x1c, 3)
            return 
        
    label_40c552:
        
        if (not(s_1))
            edx:1.b = adc.b(edx:1.b, eax_8.b, c_1)
        label_40c5c6:
            eax_8 += 1
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
        else
            continue
    
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += edx.b
    *eax_8 = 0xc
    *eax_8 += eax_8.b
    *(esp + 0x30bc0040) += edx.b
    void* eax_27
    eax_27.b = (eax_8 + 1).b + arg3.b
    *eax_27 ^= eax_27.b
    breakpoint

goto label_40c537
