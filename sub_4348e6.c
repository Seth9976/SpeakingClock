// 函数: sub_4348e6
// 地址: 0x4348e6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1.b += *arg1
*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
arg1[0x4f08003c] += arg1.b
int32_t eflags
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
void* var_4 = arg4
uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
void* esp_1 = &var_4:1
__outsd(arg2.w, *esi_1, esi_1, eflags)
int32_t eflags_1
void* entry_ebx
int16_t temp0
temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 4), arg4.w)
*(entry_ebx + 4) = temp0
void* ecx = arg3 - 1
void* ebx = entry_ebx + 1
*ebx += arg1.b
void arg_62
char* edx = arg2 | *(&arg_62 + (arg2 << 1))

if ((arg2 | *(&arg_62 + (arg2 << 1))) s< 0)
    goto label_43497f

arg6 = var_4
void* const __return_addr_1 = __return_addr
arg4 = arg8
ebx = arg9
edx = arg10
ecx = arg11
arg1 = arg12
void arg_1c
esp_1 = &arg_1c
bool c
bool z_2

if (&var_4 s>= 0)
    __outsb(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
label_43497f:
    arg4 += 1
    uint8_t* edi_1
    uint8_t temp0_4
    temp0_4, edi_1 = __insb(arg6, edx.w, eflags_1)
    *edi_1 = temp0_4
    uint8_t temp0_5
    temp0_5, arg6 = __insb(edi_1, edx.w, eflags_1)
    *arg6 = temp0_5
label_434983:
    *(arg1 + 0x73)
    __return_addr_1 = *(arg1 + 0x73) * 0x650e7369
    c = unimplemented  {imul esi, dword [eax+0x73], 0x650e7369}
    bool o_4 = unimplemented  {imul esi, dword [eax+0x73], 0x650e7369}
    
    if (o_4)
        goto label_4349e3
    
    __return_addr_1 = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
    
    do
        if (c)
            goto label_4349f3
        
        void* temp7_1 = arg4
        arg4 += 1
        z_2 = temp7_1 == 0xffffffff
        uint8_t temp0_6
        temp0_6, arg6 = __insb(arg6, edx.w, eflags_1)
        *arg6 = temp0_6
    label_434991:
        uint8_t temp0_7
        temp0_7, arg6 = __insb(arg6, edx.w, eflags_1)
        *arg6 = temp0_7
        *(arg1 + 0x73)
        __return_addr_1 = *(arg1 + 0x73) * 0x53087369
        c = unimplemented  {imul esi, dword [eax+0x73], 0x53087369}
        
        if (z_2)
            goto label_4349ff
        
        void* temp15_1 = ebx
        ebx += 1
        z_2 = temp15_1 == 0xffffffff
    label_43499c:
        
        if (z_2)
            arg1:1.b = 0x37
            goto label_434a12
        
    label_43499e:
        uint8_t temp0_8
        temp0_8, arg6 = __insb(arg6, edx.w, eflags_1)
        *arg6 = temp0_8
    while (not(c))
    
    ecx -= 1
    ebx += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x434a] += ebx:1.b
    goto label_4349b5

if (&var_4:1 == 1)
    *arg1 = &arg1[*arg1]
    *arg1 += arg1.b
    *edx += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    ecx -= 1
    ebx += 1
    char temp5_1 = *0x6f546c74
    *0x6f546c74 += arg1.b
    c = temp5_1 + arg1.b u< temp5_1
    z_2 = temp5_1 == neg.b(arg1.b)
    bool o_2 = add_overflow(temp5_1, arg1.b)
    bool cond:10_1
    
    if (not(o_2))
        if (z_2)
            if (not(o_2))
                *(ebx + 8)
                __return_addr_1 = *(ebx + 8) * 0x43647453
                c = unimplemented  {imul esi, dword [ebx+0x8], 0x43647453}
                goto label_43499c
            
            *edx
            edx = &edx[1]
            *(arg6 + __return_addr_1 + 0x37b40042) += ebx:1.b
            goto label_434a12
        
        void* temp10_1 = ebx
        ebx += 1
        z_2 = temp10_1 == 0xffffffff
        uint16_t* gsbase
        __return_addr_1 = __outsb(edx.w, *(gsbase + __return_addr_1), __return_addr_1, eflags_1)
        
        if (z_2)
            goto label_434991
        
        if (c)
            goto label_434936
        
        if (z_2)
            goto label_43499c
        
        char* temp21_1 = edx
        edx = &edx[1]
        cond:10_1 = temp21_1 == 0xffffffff
        goto label_434931
    
    char arg_5e[0x4]
    char temp6_1 = arg_5e[arg4 << 1] | edx:1.b
    arg_5e[arg4 << 1] = temp6_1
    cond:10_1 = temp6_1 == 0
