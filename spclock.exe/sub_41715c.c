// 函数: sub_41715c
// 地址: 0x41715c
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
char temp1 = *arg1
*arg1 += arg1.b
*arg6 = *arg5
void* edi = &arg6[1]
void* esi = &arg5[1]
int32_t eflags
char* entry_ebx
char* esp

if (not(add_overflow(temp1, arg1.b)))
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
    arg2[0x41] += arg2:1.b
label_4171d7:
    *(arg1 * 2) += arg3.b
    char temp2_1 = *arg1
    *arg1 += arg1.b
    bool o_1 = add_overflow(temp2_1, arg1.b)
    arg1 = *esp
    esp = &esp[4]
    
    if (not(o_1))
        goto label_417220
    
    arg1[0xbc00403e] += arg2:1.b
    void* eax_3
    eax_3.b = (&arg1[1]).b * 2
    void* eax_4
    eax_4:1.b = (eax_3 + 1):1.b + (eax_3 + 1).b
    arg1 = eax_4 + 1
    arg1[0x403e] += entry_ebx:1.b
    *(esp + edi) += entry_ebx.b
label_4171fb:
    arg1[0x3d] += entry_ebx.b
    arg1 = &arg1[2]
    *arg1 += arg2.b
    esi += 1
    *(arg4 + 0x54)
    void* ebp_2 = *(arg4 + 0x54) * 0x61657274
    bool c_4 = unimplemented  {imul ebp, dword [ebp+0x53], 0x61657274}
    int16_t temp0_2
    temp0_2, edi = __insd(edi, arg2.w, eflags)
    *edi = temp0_2
    arg4 = ebp_2 + 1
    
    if (c_4)
        goto label_417281
    
    __outsd(arg2.w, *esi, esi, eflags)
    
    if (c_4)
        goto label_41719f
    
    arg1 = &arg1[1]
    arg1[0x72] += arg1:1.b
    arg3 = &arg3[1]
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    goto label_417221

*(arg1 * 2) += arg3.b
label_41717e:
*arg1 += arg1.b
*(edi + 0x40)
arg1[0xbc00403e] += arg2:1.b
void* eax
eax.b = (&arg1[1]).b * 2
void* eax_1
eax_1:1.b = (eax + 1):1.b + (eax + 1).b
arg1 = eax_1 + 1
arg1[0x403e] += entry_ebx:1.b
*(esp + edi) += entry_ebx.b
bool c_2

while (true)
    arg1 = &arg1[1]
label_41719f:
    arg1[0x3c] += entry_ebx.b
    char temp6_1 = *((&arg1[1] << 1) + 0x65727453)
    *((&arg1[1] << 1) + 0x65727453) += arg3.b
    bool c_1 = temp6_1 + arg3.b u< temp6_1
    int32_t edi_1 = *esp
    uint16_t* esi_1 = *(esp + 4)
    void* ebp = *(esp + 8)
    entry_ebx = *(esp + 0x10)
    arg2 = *(esp + 0x14)
    arg3 = *(esp + 0x18)
    arg1 = *(esp + 0x1c)
    esp = &esp[0x20]
    int16_t temp0_1
    temp0_1, edi = __insd(edi_1, arg2.w, eflags)
    *edi = temp0_1
    arg4 = ebp + 1
    
    if (c_1)
    label_417221:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0x72] += arg1:1.b
        arg3 = &arg3[1]
        goto label_417237
    
    esi = __outsd(arg2.w, *esi_1, esi_1, eflags)
    
    if (not(c_1))
        arg1 = &arg1[1]
        char temp11_1 = *arg1
        *arg1 += arg1.b
        c_2 = temp11_1 + arg1.b u< temp11_1
        break
    
    int32_t temp10_1 = *arg1
    *arg1 = &arg3[*arg1]
    bool c_23 = &arg3[temp10_1] u< temp10_1
    int16_t es
    *(esp - 4) = zx.d(es)
    *(esp - 8) = entry_ebx
    esp -= 8
    uint16_t* gsbase
    void* esi_10 = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
    
    if (c_23)
        *(arg3 + arg2) += arg3:1.b
        arg1 = &arg1[1]
        *(arg4 + 0x71a40040) += arg3.b
        arg3 = &arg3[1]
    else
        *(esp - 4) = esp
        esp -= 4
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int16_t temp0_8
        temp0_8, eflags = __arpl_memw_gpr16(*(arg1 * 2 + 0x2c), esi_10.w)
        *(arg1 * 2 + 0x2c) = temp0_8
        int32_t temp14_1 = *arg1
        *arg1 = adc.d(temp14_1, arg1, c_23)
        bool o_4 = unimplemented  {adc dword [eax], eax}
        *(edi - 1) = *esi_10
        esi_10 += 1
        
        if (not(o_4))
            arg1.b = sbb.b(arg1.b, 0x3c, 
                adc.d(temp14_1, arg1, c_23) u< temp14_1
                    || (c_23 && adc.d(temp14_1, arg1, c_23) == temp14_1))
            continue
    
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
    arg3[(esi_10 << 1) + 0xc0041] += arg1:1.b
    goto label_41717e

