// 函数: sub_469b18
// 地址: 0x469b18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[0xffffffd2] += arg1.b
*(arg2 * 9 + 0x46) += arg1:1.b
*arg1 += arg3.b
*(arg4 + 1) = rol.d(*(arg4 + 1), arg3.b)
arg3.b -= arg2.b
char temp1 = arg1[0x140046cc]
arg1[0x140046cc] += arg3.b
void* const* var_4 = &__return_addr
char* entry_ebx
char* var_8 = entry_ebx
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), (arg4 + 2).w)
*(arg2 + 0x6f) = temp0
uint8_t* edi
uint8_t temp0_1
temp0_1, edi = __insb(0x46d150ff, arg2.w, eflags)
*edi = temp0_1
uint8_t* edi_1
uint8_t temp0_2
temp0_2, edi_1 = __insb(edi, arg2.w, eflags)
*edi_1 = temp0_2
int32_t ebp = *(arg4 + 0x69) * 0x436e6957
uint16_t* esi_2 = __outsd(arg2.w, *(arg4 + 2), arg4 + 2, eflags)
uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
bool cond:2_1

if (temp1 == neg.b(arg3.b))
    *arg1 += arg1.b
    char temp2_1 = *esi_3
    *esi_3 = temp2_1
    cond:2_1 = temp2_1 == 0
    
    if (temp2_1 s<= 0)
        goto label_469bc0
    
    ebp = *(esi_3 + 0x41)
    goto label_469bc0

void* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags)
uint8_t* edi_2
uint8_t temp0_3
temp0_3, edi_2 = __insb(edi_1, arg2.w, eflags)
*edi_2 = temp0_3
uint8_t temp3_1 = *edi_2
*edi_2 += arg1.b
arg1.b = adc.b(arg1.b, 0x54, temp3_1 + arg1.b u< temp3_1)
char* var_d = entry_ebx
int32_t* esp_1 = &var_d
int16_t temp0_4
temp0_4, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), (esi_4 + 1).w)
*(arg2 + 0x6f) = temp0_4
uint8_t* edi_3
uint8_t temp0_5
temp0_5, edi_3 = __insb(edi_2, arg2.w, eflags)
*edi_3 = temp0_5
uint8_t* edi_4
uint8_t temp0_6
temp0_6, edi_4 = __insb(edi_3, arg2.w, eflags)
*edi_4 = temp0_6
ebp = *(esi_4 + 0x68) * 0x436e6957
uint16_t* esi_6 = __outsd(arg2.w, *(esi_4 + 1), esi_4 + 1, eflags)
uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)

if (arg1.b != 0)
    __outsd(arg2.w, *esi_7, esi_7, eflags)
    uint8_t* edi_5
    uint8_t temp0_7
    temp0_7, edi_5 = __insb(edi_4, arg2.w, eflags)
    *edi_5 = temp0_7
    arg2[0x35d00046] -= entry_ebx.b
    *arg3 += arg2.b
    char temp5 = *0x6d726f46
    *0x6d726f46 += arg1.b
    
    if (temp5 + arg1.b u>= temp5)
        *arg1 += arg3:1.b
    else
        arg1[0x28004530] += arg2:1.b
    
    arg1.b += *arg1
    undefined

