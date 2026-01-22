// 函数: sub_48c7f6
// 地址: 0x48c7f6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax_1 = arg1 - 1
char temp1 = *0x48747367
*0x48747367 += arg3.b
bool c = temp1 + arg3.b u< temp1
bool p = unimplemented  {add byte [0x48747367], cl}
bool z = temp1 == neg.b(arg3.b)
bool o = add_overflow(temp1, arg3.b)
int32_t eflags
uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
char* entry_ebx
void* esp
int32_t* esp_1
void* esp_2
char** esp_4
void** gsbase
int16_t cs
bool c_1
bool s_2
bool o_3

if (c)
    esi = arg8
    arg2 = arg11
    void arg_20
    esp_1 = &arg_20
label_48c86a:
    esi.w = __outsd(arg2.w, *esi, esi.w, eflags)
    __outsb(arg2.w, *esi, esi, eflags)
    esi = esp_1[1]
    arg4 = esp_1[2]
    entry_ebx = esp_1[4]
    arg2 = esp_1[5]
    arg3 = esp_1[6]
    eax_1 = esp_1[7]
    esp_2 = &esp_1[8]
    uint8_t temp0_3
    temp0_3, arg6 = __insb(*esp_1, arg2.w, eflags)
    *arg6 = temp0_3
label_48c86f:
    int32_t temp3_1 = *(arg6 + 0x73)
    esp_4 = adc.d(esp_2, temp3_1, c)
    c_1 = adc.d(esp_2, temp3_1, c) u< esp_2 || (c && adc.d(esp_2, temp3_1, c) == esp_2)
    z = adc.d(esp_2, temp3_1, c) == 0
    o = unimplemented  {adc esp, dword [edi+0x73]}
    
    if (not(z))
        goto label_48c874
    
    bool c_2
    
    if (not(z))
        *(esp_4 - 4) = entry_ebx
        esp = esp_4 - 4
    label_48c8cb:
        
        if (not(z))
            goto label_48c93b
        
        *(arg4 + 0x6e)
        int32_t esp_10 = *(arg4 + 0x6e) * 0x53
        c_2 = unimplemented  {imul esp, dword [ebp+0x6e], 0x53}
        *(esp_10 - 4) = 0x776f6461
        *(esp_10 - 8) = zx.d(cs)
        esp = esp_10 - 8
        
        if (z)
            goto label_48c93d
        
        *(esp - 4) = arg2
        arg6 = *(esp - 4)
        arg4 = *(esp + 4)
        entry_ebx = *(esp + 0xc)
        arg2 = *(esp + 0x10)
        arg3 = *(esp + 0x14)
        eax_1 = *(esp + 0x18)
        esp += 0x1c
        *(entry_ebx + 0x65)
        int32_t esi_6 = *(entry_ebx + 0x65) * 0x61685364
        c = unimplemented  {imul esi, dword [ebx+0x65], 0x61685364}
        TEB* fsbase
        esi = __outsd(arg2.w, *(fsbase + esi_6), esi_6, eflags)
        
        if (not(z) && not(c))
            goto label_48c8f4
        
        if (z)
            jump(0x48c94c)
        
        jump(0x48c8e8)
    
    arg4 -= 1
    esp = esp_4
