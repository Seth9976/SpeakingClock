// 函数: sub_434801
// 地址: 0x434801
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3
void* entry_ebx
entry_ebx:1.b *= 2
*arg1 += arg1
*arg1 += arg1.b
*arg1 += arg1.b
arg1[-0x20000000].b += arg1.b
int32_t ss
char temp1 = arg6[(arg3 << 1) + ss]
arg6[(arg3 << 1) + ss] += arg3.b
bool c = temp1 + arg3.b u< temp1
int32_t eflags
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
void* const __return_addr_1 = arg4 - 1
bool o = add_overflow(arg4, 0xffffffff)
char* __return_addr_7 = __outsd(arg2.w, *esi, esi, eflags)
char* var_5
void* const __return_addr_2
void* esp
bool z_5

if (arg4 == 1)
    void* const __return_addr_3 = __return_addr_1
    __return_addr_1 += 1
    __return_addr_7 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    
    if (__return_addr_3 == 0xffffffff)
        *arg3
        *(arg6 + 0x6e) |= arg3
    label_43488a:
        void* const __return_addr_4 = __return_addr_1
        __return_addr_1 -= 1
        o = add_overflow(__return_addr_4, 0xffffffff)
        __return_addr_7 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
        
        if (__return_addr_4 != 1)
            goto label_434901
        
        *(esp - 4) = __return_addr_1
        esp -= 4
        goto label_434890
    
    if (c)
        entry_ebx:1.b *= 2
    label_43484f:
        unimplemented  {enter 0x0, 0xff}
        *arg1 += arg1
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[-0x20000000].b += arg1.b
        *arg1
        *(arg6 + 0x6e)
        arg3 |= *(arg6 + 0x6e)
        c = false
    else if (add_overflow(__return_addr_3, 1))
        *arg1 += arg2:1.b
        *arg1 += arg1
        __return_addr_2 = *arg1
        esp = &var_5:1
        *arg1 += arg1
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp12_1 = *(arg1 + 0x4f0c0037)
        *(arg1 + 0x4f0c0037) += arg1.b
        c = temp12_1 + arg1.b u< temp12_1
        uint16_t* esi_1 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
        void* const __return_addr_5 = __return_addr_1
        __return_addr_1 -= 1
        __return_addr_7 = __outsd(arg2.w, *esi_1, esi_1, eflags)
        
        if (__return_addr_5 != 1)
            goto label_4348b4
        
        arg6 = var_5
        __return_addr_7 = __return_addr_2
        __return_addr_1 = __return_addr
        entry_ebx = arg8
        arg2 = arg9
        arg3 = arg10
        arg1 = arg11
        void arg_1b
        esp = &arg_1b
        
        if (&var_5:1 != 1 && not(c))
            *__return_addr_1 &= arg1
            unimplemented  {enter 0x0, 0xff}
            goto label_43484f
        
        char* temp19_1 = arg6
        arg6 -= 1
        z_5 = temp19_1 == 1
        goto label_4348ad
    
    void* ebp = __return_addr_1 - 1
    uint16_t* esi_2 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    
    if (__return_addr_1 != 1)
        *esp
        *(esp + 4)
        *(esp + 8)
        *(esp + 0x10)
        *(esp + 0x14)
        *(esp + 0x18)
        *(esp + 0x1c)
    label_4348e2:
        int32_t eax_1
        eax_1.b = 0x25 + *0x20004525
        jump(*eax_1)
    
    __return_addr_1 = ebp - 1
    __return_addr_7 = __outsd(arg2.w, *esi_2, esi_2, eflags)
    
    if (ebp == 1 || c)
        goto label_4348d2
    
    *arg3 = sbb.b(*arg3, arg1:1.b, c)
    __return_addr_1 += 1
    arg1.b += arg2.b
    *arg1 += arg1.b
    arg1, arg2, arg3 = arg1()
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    *(arg1 + 0x4f090039) += arg1.b
    __return_addr_7 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    goto label_43488a

bool z_9
bool z_6
bool cond:15_1

if (not(c))
    *(arg1 * 2)
    arg6 -= 1
    uint16_t* esi_4 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    __return_addr_2 = __return_addr_1
    uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
    esp = &__return_addr_2:1
    __outsd(arg2.w, *esi_5, esi_5, eflags)
    int16_t temp0_2
    temp0_2, eflags = __arpl_memw_gpr16(*(entry_ebx + 4), __return_addr_1.w)
    *(entry_ebx + 4) = temp0_2
