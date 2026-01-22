// 函数: sub_479306
// 地址: 0x479306
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3
int16_t* entry_ebx
entry_ebx:1.b *= 2
*arg1 += arg1
*arg1 += arg1.b
*arg1 += arg1.b
arg1[-0x20000000].b += arg1.b
*arg1 -= arg1
arg1.b |= 0x4f
bool c = false
int32_t eflags
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
void** ebp = arg4 - 1
uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)

if (arg4 == 1)
    void** temp3_1 = ebp
    ebp += 1
    bool z = temp3_1 == 0xffffffff
    bool o = add_overflow(temp3_1, 1)
    esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    uint16_t* esp
    
    while (true)
        if (not(z))
            if (c)
                entry_ebx:1.b *= 2
            label_479354:
                unimplemented  {enter 0x0, 0xff}
                *arg1 += arg1
                *arg1 += arg1.b
                *arg1 += arg1.b
                arg1[-0x20000000].b += arg1.b
                arg1 -= *arg1
                *(arg6 + 0x6e)
                arg3 |= *(arg6 + 0x6e)
                c = false
            label_479369:
                uint16_t* esi_3 = __outsd(arg2.w, *esi_1, esi_1, eflags)
                
                if (ebp != 1)
                    arg1.b = *esi_3
                    *arg2
                    arg1.b -= 0x35
                    break
                
                esi_1 = __outsd(arg2.w, *esi_3, esi_3, eflags)
                
                if (ebp != 2 && not(c))
                    *arg3 = sbb.b(*arg3, arg1:1.b, c)
                    ebp -= 1
                    arg1.b += arg2.b
                    *arg1 += arg1.b
                    arg1, arg2, arg3 = arg1()
                    *arg1 += arg1.b
                    *arg3 += 1
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 = *arg1
                    char temp15_1 = arg1[0x13c2400b].b
                    arg1[0x13c2400b].b += arg1.b
                    c = temp15_1 + arg1.b u< temp15_1
                    goto label_47938e
                
                *arg1 += arg1.b
            else
                if (not(o))
                    goto label_479369
                
                *arg1 += arg2:1.b
                *arg1 += arg1
                *(esp - 4) = *arg1
                void* esp_1 = esp - 4
                *arg1 += arg1
                *arg3 += 1
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 = *arg1
                char temp10_1 = *(arg1 + 0x4f0c002a)
                *(arg1 + 0x4f0c002a) += arg1.b
                bool c_1 = temp10_1 + arg1.b u< temp10_1
                uint16_t* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
                esi_1 = __outsd(arg2.w, *esi_2, esi_2, eflags)
                
                if (ebp != 1)
                    esp = arg1
                    arg1 = esp_1
                else
                    arg6 = *(esp_1 - 1)
                    esi_1 = *(esp_1 + 3)
                    ebp = *(esp_1 + 7)
                    entry_ebx = *(esp_1 + 0xf)
                    arg2 = *(esp_1 + 0x13)
                    arg3 = *(esp_1 + 0x17)
                    arg1 = *(esp_1 + 0x1b)
                    esp = esp_1 + 0x1f
                    
                    if (esp_1 != 1 && not(c_1))
                        *ebp &= arg1
                        unimplemented  {enter 0x0, 0xff}
                        goto label_479354
                    
                label_4793b1:
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    arg1[-0x1b].b += entry_ebx:1.b
                
                arg6 += 1
                *arg1 += arg3:1.b
                *arg1 += arg1.b
                *(arg1 - 0x4fffbae6) += entry_ebx.b
                *(esi_1 + arg6 + 0x3ec00040) += entry_ebx:1.b
                void* eax_1
                eax_1:1.b = (arg1 + 2):1.b + (arg1 + 2).b
                arg1 = eax_1 + 1
                *(arg1 + 0x403e) += entry_ebx:1.b
            
            *(esp + arg6) += entry_ebx.b
            arg1 += 1
            *(entry_ebx + arg6 - 0x34fbffbe) += arg3:1.b
            break
        
        char temp4_1 = *(arg1 * 2)
        *(arg1 * 2) -= 9
        c = temp4_1 u< 9
        arg6 -= 1
    label_47938e:
        uint16_t* esi_4 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        void** temp5_1 = ebp
        ebp -= 1
        z = temp5_1 == 1
        o = add_overflow(temp5_1, 0xffffffff)
        esi_1 = __outsd(arg2.w, *esi_4, esi_4, eflags)
        
        if (z)
            *(esp - 4) = ebp
            esp -= 4
            
            if (o)
                continue
            else
                arg1:1.b <<= 0x93
                arg6 += 1
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
            
            goto label_4793b1
        
        char temp6 = arg1.b
        arg1.b += entry_ebx.b
        uint16_t es = *esi_1
        
        if (temp6 + entry_ebx.b s>= 0)
            char temp12 = *arg1
            *arg1 += arg1.b
            *esi_1 = *esp
            arg1.b = adc.b(arg1.b, 0x8f, temp12 + arg1.b u< temp12)
            *(ebp + 0x47) += arg3.b
            arg1.b *= 2
            int32_t eflags_1
            int16_t temp0_3
            temp0_3, eflags_1 = __arpl_memw_gpr16(*(ebp + 2), arg1.w)
            *(ebp + 2) = temp0_3
            undefined
        
        *esi_1 += arg2.b
        *arg3 += arg2.b
        *(esp - 4) = esp
        uint16_t* esi_7 = *(arg2 + 1 + (arg1 << 1) + 0x74) * 0x7463416e
        int32_t ebp_5 = *(arg6 + 0x6e) * 0x6b6e694c
        char* eax_2 = arg1
        void* eax_3 = esp - 4
        void* edi_2 = arg6 + 1
        *entry_ebx += eax_3.b
        char* edx_2 = (arg2 + 1) | *(arg2 + 1 + (eax_3 << 1) + 0x69)
        
        if (edx_2 == 0)
            if (edx_2 u>= 0)
                if (edx_2 s>= 0)
                    goto label_479543
                
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *(esi_7 + 0x47)
                goto label_47951a
            
            *eax_2
            __bound_gprv_mema32(ebp_5, *(entry_ebx + 0x41))
            __bound_gprv_mema32(ebp_5, *(edi_2 + 0x72))
            
            if (edx_2 != 0)
                __bound_gprv_mema32(ebp_5, *(entry_ebx + 0x52))
                
                if (edx_2 == 0)
                    if (edx_2 == 0)
                        jump(0x4794fd)
                    
                    jump(0x47955e)
                
                if (edx_2 s< 0)
                    jump(0x4794ec)
                
                goto label_4794f9
            
            char temp17_1 = edx_2[0x6b] | eax_3:1.b
            edx_2[0x6b] = temp17_1
            arg3 -= 1
            esi_7.w = __outsb(edx_2.w, *esi_7, esi_7.w, eflags)
            int32_t esi_10 = __outsd(edx_2.w, *esi_7, esi_7, eflags)
            
            if (temp17_1 u>= 0)
            label_4794f9:
                uint8_t* edi_6
                uint8_t temp0_9
                temp0_9, edi_6 = __insb(edi_2, edx_2.w, eflags)
                *edi_6 = temp0_9
                *(eax_2 + 2)
                
                if (edx_2 != 0xffffffff)
                    jump(0x479572)
                
                jump(0x4794fe)
            
            *esi_10 - *edi_2
            edi_2 += 4
        else
            if (edx_2 == 0)
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *(&esi_7[edx_2 * 2] + 0x47) += eax_3.b
            label_47951a:
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                eax_3.b ^= 0x96
            else
                entry_ebx -= 1
                ebp_5 = *(esi_7 + 0x64)
                *edx_2 += arg3.b
                *eax_3 += eax_3.b
                char temp16_1 = eax_2[(edx_2 << 2) + 0x62080047]
                eax_2[(edx_2 << 2) + 0x62080047] += arg3.b
                
                if (temp16_1 != neg.b(arg3.b))
                    int32_t* edi_3
                    int32_t temp0_5
                    temp0_5, edi_3 = __insd(edi_2, edx_2.w, eflags)
                    *edi_3 = temp0_5
                    *(edi_3 + 0x4b)
                    bool o_1 = unimplemented  {imul ecx, dword [edi+0x4b], 0x8}
                    __bound_gprv_mema32(ebp_5, *(entry_ebx + 0x43))
                    int32_t edi_4 = *eax_2
                    uint16_t* esi_8 = *(eax_2 + 4)
                    void* ebp_6 = *(eax_2 + 8)
                    void* ebx = *(eax_2 + 0x10)
                    int32_t edx_3 = *(eax_2 + 0x14)
                    int32_t ecx = *(eax_2 + 0x18)
                    int32_t eax_5 = *(eax_2 + 0x1c)
                    int32_t esi_9 = __outsb(edx_3.w, *esi_8, esi_8, eflags)
                    int32_t eflags_2
                    int16_t temp0_6
                    temp0_6, eflags_2 = __arpl_memw_gpr16(*(ebp_6 + 0x6c), (&eax_2[0x20]).w)
                    *(ebp_6 + 0x6c) = temp0_6
                    *(eax_2 + 0x1c) = zx.d(es)
                    __bound_gprv_mema32(ebp_6, *(ebx + 0x48))
                    uint8_t* edi_5
                    uint8_t temp0_7
                    temp0_7, edi_5 = __insb(edi_4, edx_3.w, eflags_2)
                    *edi_5 = temp0_7
                    
                    if (o_1)
                        jump(sub_4794c9+5)
                    
                    return sub_4794c9(eax_5, edx_3, ecx, ebp_6, esi_9, edi_5) __tailcall
                
                uint16_t* temp0_10 = esi_7
                esi_7 = *(entry_ebx + 0x75) * 0x73
                eax_3 = temp0_10
            
            *(eax_3 - 0x6a) += entry_ebx:1.b
            edi_2 += 2
            *(eax_3 + 2) += entry_ebx:1.b
            *eax_3 += eax_3.b
            edx_2[0x43] = edx_2[0x43]
            *edx_2 s>>= 0x42
            *(esi_7 + edi_2 + 0x33fc0040) += entry_ebx:1.b
            edx_2 = &edx_2[1]
            eax_3:1.b += eax_3.b
            eax_3 += 1
            *(&esi_7[arg3 * 4] + 0x45) += entry_ebx:1.b
        label_479543:
            *eax_3 += eax_3.b
            *(eax_2 + edi_2) += entry_ebx.b
            eax_3 += 1
            *(edi_2 * 5 + 0x5300047) += arg3:1.b
            *(esi_7 + 1 + (edi_2 << 2)) += entry_ebx:1.b
            *edi_2 += arg3.b
        
        *(edi_2 + (entry_ebx << 2) + 0x45) += edx_2:1.b
        *(eax_3 + (edi_2 << 2) + 0x45) += edx_2.b
        *eax_3 += entry_ebx:1.b
        eax_3.b += entry_ebx.b
        *edx_2
        int32_t eflags_3
        char temp0_11
        char temp1_1
        temp0_11, temp1_1, eflags_3 = __aaa(eax_3.b, eax_3:1.b, eflags)
        eax_3.b = temp0_11
        eax_3:1.b = temp1_1
        eax_3.b += eax_3:1.b
        edx_2[1]
        *(eax_3 + 5) += eax_3:1.b
        *(eax_3 + 0x1cb8427d) += (arg3 + 1):1.b
        eax_3.b += (&edx_2[1]).b
        eax_3.b += (&edx_2[1]):1.b
        *0xf9f402cd += entry_ebx.b
        eax_3.b += entry_ebx:1.b
        eax_3:1.b += entry_ebx:1.b
        *(arg3 + 0x46) += eax_3.b
        *(eax_3 - 0x5f) += (&edx_2[1]):1.b
        *eax_3 += entry_ebx:1.b
        *0xb4004233 = 0x45
        *(ebp_5 + 0x68dc00dd) += eax_3:1.b
        char temp20 = *eax_3
        *eax_3 += (&edx_2[1]):1.b
        
        if (temp20 != neg.b((&edx_2[1]):1.b) && temp20 + (&edx_2[1]):1.b u>= temp20)
            trap(0xd)
        
        char temp21 = *(eax_3 - 0xfffb9f2)
        *(eax_3 - 0xfffb9f2) += eax_3.b
        
        if (temp21 + eax_3.b s< 0)
            jump(0x4795c3)
        
        int32_t eax_8 = sx.d(eax_3.w)
        *(eax_8 + (edi_2 << 3) - 0x2ed7ffbb) += entry_ebx.b
        *(arg3 + 0xa90c427a) += (&edx_2[1]):1.b
        *(arg3 + 0xd400047) += eax_8.b
        *(eax_8 + (edi_2 << 3)) += eax_8.b
        eax_8:1.b += entry_ebx.b
        *entry_ebx
        eax_8.b += eax_8:1.b
        *(eax_8 * 9) += eax_8:1.b
        *(entry_ebx + 1) += (arg3 + 1).b
        *(0xb4004233 + ((edi_2 + 1) << 2)) += (arg3 + 1):1.b
        *(arg3 + 0x20f00cf8)
        eax_8.b = 0x14
        eax_8.b = 3
        void* ecx_2
        ecx_2:1.b = (arg3 + 1):1.b + (entry_ebx + 1):1.b
        undefined
    
    arg1.b += arg1:1.b
    *arg2
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(arg6 + 1, arg2.w, eflags)
    *edi_1 = temp0_2
    *(esp + edi_1) += arg2.b
    *arg1 += arg1:1.b
    *arg1 += arg3:1.b

undefined
