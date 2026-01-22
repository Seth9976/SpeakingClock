// 函数: sub_4a1e76
// 地址: 0x4a1e76
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp2 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp2 + arg3:1.b u< temp2)
void* entry_ebx
arg1[(entry_ebx << 3) - 0x26d7ffba] += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg5
void* const __return_addr_1 = __return_addr
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1
arg1[0x2d] += entry_ebx:1.b
arg1[0x6c00470e] += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
arg1[0xffffffe6] += arg1.b
*0x4a1f2400 += arg1.b
arg1[3] += arg1:1.b
*arg1 += arg1.b
*arg1 += arg1.b
char temp3 = arg5[0x4d] | arg3.b
arg5[0x4d] = temp3

if (arg2 != 0xffffffff)
    goto label_4a1ea8

if (arg2 == 0xffffffff)
    if (arg2 == 0xffffffff)
        *(arg2 + 1) = ror.b(*(arg2 + 1), 0x8b)
        *(entry_ebx + 0x41498) += arg3.b
        char temp9_1 = *(entry_ebx + 0x1e883c3)
        *(entry_ebx + 0x1e883c3) += arg3.b
        
        if (temp9_1 + arg3.b u>= temp9_1)
            goto label_4a1f79
        
        *(__return_addr_1 - 4) = 0
        int32_t eax_13 = MessageBeep()
        *__return_addr_1
        return eax_13
    
    __outsd((arg2 + 1).w, *(arg4 + 3), arg4 + 3, eflags_1)
label_4a1ea8:
    
    if (temp3 u>= 0)
        arg1.b = arg1.b
        arg1.b -= 0x6b
        char temp5 = arg1:1.b
        arg1:1.b += (arg2 + 1):1.b
        *(arg1 * 2 - 0x6c) = sbb.b(*(arg1 * 2 - 0x6c), arg1.b, temp5 + (arg2 + 1):1.b u< temp5)
        bool c_6 = unimplemented  {sbb byte [eax+eax-0x6c], al}
        char eax_7 = (sbb.d(arg1, *(arg1 * 2 - 0x24), c_6)).b
        *(entry_ebx + 0x4a1f3cc1) += arg3.b
        char temp7 = arg5[3]
        arg5[3] += eax_7
        bool c_7 = temp7 + eax_7 u< temp7
        __andps_xmmxud_memxud(arg6, *(arg3 + 0x6c))
        void* esi_11 = *(__return_addr_1 + 4)
        *(__return_addr_1 + 8)
        int16_t ebx_5 = (*(__return_addr_1 + 0x10)).w
        int16_t edx_8 = (*(__return_addr_1 + 0x14)).w
        int32_t eax_8 = *(__return_addr_1 + 0x1c)
        void* esp_18 = __return_addr_1 + 0x20
        
        if (c_7)
            *(esp_18 - 4) = 0
            esp_18 -= 4
            eax_8 = sub_405018(*data_4ac3ac)
        else
            void* ecx_6 = *(__return_addr_1 + 0x18) + 1
            uint8_t* edi_13
            uint8_t temp0_6
            temp0_6, edi_13 = __insb(*__return_addr_1, edx_8, eflags_1)
            *edi_13 = temp0_6
            
            if (c_7)
                char temp1_1 = mods.dp.b(eax_8.w, ebx_5:1.b)
                eax_8.b = divs.dp.b(eax_8.w, ebx_5:1.b)
                eax_8:1.b = temp1_1
            else
                __outsd(edx_8, *(esi_11 + 1), esi_11 + 1, eflags_1)
                
                if (not(c_7))
                    char* eax_10 = sbb.d(sx.d(eax_8.w), 0xa5a4004a, c_7)
                    *eax_10 += ecx_6:1.b
                    eax_10:1.b |= *(ecx_6 + 0x6c)
                    *esp_18
                    *(esp_18 + 4)
                    *(esp_18 + 8)
                    *(esp_18 + 0x14)
                    *(esp_18 + 0x18)
                    *(esp_18 + 0x1c)
                    
                    if (eax_10:1.b u>= 0)
                        jump("alert")
                    
                    *(*(esp_18 + 0x10) - 0x1ced172d)
                    undefined
                
                eax_8 = sub_405018(eax_8)
        
        *(esp_18 - 4) = eax_8
        int32_t eax_20 = PlaySoundA()
        *(esp_18 + 8)
        return eax_20
    
    *(arg2 - 0x5e) = ror.d(*(arg2 - 0x5e), arg3.b)
    arg1.b *= 2
    *(entry_ebx + 0x64408b00) += arg3.b
