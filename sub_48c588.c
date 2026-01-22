// 函数: sub_48c588
// 地址: 0x48c588
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint8_t* __return_addr_1
uint8_t temp0_5
temp0_5, __return_addr_1 = __insb(arg6, arg2.w, eflags)
*__return_addr_1 = temp0_5
bool c
bool z
char* entry_ebx
void* esp_1
void* esp_3
uint16_t* esi
uint16_t* esi_6
uint16_t* gsbase
int16_t es
bool z_1
bool o_1

if (not(c))
    if (z)
        return sub_48c624(arg1, arg2, arg3, arg5, __return_addr_1) __tailcall
    
    __return_addr_1 = __return_addr
    arg4 = arg7
    entry_ebx = arg8
    arg2 = arg9
    arg3 = arg10
    char* arg_1c
    arg1 = arg_1c
    *(entry_ebx + 0x65)
    esi = *(entry_ebx + 0x65) * 0x74754f64
    c = unimplemented  {imul esi, dword [ebx+0x65], 0x74754f64}
    
    if (c)
        uint64_t* temp4_1 = arg1
        arg1 |= 0x75537465
        z = (temp4_1 | 0x75537465) == 0
        esi = __outsb(arg2.w, *esi, esi, eflags)
    label_48c5f0:
        *(arg4 + 0x6e)
        esp_1 = *(arg4 + 0x6e) * 0x4f
        c = unimplemented  {imul esp, dword [ebp+0x6e], 0x4f}
        o_1 = unimplemented  {imul esp, dword [ebp+0x6e], 0x4f}
        
        if (z)
            if (c)
            label_48c5ff:
                char temp7_1 = arg4[0x74] | arg1:1.b
                arg4[0x74] = temp7_1
                z_1 = arg4 == 0xffffffff
                o_1 = add_overflow(arg4, 1)
                
                if (not(z_1))
                    *(esp_1 - 4) = 0x65086465
                    esp_3 = esp_1 - 4
                    
                    if (z_1)
                        if (temp7_1 u>= 0)
                            jump(0x48c6b4)
                        
                        jump(0x48c660)
                    
                    goto label_48c60c
                
                __return_addr_1 = *esp_1
                esi = *(esp_1 + 4)
                arg4 = *(esp_1 + 8)
                entry_ebx = *(esp_1 + 0x10)
                arg2 = *(esp_1 + 0x14)
                arg3 = *(esp_1 + 0x18)
                arg1 = *(esp_1 + 0x1c)
                esp_1 += 0x20
                
                if (not(o_1))
                    goto label_48c66c
                
                if (z_1)
                    jump(0x48c6df)
                
                jump(0x48c6d7)
            
            goto label_48c5f9
        
        *(esp_1 - 4) = 0x48c67090
        esp_1 -= 4
    label_48c66f:
        char temp5_1 = *esi
        *esi += arg1.b
        bool c_2 = temp5_1 + arg1.b u< temp5_1
        int16_t cs
        *(esp_1 - 4) = zx.d(cs)
        *(esp_1 - 8) = esp_1 - 4
        
        if (c_2)
            uint16_t* esi_11 = __outsb(arg2.w, *(gsbase + esi + 1), esi + 1, eflags)
            
            if (esi == 0xffffffff)
                uint16_t* esi_20 = __outsd(arg2.w, *(esi_11 - 1), esi_11 - 1, eflags)
                __outsb(arg2.w, *esi_20, esi_20, eflags)
                bool z_2 = (arg1 | 0x72426673) == 0
                
                if (not(z_2))
                    *(esp_1 - 0xc) = zx.d(es)
                    
                    if (z_2)
                        jump(sub_48c73e+0xf3)
                    
                    jump(sub_48c73e+0x86)
                
                *(esp_1 - 0xc) = 0x6d746942
                *(esp_1 - 0xc)
                *(esp_1 - 8)
                *(esp_1 - 4)
                *(esp_1 + 4)
                *(esp_1 + 8)
                *(esp_1 + 0xc)
                *(esp_1 + 0x10)
                jump(sub_48c73e+0x18)
            
            if (c_2)
                arg1.b |= 0x61
                __outsd(arg2.w + 1, *esi_11, esi_11, eflags)
                
                if (arg2 == 0xffffffff)
                    jump(sub_48c73e+0x2a)
                
                jump(0x48c6f4)
            
            *(esp_1 - 8)
            int32_t esi_12 = *(esp_1 - 4)
            *esp_1
            *(esp_1 + 0x10)
            *(esp_1 + 0x14)
            bool cond:6 = *(esp_1 + 8) == 0xffffffff
            __outsb((*(esp_1 + 0xc)).w, *(gsbase + esi_12), esi_12, eflags)
            
            if (cond:6)
                jump(0x48c74c)
            
            jump(0x48c6e7)
        
        int16_t temp0_2
        temp0_2, __return_addr_1 = __insd(__return_addr_1, arg2.w, eflags)
        *__return_addr_1 = temp0_2
        *(esp_1 - 0xc) = entry_ebx
        *(arg4 + 0x72)
        arg4[0xc68c003f] += arg3.b
    label_48c68b:
        *entry_ebx += (arg1 - 1).b
        arg1 = (arg1 - 1) | 0x444d4c54
        arg3 += 1
        uint8_t* edi_4
        uint8_t temp0_3
        temp0_3, edi_4 = __insb(__return_addr_1, arg2.w, eflags)
        *edi_4 = temp0_3
        esp_1 = *(edi_4 + 0x6e) * 0x746e656d
        *arg1 += arg1
    label_48c69d:
        *arg1 += arg1.b
        *arg1 += arg3.b
        *arg1 += arg1.b
        char temp16_1 = *(arg1 + 0x90048c6)
        *(arg1 + 0x90048c6) += arg3.b
        c = temp16_1 + arg3.b u< temp16_1
        z = temp16_1 == neg.b(arg3.b)
        o_1 = add_overflow(temp16_1, arg3.b)
        __return_addr_1 = *esp_1
        esi = *(esp_1 + 4)
        arg4 = *(esp_1 + 8)
        entry_ebx = *(esp_1 + 0x10)
        arg2 = *(esp_1 + 0x14)
        arg3 = *(esp_1 + 0x18)
        arg1 = *(esp_1 + 0x1c)
        esp_1 += 0x20
    label_48c6aa:
        *(esp_1 - 4) = esp_1
        esi_6 = __outsd(arg2.w, *esi, esi, eflags)
        
        if (not(o_1))
            if (not(z))
                *(esp_1 - 4)
                uint16_t* esi_7 = *esp_1
                *(esp_1 + 4)
                *(esp_1 + 0xc)
                int16_t edx_4 = (*(esp_1 + 0x10)).w
                *(esp_1 + 0x14)
                *(esp_1 + 0x18)
                *(esp_1 + 0x18) = esp_1 + 0x1c
                __outsd(edx_4, *esi_7, esi_7, eflags)
                
                if (o_1)
                    jump(0x48c6fc)
                
                jump(sub_48c683+0x36)
            
            *(arg3 + 0x67)
            arg1:1.b |= *(arg3 + 0x67)
            o_1 = false
            *(esp_1 - 8) = esp_1 - 4
            goto label_48c6c2
        
        int32_t edi_7 = *(esp_1 - 4)
        uint16_t* esi_15 = *esp_1
        *(esp_1 + 4)
        int32_t ebx_5 = *(esp_1 + 0xc)
        int32_t edx_7 = *(esp_1 + 0x10)
        *(esp_1 + 0x14)
        *(esp_1 + 0x18)
        uint16_t* esi_16 = __outsd(edx_7.w + 1, *esi_15, esi_15, eflags)
        
        if (edx_7 == 0xffffffff)
            edi_7.w += 1
            
            if (c)
                jump(sub_48c73e+0x9c)
            
            jump(sub_48c683+0xf6)
        
        int32_t esi_17 = __outsd(edx_7.w + 1, *esi_16, esi_16, eflags)
        int16_t* edi_8
        int16_t temp0_4
        temp0_4, edi_8 = __insd(edi_7, edx_7.w + 1, eflags)
        *edi_8 = temp0_4
        __outsb(edx_7.w + 1, *(gsbase + esi_17), esi_17, eflags)
        
        if (ebx_5 == 0xffffffff)
            jump(sub_48c73e+0x2f)
        
        jump(sub_48c683+0x85)
    
    if (z)
        arg_1c = entry_ebx
        goto label_48c634
    
    if (not(z))
        esp_1 = &arg_1c:3
        void arg_20
        z = &arg_20 == 1
        o_1 = add_overflow(&arg_20, 0xffffffff)
        goto label_48c651
    
    *(arg4 + 0x6e)
    int32_t esp_2 = *(arg4 + 0x6e) * 0x49
    c = unimplemented  {imul esp, dword [ebp+0x6e], 0x49}
    o_1 = unimplemented  {imul esp, dword [ebp+0x6e], 0x49}
    uint16_t* esi_2 = __outsb(arg2.w, *esi, esi, eflags)
    esi = __outsb(arg2.w, *esi_2, esi_2, eflags)
    
    if (not(c))
        if (z)
            undefined
        
        jump(0x48c5ee)
    
    *(esp_2 - 4) = zx.d(es)
    esp_1 = esp_2 - 4