label_434931:
    __return_addr_1 = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
    
    if (not(cond:10_1))
        __return_addr_1 = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
        int16_t temp0_1
        temp0_1, arg6 = __insd(arg6, edx.w, eflags_1)
        *arg6 = temp0_1
    label_434936:
        *(ebx + 0x74)
        *(ebx + 0x74) |= edx.b
        c = false
        void* temp17_1 = ebx
        ebx += 1
        bool cond:11_1 = temp17_1 == 0xffffffff
        
        while (not(cond:11_1))
            while (true)
                uint8_t* edi
                uint8_t temp0_2
                temp0_2, edi = __insb(arg6, edx.w, eflags_1)
                *edi = temp0_2
                char* esi_3
                
                if (not(c))
                    char temp28_1 = *ebx
                    *ebx += ecx.b
                    c = temp28_1 + ecx.b u< temp28_1
                    arg6 = edi - 1
                    __return_addr_1 = __outsb(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
                    *(esp_1 - 4) = ebx
                    esp_1 -= 4
                    
                    if (edi == 1)
                        if (edi == 1)
                            goto label_43499e
                        
                        void* temp36_1 = ebx
                        ebx += 1
                        cond:11_1 = temp36_1 == 0xffffffff
                        break
                    
                    if (c)
                        esi_3 = *(ebx + 0x50) * 0x7469736f
                        *(arg6 + 0x6e)
                    else
                        esp_1 += 1
                        
                        if (not(c))
                            jump(sub_434801+0xdb)
                        
                        continue
                else
                    esp_1 += 1
                    ecx -= 1
                    ebx += 1
                    char temp30_1 = *ebx
                    *ebx += arg1.b
                    int32_t temp31_1 =
                        adc.d(*(arg4 + (arg1 << 1) + 0x6c), edx, temp30_1 + arg1.b u< temp30_1)
                    *(arg4 + (arg1 << 1) + 0x6c) = temp31_1
                    uint8_t temp0_3
                    temp0_3, arg6 = __insb(edi, edx.w, eflags_1)
                    *arg6 = temp0_3
                    *(arg1 + 0x73)
                    __return_addr_1 = *(arg1 + 0x73) * 0x6f507369
                    bool c_2 = unimplemented  {imul esi, dword [eax+0x73], 0x6f507369}
                    
                    if (not(c_2))
                        edx[0x43]
                    label_4349bf:
                        edx[(ecx << 1) + 0x1a40043] += arg1:1.b
                        *arg1 += arg1.b
                        void* eax = arg1 ^ 0x3ac00045
                        *(__return_addr_1 + arg6 + 0x33fc0040) += ebx:1.b
                        edx = &edx[2]
                        eax:1.b += eax.b
                        arg1 = eax + 1
                        goto label_4349db
                    
                    if (temp31_1 == 0)
                        ebx += 1
                        goto label_4349bf
                    
                    uint16_t* esi_4 = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
                    esi_3 = __outsb(edx.w, *esi_4, esi_4, eflags_1)
                    *arg1 = &arg1[*arg1]
                    *arg1 += arg1.b
                
                *ebx += arg1.b
                *arg1 += arg1.b
                arg1[0x49] += arg1.b
                char temp37 = *esi_3
                *esi_3 += arg1.b
                
                if (add_overflow(temp37, arg1.b))
                    jump(0x4349b6)
                
                jump(sub_434801+0x167)
        
        arg1[0x434a] += ebx:1.b
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
    edx[(ecx << 1) + 0x4aa40043] += arg1.b
    ebx += 1
    *(ecx + arg1 + 0x35f80000) += arg1:1.b
    arg4 += 1
    arg1.b *= 2
    *edx
    esp_1 = 0xfc00403e
    void* eax_1 = arg1 ^ *edx
    int16_t es_1
    arg6, es_1 = __les_gprz_memp(*__return_addr_1)
    arg1 = eax_1 + 1
label_4349db:
    *(__return_addr_1 + (ecx << 2) + 0x45) += edx:1.b
    *arg1 += arg1.b
label_4349e3:
    *(esp_1 + arg6) += ebx.b
    arg1 = &arg1[1]
    arg1[0xf] += ebx.b
    __return_addr_1 += 1
    *(&arg6[ebx * 2] - 0x6e8fffbb) += ecx:1.b
else if (add_overflow(&var_4:1, 0xffffffff))
    goto label_434983

arg4 += 1
label_4349f3:
*arg6 += ecx.b
ecx += 1
*0xa7800043 += edx.b
ebx += 1
label_4349ff:
arg1[0x6a] += ecx:1.b
arg4 += 1
char temp11_1 = arg1.b
char temp12_1 = arg1.b
arg1.b *= 2
void* ebp_2
void* ebp_3
void* ebp_6

if (temp11_1 == neg.b(temp12_1))
    arg1.b += ebx.b
    *edx
    esp_1 = 0xb4004237
    char temp0_9
    char temp1_1
    temp0_9, temp1_1, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags_1)
    arg1.b = temp0_9
    arg1:1.b = temp1_1
