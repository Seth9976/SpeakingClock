// 函数: sub_478bf8
// 地址: 0x478bf8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t temp2 = *0x74754254
char* ecx = arg3 + *0x74754254
int32_t* eax
void* esp

if (arg3 == neg.d(temp2))
    eax.b = (*arg6).b | 0x62
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
    *eax += eax.b
    esp = eax
    *arg6 -= arg6.b
    char temp5_1 = *arg6
    *arg6 += arg6.b
    int32_t eax_3
    eax_3.b = sbb.b(arg6.w.b, *arg4, temp5_1 + arg6.b u< temp5_1)
    eax_3.b = 0x3e
    eax = eax_3 + 1
    goto label_478ce3

int32_t eflags
__outsb(arg2.w, *arg5, arg5, eflags)
int32_t* var_1
arg6 = var_1
arg5 = __return_addr
arg4 = arg7
char* entry_ebx = arg8
arg2 = arg9
ecx = arg10
eax = arg11
void arg_1f
esp = &arg_1f

if (&var_1 s>= 0)
    if (&var_1:1 == 1)
        eax += 1
        eax:1.b += eax.b
        goto label_478cef
    
    void* temp6_1 = esp
    esp += 1
    
    if (temp6_1 == 0xffffffff)
        goto label_478ce3
    
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(arg6 + eax + 0x62), arg5.w)
    *(arg6 + eax + 0x62) = temp0_4
    
    if (arg3 + temp2 u< arg3)
        goto label_478c84
    
    *(eax - 0x4fffbae6) += entry_ebx.b
    eax += 1
label_478ce3:
    *(arg5 + arg6 + 0x3ec00040) += entry_ebx:1.b
    eax += 1
    eax:1.b += eax.b
    goto label_478cef

if (&var_1:1 == 1)
    *eax += eax
    *eax += eax.b
    *entry_ebx += eax.b
    *eax += eax.b
    eax = *arg6
    esp = &arg_1f | arg2[0x1b]
    bool cond:5_1 = arg6 + 1 s>= 0
    uint8_t temp0_1
    temp0_1, arg6 = __insb(arg6 + 1, arg2.w, eflags)
    *arg6 = temp0_1
    
    if (not(cond:5_1))
        *(esp - 4) = 0x7466654c
        eax.b |= 0x62
        uint8_t* edi_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(arg6, arg2.w, eflags)
        *edi_1 = temp0_2
        uint8_t* edi_3
        uint8_t temp0_3
        temp0_3, edi_3 = __insb(&edi_1[1], arg2.w, eflags)
        *edi_3 = temp0_3
        
        if (&edi_1[1] s< 0)
            *(esp - 8) = 0x68676952
            
            if (edi_1 == 0xffffffff)
                jump(0x478c3c)
            
            jump(0x478c32)
        
        *ecx += eax.b
        arg2.b |= *(&arg5[ecx] + 0x75)
        int32_t* edi_4
        int32_t temp0_5
        temp0_5, edi_4 = __insd(edi_3, arg2.w, eflags)
        *edi_4 = temp0_5
        uint8_t* edi_6
        uint8_t temp0_6
        temp0_6, edi_6 = __insb(edi_4 + 1, arg2.w, eflags)
        *edi_6 = temp0_6
        
        if (edi_4 + 1 s>= 0)
            jump(0x478d16)
        
        jump(0x478ca6)
else
    bool c_1
    bool p_1
    bool a_1
    bool z_2
    bool s_1
    bool o_1
    
    if (&var_1:1 == 1)
        int32_t* temp8_1 = eax
        eax += 0x654e7362
        c_1 = temp8_1 u>= 0x9ab18c9e
        p_1 = unimplemented  {add eax, 0x654e7362}
        a_1 = unimplemented  {add eax, 0x654e7362}
        z_2 = temp8_1 == 0x9ab18c9e
        s_1 = temp8_1 + 0x654e7362 s< 0
        o_1 = add_overflow(temp8_1, 0x654e7362)
        
        if (not(z_2) && not(c_1))
        label_478c98:
            *(esp - 4) = (o_1 ? 1 : 0) << 0xb | (s_1 ? 1 : 0) << 7 | (z_2 ? 1 : 0) << 6
                | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (c_1 ? 1 : 0)
            int16_t es
            *arg6 = es
            *arg2 += ecx
            *(esp - 8) = esp - 4
            
            if (arg5 != 1)
                jump(0x478d0f)
            
            jump(0x478ca2)
    else
        __bound_gprv_mema32(arg5, *(entry_ebx + 0x57))
    label_478c84:
        *(arg5 + 0x33)
        arg4 = *(arg5 + 0x33) * 0x73620531
        c_1 = unimplemented  {imul ebp, dword [esi+0x33], 0x73620531}
        uint16_t* temp12_1 = arg5
        arg5 -= 1
        p_1 = unimplemented  {dec esi}
        a_1 = unimplemented  {dec esi}
        z_2 = temp12_1 == 1
        s_1 = temp12_1 - 1 s< 0
        o_1 = add_overflow(temp12_1, 0xffffffff)
        
        if (not(z_2) && not(c_1))
            goto label_478c98

