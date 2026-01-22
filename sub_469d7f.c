// 函数: sub_469d7f
// 地址: 0x469d7f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
bool c

while (true)
    uint16_t* esi_28 = __outsb(arg2.w, *arg5, arg5, eflags)
    int32_t* esp
    *(esp - 4) = esp
    esp -= 4
    void* esi = __outsd(arg2.w, *esi_28, esi_28, eflags)
    char* entry_ebx
    void* esi_5
    void* esi_8
    char* esi_9
    uint16_t* esi_11
    uint16_t* gsbase
    int16_t cs
    bool z_1
    bool z_2
    bool s_1
    bool s_2
    bool o
    bool o_1
    bool o_2
    
    if (o)
        esp = &esp[1]
        arg5 = esi + 1
        *entry_ebx += arg1.b
    label_469d91:
        void* temp2_1 = arg2
        int32_t temp3_1 = *(arg2 + (arg1 << 1) + 0x6f)
        arg2 |= *(arg2 + (arg1 << 1) + 0x6f)
        c = false
        z_1 = (temp2_1 | temp3_1) == 0
        o_2 = false
    label_469d95:
        
        if (c)
            goto label_469dfb
        
        if (c)
            goto label_469de3
        
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg6 + 0x6e), arg4.w)
        *(arg6 + 0x6e) = temp0_1
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        *entry_ebx += arg1.b
        *arg1 += arg1.b
        *(arg4 + (entry_ebx << 2) + 0x620c0046) += arg3.b
        void* edx = *(entry_ebx + 0x79) * 0x6d657473
        void* ebp = arg4 - 1
        void* esi_2 = __outsb(edx.w, *(gsbase + arg5), arg5, eflags)
        
        if (arg4 == 1)
            __bound_gprv_mema32(ebp, *(arg3 + 0x4d))
            ebp = *(esi_2 + 0x69) * 0x657a696d
        
        *(edx + 0x69)
        c = false
        z_2 = ebp == 1
        s_2 = ebp - 1 s< 0
        int32_t edi = *esp
        arg5 = esp[1]
        arg4 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        
        if (not(s_2))
            int32_t* edi_1
            int32_t temp0_2
            temp0_2, edi_1 = __insd(edi, arg2.w, eflags)
            *edi_1 = temp0_2
            *(arg2 + 0x65)
            c = unimplemented  {imul edi, dword [edx+0x65], 0x48696206}
            o = unimplemented  {imul edi, dword [edx+0x65], 0x48696206}
            uint8_t temp0_3
            temp0_3, arg6 = __insb(*(arg2 + 0x65) * 0x48696206, arg2.w, eflags)
            *arg6 = temp0_3
            
            if (o)
                arg3 -= 1
                
                if (not(z_2) && arg3 != 0 && not(z_2))
                    goto label_469d7d
                
                goto label_469dde
            
            break
        
        arg6 = edi - 1
        s_1 = edi - 1 s< 0
        o_1 = add_overflow(edi, 0xffffffff)
    label_469e33:
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        uint8_t temp0_6
        temp0_6, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_6
        
        if (s_1)
            if (o_1)
                *arg1 += arg1.b
                void* eax_2 = &arg1[*arg1]
                *eax_2 += eax_2.b
                char temp40 = *arg3
                *arg3 += arg3.b
                int32_t* edi_6
                int32_t temp0_10
                temp0_10, edi_6 = __insd(arg6, arg2.w, eflags)
                *edi_6 = temp0_10
                
                if (temp40 + arg3.b u>= temp40)
                    jump(0x469f24)
                
                jump(0x469eb9)
            
            arg6.w = *(esp + 1)
            arg5.w = *(esp + 3)
            arg4.w = *(esp + 5)
            int16_t* esp_8
            esp_8.w = (esp + 7).w + 2
            entry_ebx.w = *esp_8
            arg2.w = esp_8[1]
            arg3.w = esp_8[2]
            arg1.w = esp_8[3]
            
            if (esp != 0xffffffff)
                jump(0x469eab)
            
            jump(0x469e3f)
        
        *(esp - 4) = zx.d(cs)
        esp -= 4
        
        if (not(o_1))
            goto label_469e4b
        
        esi_11 = __outsd(arg2.w, *arg5, arg5, eflags)
    label_469ebb:
        
        if (not(o_1))
            int32_t* edi_7
            int32_t temp0_11
            temp0_11, edi_7 = __insd(arg6, arg2.w, eflags)
            *edi_7 = temp0_11
            *(esp - 4) = arg1
            
            if (c)
                char temp39 = *(edi_7 + 0xc030046) ^ entry_ebx.b
                *(edi_7 + 0xc030046) = temp39
                *(esp - 8) = esp - 4
                uint8_t* edi_11
                uint8_t temp0_17
                temp0_17, edi_11 = __insb(edi_7, arg2.w, eflags)
                *edi_11 = temp0_17
                __outsd(arg2.w, *esi_11, esi_11, eflags)
                
                if (temp39 u>= 0)
                    jump(0x469f9d)
                
                jump("Acti")
            
            int32_t* edi_8
            int32_t temp0_12
            temp0_12, edi_8 = __insd(edi_7, arg2.w, eflags)
            *edi_8 = temp0_12
            *(esp - 4)
            *esp
            arg4 = esp[1]
            esp[3]
            esp[4]
            esp[5]
            arg1 = esp[6]
            esp = &esp[7]
            
            if (c)
                jump(0x469f3f)
        
        arg1:1.b |= *(arg4 * 3 + 0x4d)
    label_469eca:
        int32_t edi_10 = *esp
        esi_5 = esp[1]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        *(esi_5 + 0x46)
        arg4 = *(esi_5 + 0x46) * 0xc6d726f
        c = unimplemented  {imul ebp, dword [esi+0x46], 0xc6d726f}
        int32_t temp0_13
        temp0_13, arg6 = __insd(edi_10, arg2.w, eflags)
        *arg6 = temp0_13
        
        while (true)
            arg3 += 1
            int16_t temp0_15
            temp0_15, eflags = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x76), esi_5.w)
            *(arg3 + (arg4 << 1) + 0x76) = temp0_15
        label_469edb:
            esi_9 = __outsd(arg2.w, *(esi_5 + 1), esi_5 + 1, eflags)
        label_469edc:
            int16_t es
            
            if (c)
                *(esp - 4) = zx.d(es)
                esp -= 4
                goto label_469f4c
            
            char* temp22_1 = arg1
            arg1 = &arg1[0x6d726f46]
            bool c_4 = temp22_1 u>= 0x928d90ba
            
            if (c_4)
                esi_8 = &esi_9[1]
                *entry_ebx += arg1.b
                arg2 |= *(arg1 + (arg2 << 1) + 0x72)
                *(esi_8 + 0x74)
                goto label_469ef4
            
            esi_5 = __outsd(arg2.w, *(esi_9 + 1), &esi_9[1], eflags)
            
            if (c_4)
                *arg1 = &arg1[*arg1]
                *arg1 += arg1.b
                *entry_ebx += arg1.b
                *arg1 += arg1.b
                arg6[entry_ebx << 2] += arg3:1.b
                esi_9 = esi_5 + 1
                *esi_9 += arg1.b
            label_469f4c:
                int32_t eflags_1
                int16_t temp0_18
                temp0_18, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x4e), esp.w)
                *(arg3 + 0x4e) = temp0_18
                uint16_t* esi_24 = __outsd(arg2.w, *esi_9, esi_9, eflags_1)
                esi_8 = __outsb(arg2.w, *esi_24, esi_24, eflags_1)
                *(esp - 4) = zx.d(es)
                int16_t temp0_19
                temp0_19, eflags = __arpl_memw_gpr16(*(arg3 + 0x48), esp.w - 4)
                *(arg3 + 0x48) = temp0_19
                esp = *(arg4 + 6) * 0x72466163
                arg1:1.b |= *(gsbase + &entry_ebx[0x61])
                *(esi_8 + 0x69)
                char* temp27_1 = arg1
                arg1 = &arg1[0x6d726f46]
                
                if (temp27_1 u< 0x928d90ba)
                    break
                
                arg1[0xffffffa0] += entry_ebx:1.b
                arg1[1] += arg3.b
                *(entry_ebx + ((arg1 + 1) << 1) + 0x6c)
                uint16_t edx_3 = arg2.w | (*(entry_ebx + ((arg1 + 1) << 1) + 0x6c)).w
                uint16_t* esi_26 = __outsd(edx_3, *(esi_8 + 1), esi_8 + 1, eflags)
                uint8_t* edi_12
                uint8_t temp0_20
                temp0_20, edi_12 = __insb(arg6, edx_3, eflags)
                *edi_12 = temp0_20
                __outsd(edx_3, *esi_26, esi_26, eflags)
                jump(0x46a04f)
            
            arg1.b |= 0x64
            c = false
            int32_t temp0_14
            temp0_14, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_14
        
        goto label_469f01
    
    s_1 = esi + 1 s< 0
    o_1 = add_overflow(esi, 1)
    arg5 = __outsd(arg2.w, *(esi + 1), esi + 1, eflags)
    
    if (c)
        goto label_469df5
    
    if (c)
        arg1 = &arg1[1]
        arg1[0x300469d] += arg2.b
        goto label_469d91
    
    *(esp - 4) = arg1
    esp -= 4
    uint16_t* esi_29 = __outsd(arg2.w, *arg5, arg5, eflags)
    
    if (o_1)
        void* temp5_1 = arg3
        arg3 += *entry_ebx
        c = temp5_1 + *entry_ebx u< temp5_1
        *(esp - 4) = esp
        esp -= 4
        void* temp7_1 = arg2
        arg2 += 1
        z_1 = temp7_1 == 0xffffffff
        o_2 = add_overflow(temp7_1, 1)
    label_469d94:
        arg5 = __outsd(arg2.w, *esi_29, esi_29, eflags)
        goto label_469d95
    
    if (not(o_1))
        esi_29 = __outsb(arg2.w, *esi_29, esi_29, eflags)
        void* temp13_1 = arg3
        arg3 += 1
        z_1 = temp13_1 == 0xffffffff
        o_2 = add_overflow(temp13_1, 1)
        
        if (c)
            goto label_469d94
        
        *esp
        esp[1]
        esp[2]
        esp[4]
        esp[5]
        esp[6]
        esp[7]
        
        if (temp13_1 + 1 s>= 0)
            undefined
        
        jump(0x469d25)
    
    arg5 = __outsd(arg2.w, *esi_29, esi_29, eflags)
    
    if (c)
        goto label_469de4
    
    int32_t temp18_1 = *(arg5 + 0x73)
    int32_t esp_20 = esp | *(arg5 + 0x73)
    c = false
    z_2 = (esp | temp18_1) == 0
    s_2 = (esp | temp18_1) s< 0
    o = false
    *(esp_20 - 4) = entry_ebx
    esp = esp_20 - 4
    
    if (z_2)
    label_469dde:
        arg5 += 1
        *arg5 += arg1.b
        arg1.b |= 0x54
        c = false
    label_469de3:
        void* temp8_1 = arg2
        arg2 += 1
        s_1 = temp8_1 + 1 s< 0
        o_1 = add_overflow(temp8_1, 1)
    label_469de4:
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        int32_t* eax
        bool cond:11_1
        
        if (c)
        label_469e4b:
            *(esp - 4) = entry_ebx
            esp -= 4
            int16_t temp0_8
            temp0_8, eflags = __arpl_memw_gpr16(*(arg2 + 0x65), arg5.w)
            *(arg2 + 0x65) = temp0_8
            int32_t esi_10 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
            char* temp19_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            o_1 = add_overflow(temp19_1, 1)
            esi_11 = __outsb(arg2.w, *(gsbase + esi_10), esi_10, eflags)
            
            if (temp19_1 == 0xffffffff)
                goto label_469ebb
            
            if (not(c))
                if (not(o_1))
                    esp += 1
                    
                    if (c)
                        jump(0x469e5e)
                
                goto label_469eca
            
            arg1[0x6f] = adc.b(arg1[0x6f], arg2:1.b, c)
        label_469e6a:
            bool cond:1_1 = arg4 == 1
            cond:11_1 = arg4 == 1
            arg6 = *esp
            void* esi_12 = esp[1]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            arg1 = esp[7]
            esp = &esp[8]
            *(esi_12 + 0x46)
            arg4 = *(esi_12 + 0x46) * 0x436d726f
            c = unimplemented  {imul ebp, dword [esi+0x46], 0x436d726f}
            bool o_4 = unimplemented  {imul ebp, dword [esi+0x46], 0x436d726f}
            esi_9 = __outsb(arg2.w, *(gsbase + esi_12), esi_12, eflags)
            
            if (cond:1_1)
                goto label_469edc
            
            if (not(c))
                if (not(o_4))
                    if (arg6 != 1 && not(c))
                        jump(0x469eec)
                    
                    jump(0x469e7e)
                
                *(esp - 4) = esp
                *(esp - 8) = arg1
                esp -= 8
                
                if (c)
                    jump(0x469f57)
                
                goto label_469eee
            
            eax = &arg1[0x6d726f46]
            bool c_2 = arg1 u>= 0x928d90ba
            
            if (c_2)
                goto label_469e93
            
            *(eax + 0x6f) = adc.b(*(eax + 0x6f), arg2:1.b, c_2)
            arg6.w = *(esp + 1)
            esi_9.w = *(esp + 3)
            arg4.w = *(esp + 5)
            int16_t* esp_6
            esp_6.w = (esp + 7).w + 2
            entry_ebx.w = *esp_6
            arg2.w = esp_6[1]
            arg3.w = esp_6[2]
            eax.w = esp_6[3]
            
            if (esp != 0xffffffff)
                jump(0x469e9a)
            
            jump(0x469e2e)
        
        if (c)
            goto label_469e33
        
        int16_t temp0_4
        temp0_4, eflags = __arpl_memw_gpr16(*(arg6 + 0x6e), arg4.w)
        *(arg6 + 0x6e) = temp0_4
        
        if (not(c))
            arg5 += 1
            arg1[0x469df8] += arg2.b
            void* temp32_1 = arg3
            int32_t temp33_1 = *arg3
            arg3 += *arg3
            c = temp32_1 + temp33_1 u< temp32_1
            z_1 = temp32_1 == neg.d(temp33_1)
            o_2 = add_overflow(temp32_1, temp33_1)
            *esp = &esp[1]
        label_469dfb:
            *(esp - 4) = arg1
            esp -= 4
            esi_5 = __outsd(arg2.w, *arg5, arg5, eflags)
        else
            int16_t ds
            *(arg4 - 0x76fffba) = ds
        label_469df5:
            esp = &esp[1]
            esi_5 = arg5 + 1
            *entry_ebx += arg1.b
            int32_t temp4_1 = *(arg1 + (arg2 << 1) + 0x6f)
            *(arg1 + (arg2 << 1) + 0x6f) |= arg2
            c = false
            z_1 = (temp4_1 | arg2) == 0
            o_2 = false
        
        if (not(c))
            if (o_2)
                goto label_469edb
            
            goto label_469e6a
        
        if (z_1)
            goto label_469e6a
        
        uint16_t* esi_6 = __outsd(arg2.w, *esi_5, esi_5, eflags)
        void* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        *arg6 += arg1.b
        *arg1 += arg1.b
        arg1:1.b += arg2:1.b
        esp = &esp[1]
        esi_8 = esi_7 + 1
        char temp12_1 = *arg2
        *arg2 += arg3.b
        bool c_1 = temp12_1 + arg3.b u< temp12_1
        
        if (not(add_overflow(temp12_1, arg3.b)))
            esp += 1
            
            if (c_1)
                esi_8.w = __outsb(arg2.w, *esi_8, esi_8.w, eflags)
                TEB* fsbase
                *(fsbase + arg1 + 0x6f) |= esi_8
                bool cond:6_1 = esp != 0xffffffff
                bool cond:12_1 = esp == 0xffffffff
                arg6.w = *(esp + 1)
                arg4.w = *(esp + 5)
                int16_t* esp_4
                esp_4.w = (esp + 7).w + 2
                entry_ebx.w = *esp_4
                arg2.w = esp_4[1]
                arg3.w = esp_4[2]
                arg1.w = esp_4[3]
                esp = &esp_4[4]
                
                if (cond:6_1)
                    goto label_469e90
                
                if (cond:12_1)
                    jump(0x469e36)
                
                jump(0x469e26)
            
            esi_8 = __outsd(arg2.w, *(esi_8 + 1), esi_8 + 1, eflags)
        
        if (c_1)
        label_469ef1:
            int16_t temp0_16
            temp0_16, eflags = __arpl_memw_gpr16(*(arg3 + 0x6c), esp.w)
            *(arg3 + 0x6c) = temp0_16
        label_469ef4:
            *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
            *arg1 += arg1.b
            *arg2 += arg1.b
            *arg1 += arg1.b
            arg1:1.b *= 2
        label_469f01:
            char temp34 = *(esi_8 + 1)
            *(esi_8 + 1) += arg1.b
            
            if (add_overflow(temp34, arg1.b))
                if (temp34 + arg1.b s< 0)
                    jump(0x469f15)
                
                jump(0x469f76)
            
            uint16_t* esi_21 = __outsd(arg2.w, *esi_8, esi_8, eflags)
            __outsb(arg2.w, *esi_21, esi_21, eflags)
            *(esp - 4) = zx.d(cs)
            
            if (add_overflow(esi_8 + 1, 0xffffffff))
                jump(0x469f7b)
            
            jump(0x469f0c)
        
        char* temp24_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        cond:11_1 = temp24_1 == 0xffffffff
        esi_9 = __outsb(arg2.w, *(gsbase + esi_8), esi_8, eflags)
        
        if (temp24_1 == 0xffffffff)
        label_469eee:
            esi_8 = __outsb(arg2.w, *esi_9, esi_9, eflags)
            
            if (cond:11_1)
                jump(0x469f44)
            
            goto label_469ef1
        
        if (not(c_1))
            jump(0x469e8b)
        
    label_469e90:
        int32_t* temp0_9 = esp
        esp = arg1
        eax = temp0_9
    label_469e93:
        char temp29 = *entry_ebx
        *entry_ebx += eax.b
        __andps_xmmxud_memxud(arg7, *(arg4 + 0x66))
        *esp
        esp[1]
        esp[2]
        esp[4]
        esp[5]
        esp[6]
        esp[7]
        
        if (temp29 != neg.b(eax.b))
            jump(0x469f09)
        
        jump("tMonit")
    
label_469d7d:
    
    if (not(s_2))
        jump(0x469dce)

__outsd(arg2.w, *(arg5 + 1), arg5 + 1, eflags)

if (not(c))
    if (not(c))
        jump(0x469d66)
    
    jump(0x469ddb)

uint8_t* edi_3
uint8_t temp0_7
temp0_7, edi_3 = __insb(arg6, arg2.w, eflags)
*edi_3 = temp0_7

if (arg5 + 1 s>= 0)
    jump(0x469e57)

jump(0x469e49)