label_434a12:
    edx = &edx[1]
    arg1.b += arg1:1.b
    *edx
    *(arg4 - 0x7767ffbd) = ebx.b
    arg1[(ecx << 2) - 0x769bffbb] += edx.b
    ebp_2 = arg4 + 2
    char temp18_1 = arg1[0xd0004568]
    arg1[0xd0004568] += ebx:1.b
    
    if (not(add_overflow(temp18_1, ebx:1.b)))
        goto label_434a76
    
    *(ecx + (__return_addr_1 << 1)) += edx:1.b
    ebp_3 = ebp_2 + 1
    *arg1
    *arg1 += ecx:1.b
    bool p_1 = unimplemented  {add byte [eax], ch}
    
    if (p_1)
        arg1.b += ebx:1.b
        arg1:1.b += ebx:1.b
        *(ecx + 0x45) += arg1.b
        arg1[0xffffffa1] += edx:1.b
        ebp_6 = ebp_3 + 3
        *arg1 += ebx:1.b
        *(esp_1 - 4) = 0x45
        arg1[0x340043a6] += ecx.b
        *(esp_1 - 8) = 0x45
        esp_1 -= 8
        goto label_434a53
    
    int16_t temp0_10 = esp_1
    esp_1 = arg1
    arg1 = temp0_10
    *0x9e200043 = arg1
label_434a83:
    *0xeb01200 += arg1.b
    arg1.b = 6
    arg1.b = 0xc6
    ebp_6 = ebp_3 + 1
    *(esp_1 - 4) = *(arg1 - 0x33ffbc59)
    esp_1 -= 4
    *__return_addr_1 - *arg6
    void* esi_6 = __return_addr_1 + 4
    void* edi_2 = &arg6[2]
    arg1:1.b *= 2
    *esi_6 - *edi_2
    void* esi_7 = esi_6 + 4
    void* edi_3 = edi_2 + 4
    *arg1 += edx:1.b
    *edi_3 = *esi_7
    arg6 = edi_3 + 4
    __return_addr_1 = esi_7 + 4
    ebx += 4
    char temp50_1 = arg1:1.b
    char temp51_1 = arg1:1.b
    arg1:1.b *= 2
    bool p_2 = unimplemented  {add ah, ah}
    bool a_1 = unimplemented  {add ah, ah}
    arg1:1.b = (temp50_1 + temp51_1 s< 0 ? 1 : 0) << 7 | (temp50_1 == neg.b(temp51_1) ? 1 : 0) << 6
        | (a_1 ? 1 : 0) << 4 | (p_2 ? 1 : 0) << 2 | (temp50_1 + temp51_1 u< temp50_1 ? 1 : 0)
    goto label_434aa3