label_434901:
    arg3 -= 1
    entry_ebx += 1
    *entry_ebx += arg1.b
    void* temp4_1 = arg2
    int32_t temp5_1 = *(esp + (arg2 << 1) + 0x65)
    arg2 |= *(esp + (arg2 << 1) + 0x65)
    
    if ((temp4_1 | temp5_1) s< 0)
        goto label_43497f
    
    bool z_7 = esp == 1
    bool s_2 = esp - 1 s< 0
    bool o_2 = add_overflow(esp, 0xffffffff)
    arg6 = *(esp - 1)
    __return_addr_7 = *(esp + 3)
    __return_addr_1 = *(esp + 7)
    entry_ebx = *(esp + 0xf)
    arg2 = *(esp + 0x13)
    arg3 = *(esp + 0x17)
    arg1 = *(esp + 0x1b)
    esp += 0x1f
    
    if (not(s_2))
    label_43497e:
        __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    label_43497f:
        __return_addr_1 += 1
        uint8_t* edi_2
        uint8_t temp0_8
        temp0_8, edi_2 = __insb(arg6, arg2.w, eflags)
        *edi_2 = temp0_8
        uint8_t temp0_9
        temp0_9, arg6 = __insb(edi_2, arg2.w, eflags)
        *arg6 = temp0_9
    label_434983:
        *(arg1 + 0x73)
        __return_addr_7 = *(arg1 + 0x73) * 0x650e7369
        c = unimplemented  {imul esi, dword [eax+0x73], 0x650e7369}
        bool o_6 = unimplemented  {imul esi, dword [eax+0x73], 0x650e7369}
        
        if (o_6)
            goto label_4349e3
        
        __return_addr_7 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
        goto label_43498d
    
    if (not(z_7))
        if (o_2)
            goto label_434983
        
        goto label_4349f2
    
    *arg1 += arg1
    *arg1 += arg1.b
    *arg2 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg3 -= 1
    entry_ebx += 1