if (arg2 == 0xffffffff)
    if (arg2 == 0xffffffff)
        jump(0x478d03)
    
    jump(0x478c94)

arg2 += 2
*(esp + 0x45) += ecx:1.b

while (true)
    *(esp + arg6) += arg2.b
    *eax += eax:1.b
    *(&arg5[(arg4 + 1) * 2] + 0x3bf80047) += entry_ebx:1.b
    arg2 += 2
    *(esp + arg6 + 0x42) += ecx.b
    eax.b += arg2:1.b
    __bound_gprv_mema32(eax, *(arg4 + 1))
    *arg6
    arg6 += 2
    *(eax + 0x63) += entry_ebx:1.b
    arg4 = &arg4[1]
    *(&arg6[arg4] + 0x47) += eax.b
    arg6[ecx].b += arg2.b
    arg5 += 1
    *(arg4 + 0x45) += ecx.b
    char temp15_1 = eax.b
    char temp16_1 = eax.b
    eax.b *= 2
    int16_t temp0_8
    temp0_8, eflags = __arpl_memw_gpr16(*arg4, eax.w)
    *arg4 = temp0_8
    
    if (temp15_1 != neg.b(temp16_1))
        *(arg6 + 1 + (ecx << 2) + 0x46) += eax:1.b
        *eax += entry_ebx:1.b
        *(arg6 + 1 + (ecx << 2) + 0x64940046) += ecx.b
        *(arg6 + 1 + (&arg4[1] << 2) + 0x64b80047) += eax:1.b
        eax:1.b += eax.b
        *(arg6 + 1)
        void* edi_10 = arg6 + 5
        eax:1.b += arg2.b
        *(arg4 + 0x65f40049) += arg2:1.b
        eax:1.b += entry_ebx.b
        eax:1.b *= 2
        *(edi_10 + 1)
        void* edi_12 = edi_10 + 5
        *(edi_12 + 1 + (ecx << 2) + 0x65000046) += arg2:1.b
        entry_ebx[0x45] += eax:1.b
        entry_ebx[0x63f80045] += ecx:1.b
        *eax += eax.b
        __bound_gprv_mema32(eax, *(arg4 + 8))
        eax:1.b = 0x64
        eax.b += entry_ebx.b
        *arg5 += arg2.b
        char temp17 = *arg5
        *arg5 += arg2.b
        *(esp - 4) = esp
        *(esp - 8) = entry_ebx
        void* ebp_13
        
        if (add_overflow(temp17, arg2.b))
            *(edi_12 + 1) += ecx.b
            ecx = &ecx[1]
            eax.b *= 2
            arg2:1.b = 0x47
            eax:1.b = 0x64 + entry_ebx:1.b
            *(esp - 0xc) = 0x45
            *(eax + 0x6a) += ecx:1.b
            ebp_13 = arg4 + 0xd
            char temp18_1 = eax.b
            char temp19_1 = eax.b
            eax.b *= 2
            
            if (temp18_1 != neg.b(temp19_1))
                *(edi_12 + 1) = *arg5
                
                if (temp18_1 == neg.b(temp19_1))
                    return sub_478e5b(eax, arg2, ecx, ebp_13, arg5 + 1, edi_12 + 2) __tailcall
                
                __out_dx_oeax(arg2.w, eax, eflags)
                undefined
        else
            void** temp20_1 = arg2
            arg2 += 1
            
            if (temp20_1 == 0xffffffff)
                if (temp20_1 == 0xffffffff)
                    jump(0x478e0f)
                
                jump(0x478da0)
            
            ebp_13 = &arg4[6]
        
        eax.b += entry_ebx.b
        *arg2
        int32_t eflags_1
        char temp0_9
        char temp1_1
        temp0_9, temp1_1, eflags_1 = __aaa(eax.b, eax:1.b, eflags)
        eax.b = temp0_9
        eax:1.b = temp1_1
        eax.b += eax:1.b
        *(arg2 + 1)
        *0xb4004233 = eax
        eax.b = 0x47
        char temp21 = eax[-0x1affee9e].b
        eax[-0x1affee9e].b += entry_ebx.b
        *ebp_13 = 0x47
        TEB* fsbase
        *(fsbase + ebp_13) = eax
        
        if (not(add_overflow(temp21, entry_ebx.b)))
            jump(sub_478e5b+0x25)
        
        return sub_478e3b(0xd0004568, arg2 + 1, ecx, ebp_13, arg5) __tailcall
    
label_478cef:
    *(eax + 0x403f) += entry_ebx:1.b
    *(esp + arg6) += entry_ebx.b
    *(entry_ebx + arg6 - 0x5167ffbe) += ecx:1.b
    eax.b = (eax + 2).b + (eax + 2):1.b
    *arg2
    uint8_t temp0_7
    temp0_7, arg6 = __insb(arg6 + 1, arg2.w, eflags)
    *arg6 = temp0_7
    arg4 += 1