*(__return_addr_1 + 0x6a340043) = arg1:1.b
ebp_6 = arg4 + 1
label_434a53:
char temp19_1 = *arg1
*arg1 += edx:1.b
void* ecx_2
void* ebx_9
void* ebp_9
bool o_6

if (temp19_1 == neg.b(edx:1.b) || temp19_1 + edx:1.b u< temp19_1)
    *(__return_addr_1 * 3 + 0x79f00045) += ecx:1.b
    arg1[(arg6 << 1) + 0x45] += ecx:1.b
    *(ebx + (ecx << 2) - 0x5e0bffbb) += arg1:1.b
    ebp_2 = ebp_6 + 2
    char temp22_1 = arg1.b
    arg1.b += ecx:1.b
    
    if (temp22_1 s< neg.b(ecx:1.b))
        goto label_434ab4
    
    char temp26_1 = arg1:1.b
    char temp27_1 = arg1:1.b
    arg1:1.b *= 2
    
    if (temp26_1 s>= neg.b(temp27_1))
        *esp_1
        esp_1 += 2
        goto label_434ab9
    
    *(esp_1 + (ebp_2 << 1)) += ebx:1.b
label_434a76:
    ebp_3 = ebp_2 + 1
    char temp23_1 = arg1:1.b
    char temp24_1 = arg1.b
    arg1:1.b += arg1.b
    
    if (temp23_1 s< neg.b(temp24_1))
        *(ebx - 0x61dfffbd) += edx.b
        goto label_434a83
    
label_434ac0:
    int16_t* edi_5
    int16_t temp0_12
    temp0_12, edi_5 = __insd(arg6, edx.w, eflags_1)
    *edi_5 = temp0_12
    arg6 = *(esp_1 - 1)
    __return_addr_1 = *(esp_1 + 3)
    void* ebp_8 = *(esp_1 + 7)
    void* ebx_7 = *(esp_1 + 0xf)
    void* edx_2 = *(esp_1 + 0x13)
    void* ecx_1 = *(esp_1 + 0x17)
    *(esp_1 + 0x1b)
    __bound_gprv_mema32(esp_1 + 0x1f, *(ebp_8 + 0x6c))
    char* eax_4
    eax_4.b = __in_al_dx(edx_2.w, eflags_1)
    ecx_2 = ecx_1 - 1
    eax_4.b += edx_2:1.b
    ebp_9 = ebp_8 + 1
    *0x74530800 += ecx_2.b
    ebx_9 = ebx_7 + 2
    
    if (ebx_7 != 0xfffffffe)
        uint8_t* edi_6
        uint8_t temp0_14
        temp0_14, edi_6 = __insb(arg6, edx_2.w, eflags_1)
        *edi_6 = temp0_14
        eax_4[0x434b28] += edx_2.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        breakpoint
    
    char temp0_15
    char temp1_2
    temp0_15, temp1_2, eflags_1 = __aaa(eax_4.b, eax_4:1.b, eflags_1)
    eax_4.b = temp0_15
    eax_4:1.b = temp1_2
    *(arg6 + __return_addr_1 + 0x3ae00042) += (edx_2 + 1):1.b
    edx = edx_2 + 2
    char temp35_1 = eax_4[0x9800439d]
    eax_4[0x9800439d] += ecx_2.b
    o_6 = add_overflow(temp35_1, ecx_2.b)
    *ebp_9 = eax_4.b
    int16_t temp0_17 = esp_1 + 0x1f
    esp_1 = eax_4
    int32_t eax_5 = temp0_17
    *ebp_9 = eax_5.b
    TEB* fsbase
    *(fsbase + ebp_9) = eax_5
    arg1 = 0xd0004568
    goto label_434b69