if (c_2)
    arg1.b = sbb.b(arg1.b, 0x3c, c_2)
    goto label_4171fb

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
char temp15_1 = *arg1
*arg1 += arg1.b

if (temp15_1 + arg1.b u>= temp15_1)
    goto label_4171d7

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
label_417220:
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
char temp3_1 = *arg1
*arg1 += arg1.b
*(esp - 4) = arg1
*(esp - 8) = arg3
*(esp - 0xc) = arg2
*(esp - 0x10) = entry_ebx
*(esp - 0x14) = esp - 0x10
*(esp - 0x18) = arg4
*(esp - 0x1c) = esi
*(esp - 0x20) = edi
esp -= 0x20
void* eax_12
uint16_t* esi_3

if (temp3_1 + arg1.b u< temp3_1)
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
    esp = 0xc004172
    *arg1 += arg1.b
    arg3[(esi << 1) + 0x3eb00041] += arg2:1.b
    *(esi + edi + 0x3ec00040) += entry_ebx:1.b
    eax_12 = &arg1[2]
label_4172a7:
    eax_12:1.b += eax_12.b
    *(eax_12 + 0x403f) += entry_ebx:1.b
    *(esp + edi) += entry_ebx.b
    *(eax_12 + 0x3e) += entry_ebx.b
    arg1 = eax_12 + 3
    char temp7_1 = *entry_ebx
    *entry_ebx += arg3.b
    bool c_7 = temp7_1 + arg3.b u< temp7_1
    arg4 += 1
    esi_3 = esi + 1
    void* temp8_1 = edi
    edi -= 1
    
    if (add_overflow(temp8_1, 0xffffffff))
        while (true)
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
            entry_ebx[(esi_3 << 1) + 0x41] += arg3:1.b
        label_417343:
            *(arg1 * 2) += arg3.b
            *arg1 += arg1.b
            *(esp - 4) = arg4
            esp -= 0x4176
            arg1.b = 0x3e
            *(esi_3 + edi + 0x3ec00040) += entry_ebx:1.b
            void* eax_19
            eax_19:1.b = (&arg1[2]):1.b + (&arg1[2]).b
            arg1 = eax_19 + 1
            arg1[0x403e] += entry_ebx:1.b
            *(esp + edi) += entry_ebx.b
        label_417367:
            arg1[0x3d] += entry_ebx.b
            char temp16_1 = *arg2
            *arg2 += arg3.b
            bool c_11 = temp16_1 + arg3.b u< temp16_1
            *(esp - 4) = arg2
            edi = *(esp - 4)
            esi_3 = *esp
            void* ebp_4 = *(esp + 4)
            entry_ebx = *(esp + 0xc)
            arg2 = *(esp + 0x10)
            arg3 = *(esp + 0x14)
            arg1 = *(esp + 0x18)
            esp = &esp[0x1c]
            arg4 = ebp_4 + 1
            
            if (c_11)
                goto label_4173e7
            
            esi_3 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            
            if (c_11)
                *(arg1 * 3) += entry_ebx:1.b
            label_41730b:
                *(esp + edi) += entry_ebx.b
            label_41730f:
                arg1[0x3d] += entry_ebx.b
                arg1 = &arg1[2]
                *entry_ebx += arg3.b
                esi_3 += 1
                *(arg4 + 0x73)
                arg4 = *(arg4 + 0x73) * 0x6f727245
                bool c_9 = unimplemented  {imul ebp, dword [ebp+0x72], 0x6f727245}
                
                if (not(c_9))
                    if (not(c_9))
                        arg1.b = sbb.b(arg1.b, 0x3c, c_9)
                        goto label_417367
                    
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    continue
            else
                int16_t es_1
                esi_3, es_1 = __les_gprz_memp(*(entry_ebx + 0x41))
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
            char temp20_1 = arg1:1.b
            char temp21_1 = arg1.b
            arg1:1.b += arg1.b
            
            if (temp20_1 + temp21_1 u< temp20_1)
                goto label_41739b
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            char temp25_1 = *arg1
            *arg1 += arg1.b
            arg1.b = sbb.b(arg1.b, 0x74, temp25_1 + arg1.b u< temp25_1)
            break
        
        goto label_4173f2
    
    esi_3 = __outsb(arg2.w, *esi_3, esi_3, eflags)
    arg4 += 1
    
    if (c_7)
    label_417338:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp12_1 = *arg1
        *arg1 += arg1.b
        uint8_t temp0_3
        temp0_3, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_3
        
        if (temp12_1 + arg1.b u< temp12_1)
            goto label_417343
        
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
        int16_t es_2
        esi_3, es_2 = __les_gprz_memp(*(entry_ebx + 0x41))
    label_41739b:
        *(arg1 * 2) += arg3.b
        *arg1 += arg1.b
        *(esp - 4) = arg4
        arg1.b = 0x3e
        *(esi_3 + edi + 0x3ec00040) += entry_ebx:1.b
        void* eax_22
        eax_22:1.b = (&arg1[2]):1.b + (&arg1[2]).b
        *(eax_22 + 0x403f) += entry_ebx:1.b
        *(esp - 0x4176 + edi) += entry_ebx.b
        *(eax_22 + 0x3e) += entry_ebx.b
        arg1 = eax_22 + 3
        char temp17_1 = *entry_ebx
        *entry_ebx += arg3.b
        bool c_13 = temp17_1 + arg3.b u< temp17_1
        arg4 = esp - 3
        bool cond:2_1 = esp == 3
        *(esp - 0x417a) = edi
        esp -= 0x417a
        
        if (c_13)
            goto label_417432
        
        if (cond:2_1)
            *arg1 += arg1.b
        label_417432:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_417440:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            char temp22_1 = *arg1
            *arg1 += arg1.b
            
            if (temp22_1 + arg1.b s>= 0)
                goto label_41744e
            
            arg1 = &arg1[1]
            goto label_4174c3
        
        void* temp23_1 = arg4
        arg4 += 1
        
        if (c_13)
            goto label_417440
        
        esi_3 = __outsd(arg2.w, *esi_3, esi_3, eflags)
        
        if (c_13)
            goto label_4173ed
        
        if (temp23_1 == 0xffffffff)
            arg1.b = sbb.b(arg1.b, 0x3c, c_13)
        else
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
        label_4173e7:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_4173ed:
            *arg1 += arg1.b
            esp[esi_3 << 1] += entry_ebx.b
        label_4173f2:
            arg3 = &arg3[1]
            *(arg1 * 2) += arg3.b
            *arg1 += arg1.b
            *(esp - 4) = arg4
            esp -= 0x4176
            arg1.b = 0x3e
            *(esi_3 + edi + 0x3ec00040) += entry_ebx:1.b
            void* eax_26
            eax_26:1.b = (&arg1[2]):1.b + (&arg1[2]).b
            arg1 = eax_26 + 1
            arg1[0x403e] += entry_ebx:1.b
            *(esp + edi) += entry_ebx.b
        
        arg1[0x3d] += entry_ebx.b
        char temp24_1 = *esi_3
        *esi_3 += arg3.b
        bool c_15 = temp24_1 + arg3.b u< temp24_1
        uint8_t* edi_2
        uint8_t temp0_4
        temp0_4, edi_2 = __insb(edi, arg2.w, eflags)
        *edi_2 = temp0_4
        edi = *esp
        int32_t esi_4 = *(esp + 4)
        arg4 = *(esp + 8)
        entry_ebx = *(esp + 0x10)
        arg2 = *(esp + 0x14)
        arg3 = *(esp + 0x18)
        arg1 = *(esp + 0x1c)
        esp = &esp[0x20]
        
        if (not(c_15))
            *arg1 += arg1.b
        label_417498:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_4174a2:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            char temp0_6
            char temp1_2
            temp0_6, temp1_2, eflags = __aam_immb(0x74, arg1.b)
            arg1.b = temp0_6
            arg1:1.b = temp1_2
            arg3 = &arg3[1]
            goto label_4174ab
        
        esi_3 = __outsd(arg2.w, *(esi_4 - 1), esi_4 - 1, eflags)
        
        if (esi_4 != 1)
            esi_3 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            
            if (esi_4 != 1)
                goto label_417498
            
            if (esi_4 - 1 s< 0)
                goto label_4174a2
            
            arg3 = &arg3[1]
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
            arg1[0x74] += entry_ebx:1.b
        label_41744e:
            arg3 = &arg3[1]
            *(arg1 * 2) += arg3.b
            *arg1 += arg1.b
            *(edi + 0x40)
            arg1[0xbc00403e] += arg2:1.b
            void* eax_28
            eax_28.b = (&arg1[1]).b * 2
            void* eax_29
            eax_29:1.b = (eax_28 + 1):1.b + (eax_28 + 1).b
            arg1 = eax_29 + 1
            arg1[0x403e] += entry_ebx:1.b
        
        *(esp + edi) += entry_ebx.b
        
        while (true)
            arg1[0x3d] += entry_ebx.b
            arg1 = &arg1[2]
            char temp28_1 = *((arg1 << 1) + 0x4e736552)
            *((arg1 << 1) + 0x4e736552) += arg3.b
            uint16_t* esi_6 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            void* ecx_1
            
            if (temp28_1 == neg.b(arg3.b))
                *arg1 += arg1.b
            else
                esi_3 = __outsd(arg2.w, *esi_6, esi_6, eflags)
                
                if (temp28_1 != neg.b(arg3.b))
                    goto label_4174f2
                
                char temp0_5
                char temp1_1
                temp0_5, temp1_1, eflags = __aam_immb(0x74, arg1.b)
                arg1.b = temp0_5
                arg1:1.b = temp1_1
                arg3 = &arg3[1]
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
                char temp29_1 = arg1:1.b
                arg1:1.b += arg2.b
                
                if (temp29_1 == neg.b(arg2.b))
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                label_4174f2:
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    arg1.b -= 0x75
                    ecx_1 = &arg3[1]
                    *(arg1 * 2) += ecx_1.b
                label_417506:
                    *arg1 += arg1.b
                    *(edi + 0x40)
                    arg1[0xbc00403e] += arg2:1.b
                    void* eax_34
                    eax_34.b = (&arg1[1]).b * 2
                    void* eax_35
                    eax_35:1.b = (eax_34 + 1):1.b + (eax_34 + 1).b
                    char* eax_36 = eax_35 + 1
                    eax_36[0x403e] += entry_ebx:1.b
                    
                    while (true)
                        *(esp + edi) += entry_ebx.b
                        eax_36[0x3d] += entry_ebx.b
                        *arg2 += ecx_1.b
                        void* ebp_6 = arg4 + 1
                        arg2 = &arg2[1]
                        uint16_t* esi_7 = *(entry_ebx + (esi_3 << 1) + 0x45) * 0x726f7272
                        *(ebp_6 + 0x41)
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        *(ebp_6 + (esi_7 << 1) + 0xc0041) += (&eax_36[2]).b
                        eax_36[2] += (&eax_36[2]).b
                        *(edi + 0x40)
                        eax_36[0xbc004040] += arg2:1.b
                        void* eax_39
                        eax_39.b = (&eax_36[3]).b * 2
                        void* eax_40
                        eax_40:1.b = (eax_39 + 1):1.b + (eax_39 + 1).b
                        *(eax_40 + 0x403f) += entry_ebx:1.b
                        *(esp + edi) += entry_ebx.b
                        *(eax_40 + 0x3e) += entry_ebx.b
                        eax_36 = eax_40 + 3
                        *eax_36 += arg2.b
                        *(esp - 4) = entry_ebx
                        esp -= 4
                        
                        if (ebp_6 == 0xffffffff)
                            *eax_36 += eax_36.b
                            *eax_36 += eax_36.b
                            *eax_36 += eax_36.b
                            *eax_36 += eax_36.b
                            *eax_36 += eax_36.b
                        else
                            *(esi_7 + 0x67)
                            bool c_17 = unimplemented  {imul ebp, dword [esi+0x67], 0x7473694c}
                            arg4 = *(esi_7 + 0x67) * 0x7473694c + 1
                            
                            if (not(c_17))
                                esi_3 = __outsd(arg2.w, *esi_7, esi_7, eflags)
                                
                                if (not(c_17))
                                    break
                                
                                continue
                        
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        *eax_36 += eax_36.b
                        eax_36[0x76] += eax_36.b
                        void* ecx_2 = ecx_1 + 1
                        *eax_36 += arg2.b
                        *eax_36 += eax_36.b
                        *(eax_36 * 5 + 0x3eb00040) += entry_ebx.b
                        *(esi_7 + edi + 0x3ec00040) += entry_ebx:1.b
                        void* eax_45
                        eax_45:1.b = (&eax_36[2]):1.b + (&eax_36[2]).b
                        *(eax_45 + 0x403f) += entry_ebx:1.b
                        *(eax_45 + 1 + (arg2 << 3)) += entry_ebx:1.b
                        *(eax_45 + 0x3e) += entry_ebx.b
                        char* eax_48 = eax_45 + 3
                        char temp32 = *edi
                        *edi += ecx_2.b
                        void* edi_3 = edi - 1
                        
                        if (edi == 1)
                            void* temp34_1 = edi_3
                            edi_3 -= 1
                            *(esp - 2) = arg2.w
                            esp -= 2
                            
                            if (temp32 + ecx_2.b u>= temp32)
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
                                eax_48.b |= 0x77
                                goto label_4176d3
                            
                            if (temp34_1 != 1)
                                jump(0x4176bf)
                            
                            jump(0x41764d)
                        
                        void* ecx_7
                        
                        while (true)
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
                            *(edi_3 + (esi_7 << 1)) += ecx_2.b
                        label_4176d3:
                            *eax_48 += arg2.b
                            *eax_48 += eax_48.b
                            char temp37_1 = eax_48.b
                            eax_48.b += entry_ebx.b
                            *eax_48 = adc.b(*eax_48, eax_48.b, temp37_1 + entry_ebx.b u< temp37_1)
                            eax_48.b = 0x3e
                            *(esi_7 + edi_3 + 0x3ec00040) += entry_ebx:1.b
                            void* eax_50
                            eax_50:1.b = (&eax_48[2]):1.b + (&eax_48[2]).b
                            *(eax_50 + 0x403f) += entry_ebx:1.b
                            *(esp + edi_3) += entry_ebx.b
                            eax_48 = eax_50 + 2
                            *(edi_3 + (entry_ebx << 2) + 0x41) += entry_ebx:1.b
                            *(ecx_2 + 1) += entry_ebx.b
                            eax_48[0xffffffa3] += eax_48:1.b
                            void* ecx_3 = ecx_2 + 3
                        label_417703:
                            char temp38_1 = eax_48.b
                            eax_48.b += arg2.b
                            bool p_1 = unimplemented  {add al, dl}
                            bool a_1 = unimplemented  {add al, dl}
                            eax_48:1.b = (temp38_1 + arg2.b s< 0 ? 1 : 0) << 7
                                | (temp38_1 == neg.b(arg2.b) ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
                                | (p_1 ? 1 : 0) << 2 | (temp38_1 + arg2.b u< temp38_1 ? 1 : 0)
                            eax_48[0xffffffa0] += (ecx_3 + 1).b
                            ecx_7 = ecx_3 + 2
                            char temp39_1 = *0x73694c54
                            *0x73694c54 += eax_48.b
                            
                            if (temp39_1 != neg.b(eax_48.b))
                                break
                            
                            ecx_3 = ecx_7 - 1
                            esi_7 = __outsb(arg2.w, *esi_7, esi_7, eflags)
                            
                            if (ecx_7 == 1 || temp39_1 + eax_48.b u< temp39_1)
                                break
                            
                            uint8_t temp0_7
                            temp0_7, edi_3 = __insb(edi_3, arg2.w, eflags)
                            *edi_3 = temp0_7
                            esp = *(edi_3 + (ecx_3 << 1) + 0x70) * 0x74617265
                            *(edi_3 + 0x6e)
                            ecx_2 = ecx_3 + 1
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                            *eax_48 += eax_48.b
                        
                        eax_48[0x77] <<= 0x41
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
                        eax_48[0x77] += eax_48:1.b
                        *(eax_48 * 2) += eax_48:1.b
                        *eax_48 += eax_48.b
                        arg7 f- fconvert.t(*eax_48)
                        eax_48[0xbc00403f] += arg2:1.b
                        void* eax_53
                        eax_53.b = (&eax_48[2]).b * 2
                        void* eax_54
                        eax_54:1.b = (eax_53 + 1):1.b + (eax_53 + 1).b
                        *(eax_54 + 0x403f) += entry_ebx:1.b
                        *(esp + edi_3) += entry_ebx.b
                        *(eax_54 + 0xb0041a5) += entry_ebx:1.b
                        *(esp - 4) = esp
                        *(esp - 8) = esp - 4
                        *(esp - 0xc) = 0x64616572
                        int32_t esi_8 = *(entry_ebx + 0x74) * 0x4177b8
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *(eax_54 + 2) += (eax_54 + 2).b
                        *0xc004177 += 0x77
                        char* eax_57
                        eax_57.b = 0x77 + entry_ebx.b
                        *eax_57 = adc.b(*eax_57, eax_57.b, 0x77 + entry_ebx.b u< 0x77)
                        *(esi_8 + edi_3 + 0x3ec00040) += entry_ebx:1.b
                        *0xc00c17f += entry_ebx:1.b
                        *(esp - 0xd + edi_3) += entry_ebx.b
                        *0x54050041 += (ecx_7 + 1):1.b
                        *(entry_ebx + (esi_8 << 1) - 0x75)
                        *0xc008142 += 0x42
                        *0xc008142 += 0x42
                        *0xc008142 += 0x42
                        *0xc008142 += 0x42
                        *0xc008142 += 0x42
                        *0xc008142 += 0x42
                        char temp42 = *0xc008142
                        *0xc008142 += entry_ebx:1.b
                        
                        if (temp42 + entry_ebx:1.b s>= 0)
                            jump(0x4177d3)
                        
                        arg2[1] -= 0x19
                        entry_ebx:1.b *= 2
                        undefined
                    
                    int16_t eax_43
                    eax_43:1.b = (eax_36.w + 1):1.b * 2
                    
                    if ((eax_36.w + 1):1.b != neg.b((eax_36.w + 1):1.b))
                        jump(sub_41759c+0x40)
                    
                    jump(&data_417598:3)
                
            label_4174ab:
                *(arg1 * 2) += arg3.b
                *arg1 += arg1.b
                *(edi + 0x40)
                arg1[0xbc00403e] += arg2:1.b
                void* eax_31
                eax_31.b = (&arg1[1]).b * 2
                void* eax_32
                eax_32:1.b = (eax_31 + 1):1.b + (eax_31 + 1).b
                arg1 = eax_32 + 1
            label_4174c3:
                arg1[0x403e] += entry_ebx:1.b
            
            *(esp + edi) += entry_ebx.b
            arg1[0x3d] += entry_ebx.b
            *arg2 += arg3.b
            arg4 += 1
            esp -= 1
            *(entry_ebx + 0x74)
            esi_3 = *(entry_ebx + 0x74) * 0x6f727245
            bool c_16 = unimplemented  {imul esi, dword [ebx+0x74], 0x6f727245}
            
            if (not(c_16))
                arg1.b = (&arg1[2]).b - 0x75
                ecx_1 = &arg3[1]
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
                *((esi_3 << 1) + 0xc0041) += ecx_1:1.b
                break
            
            arg1.b = sbb.b((&arg1[2]).b, 0x3c, c_16)
        
        goto label_417506
    
    esi_3 = __outsd(arg2.w, *esi_3, esi_3, eflags)
    
    if (not(c_7))
        if (not(c_7))
            arg1.b = sbb.b(arg1.b, 0x3c, c_7)
            goto label_41730f
        
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
    entry_ebx[esi_3 << 1] += arg2.b
else
label_417237:
    *(arg1 * 2) += arg3.b
    *arg1 += arg1.b
    arg1:1.b = 0x71
    arg1[0xbc00403e] += arg2:1.b
    void* eax_6
    eax_6.b = (&arg1[1]).b * 2
    void* eax_7
    eax_7:1.b = (eax_6 + 1):1.b + (eax_6 + 1).b
    *(eax_7 + 0x403f) += entry_ebx:1.b
    *(esp + edi) += entry_ebx.b
    *(eax_7 + 0x3e) += entry_ebx.b
    char temp4_1 = *0x72434645
    *0x72434645 += arg3.b + 1
    bool c_6 = temp4_1 + arg3.b + 1 u< temp4_1
    bool z_1 = temp4_1 == neg.b(arg3.b + 1)
    edi = *esp
    esi_3 = *(esp + 4)
    arg4 = *(esp + 8)
    entry_ebx = *(esp + 0x10)
    arg2 = *(esp + 0x14)
    arg3 = *(esp + 0x18)
    arg1 = *(esp + 0x1c)
    esp = &esp[0x20]
    
    if (not(z_1))
        arg4 += 1
        
        if (c_6)
            goto label_4172de
        
        esi = __outsd(arg2.w, *esi_3, esi_3, eflags)
        
        if (c_6)
            goto label_4171fb
        
        arg2[(esi << 1) + 0x41] = arg2[(esi << 1) + 0x41]
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
    label_417281:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg2[(esi << 1) + 0xc0041] += entry_ebx:1.b
        *arg1 += arg1.b
        arg1:1.b = 0x71
        arg3 = &arg3[1]
        arg1[0xbc00403e] += arg2:1.b
        void* eax_11
        eax_11.b = (&arg1[1]).b * 2
        eax_12 = eax_11 + 1
        goto label_4172a7
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
label_4172de:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp9_1 = *arg1
    *arg1 += arg1.b
    arg1.b = adc.b(arg1.b, 0x73, temp9_1 + arg1.b u< temp9_1)
arg3 = &arg3[1]
*(arg1 * 2) += arg3.b
char temp13_1 = *arg1
*arg1 += arg1.b
bool o_3 = add_overflow(temp13_1, arg1.b)
arg1 = *esp
esp = &esp[4]

if (not(o_3))
    *arg1 += arg1.b
    *arg1 += arg1.b
    goto label_417338

arg1[0xbc00403e] += arg2:1.b
void* eax_15
eax_15.b = (&arg1[1]).b * 2
void* eax_16
eax_16:1.b = (eax_15 + 1):1.b + (eax_15 + 1).b
arg1 = eax_16 + 1
arg1[0x403e] += entry_ebx:1.b
goto label_41730b