label_48c931:
    uint8_t* temp14_1 = arg6
    arg6 = &arg6[1]
    s_2 = &temp14_1[1] s< 0
    o_3 = add_overflow(temp14_1, 1)
    
    if (c_1)
        goto label_48c995
    
    bool z_4
    
    if (o_3)
        eax_1 -= 1
        char temp27_1 = *entry_ebx
        *entry_ebx += eax_1.b
        c_1 = temp27_1 + eax_1.b u< temp27_1
    label_48c9a1:
        *(esp + (arg3 << 1) + 0x4d) = adc.d(*(esp + (arg3 << 1) + 0x4d), arg2, c_1)
        bool cond:3_1 = esp == 0xfffffffe
        *(entry_ebx + 0x61)
        esi = *(entry_ebx + 0x61) * 0x64656c62
        bool c_3 = unimplemented  {imul esi, dword [ebx+0x61], 0x64656c62}
        *(esp - 2) = entry_ebx
        esp -= 2
        
        if (cond:3_1)
            if (not(c_3))
                jump(0x48ca9c)
            
            return sub_48ca2c(eax_1, arg2, arg3, arg4, arg6) __tailcall
        
        uint8_t temp0_10
        temp0_10, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_10
        *(gsbase + eax_1) = &eax_1[*(gsbase + eax_1)]
        *eax_1 += eax_1.b
        *entry_ebx += eax_1.b
        *eax_1 += eax_1.b
        char temp34_1 = *(arg3 * 9 + 0x64060048)
        *(arg3 * 9 + 0x64060048) += entry_ebx.b
        z_4 = temp34_1 == neg.b(entry_ebx.b)
        
        if (temp34_1 + entry_ebx.b u>= temp34_1)
            goto label_48ca05
    else
        eax_1 -= 1
    label_48c93b:
        char temp20_1 = *entry_ebx
        *entry_ebx += eax_1.b
        c_2 = temp20_1 + eax_1.b u< temp20_1
    label_48c93d:
        char* temp28_1 = eax_1
        eax_1 = adc.d(temp28_1, 0x444d4c54, c_2)
        c = adc.d(temp28_1, 0x444d4c54, c_2) u< temp28_1
            || (c_2 && adc.d(temp28_1, 0x444d4c54, c_2) == temp28_1)
    label_48c942:
        *(esp - 4) = esp
        *(esp - 8) = 0x44656572
        uint8_t* temp9_1 = arg6
        arg6 -= 1
        
        if (not(c))
            __outsb(arg2.w, *(gsbase + esi), esi, eflags)
            
            if (temp9_1 == 1)
                if (temp9_1 - 1 s>= 0)
                    jump(0x48ca1e)
                
                jump(0x48c9b2)
            
            if (temp9_1 == 1)
                jump(0x48c9ba)
            
            jump(0x48c951)
        
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        void* eax_5 = &eax_1[*eax_1]
        char temp15_1 = *eax_5
        *eax_5 += eax_5.b
        bool p_1 = unimplemented  {add byte [eax], al}
        bool a_1 = unimplemented  {add byte [eax], al}
        bool d
        *(esp - 0xc) = (add_overflow(temp15_1, eax_5.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
            | (temp15_1 + eax_5.b s< 0 ? 1 : 0) << 7 | (temp15_1 == neg.b(eax_5.b) ? 1 : 0) << 6
            | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (temp15_1 + eax_5.b u< temp15_1 ? 1 : 0)
        void* esp_22 = arg4
        arg4 = *esp_22
        esp = esp_22 + 4
        eax_1 = eax_5 - 1
        char temp16_1 = *esi
        *esi += eax_1.b
        z_4 = temp16_1 == neg.b(eax_1.b)
        
        if (temp16_1 + eax_1.b u>= temp16_1)
            goto label_48ca05
    
    if (not(z_4))
        jump(sub_48ca2c+0xe)
    
    return sub_48c9c6(eax_1, arg2, arg3, arg4, esi, arg6) __tailcall

bool s_1
void* esi_3

if (p)
    char* var_4
    void* esp_14
    
    if (not(c))
        var_4 = eax_1
        esp = &var_4
        char* temp4_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        z = temp4_1 == 0xffffffff
        esi = __outsd(arg2.w, *esi, esi, eflags)
        uint8_t temp0_7
        temp0_7, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_7
        esi = __outsd(arg2.w, *esi, esi, eflags)
        
        if (c)
            goto label_48c942
        
        if (z)
            *(arg4 + 0x6e)
            esp_14 = *(arg4 + 0x6e) * 0xe
            c = unimplemented  {imul esp, dword [ebp+0x6e], 0xe}
        label_48c8f5:
            
            if (not(z))
                *(esp_14 - 4) = eax_1
                uint16_t* esi_7 = __outsd(arg2.w, *esi, esi, eflags)
                uint8_t* edi_3
                uint8_t temp0_8
                temp0_8, edi_3 = __insb(arg6, arg2.w, eflags)
                *edi_3 = temp0_8
                __outsd(arg2.w, *esi_7, esi_7, eflags)
                
                if (c)
                    jump(0x48c950)
                
                return sub_48c8fe() __tailcall
            
            *eax_1 += entry_ebx:1.b
            void* esp_18 = arg4
            arg4 = *esp_18
            esp = esp_18 + 4
        
        *(esp + (esi << 1)) += arg3.b
        uint16_t* esi_10 = __outsd(arg2.w, *esi, esi, eflags)
        uint16_t* esi_11 = __outsd(arg2.w + 1, *esi_10, esi_10, eflags)
        
        if (arg2 != 0xffffffff)
            __outsd(arg2.w + 1, *esi_11, esi_11, eflags)
            int32_t* edi_4
            int32_t temp0_9
            temp0_9, edi_4 = __insd(arg6, arg2.w + 1, eflags)
            *edi_4 = temp0_9
            
            if (esp == 1)
                jump(0x48c97b)
            
            jump(0x48c96e)
        
        uint16_t* esi_13 = __outsd(arg2.w + 1, *esi_11, esi_11, eflags)
        __outsb(arg2.w + 1, *esi_13, esi_13, eflags)
        char temp23 = *(gsbase + arg4 + (arg3 << 1) + 0x44) | arg3.b
        *(gsbase + arg4 + (arg3 << 1) + 0x44) = temp23
        
        if (temp23 u< 0)
            jump(&data_48ca44:2)
        
        jump(0x48c9e5)
    
    var_4 = &__return_addr
    esp_4 = &var_4
label_48c874:
    esi = __outsd(arg2.w, *esi, esi, eflags)
    
    if (o)
        *(esp_4 - 4) = entry_ebx
        esp = esp_4 - 4
        goto label_48c8cb
    
    uint8_t** esp_5 = *(arg6 + 0x68) * 0x61694474
    esi.w = __outsd(arg2.w, *esi, esi.w, eflags)
    __outsb(arg2.w, *esi, esi, eflags)
    esi = esp_5[1]
    arg4 = esp_5[2]
    entry_ebx = esp_5[4]
    arg2 = esp_5[5]
    arg3 = esp_5[6]
    eax_1 = esp_5[7]
    esp = &esp_5[8]
    uint8_t* edi_2
    uint8_t temp0_5
    temp0_5, edi_2 = __insb(*esp_5, arg2.w, eflags)
    *edi_2 = temp0_5
    *(arg4 + (arg3 << 1) + 0x44)
    *(arg4 + (arg3 << 1) + 0x44) |= arg3.b
    c = false
    arg6 = &edi_2[1]
    z = edi_2 == 0xffffffff
    
    if (add_overflow(edi_2, 1))
    label_48c8f4:
        *(esp - 4) = zx.d(cs)
        esp_14 = esp - 4
        goto label_48c8f5
    
    unimplemented  {enter 0x48, 0x3}
    __andps_xmmxud_memxud(arg7, *(arg4 + (arg3 << 1) + 0x44))
    *(esp - 4) = esp
    *(esp - 8) = 0x44656572
    *(esp - 0xc) = entry_ebx
    esp -= 0xc
    
    if (not(z))
        uint8_t temp0_6
        temp0_6, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_6
        *(gsbase + eax_1) = &eax_1[*(gsbase + eax_1)]
        *eax_1 += eax_1.b
        *arg2 += arg3.b
        *eax_1 += eax_1.b
        eax_1[(arg3 << 3) + 0x74060048] += arg3.b
        esi_3 = esi - 1
        goto label_48c8b2
    
    void* temp30_1 = arg4
    arg4 += 1
    s_1 = temp30_1 + 1 s< 0
else
    esi = __outsb(arg2.w, *esi, esi, eflags)
    
    if (not(z))
        uint8_t temp0_1
        temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_1
        esp = &__return_addr | *(arg6 + 0x73)
        bool z_1 = (&__return_addr | *(arg6 + 0x73)) == 0
        
        if (not(z_1))
            *(entry_ebx + 0x61)
            esp_1 = *(entry_ebx + 0x61) * 0x7367096c
            c = unimplemented  {imul esp, dword [ebx+0x61], 0x7367096c}
            bool o_1 = unimplemented  {imul esp, dword [ebx+0x61], 0x7367096c}
            
            if (z_1)
                goto label_48c86a
            
            if (not(o_1))
                jump(0x48c88e)
            
            jump(0x48c819)
        
        esi = __outsd(arg2.w, *esi, esi, eflags)
        
        if (not(z_1))
            goto label_48c868
    else if (not(z))
    label_48c868:
        *(arg3 + 0x67)
        esp_2 = *(arg3 + 0x67) * 0x6c616e6f
        c = unimplemented  {imul esp, dword [ecx+0x67], 0x6c616e6f}
        goto label_48c86f
    
    eax_1 -= 1
    char temp7_1 = *esi
    *esi += eax_1.b
    
    if (temp7_1 != neg.b(eax_1.b))
        esi_3 = esi - 1
    label_48c8b2:
        uint16_t* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags)
        uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
        char temp19_1 = *(gsbase + esp + 0x53)
        *(gsbase + esp + 0x53) |= arg2:1.b
        c_1 = false
        bool z_2 = (temp19_1 | arg2:1.b) == 0
        
        if (not(z_2))
            arg4 += 1
            esi = __outsb(arg2.w, *esi_5, esi_5, eflags)
            *(esp - 4) = 0x444d4c08
            esp -= 4
            goto label_48c931
        
        *(arg4 + 0x6e)
        
        if (z_2)
            jump(sub_48c8fe+0x27)
        
        jump(0x48c8c1)
    
    int32_t temp10_1 = *(gsbase + esp + 0x45)
    *(gsbase + esp + 0x45) |= esi
    s_1 = (temp10_1 | esi) s< 0

if (not(s_1))
    jump(sub_48c8fe+0x20)

*(arg4 + (arg3 << 1) + 0x44)
*(arg4 + (arg3 << 1) + 0x44) |= arg3.b
c_1 = false
uint8_t* temp26_1 = arg6
arg6 = &arg6[1]
s_2 = &temp26_1[1] s< 0
o_3 = add_overflow(temp26_1, 1)
label_48c995:

if (c_1)
    if (s_2)
        eax_1[0xae0048ca] += eax_1:1.b
        undefined
    
    uint8_t* edi_6
    uint8_t temp0_11
    temp0_11, edi_6 = __insb(arg6, arg2.w, eflags)
    *edi_6 = temp0_11
    __outsd(arg2.w, *(esi + 1), esi + 1, eflags)
    
    if (c_1)
        trap(0xd)
    
    *esp
    *(esp + 4)
    *(esp + 8)
    *(esp + 0x10)
    *(esp + 0x14)
    *(esp + 0x18)
    *(esp + 0x1c)
    
    if (esi == 0xffffffff)
        jump(0x48ca03)
    
    jump(0x48ca02)

if (not(o_3))
    eax_1.b = *0x30048c9
    goto label_48c9a1

*eax_1 = &eax_1[*eax_1]
*eax_1 += eax_1.b
label_48ca05:
*(eax_1 * 2) += eax_1.b
char temp22 = *eax_1
*eax_1 += eax_1.b
void* eax_8
int32_t ecx_4
int16_t edx_4
eax_8, edx_4, ecx_4 = 0xa4912d8()

if (temp22 + eax_1.b u< temp22)
    jump(0x48ca11)

*(eax_8 + 1) += (eax_8 + 1).b
*(esp + arg6) += entry_ebx.b
void* eax_11
eax_11.b = (eax_8 + 2).b + ecx_4:1.b
int32_t eflags_1
int32_t eip
eip, eflags_1 = __into(eflags)
void* eax_12
eax_12.b = (eax_11 - 1).b + edx_4:1.b
*esi - *arg6
*eax_12 += eax_12:1.b
trap(0x48)