*(ebp_6 - 0x601bffbd) ^= arg1:1.b
label_434aa3:
*(esp_1 + (edx << 1)) += ecx.b
void* ebx_6 = ebx + 2

if (ebx == 0xfffffffe)
    if (ebx == 0xfffffffe)
        ebp_6 += 1
        *arg1 += arg1.b
        goto label_434b1f
    
    int16_t* edi_4
    int16_t temp0_11
    temp0_11, edi_4 = __insd(arg6, edx.w, eflags_1)
    *edi_4 = temp0_11
    arg6 = *(esp_1 - 1)
    __return_addr_1 = *(esp_1 + 3)
    ebp_2 = *(esp_1 + 7)
    ebx = *(esp_1 + 0xf)
    edx = *(esp_1 + 0x13)
    ecx = *(esp_1 + 0x17)
    *(esp_1 + 0x1b)
    esp_1 += 0x1f
    __bound_gprv_mema32(esp_1, *(ebp_2 + 0x6c))
label_434ab4:
    arg1 = 0x700434a
label_434ab9:
    arg1.b |= 0x54
    ebx_6 = ebx + 1
    
    if (ebx != 0xffffffff)
        *__return_addr_1 - *arg6
        __return_addr_1 += 4
        arg6 = &arg6[2]
        goto label_434b32
    
    if (ebx == 0xffffffff)
        goto label_434b2f
    
    goto label_434ac0

*(arg1 * 3) += ebx_6:1.b
label_434b1f:
*(esp_1 + arg6) += ebx_6.b
arg1 = &arg1[1]
arg1[0xf] += ebx_6.b
__return_addr_1 += 1
*(&arg6[ebx_6 * 2] - 0x6e8fffbb) += ecx:1.b
ebp_2 = ebp_6 + 1
label_434b2f:
*arg6 += ecx.b
label_434b32:
ecx_2 = ecx + 1
*0xa7800043 += edx.b
ebx_9 = ebx_6 + 1
arg1[0x6a] += ecx_2:1.b
char temp39_1 = arg1.b
char temp40_1 = arg1.b
arg1.b *= 2
void* ebp_15

if (temp39_1 != neg.b(temp40_1))
    *(__return_addr_1 + 0x6a340043) = arg1:1.b
    ebp_15 = ebp_2 + 2
    goto label_434b8f

arg1.b += ebx_9.b
*edx
esp_1 = 0xb4004237
char temp0_16
char temp1_3
temp0_16, temp1_3, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags_1)
arg1.b = temp0_16
arg1:1.b = temp1_3
edx = &edx[1]
arg1.b += arg1:1.b
*edx
*(ebp_2 - 0x7767ffbc) = ebx_9.b
arg1[(ecx_2 << 2) - 0x769bffbb] += edx.b
ebp_9 = ebp_2 + 3
char temp43_1 = arg1[0xd0004568]
arg1[0xd0004568] += ebx_9:1.b
o_6 = add_overflow(temp43_1, ebx_9:1.b)
label_434b69:

if (not(o_6))
    goto label_434bb2

*(ecx_2 + (__return_addr_1 << 1)) += edx:1.b
*arg1
*arg1 += ecx_2:1.b
bool p_3 = unimplemented  {add byte [eax], ch}

if (not(p_3))
    int16_t temp0_18 = esp_1
    esp_1 = arg1
    arg1 = temp0_18
    *0x9e200043 = arg1
label_434bbf:
    *__return_addr_1 += arg1.b
    *(esp_1 - 4) = esp_1
    *(esp_1 - 5)
    *(esp_1 - 1)
    *(esp_1 + 0xb)
    *(esp_1 + 0xf)
    *(esp_1 + 0x13)
    *(esp_1 + 0x17)
    __bound_gprv_mema32(esp_1 + 0x1b, *(*(esp_1 + 3) + 0x6c))
    breakpoint