label_43491d:
    char temp20_1 = *0x6f546c74
    *0x6f546c74 += arg1.b
    c = temp20_1 + arg1.b u< temp20_1
    z_9 = temp20_1 == neg.b(arg1.b)
    bool o_3 = add_overflow(temp20_1, arg1.b)
    void* ebp_3
    void* ebp_4
    void* ebp_7
    
    if (o_3)
        char temp25_1 = *(esp + (__return_addr_1 << 1) + 0x42) | arg2:1.b
        *(esp + (__return_addr_1 << 1) + 0x42) = temp25_1
        cond:15_1 = temp25_1 == 0
    label_434931:
        __return_addr_7 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
        int16_t cs
        
        if (not(cond:15_1))
            __return_addr_7 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
            int16_t temp0_3
            temp0_3, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_3
        label_434936:
            *(entry_ebx + 0x74)
            *(entry_ebx + 0x74) |= arg2.b
            c = false
            void* temp33_1 = entry_ebx
            entry_ebx += 1
            bool cond:10_1 = temp33_1 == 0xffffffff
            
            while (not(cond:10_1))
                while (true)
                    uint8_t temp0_4
                    temp0_4, arg6 = __insb(arg6, arg2.w, eflags)
                    *arg6 = temp0_4
                    
                    if (c)
                        esp += 1
                        arg3 -= 1
                        entry_ebx += 1
                        char temp36_1 = *entry_ebx
                        *entry_ebx += arg1.b
                        int32_t temp37_1 = adc.d(*(__return_addr_1 + (arg1 << 1) + 0x6c), arg2, 
                            temp36_1 + arg1.b u< temp36_1)
                        *(__return_addr_1 + (arg1 << 1) + 0x6c) = temp37_1
                        uint8_t temp0_5
                        temp0_5, arg6 = __insb(arg6, arg2.w, eflags)
                        *arg6 = temp0_5
                        *(arg1 + 0x73)
                        __return_addr_7 = *(arg1 + 0x73) * 0x6f507369
                        bool c_2 = unimplemented  {imul esi, dword [eax+0x73], 0x6f507369}
                        
                        if (not(c_2))
                            *(arg2 + 0x43)
                        else if (temp37_1 == 0)
                            entry_ebx += 1
                        else
                            uint16_t* esi_7 =
                                __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
                            __return_addr_7 = __outsb(arg2.w, *esi_7, esi_7, eflags)
                            *arg1 += arg1
                            *arg1 += arg1.b
                        label_43495b:
                            *entry_ebx += arg1.b
                            *arg1 += arg1.b
                            *(arg1 + 0x49) += arg1.b
                            entry_ebx += 1
                            char temp30_1 = *__return_addr_7
                            *__return_addr_7 += arg1.b
                            bool z_8 = temp30_1 == neg.b(arg1.b)
                            bool o_4 = add_overflow(temp30_1, arg1.b)
                            
                            if (o_4)
                                *arg1 += arg1.b
                                *arg1 += arg1.b
                                *arg1 += arg1.b
                                *(arg2 + 0x43)
                            else
                                uint16_t* esi_8 =
                                    __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
                                __return_addr_7 = __outsb(arg2.w, *esi_8, esi_8, eflags)
                                *(esp - 4) = zx.d(cs)
                                esp -= 4
                                
                                if (not(o_4))
                                    arg6 = *esp
                                    __return_addr_7 = *(esp + 4)
                                    __return_addr_1 = *(esp + 8)
                                    entry_ebx = *(esp + 0x10)
                                    arg2 = *(esp + 0x14)
                                    arg3 = *(esp + 0x18)
                                    arg1 = *(esp + 0x1c)
                                    esp += 0x20
                                    
                                    if (z_8)
                                        goto label_4349da
                                    
                                    __return_addr_1 += 1
                                    uint8_t* edi_1
                                    uint8_t temp0_6
                                    temp0_6, edi_1 = __insb(arg6, arg2.w, eflags)
                                    *edi_1 = temp0_6
                                    uint8_t temp0_7
                                    temp0_7, arg6 = __insb(edi_1, arg2.w, eflags)
                                    *arg6 = temp0_7
                                    *(arg1 + 0x73)
                                    __return_addr_7 = *(arg1 + 0x73) * 0x650d7369
                                    bool o_5 =
                                        unimplemented  {imul esi, dword [eax+0x73], 0x650d7369}
                                    
                                    if (o_5)
                                        goto label_4349c3
                                    
                                    goto label_43497e
                        
                        *(arg2 + (arg3 << 1) + 0x1a40043) += arg1:1.b
                        *arg1 += arg1.b
                        void* eax_2 = arg1 ^ 0x3ac00045
                        *(__return_addr_7 + arg6 + 0x33fc0040) += entry_ebx:1.b
                        arg2 += 2
                        eax_2:1.b += eax_2.b
                        arg1 = eax_2 + 1
                        goto label_4349db
                    
                    char temp35_1 = *entry_ebx
                    *entry_ebx += arg3.b
                    c = temp35_1 + arg3.b u< temp35_1
                label_4348d2:
                    char* temp18_1 = arg6
                    arg6 -= 1
                    z_6 = temp18_1 == 1
                label_4348d3:
                    __return_addr_7 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
                    *(esp - 4) = entry_ebx
                    esp -= 4
                    
                    if (z_6)
                        if (z_6)
                            goto label_43499e
                        
                        void* temp26_1 = entry_ebx
                        entry_ebx += 1
                        cond:10_1 = temp26_1 == 0xffffffff
                        break
                    
                    if (c)
                        __return_addr_7 = *(entry_ebx + 0x50) * 0x7469736f
                        __return_addr_1 = *(arg6 + 0x6e)
                        goto label_43495b
                    
                    esp += 1
                    
                    if (not(c))
                        goto label_4348e2
            
            *(arg1 + 0x434a) += entry_ebx:1.b
            goto label_4349b5
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1 = 0x434a
    label_4349b5:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg2 + (arg3 << 1) + 0x4aa40043) += arg1.b
        entry_ebx += 1
    label_4349c3:
        *(arg3 + arg1 + 0x35f80000) += arg1:1.b
        __return_addr_1 += 1
        arg1.b *= 2
        *arg2
        esp = 0xfc00403e
        arg1 ^= *arg2
        int16_t es_1
        arg6, es_1 = __les_gprz_memp(*__return_addr_7)
    label_4349da:
        arg1 += 1
    label_4349db:
        __return_addr_7[(arg3 << 2) + 0x45] += arg2:1.b
        *arg1 += arg1.b
    label_4349e3:
        *(esp + arg6) += entry_ebx.b
        arg1 += 1
        *(arg1 + 0xf) += entry_ebx.b
        __return_addr_7 = &__return_addr_7[1]
        arg6[(entry_ebx << 2) - 0x6e8fffbb] += arg3:1.b
    label_4349f2:
        __return_addr_1 += 1
    label_4349f3:
        *arg6 += arg3.b
        arg3 += 1
        *0xa7800043 += arg2.b
        entry_ebx += 1
    label_4349ff:
        *(arg1 + 0x6a) += arg3:1.b
        __return_addr_1 += 1
        char temp28_1 = arg1.b
        char temp29_1 = arg1.b
        arg1.b *= 2
        
        if (temp28_1 == neg.b(temp29_1))
            arg1.b += entry_ebx.b
            *arg2
            esp = 0xb4004237
            char temp0_13
            char temp1_1
            temp0_13, temp1_1, eflags = __aaa(arg1.b, arg1:1.b, eflags)
            arg1.b = temp0_13
            arg1:1.b = temp1_1
            goto label_434a12
        
        __return_addr_7[0x6a340043] = arg1:1.b
        ebp_7 = __return_addr_1 + 1
    label_434a53:
        char temp40_1 = *arg1
        *arg1 += arg2:1.b
        void* ecx_2
        void* ebx_8
        void* ebp_10
        bool o_8
        
        if (temp40_1 != neg.b(arg2:1.b) && temp40_1 + arg2:1.b u>= temp40_1)
            *(ebp_7 - 0x601bffbd) ^= arg1:1.b
        label_434aa3:
            *(esp + (arg2 << 1)) += arg3.b
            void* ebx_5 = entry_ebx + 2
            
            if (entry_ebx != 0xfffffffe)
                *(arg1 * 3) += ebx_5:1.b
            label_434b1f:
                *(esp + arg6) += ebx_5.b
                arg1 += 1
                *(arg1 + 0xf) += ebx_5.b
                __return_addr_7 = &__return_addr_7[1]
                arg6[(ebx_5 << 2) - 0x6e8fffbb] += arg3:1.b
                ebp_3 = ebp_7 + 1
            label_434b2f:
                *arg6 += arg3.b
            label_434b32:
                ecx_2 = arg3 + 1
                *0xa7800043 += arg2.b
                ebx_8 = ebx_5 + 1
                *(arg1 + 0x6a) += ecx_2:1.b
                char temp53_1 = arg1.b
                char temp54_1 = arg1.b
                arg1.b *= 2
                void* ebp_16
                
                if (temp53_1 != neg.b(temp54_1))
                    __return_addr_7[0x6a340043] = arg1:1.b
                    ebp_16 = ebp_3 + 2
                else
                    arg1.b += ebx_8.b
                    *arg2
                    esp = 0xb4004237
                    char temp0_20
                    char temp1_3
                    temp0_20, temp1_3, eflags = __aaa(arg1.b, arg1:1.b, eflags)
                    arg1.b = temp0_20
                    arg1:1.b = temp1_3
                    arg2 += 1
                    arg1.b += arg1:1.b
                    *arg2
                    *(ebp_3 - 0x7767ffbc) = ebx_8.b
                    *(&arg1[ecx_2] - 0x769bffbb) += arg2.b
                    ebp_10 = ebp_3 + 3
                    arg1[-0xbffeea6].b += ebx_8:1.b
                    o_8 = add_overflow(arg1[-0xbffeea6].b, ebx_8:1.b)
                label_434b69:
                    
                    if (not(o_8))
                        goto label_434bb2
                    
                    *(ecx_2 + (__return_addr_7 << 1)) += arg2:1.b
                    *arg1
                    *arg1 += ecx_2:1.b
                    bool p_3 = unimplemented  {add byte [eax], ch}
                    
                    if (not(p_3))
                        int16_t temp0_22 = esp
                        esp = arg1
                        arg1 = temp0_22
                        *0x9e200043 = arg1
                    label_434bbf:
                        *__return_addr_7 += arg1.b
                        *(esp - 4) = esp
                        *(esp - 5)
                        *(esp - 1)
                        *(esp + 0xb)
                        *(esp + 0xf)
                        *(esp + 0x13)
                        *(esp + 0x17)
                        __bound_gprv_mema32(esp + 0x1b, *(*(esp + 3) + 0x6c))
                        breakpoint
                    
                    arg1.b += ebx_8:1.b
                    arg1:1.b += ebx_8:1.b
                    *(ecx_2 + 0x45) += arg1.b
                    *(arg1 - 0x5f) += arg2:1.b
                    ebp_16 = ebp_10 + 4
                    *arg1 += ebx_8:1.b
                    *(esp - 4) = 0x45
                    *(arg1 + 0x340043a6) += ecx_2.b
                    *(esp - 8) = 0x45
                    esp -= 8
                
                char temp59_1 = *arg1
                *arg1 += arg2:1.b
                int32_t* esp_14
                bool c_8
                
                if (temp59_1 != neg.b(arg2:1.b) && temp59_1 + arg2:1.b u>= temp59_1)
                    arg1:1.b = 0x4a
                    ebx_8 += 1
                    *__return_addr_7 += arg2:1.b
                    char temp63_1 = *arg1
                    *arg1 += ecx_2.b
                    *(esp - 4) = ebx_8
                    esp_14 = esp - 4
                    
                    if (temp63_1 == neg.b(ecx_2.b))
                        char temp67_1 = *arg6
                        *arg6 += arg1.b
                        c_8 = temp67_1 + arg1.b u< temp67_1
                        goto label_434c48
                    
                    void* temp68_1 = ebx_8
                    ebx_8 += 1
                    
                    if (temp68_1 != 0xffffffff)
                        uint8_t* edi_9
                        uint8_t temp0_23
                        temp0_23, edi_9 = __insb(arg6, arg2.w, eflags)
                        *edi_9 = temp0_23
                        
                        if (temp63_1 + ecx_2.b u>= temp63_1)
                            jump(0x434c11)
                        
                        jump(0x434be8)
                    
                    *(esp_14 - 4) = arg1
                    *(esp_14 - 8) = ecx_2
                    *(esp_14 - 0xc) = arg2
                    *(esp_14 - 0x10) = ebx_8
                    *(esp_14 - 0x14) = esp_14 - 0x10
                    *(esp_14 - 0x18) = ebp_16
                    *(esp_14 - 0x1c) = __return_addr_7
                    *(esp_14 - 0x20) = arg6
                    esp_14 -= 0x20
                else
                    *(__return_addr_7 * 3 + 0x79f00045) += ecx_2:1.b
                    *(arg1 + (arg6 << 1) + 0x45) += ecx_2:1.b
                    *(ebx_8 + (ecx_2 << 2) - 0x5e0bffbb) += arg1:1.b
                    ebp_10 = ebp_16 + 2
                    char temp64_1 = arg1.b
                    arg1.b += ecx_2:1.b
                    
                    if (temp64_1 s< neg.b(ecx_2:1.b))
                        arg1, arg2, ecx_2 = (*(ebx_8 + (ebp_10 << 1) + 0x45))()
                    label_434bf4:
                        *ecx_2 += arg1.b
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                    else
                        char temp69_1 = arg1:1.b
                        char temp70_1 = arg1:1.b
                        arg1:1.b *= 2
                        
                        if (temp69_1 s>= neg.b(temp70_1))
                            goto label_434bf4
                        
                        *(esp + (ebp_10 << 1)) += ebx_8:1.b
                    label_434bb2:
                        ebp_10 += 1
                        char temp57_1 = arg1:1.b
                        char temp58_1 = arg1.b
                        arg1:1.b += arg1.b
                        
                        if (temp57_1 s< neg.b(temp58_1))
                            *(ebx_8 - 0x61dfffbd) += arg2.b
                            goto label_434bbf
                    
                    *arg1 = *arg1
                    *arg1 += arg1.b
                    int32_t* eax_8 = arg1 | 0x6c410500
                    bool p_4 = unimplemented  {or eax, 0x6c410500}
                    bool a_2 = undefined
                    *(arg6 + 0x6e)
                    int32_t esp_15 = *(arg6 + 0x6e) * &data_416f18
                    bool c_7 = unimplemented  {imul esp, dword [edi+0x6e], 0x416f18}
                    bool o_9 = unimplemented  {imul esp, dword [edi+0x6e], 0x416f18}
                    bool d
                    *(esp_15 - 4) = (o_9 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
                        | ((arg1 | 0x6c410500) s< 0 ? 1 : 0) << 7
                        | ((arg1 | 0x6c410500) == 0 ? 1 : 0) << 6 | (a_2 ? 1 : 0) << 4
                        | (p_4 ? 1 : 0) << 2 | (c_7 ? 1 : 0)
                    *eax_8 += eax_8
                    *(__return_addr_7 + 0x43) += 1
                    *ecx_2 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 += eax_8.b
                    *eax_8 = *eax_8
                    *eax_8 += eax_8.b
                    *(esp_15 - 8) = zx.d(cs)
                    *ecx_2 += ecx_2.b
                    ecx_2 += 1
                    uint8_t temp0_24
                    temp0_24, arg6 = __insb(arg6, arg2.w, eflags)
                    *arg6 = temp0_24
                    int32_t esp_17 = *(arg6 + 0x6e) * 0x746e656d
                    *(esp_17 - 4) = 0x6100451d
                    *eax_8 += eax_8.b
                    arg1 = eax_8 - 1
                    *(esp_17 - 8) = 0x69e40045
                    esp_14 = esp_17 - 8
                    ebp_16 = ebp_10 + 1
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *ebx_8 = *ebx_8
                    char temp62_1 = *arg1
                    *arg1 += arg1.b
                    c_8 = temp62_1 + arg1.b u< temp62_1
                    int0_t ldtr
                    *arg6 = __sldt_memw(ldtr)
                label_434c48:
                    ecx_2 += 1
                    __return_addr_7 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
                    int16_t temp0_26
                    temp0_26, eflags = __arpl_memw_gpr16(*(arg1 + 0x6f), ebp_16.w)
                    *(arg1 + 0x6f) = temp0_26
                    
                    if (c_8)
                        char temp71 = arg1:1.b
                        char temp72 = arg1.b
                        arg1:1.b += arg1.b
                        
                        if (temp71 + temp72 s>= 0)
                            *arg1 += arg1.b
                            *arg1 += arg1.b
                            arg1[-3].b += arg1.b
                            *esp_14
                            esp_14[1]
                            esp_14[2]
                            esp_14[5]
                            esp_14[6]
                            esp_14[7]
                            
                            if (esp_14[4] != 0xffffffff)
                                jump(sub_434d50+0x41)
                            
                            jump(0x434d1f)
                        
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                        *arg1 = *arg1
                        char temp75 = *(arg1 + 0x43050013)
                        *(arg1 + 0x43050013) += arg1.b
                        uint16_t* esi_13 =
                            __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
                        uint8_t* edi_11
                        uint8_t temp0_27
                        temp0_27, edi_11 = __insb(arg6, arg2.w, eflags)
                        *edi_11 = temp0_27
                        __outsd(arg2.w, *esi_13, esi_13, eflags)
                        
                        if (temp75 + arg1.b u< temp75)
                            jump(0x434ce8)
                        
                        jump(0x434cd8)
                    
                    *arg1 += arg2.b
                    arg1 += 1
                    *(ebp_16 + 0x60ff0001) += ebx_8.b
                *arg1 += arg1.b
                *ecx_2 += 1
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *ecx_2 = *ecx_2
                char temp76 = *arg1
                *arg1 += arg1.b
                *arg1 = adc.b(*arg1, arg1.b, temp76 + arg1.b u< temp76)
                char temp77 = *(ecx_2 + 0x75) | arg1.b
                *(ecx_2 + 0x75) = temp77
                
                if (temp77 != 0)
                    *(esp_14 - 4) = ebx_8
                    *(esp_14 - 4)
                    *arg1 += arg1.b
                    *(esp_14 - 4) = *(arg1 * 2)
                    undefined
                
                ebx_8:1.b *= 2
                arg1.b = *__return_addr_7
                void* esi_15 = &__return_addr_7[1]
                *0x10045 = arg1
                *arg1 += arg1.b
                *arg1 += arg1.b
                char temp78 = arg1[-0x20000000].b
                arg1[-0x20000000].b += arg1.b
                arg1.b = adc.b(arg1.b, 0, temp78 + arg1.b u< temp78)
                bool cond:17 = (arg1 | *(ebx_8 + 0x6f)) u>= 0
                __outsb(arg2.w, *esi_15, esi_15, eflags)
                
                if (cond:17)
                    jump(sub_434d50+0x1b)
                
                jump("raints")
            
            if (entry_ebx == 0xfffffffe)
                ebp_7 += 1
                *arg1 += arg1.b
                goto label_434b1f
            
            int16_t* edi_5
            int16_t temp0_15
            temp0_15, edi_5 = __insd(arg6, arg2.w, eflags)
            *edi_5 = temp0_15
            arg6 = *(esp - 1)
            __return_addr_7 = *(esp + 3)
            ebp_3 = *(esp + 7)
            entry_ebx = *(esp + 0xf)
            arg2 = *(esp + 0x13)
            arg3 = *(esp + 0x17)
            *(esp + 0x1b)
            esp += 0x1f
            __bound_gprv_mema32(esp, *(ebp_3 + 0x6c))
        label_434ab4:
            arg1 = 0x700434a
        label_434ab9:
            arg1.b |= 0x54
            ebx_5 = entry_ebx + 1
            
            if (entry_ebx != 0xffffffff)
                *__return_addr_7 - *arg6
                __return_addr_7 = &__return_addr_7[4]
                arg6 = &arg6[4]
                goto label_434b32
            
            if (entry_ebx == 0xffffffff)
                goto label_434b2f
        else
            *(__return_addr_7 * 3 + 0x79f00045) += arg3:1.b
            *(arg1 + (arg6 << 1) + 0x45) += arg3:1.b
            *(entry_ebx + (arg3 << 2) - 0x5e0bffbb) += arg1:1.b
            ebp_3 = ebp_7 + 2
            char temp42_1 = arg1.b
            arg1.b += arg3:1.b
            
            if (temp42_1 s< neg.b(arg3:1.b))
                goto label_434ab4
            
            char temp46_1 = arg1:1.b
            char temp47_1 = arg1:1.b
            arg1:1.b *= 2
            
            if (temp46_1 s>= neg.b(temp47_1))
                *esp
                esp += 2
                goto label_434ab9
            
            *(esp + (ebp_3 << 1)) += entry_ebx:1.b
        label_434a76:
            ebp_4 = ebp_3 + 1
            char temp48_1 = arg1:1.b
            char temp49_1 = arg1.b
            arg1:1.b += arg1.b
            
            if (temp48_1 s< neg.b(temp49_1))
                *(entry_ebx - 0x61dfffbd) += arg2.b
                goto label_434a83
        
        int16_t* edi_6
        int16_t temp0_16
        temp0_16, edi_6 = __insd(arg6, arg2.w, eflags)
        *edi_6 = temp0_16
        arg6 = *(esp - 1)
        __return_addr_7 = *(esp + 3)
        void* ebp_9 = *(esp + 7)
        void* ebx_6 = *(esp + 0xf)
        void* edx_2 = *(esp + 0x13)
        void* ecx_1 = *(esp + 0x17)
        *(esp + 0x1b)
        __bound_gprv_mema32(esp + 0x1f, *(ebp_9 + 0x6c))
        char* eax_5
        eax_5.b = __in_al_dx(edx_2.w, eflags)
        ecx_2 = ecx_1 - 1
        eax_5.b += edx_2:1.b
        ebp_10 = ebp_9 + 1
        *0x74530800 += ecx_2.b
        ebx_8 = ebx_6 + 2
        
        if (ebx_6 != 0xfffffffe)
            uint8_t* edi_7
            uint8_t temp0_18
            temp0_18, edi_7 = __insb(arg6, edx_2.w, eflags)
            *edi_7 = temp0_18
            eax_5[0x434b28] += edx_2.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            breakpoint
        
        char temp0_19
        char temp1_2
        temp0_19, temp1_2, eflags = __aaa(eax_5.b, eax_5:1.b, eflags)
        eax_5.b = temp0_19
        eax_5:1.b = temp1_2
        *(arg6 + __return_addr_7 + 0x3ae00042) += (edx_2 + 1):1.b
        arg2 = edx_2 + 2
        char temp52_1 = eax_5[0x9800439d]
        eax_5[0x9800439d] += ecx_2.b
        o_8 = add_overflow(temp52_1, ecx_2.b)
        *ebp_10 = eax_5.b
        int16_t temp0_21 = esp + 0x1f
        esp = eax_5
        int32_t eax_6 = temp0_21
        *ebp_10 = eax_6.b
        TEB* fsbase
        *(fsbase + ebp_10) = eax_6
        arg1 = 0xd0004568
        goto label_434b69
    
    if (not(z_9))
        goto label_434927
    
    if (o_3)
        *arg2
        arg2 += 1
        *(arg6 + __return_addr_7 + 0x37b40042) += entry_ebx:1.b
    label_434a12:
        arg2 += 1
        arg1.b += arg1:1.b
        *arg2
        *(__return_addr_1 - 0x7767ffbd) = entry_ebx.b
        *(&arg1[arg3] - 0x769bffbb) += arg2.b
        ebp_3 = __return_addr_1 + 2
        arg1[-0xbffeea6].b += entry_ebx:1.b
        
        if (not(add_overflow(arg1[-0xbffeea6].b, entry_ebx:1.b)))
            goto label_434a76
        
        *(arg3 + (__return_addr_7 << 1)) += arg2:1.b
        ebp_4 = ebp_3 + 1
        *arg1
        *arg1 += arg3:1.b
        bool p_1 = unimplemented  {add byte [eax], ch}
        
        if (p_1)
            arg1.b += entry_ebx:1.b
            arg1:1.b += entry_ebx:1.b
            *(arg3 + 0x45) += arg1.b
            *(arg1 - 0x5f) += arg2:1.b
            ebp_7 = ebp_4 + 3
            *arg1 += entry_ebx:1.b
            *(esp - 4) = 0x45
            *(arg1 + 0x340043a6) += arg3.b
            *(esp - 8) = 0x45
            esp -= 8
            goto label_434a53
        
        int16_t temp0_14 = esp
        esp = arg1
        arg1 = temp0_14
        *0x9e200043 = arg1
    label_434a83:
        *0xeb01200 += arg1.b
        arg1.b = 6
        arg1.b = 0xc6
        ebp_7 = ebp_4 + 1
        *(esp - 4) = *(arg1 - 0x33ffbc59)
        esp -= 4
        *__return_addr_7 - *arg6
        void* esi_10 = &__return_addr_7[4]
        void* edi_3 = &arg6[4]
        arg1:1.b *= 2
        *esi_10 - *edi_3
        void* esi_11 = esi_10 + 4
        void* edi_4 = edi_3 + 4
        *arg1 += arg2:1.b
        *edi_4 = *esi_11
        arg6 = edi_4 + 4
        __return_addr_7 = esi_11 + 4
        entry_ebx += 4
        char temp65_1 = arg1:1.b
        char temp66_1 = arg1:1.b
        arg1:1.b *= 2
        bool p_2 = unimplemented  {add ah, ah}
        bool a_1 = unimplemented  {add ah, ah}
        arg1:1.b = (temp65_1 + temp66_1 s< 0 ? 1 : 0) << 7
            | (temp65_1 == neg.b(temp66_1) ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_2 ? 1 : 0) << 2
            | (temp65_1 + temp66_1 u< temp65_1 ? 1 : 0)
        goto label_434aa3
    
    *(entry_ebx + 8)
    __return_addr_7 = *(entry_ebx + 8) * 0x43647453
    c = unimplemented  {imul esi, dword [ebx+0x8], 0x43647453}
else
    __return_addr_2 = __return_addr_1
    esp = &var_5:1
label_434890:
    
    if (o)
        entry_ebx = *esp * 0x45
    label_4348ba:
        *arg1 += arg1.b
        *arg1 += arg1
        *arg1 += 1
        *arg1 += arg1
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp15_1 = *(arg1 + 0x4f0b003b)
        *(arg1 + 0x4f0b003b) += arg1.b
        c = temp15_1 + arg1.b u< temp15_1
        z_6 = temp15_1 == neg.b(arg1.b)
        goto label_4348d3
    
    __return_addr_1 += 1
    arg1.b += arg2:1.b
    *arg1 += arg1.b
    *(esp - 4) = arg1
    esp -= 4
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp8_1 = *(arg1 + 0x4f0b003a)
    *(arg1 + 0x4f0b003a) += arg1.b
    c = temp8_1 + arg1.b u< temp8_1
    z_5 = temp8_1 == neg.b(arg1.b)
label_4348ad:
    __return_addr_7 = __outsb(arg2.w, *__return_addr_7, __return_addr_7, eflags)
    *(esp - 4) = entry_ebx
    esp -= 4
    
    if (z_5)
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b += *arg1
        *arg1 += arg1.b
        *(arg3 + 0x43) += arg3.b
        goto label_43491d
    
    if (not(c))
        esp += 1
    label_4348b4:
        __return_addr_7 = __outsd(arg2.w, *__return_addr_7, __return_addr_7, eflags)
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x1c), __return_addr_1.w)
        *(entry_ebx + 0x1c) = temp0_1
        arg1.b &= 0x45
        goto label_4348ba
    