else
    esi = __outsd(arg2.w, *arg5, arg5, eflags)
    
    if (not(z))
        goto label_48c5f0
    
    uint8_t temp0
    temp0, __return_addr_1 = __insb(__return_addr_1, arg2.w, eflags)
    *__return_addr_1 = temp0
    void var_1
    esp_1 = &var_1
    z = &__return_addr == 1
    o_1 = add_overflow(&__return_addr, 0xffffffff)
    esi = __outsd(arg2.w, *esi, esi, eflags)
    
    if (z || c)
        if (not(c))
            TEB* fsbase
            char temp11_1 = *(&fsbase->User32Reserved + &arg4[arg3 << 1]) | arg3.b
            *(&fsbase->User32Reserved + &arg4[arg3 << 1]) = temp11_1
            
            if (temp11_1 u< 0)
                goto label_48c5ff
            
            if (not(add_overflow(__return_addr_1, 1)))
                __return_addr_1[1] = *esi
                return sub_48c5a1(arg1, arg2, arg4, esi + 1, &__return_addr_1[2]) __tailcall
            
            goto label_48c608
        
        char* temp10_1 = arg2
        arg2 = &arg2[1]
        z = temp10_1 == 0xffffffff
        o_1 = add_overflow(temp10_1, 1)
    label_48c5fc:
        
        if (z)
            if (not(o_1))
                if (z)
                    goto label_48c648
                
                jump(0x48c603)
            
        label_48c608:
            char temp17_1 = arg4[0x74]
            arg4[0x74] |= arg1:1.b
            z_1 = (temp17_1 | arg1:1.b) == 0
            *(esp_1 - 4) = arg2
            esp_3 = esp_1 - 4
        label_48c60c:
            *esp_3
            *(esp_3 + 8)
            void* ebx = *(esp_3 + 0x10)
            *(esp_3 + 0x14)
            *(esp_3 + 0x18)
            *(esp_3 + 0x1c)
            *(ebx + 0x65)
            *(esp_3 + 0x1c) = ebx
            
            if (not(z_1))
                jump(0x48c685)
            
            jump(sub_48c5a1+0x76)
        
    label_48c66c:
        
        while (true)
            if (not(o_1))
                arg1 -= 1
                goto label_48c66f
            
        label_48c634:
            esp_1 = nullptr
            arg1 += *arg1
        label_48c63e:
            *arg1 += arg1.b
            arg1.b &= 0xc6
            arg1 -= 1
            char temp9_1 = *arg1
            *arg1 += arg3.b
            c = temp9_1 + arg3.b u< temp9_1
            z = temp9_1 == neg.b(arg3.b)
            o_1 = add_overflow(temp9_1, arg3.b)
            
            if (not(c))
                goto label_48c68b
            
        label_48c648:
            uint16_t* esi_4 = __outsd(arg2.w, *esi, esi, eflags)
            
            if (z)
                __return_addr_1 = *esp_1
                esi_6 = *(esp_1 + 4)
                arg4 = *(esp_1 + 8)
                entry_ebx = *(esp_1 + 0x10)
                arg2 = *(esp_1 + 0x14)
                arg3 = *(esp_1 + 0x18)
                *(esp_1 + 0x1c)
                *(esp_1 + 0x1c) = esp_1 + 0x20
                break
            
            esi = __outsd(arg2.w, *esi_4, esi_4, eflags)
            int16_t temp0_1
            temp0_1, __return_addr_1 = __insd(__return_addr_1, arg2.w, eflags)
            *__return_addr_1 = temp0_1
            *(esp_1 - 4) = zx.d(es)
            esp_1 -= 4
            
            if (not(c))
                goto label_48c69d
            
        label_48c651:
            
            if (not(z))
                if (not(c))
                    goto label_48c6aa
                
                return sub_48c658(arg1, arg2, arg3, arg4, esi, __return_addr_1) __tailcall
            
            uint64_t* temp18_1 = arg1
            arg1 += 0x6f547366
            o_1 = add_overflow(temp18_1, 0x6f547366)
            
            if (not(o_1))
                if (temp18_1 u>= 0x90ab8c9a)
                    jump(0x48c6ca)
                
                jump(0x48c669)
        
    label_48c6c2:
        int32_t esi_9 = __outsd(arg2.w, *esi_6, esi_6, eflags)
        
        if (o_1)
            char temp22 = arg4[(arg3 << 1) + 0x44] | arg3.b
            arg4[(arg3 << 1) + 0x44] = temp22
            
            if (temp22 u< 0)
                jump(sub_48c73e+0x41)
            
            jump(0x48c71e)
        
        *(__return_addr_1 + 0x68)
        __outsb(arg2.w, *(gsbase + esi_9), esi_9, eflags)
        
        if (entry_ebx == 0xffffffff)
            jump(sub_48c658+0xde)
        
        jump(0x48c6d1)
label_48c5f9:

if (z)
    goto label_48c63e

goto label_48c5fc