arg1.b += ebx_9:1.b
arg1:1.b += ebx_9:1.b
*(ecx_2 + 0x45) += arg1.b
arg1[0xffffffa1] += edx:1.b
ebp_15 = ebp_9 + 4
*arg1 += ebx_9:1.b
*(esp_1 - 4) = 0x45
arg1[0x340043a6] += ecx_2.b
*(esp_1 - 8) = 0x45
esp_1 -= 8
label_434b8f:
char temp47_1 = *arg1
*arg1 += edx:1.b
int32_t* esp_11
bool c_8

if (temp47_1 != neg.b(edx:1.b) && temp47_1 + edx:1.b u>= temp47_1)
    arg1:1.b = 0x4a
    ebx_9 += 1
    *__return_addr_1 += edx:1.b
    char temp48_1 = *arg1
    *arg1 += ecx_2.b
    *(esp_1 - 4) = ebx_9
    esp_11 = esp_1 - 4
    
    if (temp48_1 == neg.b(ecx_2.b))
        char temp54_1 = *arg6
        *arg6 += arg1.b
        c_8 = temp54_1 + arg1.b u< temp54_1
        goto label_434c48
    
    void* temp55_1 = ebx_9
    ebx_9 += 1
    
    if (temp55_1 != 0xffffffff)
        uint8_t* edi_8
        uint8_t temp0_19
        temp0_19, edi_8 = __insb(arg6, edx.w, eflags_1)
        *edi_8 = temp0_19
        
        if (temp48_1 + ecx_2.b u>= temp48_1)
            jump(0x434c11)
        
        jump(0x434be8)
    
    *(esp_11 - 4) = arg1
    *(esp_11 - 8) = ecx_2
    *(esp_11 - 0xc) = edx
    *(esp_11 - 0x10) = ebx_9
    *(esp_11 - 0x14) = esp_11 - 0x10
    *(esp_11 - 0x18) = ebp_15
    *(esp_11 - 0x1c) = __return_addr_1
    *(esp_11 - 0x20) = arg6
    esp_11 -= 0x20