label_434927:
    void* temp21_1 = entry_ebx
    entry_ebx += 1
    z_9 = temp21_1 == 0xffffffff
    uint16_t* gsbase
    __return_addr_7 = __outsb(arg2.w, *(gsbase + __return_addr_7), __return_addr_7, eflags)
    
    if (z_9)
        goto label_434991
    
    if (c)
        goto label_434936
    
    if (not(z_9))
        void* temp39_1 = arg2
        arg2 += 1
        cond:15_1 = temp39_1 == 0xffffffff
        goto label_434931

while (true)
    if (z_9)
        arg1:1.b = 0x37
        goto label_434a12
    
label_43499e:
    uint8_t temp0_12
    temp0_12, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_12
    
    if (c)
        arg3 -= 1
        entry_ebx += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        break
    
label_43498d:
    
    if (c)
        goto label_4349f3
    
    void* const __return_addr_6 = __return_addr_1
    __return_addr_1 += 1
    z_9 = __return_addr_6 == 0xffffffff
    uint8_t temp0_10
    temp0_10, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_10
label_434991:
    uint8_t temp0_11
    temp0_11, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_11
    *(arg1 + 0x73)
    __return_addr_7 = *(arg1 + 0x73) * 0x53087369
    c = unimplemented  {imul esi, dword [eax+0x73], 0x53087369}
    
    if (z_9)
        goto label_4349ff
    
    void* temp31_1 = entry_ebx
    entry_ebx += 1
    z_9 = temp31_1 == 0xffffffff

*(arg1 + 0x434a) += entry_ebx:1.b
goto label_4349b5