else
    __outsb((arg2 + 1).w, *(arg4 + 3), arg4 + 3, eflags_1)
    TEB* fsbase
    *arg3 += arg1.b + (*(fsbase + arg1)).b
    char temp8_1 = *(arg2 + 1)
    *(arg2 + 1) += arg3.b
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(&arg5[2], (arg2 + 1).w, eflags_1)
    *edi_2 = temp0_2
    *__return_addr_1
    char* esi_3 = *(__return_addr_1 + 4)
    *(__return_addr_1 + 0x10)
    char* edx_1 = *(__return_addr_1 + 0x14)
    *(__return_addr_1 + 0x18)
    int32_t eax_1 = *(__return_addr_1 + 0x1c)
    
    if (temp8_1 + arg3.b u< temp8_1)
        trap(0xd)
    
    *(__return_addr_1 + 0x1c) = __return_addr_1 + 0x20
    *edx_1 += eax_1.b
    *esi_3 += eax_1.b
    *(__return_addr_1 + 0x18) = eax_1
    int32_t edi_4 = *(__return_addr_1 + 0x18)
    uint16_t* esi_4 = *(__return_addr_1 + 0x1c)
    int32_t ebp_1 = *(__return_addr_1 + 0x20)
    int32_t* ebx_1 = *(__return_addr_1 + 0x28)
    int16_t edx_2 = (*(__return_addr_1 + 0x2c)).w
    int32_t eax_2 = *(__return_addr_1 + 0x34)
    char* esi_5 = __outsb(edx_2, *esi_4, esi_4, eflags_1)
    uint8_t* edi_5
    uint8_t temp0_3
    temp0_3, edi_5 = __insb(edi_4, edx_2, eflags_1)
    *edi_5 = temp0_3
    *(ebx_1 + eax_2) ^= ebp_1
    *ebx_1 += eax_2.b
    *esi_5 += eax_2.b
    char* eax_3 = *(__return_addr_1 + 0x53)
    __bound_gprv_mema32(__return_addr_1 + 0x57, *(*(__return_addr_1 + 0x3f) + 0x6c))
    *eax_3 += eax_3.b
    int16_t es
    *(__return_addr_1 + 0x53) = zx.d(es)
    char* edi_6 = *(__return_addr_1 + 0x52)
    char* esi_6 = *(__return_addr_1 + 0x56)
    int32_t ebx_2 = *(__return_addr_1 + 0x62)
    int32_t* edx_3 = *(__return_addr_1 + 0x66)
    char ecx_1 = (*(__return_addr_1 + 0x6a)).b
    int32_t eax_4 = *(__return_addr_1 + 0x6e)
    __bound_gprv_mema32(__return_addr_1 + 0x72, *(*(__return_addr_1 + 0x5a) + 0x6c))
    *edx_3 ^= eax_4
    *esi_6 += edx_3.b
    edi_6[ebx_2 + 0x4a] += eax_4:1.b
    char temp10_1 = *edi_6
    *edi_6 += ecx_1
    uint8_t* edi_7
    uint8_t temp0_4
    temp0_4, edi_7 = __insb(edi_6, edx_3.w, eflags_1)
    *edi_7 = temp0_4
    int32_t edi_8 = *(__return_addr_1 + 0x72)
    uint16_t* esi_7 = *(__return_addr_1 + 0x76)
    void* ebp_4 = *(__return_addr_1 + 0x7a)
    entry_ebx = *(__return_addr_1 + 0x82)
    int16_t edx_4 = (*(__return_addr_1 + 0x86)).w
    char ecx_2 = (*(__return_addr_1 + 0x8a)).b
    arg1 = *(__return_addr_1 + 0x8e)
    
    if (temp10_1 + ecx_1 u< temp10_1)
        return sub_4a1f64() __tailcall
    
    *(__return_addr_1 + 0x8e) = __return_addr_1 + 0x92
    *(ebp_4 + 0x65)
    *(ebp_4 + 0x65)
    bool c_3 = unimplemented  {imul ebp, dword [ebp+0x65], 0x6d695472}
    
    if (c_3)
        *(__return_addr_1 + 0x8a) = __return_addr_1 + 0x8e
        uint8_t* edi_9
        uint8_t temp0_5
        temp0_5, edi_9 = __insb(edi_8, edx_4, eflags_1)
        *edi_9 = temp0_5
        *(__return_addr_1 + 0x8a)
        *(__return_addr_1 + 0x8e)
        *(__return_addr_1 + 0x92)
        *(__return_addr_1 + 0x9a)
        *(__return_addr_1 + 0x9e)
        *(__return_addr_1 + 0xa2)
        *(__return_addr_1 + 0xa6)
        
        if (c_3)
            jump(0x4a1f88)
        
        jump("AlertFo")
    
    arg1:1.b += entry_ebx.b
    *(__return_addr_1 + 0x8e)
    __return_addr_1 += 0x90
    char temp13_1 = esi_7[arg1].b
    esi_7[arg1].b += ecx_2
    __outsd(edx_4 - 1, *esi_7, esi_7, eflags_1)
    
    if (temp13_1 + ecx_2 u>= temp13_1)
        jump(0x4a1f0c)
    
label_4a1f79:
    
    if (arg1 u>= 4)
        if (arg1 == 4)
            jump(sub_4a1f64+0x48)
        
        jump(sub_4a1f64+0x1c)
    
    arg1 = *(*data_4ac000 + 0x64)

int32_t eax_18 = sub_487de4(*(sub_4925ec(arg1) + 0x50))
*__return_addr_1
return eax_18