else
    *(__return_addr_1 * 3 + 0x79f00045) += ecx_2:1.b
    arg1[(arg6 << 1) + 0x45] += ecx_2:1.b
    *(ebx_9 + (ecx_2 << 2) - 0x5e0bffbb) += arg1:1.b
    ebp_9 = ebp_15 + 2
    char temp49_1 = arg1.b
    arg1.b += ecx_2:1.b
    
    if (temp49_1 s< neg.b(ecx_2:1.b))
        arg1, edx, ecx_2 = (*(ebx_9 + (ebp_9 << 1) + 0x45))()
    label_434bf4:
        *ecx_2 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
    else
        char temp56_1 = arg1:1.b
        char temp57_1 = arg1:1.b
        arg1:1.b *= 2
        
        if (temp56_1 s>= neg.b(temp57_1))
            goto label_434bf4
        
        *(esp_1 + (ebp_9 << 1)) += ebx_9:1.b
    label_434bb2:
        ebp_9 += 1
        char temp41_1 = arg1:1.b
        char temp42_1 = arg1.b
        arg1:1.b += arg1.b
        
        if (temp41_1 s< neg.b(temp42_1))
            *(ebx_9 - 0x61dfffbd) += edx.b
            goto label_434bbf
    
    *arg1 = *arg1
    *arg1 += arg1.b
    int32_t* eax_7 = arg1 | 0x6c410500
    bool p_4 = unimplemented  {or eax, 0x6c410500}
    bool a_2 = undefined
    *(arg6 + 0x6e)
    int32_t esp_12 = *(arg6 + 0x6e) * &data_416f18
    bool c_7 = unimplemented  {imul esp, dword [edi+0x6e], 0x416f18}
    bool o_7 = unimplemented  {imul esp, dword [edi+0x6e], 0x416f18}
    bool d
    *(esp_12 - 4) = (o_7 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | ((arg1 | 0x6c410500) s< 0 ? 1 : 0) << 7 | ((arg1 | 0x6c410500) == 0 ? 1 : 0) << 6
        | (a_2 ? 1 : 0) << 4 | (p_4 ? 1 : 0) << 2 | (c_7 ? 1 : 0)
    *eax_7 += eax_7
    *(__return_addr_1 + 0x43) += 1
    *ecx_2 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 = *eax_7
    *eax_7 += eax_7.b
    int16_t cs
    *(esp_12 - 8) = zx.d(cs)
    *ecx_2 += ecx_2.b
    ecx_2 += 1
    uint8_t temp0_20
    temp0_20, arg6 = __insb(arg6, edx.w, eflags_1)
    *arg6 = temp0_20
    int32_t esp_14 = *(arg6 + 0x6e) * 0x746e656d
    *(esp_14 - 4) = 0x6100451d
    *eax_7 += eax_7.b
    arg1 = eax_7 - 1
    *(esp_14 - 8) = 0x69e40045
    esp_11 = esp_14 - 8
    ebp_15 = ebp_9 + 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *ebx_9 = *ebx_9
    char temp46_1 = *arg1
    *arg1 += arg1.b
    c_8 = temp46_1 + arg1.b u< temp46_1
    int0_t ldtr
    *arg6 = __sldt_memw(ldtr)
label_434c48:
    ecx_2 += 1
    __return_addr_1 = __outsb(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
    int16_t temp0_22
    temp0_22, eflags_1 = __arpl_memw_gpr16(*(arg1 + 0x6f), ebp_15.w)
    *(arg1 + 0x6f) = temp0_22
    
    if (c_8)
        char temp52 = arg1:1.b
        char temp53 = arg1.b
        arg1:1.b += arg1.b
        
        if (temp52 + temp53 s>= 0)
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1[0xfffffff4] += arg1.b
            *esp_11
            esp_11[1]
            esp_11[2]
            esp_11[5]
            esp_11[6]
            esp_11[7]
            
            if (esp_11[4] != 0xffffffff)
                jump(sub_434d50+0x41)
            
            jump(0x434d1f)
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp60 = arg1[0x43050013]
        arg1[0x43050013] += arg1.b
        uint16_t* esi_9 = __outsd(edx.w, *__return_addr_1, __return_addr_1, eflags_1)
        uint8_t* edi_10
        uint8_t temp0_23
        temp0_23, edi_10 = __insb(arg6, edx.w, eflags_1)
        *edi_10 = temp0_23
        __outsd(edx.w, *esi_9, esi_9, eflags_1)
        
        if (temp60 + arg1.b u< temp60)
            jump(0x434ce8)
        
        jump(0x434cd8)
    
    *arg1 += edx.b
    arg1 = &arg1[1]
    *(ebp_15 + 0x60ff0001) += ebx_9.b
*arg1 += arg1.b
*ecx_2 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*ecx_2 = *ecx_2
char temp61 = *arg1
*arg1 += arg1.b
*arg1 = adc.b(*arg1, arg1.b, temp61 + arg1.b u< temp61)
char temp62 = *(ecx_2 + 0x75) | arg1.b
*(ecx_2 + 0x75) = temp62

if (temp62 != 0)
    *(esp_11 - 4) = ebx_9
    *(esp_11 - 4)
    *arg1 += arg1.b
    *(esp_11 - 4) = *(arg1 * 2)
    undefined

ebx_9:1.b *= 2
arg1.b = *__return_addr_1
void* esi_11 = __return_addr_1 + 1
*0x10045 = arg1
*arg1 += arg1.b
*arg1 += arg1.b
char temp63 = arg1[0x80000000]
arg1[0x80000000] += arg1.b
arg1.b = adc.b(arg1.b, 0, temp63 + arg1.b u< temp63)
bool cond:12 = (arg1 | *(ebx_9 + 0x6f)) u>= 0
__outsb(edx.w, *esi_11, esi_11, eflags_1)

if (cond:12)
    jump(sub_434d50+0x1b)

jump("raints")
