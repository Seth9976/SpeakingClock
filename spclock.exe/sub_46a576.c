// 函数: sub_46a576
// 地址: 0x46a576
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp1 + arg3:1.b u< temp1)
void* entry_ebx
*(arg1 + (entry_ebx << 3) - 0x26d7ffba) += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg6
int32_t eflags
char temp0
char temp1_1
temp0, temp1_1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1_1
*(arg1 + 0x2d) += entry_ebx:1.b
*(arg1 + 0x6c00470e) += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
*(arg1 - 0x1a) += arg1.b
*0x726f4654 += arg1.b
char* edi_2
char temp0_2
temp0_2, edi_2 = __insd(&arg6[2], arg2.w, eflags_1)
*edi_2 = temp0_2
int16_t eax = arg1.w
*edi_2 += eax.b
char* edi_3
char temp0_3
temp0_3, edi_3 = __insd(edi_2, arg2.w, eflags_1)
*edi_3 = temp0_3
*edi_3 = *(arg5 + 4)
void* edi_4 = &edi_3[1]
void* esi_8 = arg5 + 6
int32_t eax_2
eax_2:1.b = sx.d(eax + 0x4654):1.b + arg3:1.b
*0x680046 = eax_2
char* eax_3 = eax_2 + 0x6d726f46

if (eax_2 u>= 0x928d90ba)
    eax_3[(arg3 << 2) + 0x3c0041] += arg2:1.b
    arg2:1.b += entry_ebx:1.b
    *(__return_addr - 4) = 0x1004569
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 = *eax_3
    eax_3[0x41060011] += eax_3.b
    int32_t eflags_2
    char temp0_4
    temp0_4, eflags_2 = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x6f), esi_8.w)
    *(arg3 + (arg4 << 1) + 0x6f) = temp0_4
    void* esi_4 = __outsb(arg2.w, *esi_8, esi_8, eflags_2)
    *0x2680045 <<= 1
    entry_ebx:1.b *= 2
    *0xf7c40047
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 = *eax_3
    eax_3[0x410d0012]
    eax_3[0x410d0012] += eax_3.b
    char temp0_5
    temp0_5, eflags_1 = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x76), (esi_4 + 1).w)
    *(arg3 + (arg4 << 1) + 0x76) = temp0_5
    uint16_t* esi_6 = __outsd(arg2.w, *(esi_4 + 1), esi_4 + 1, eflags_1)
    uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags_1)
    
    if (entry_ebx == 0xffffffff)
        char* ebx
        ebx:1.b = (entry_ebx + 1):1.b * 2
        *(__return_addr - 8) = arg4
        char* eax_8
        eax_8.b = __in_al_immb(0x69, eflags_1)
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *ebx = *ebx
        *eax_8 += eax_8.b
        int16_t ss
        *(__return_addr - 0x4574) = zx.d(ss)
        char temp6 = *edi_4
        *edi_4 += eax_8.b
        void* esi_10 = __outsb(arg2.w, *esi_7, esi_7, eflags_1)
        int32_t eflags_3
        char temp0_8
        temp0_8, eflags_3 = __arpl_memw_gpr16(*(eax_8 + 0x6f), (__return_addr - 8).w + 1)
        *(eax_8 + 0x6f) = temp0_8
        
        if (temp6 + eax_8.b u>= temp6)
            *eax_8 += arg2.b
            eax_8[3] += ebx.b
            ebx:1.b *= 2
            undefined
        
        eax_8:1.b += eax_8.b
        *(esi_10 + 1)
        *(__return_addr - 0x4574)
        *eax_8 += eax_8.b
        *arg2 += ebx.b
        char temp7 = *ebx
        *ebx += arg3.b + 1
        __outsd(arg2.w + 1, *(esi_10 + 1), esi_10 + 1, eflags_3)
        
        if (temp7 + arg3.b + 1 u< temp7)
            jump(sub_46a6ef+0x9a)
        
        jump(sub_46a6ef+0x36)
    
    esi_8 = __outsd(arg2.w, *esi_7, esi_7, eflags_1)
    uint8_t* edi_5
    uint8_t temp0_6
    temp0_6, edi_5 = __insb(edi_4, arg2.w, eflags_1)
    *edi_5 = temp0_6
    *(__return_addr - 8) = arg4
    int32_t ebx_1 = *(__return_addr - 0x451c)
    *eax_3 += eax_3.b
    eax_3, arg2, arg3 = (*(ebx_1 + ((__return_addr - 8) << 1) + 0x45))()
    *arg3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b

*eax_3 = *eax_3
char temp3 = *eax_3
*eax_3 += eax_3.b
char* eax_5 = adc.d(eax_3, *eax_3, temp3 + eax_3.b u< temp3) + 0x67696c41
__outsb(arg2.w, *esi_8, esi_8, eflags_1)
*eax_5 += arg2.b
eax_5[1] += arg3:1.b
*(eax_5 + 1)
undefined