while (true)
    entry_ebx:1.b *= 2
    arg2:1.b += arg3.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp4_1 = arg1[0x480d000f]
    arg1[0x480d000f] += arg1.b
    bool c_3 = temp4_1 + arg1.b u< temp4_1
    bool p_1 = unimplemented  {add byte [eax+0x480d000f], al}
    bool a_1 = unimplemented  {add byte [eax+0x480d000f], al}
    bool z_1 = temp4_1 == neg.b(arg1.b)
    bool s_1 = temp4_1 + arg1.b s< 0
    esi_3 = __outsd(arg2.w, *(esi_7 + 1), esi_7 + 1, eflags)
    uint16_t* esi_15
    uint16_t* gsbase
    bool c_4
    
    if (c_3)
    label_469c65:
        void* esp_11
        uint16_t* esi_16
        uint16_t* esi_24
        bool c_8
        void* eax_2
        
        if (not(c_3))
            eax_2 = arg1 - 1
            esi_3 = __outsd(arg2.w, *esi_3, esi_3, eflags)
        label_469cbd:
            uint8_t* esi_20 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            arg3 = *(eax_2 - 0x7b) * 0x41
            char temp10_1 = *arg3
            *arg3 += eax_2.b
            *edi_4 = *esi_20
            edi_4 = &edi_4[4]
            esi_16 = &esi_20[4]
            void* eax_3 = sbb.d(eax_2, 0x2bea1e43, temp10_1 + eax_2.b u< temp10_1)
            __out_immb_oeax(0x4d, eax_3, eflags)
            *0xfd45cc30 = eax_3
            char temp0_19
            temp0_19, eflags = __das(eax_3.b, eflags)
            eax_3.b = temp0_19
            arg3.b = 0xec
            arg1 = eax_3 + 0x6d726f46
            
            if (eax_3 u>= 0x928d90ba)
                entry_ebx:1.b *= 2
                *(entry_ebx + 0x469ce4c0) -= 1
                *edi_4 -= 0x14
        else
            uint16_t* esi_19 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            esi_15 = __outsd(arg2.w, *esi_19, esi_19, eflags)
            uint8_t* edi_10
            uint8_t temp0_17
            temp0_17, edi_10 = __insb(edi_4, arg2.w, eflags)
            *edi_10 = temp0_17
            *(esp_1 - 4) = edi_10
            *(esi_15 + 0x64)
            *(esi_15 + 0x64)
            bool c_9 = unimplemented  {imul ebp, dword [esi+0x64], 0x620d776f}
            
            if (not(c_9))
                int16_t ds
                *(esp_1 - 8) = zx.d(ds)
                undefined
            
            edi_4 = *(arg2 + 0x65) * 0x6c6f6f54
            *(esp_1 - 8) = edi_4
            esp_1 -= 8
            *(esi_15 + 5)
            ebp = *(esi_15 + 5) * 0x6d726f46
            bool c_10 = unimplemented  {imul ebp, dword [esi+0x5], 0x6d726f46}
            bool o_4 = unimplemented  {imul ebp, dword [esi+0x5], 0x6d726f46}
            bool c_6
            bool d
            bool cond:10_1
            
            if (not(c_10))
                char temp16_1 = *0x74726556
                *0x74726556 += arg3.b
                c_4 = temp16_1 + arg3.b u< temp16_1
            label_469c13:
                *(esp_1 - 4) = entry_ebx
                int16_t temp0_14
                temp0_14, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), esi_15.w)
                *(arg2 + 0x6f) = temp0_14
                uint8_t* edi_8
                uint8_t temp0_15
                temp0_15, edi_8 = __insb(edi_4, arg2.w, eflags)
                *edi_8 = temp0_15
                uint8_t* edi_9
                uint8_t temp0_16
                temp0_16, edi_9 = __insb(edi_8, arg2.w, eflags)
                *edi_9 = temp0_16
                bool p_2 = unimplemented  {inc edx}
                bool a_2 = unimplemented  {inc edx}
                bool z_2 = arg2 == 0xffffffff
                bool o_1 = add_overflow(arg2, 1)
                edi_4 = *(esp_1 - 4)
                esi_3 = *esp_1
                ebp = esp_1[1]
                entry_ebx = esp_1[3]
                arg2 = esp_1[4]
                arg3 = esp_1[5]
                arg1 = esp_1[6]
                void* esp_7 = &esp_1[7]
                
                if (c_4)
                    goto label_469c3e
                
                *(esp_7 - 4) = (o_1 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
                    | (&arg2[1] s< 0 ? 1 : 0) << 7 | (z_2 ? 1 : 0) << 6 | (a_2 ? 1 : 0) << 4
                    | (p_2 ? 1 : 0) << 2 | (c_4 ? 1 : 0)
                esp_1 = esp_7 - 4
                esi_16 = esi_3 + 1
                char temp17_1 = *entry_ebx
                *entry_ebx += arg1.b
                bool c_5 = temp17_1 + arg1.b u< temp17_1
                char temp18_1 = *(&esi_16[arg1] + 0x6f)
                *(&esi_16[arg1] + 0x6f) = adc.b(temp18_1, arg2.b, c_5)
                c_6 = adc.b(temp18_1, arg2.b, c_5) u< temp18_1
                    || (c_5 && adc.b(temp18_1, arg2.b, c_5) == temp18_1)
                
                if (not(c_6))
                    char* temp25_1 = arg2
                    arg2 = &arg2[1]
                    cond:10_1 = temp25_1 == 0xffffffff
                    esi_16 = __outsd(arg2.w, *esi_16, esi_16, eflags)
                    
                    if (not(c_6))
                        jump("erSty")
                    
                    goto label_469c8f
                
            label_469c94:
                uint8_t temp0_18
                temp0_18, edi_4 = __insb(edi_4, arg2.w, eflags)
                *edi_4 = temp0_18
                *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                *arg1 += arg1.b
                *arg3 += arg1.b
                *arg1 += arg1.b
                esp_1[entry_ebx].b += entry_ebx.b
                esi_3 = esi_16 + 1
                char temp24_1 = *0x6d726f46
                *0x6d726f46 += arg1.b
                c_8 = temp24_1 + arg1.b u< temp24_1
                
                while (not(c_8))
                label_469c37:
                    char* temp9_1 = arg1
                    arg1 = &arg1[0x1c000000]
                    bool p_3 = unimplemented  {add eax, 0x1c000000}
                    bool a_3 = unimplemented  {add eax, 0x1c000000}
                    *(esp_1 - 4) = (add_overflow(temp9_1, 0x1c000000) ? 1 : 0) << 0xb
                        | (d ? 1 : 0) << 0xa | (&temp9_1[0x1c000000] s< 0 ? 1 : 0) << 7
                        | (temp9_1 == 0xe4000000 ? 1 : 0) << 6 | (a_3 ? 1 : 0) << 4
                        | (p_3 ? 1 : 0) << 2 | (temp9_1 u>= 0xe4000000 ? 1 : 0)
                    esp_7 = esp_1 - 4
                label_469c3e:
                    *(esi_3 + 1) += arg1.b
                    __bound_gprv_mema32(esi_3 + 1, *(entry_ebx + 0x4e))
                    uint16_t* esi_18 = __outsd(arg2.w, *(esi_3 + 1), esi_3 + 1, eflags)
                    esi_3 = __outsb(arg2.w, *esi_18, esi_18, eflags)
                    *(gsbase + &arg2[0x73]) |= arg1:1.b
                    *(esp_7 - 4) = entry_ebx
                    esp_1 = esp_7 - 4
                    *(esi_3 + 0x67)
                    ebp = *(esi_3 + 0x67) * 0x620a656c
                    c_8 = unimplemented  {imul ebp, dword [esi+0x67], 0x620a656c}
                    bool o_3 = unimplemented  {imul ebp, dword [esi+0x67], 0x620a656c}
                    
                    if (c_8)
                        edi_4 = *(arg2 + 0x65) * 0x656c6261
                        arg2[0x73] |= arg1:1.b
                        p_1 = unimplemented  {inc esp}
                        a_1 = unimplemented  {inc esp}
                        z_1 = esp_1 == 0xffffffff
                        s_1 = esp_1 + 1 s< 0
                        *(arg3 + 0x6c)
                        esp_1 = *(arg3 + 0x6c) * 0x620c676f
                        c_3 = unimplemented  {imul esp, dword [ecx+0x6c], 0x620c676f}
                        goto label_469c65
                    
                    if (c_8)
                        int16_t cs
                        *(esp_1 - 4) = zx.d(cs)
                        *(esp_1 - 8) = esp_1 - 4
                        *(esp_1 - 0xc) = arg1
                        esp_11 = esp_1 - 0xc
                        uint16_t* esi_25 = __outsd(arg2.w, *esi_3, esi_3, eflags)
                        void* ecx_3
                        bool z_5
                        bool o_5
                        
                        if (o_3)
                            ecx_3 = &arg3[*entry_ebx]
                            c_8 = &arg3[*entry_ebx] u< arg3
                            *(esp_11 - 4) = esp_11
                            esp_11 -= 4
                            char* temp29_1 = arg2
                            arg2 = &arg2[1]
                            z_5 = temp29_1 == 0xffffffff
                            o_5 = add_overflow(temp29_1, 1)
                        else
                            if (o_3)
                                esi_24 = __outsd(arg2.w, *esi_25, esi_25, eflags)
                                goto label_469d75
                            
                            esi_25 = __outsb(arg2.w, *esi_25, esi_25, eflags)
                            ecx_3 = &arg3[1]
                            z_5 = arg3 == 0xffffffff
                            o_5 = add_overflow(arg3, 1)
                            
                            if (not(c_8))
                                *esp_11
                                *(esp_11 + 4)
                                *(esp_11 + 8)
                                *(esp_11 + 0x10)
                                *(esp_11 + 0x14)
                                *(esp_11 + 0x18)
                                *(esp_11 + 0x1c)
                                
                                if (&arg3[1] s>= 0)
                                    undefined
                                
                                jump(0x469d25)
                        
                        esi_24 = __outsd(arg2.w, *esi_25, esi_25, eflags)
                        
                        if (not(c_8))
                            if (c_8)
                                goto label_469de3
                            
                            int32_t eflags_1
                            int16_t temp0_21
                            temp0_21, eflags_1 = __arpl_memw_gpr16(*(edi_4 + 0x6e), ebp.w)
                            *(edi_4 + 0x6e) = temp0_21
                            *arg1 = &arg1[*arg1]
                            *arg1 += arg1.b
                            *entry_ebx += arg1.b
                            *arg1 += arg1.b
                            *(ebp + (entry_ebx << 2) + 0x620c0046) += ecx_3.b
                            int32_t ebp_4 = ebp - 1
                            void* esi_28 = __outsb((*(entry_ebx + 0x79)).w * 0x7473, 
                                *(gsbase + esi_24), esi_24, eflags_1)
                            
                            if (ebp == 1)
                                __bound_gprv_mema32(ebp_4, *(ecx_3 + 0x4d))
                                ebp_4 = *(esi_28 + 0x69) * 0x657a696d
                            
                            *esp_11
                            *(esp_11 + 4)
                            *(esp_11 + 8)
                            *(esp_11 + 0x10)
                            *(esp_11 + 0x14)
                            *(esp_11 + 0x18)
                            *(esp_11 + 0x1c)
                            
                            if (ebp_4 - 1 s< 0)
                                jump(sub_469d7f+0xb3)
                            
                            jump(sub_469d7f+0x4a)
                        
                        *(esp_11 - 4) = arg1
                        uint16_t* esi_31 = __outsd(arg2.w, *esi_24, esi_24, eflags)
                        
                        if (not(c_8))
                            if (o_5)
                                __outsd(arg2.w, *(esi_31 + 1), esi_31 + 1, eflags)
                                
                                if (c_8)
                                    jump(sub_469d7f+0x1cc)
                                
                                jump(sub_469d7f+0x15f)
                        else if (not(z_5))
                            uint16_t* esi_32 = __outsd(arg2.w, *esi_31, esi_31, eflags)
                            __outsb(arg2.w, *esi_32, esi_32, eflags)
                            *arg1 = &arg1[*arg1]
                            *arg1 += arg1.b
                            *edi_4 += arg1.b
                            *arg1 += arg1.b
                            arg1:1.b += arg2:1.b
                            char temp33 = *arg2
                            *arg2 += ecx_3.b
                            
                            if (add_overflow(temp33, ecx_3.b))
                                jump(sub_469d7f+0x103)
                            
                            jump(sub_469d7f+0x94)
                        
                        *(esp_11 - 4)
                        void* esi_37 = *esp_11
                        *(esp_11 + 0xc)
                        *(esp_11 + 0x14)
                        *(esp_11 + 0x18)
                        *(esi_37 + 0x46)
                        __outsb((*(esp_11 + 0x10)).w, *(gsbase + esi_37), esi_37, eflags)
                        
                        if (ebp == 1)
                            jump(0x469edc)
                        
                        jump(sub_469d7f+0xf8)
                
                arg1[0xf00469d] += arg2:1.b
                eax_2 = &arg1[1] | 0x73654449
                esp_1 = *(edi_4 + 0x6e) * 0x6f487265
                goto label_469cbd
            
            *(esp_1 - 4) = (o_4 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s_1 ? 1 : 0) << 7
                | (z_1 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (c_10 ? 1 : 0)
            esp_1 -= 4
            esi_15 += 1
        label_469c87:
            *entry_ebx += arg1.b
            arg1.b |= 0x54
            c_6 = false
            char* temp13_1 = arg2
            arg2 = &arg2[1]
            cond:10_1 = temp13_1 == 0xffffffff
            esi_16 = __outsd(arg2.w, *esi_15, esi_15, eflags)
        label_469c8f:
            
            if (not(c_6))
                if (cond:10_1)
                    jump(0x469d0d)
                
                goto label_469c94
        arg3[0x4f]
        arg3[0x4f] |= arg3.b
        uint8_t* edi_11
        uint8_t temp0_20
        temp0_20, edi_11 = __insb(edi_4, arg2.w, eflags)
        *edi_11 = temp0_20
        uint16_t* esi_22 = __outsd(arg2.w, *(esi_16 + 1), esi_16 + 1, eflags)
        *arg1 = adc.d(*arg1, arg1, false)
        bool c_13 = arg3 + arg1 u< arg3
        bool z_4 = arg3 == neg.d(arg1)
        arg3 = arg3 + arg1 - 1
        
        if (not(z_4) && arg3 == 0)
            trap(0xda)
        
        *(esp_1 - 5) = arg2
        esp_11 = esp_1 - 5
        *arg3 = rlc.b(*arg3, 1, c_13)
        *esi_22 - *edi_11
        uint16_t* esi_23 = esi_22 + 1
        void* edi_12 = &edi_11[1]
        *arg1 += arg1:1.b
        *edi_12
        edi_4 = edi_12 + 4
        c_8 = arg1 u< 0x4605da82
        esi_24 = __outsd(arg2.w, *esi_23, esi_23, eflags)
        
        if (not(c_8))
            if (not(c_8))
                jump(0x469d0c)
            
            jump(0x469d0a)
        
    label_469d75:
        
        if (not(c_8))
            int32_t esp_15 = esp_11 | *(esi_24 + 0x73)
            *(esp_15 - 4) = entry_ebx
            esp_11 = esp_15 - 4
            
            if (esp_15 != 0)
                if (esp_15 s>= 0)
                    jump(sub_469d7f+0x4f)
                
                int128_t xmm0
                return sub_469d7f(arg1, arg2, arg3, ebp, esi_24, edi_4, xmm0) __tailcall
            
            esi_24 += 1
            *esi_24 += arg1.b
            arg1.b |= 0x54
            c_8 = false
        label_469de3:
            arg2 = &arg2[1]
        
        int32_t esi_30 = __outsd(arg2.w, *esi_24, esi_24, eflags)
        
        if (not(c_8))
            if (c_8)
                jump(sub_469d7f+0xb4)
            
            jump(sub_469d7f+0x6b)
        
        *(esp_11 - 4) = entry_ebx
        int32_t eflags_2
        int16_t temp0_22
        temp0_22, eflags_2 = __arpl_memw_gpr16(*(arg2 + 0x65), esi_30.w)
        *(arg2 + 0x65) = temp0_22
        int32_t esi_35 = __outsb(arg2.w, *(gsbase + esi_30), esi_30, eflags_2)
        __outsb(arg2.w, *(gsbase + esi_35), esi_35, eflags_2)
        
        if (entry_ebx == 0xffffffff)
            jump(sub_469d7f+0x13c)
        
        jump(sub_469d7f+0xd7)
    
    *(esp_1 - 4) = entry_ebx
    int16_t temp0_10
    temp0_10, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), esi_3.w)
    *(arg2 + 0x6f) = temp0_10
    uint8_t* edi_6
    uint8_t temp0_11
    temp0_11, edi_6 = __insb(edi_4, arg2.w, eflags)
    *edi_6 = temp0_11
    uint8_t* edi_7
    uint8_t temp0_12
    temp0_12, edi_7 = __insb(edi_6, arg2.w, eflags)
    *edi_7 = temp0_12
    edi_1 = *(esp_1 - 4)
    uint16_t* esi_13 = *esp_1
    ebp = esp_1[1]
    entry_ebx = esp_1[3]
    arg2 = esp_1[4]
    int32_t* ecx = esp_1[5]
    arg1 = esp_1[6]
    esp_1 = &esp_1[7]
    
    if (not(c_3))
        edi_4 = arg1
        int32_t eax = edi_1
        arg2[eax] += arg2.b
        arg1, arg2, arg3 = (*eax)()
        int32_t eip_1
        eip_1, eflags = __into(eflags)
        esi_15 = &esi_13[1]
        *arg3 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp8_1 = arg1[0x560d0010]
        arg1[0x560d0010] += arg1.b
        c_4 = temp8_1 + arg1.b u< temp8_1
        
        if (c_4)
            goto label_469c87
        
        goto label_469c13
    
    *(gsbase + ecx) = sbb.b(*(gsbase + ecx), arg2:1.b, c_3)
    ebp += 1
    *arg1 += arg2:1.b
    arg1.b += *arg1
    *(esp_1 - 4) = *arg1
    arg1.b += *arg1
    *ecx += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x4f0f000e] += arg1.b
    esi_3 = __outsb(arg2.w, *esi_13, esi_13, eflags)
    arg3 = ecx + 1
    cond:2_1 = ecx == 0xffffffff
label_469bc0:
    uint8_t temp0_8
    temp0_8, edi_4 = __insb(edi_1, arg2.w, eflags)
    *edi_4 = temp0_8
    esp_1 = *(edi_4 + 0x6e) * 0x69736f50
    
    if (cond:2_1)
        break
    
    uint16_t* esi_9 = __outsd(arg2.w, *esi_3, esi_3, eflags)
    char* esi_10 = __outsb(arg2.w, *esi_9, esi_9, eflags)
    arg1.b = *esi_10
    int16_t temp0_9 = edi_4
    edi_4 = arg1
    arg1 = temp0_9
    esi_7 = &esi_10[2]
    arg1[2] += arg2.b

*arg1 += arg1.b
*arg1 += arg1.b
goto label_469c37
