// 函数: sub_4186d3
// 地址: 0x4186d3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax
int16_t ecx
void* edx
eax, edx, ecx = (*(arg1 + 0x37))(arg1, arg3)
int32_t entry_ebx
eax[0x37] += entry_ebx.b
*(arg5 + arg4 + 0x42) += entry_ebx.b
*(arg5 + arg4 + 0x42) += (edx + 2):1.b
eax[0x78004237] += ecx:1.b
int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aaa(eax.b, eax:1.b, eflags)
eax.b = temp0
eax:1.b = temp1
eax[0x84004237] += eax.b
int32_t eflags_2
char temp0_1
char temp1_1
temp0_1, temp1_1, eflags_2 = __aaa(eax.b, eax:1.b, eflags_1)
eax.b = temp0_1
eax:1.b = temp1_1
eax[0x3c004237] += (edx + 4).b
*(edx + 4)
char temp1_2 = *(edx + 4)
bool c = temp1_2 u< eax.b

if (not(add_overflow(temp1_2, neg.b(eax.b))))
    *(arg5 + arg4 + 0x42) += entry_ebx:1.b
    eax[0x37] += eax:1.b
    *(arg5 + arg4 + 0x42) += ecx.b
    eax[0xa00423a] += entry_ebx.b
    uint16_t* esi = __outsd((edx + 4).w + 2, *arg4, arg4, eflags_2)
    int32_t* edi
    int32_t temp0_2
    temp0_2, edi = __insd(arg5, (edx + 4).w + 2, eflags_2)
    *edi = temp0_2
    
    if (add_overflow(entry_ebx, 1))
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
        trap(0xd)
    
    int32_t esi_1 = __outsb((edx + 4).w + 2, *esi, esi, eflags_2)
    uint16_t* gsbase
    __outsb((edx + 4).w + 2, *(gsbase + esi_1), esi_1, eflags_2)
    
    if (entry_ebx == 0xffffffff)
        char temp5 = *eax
        *eax += eax.b
        *eax = adc.b(*eax, eax.b, temp5 + eax.b u< temp5)
        undefined
    
    jump(&data_418724)

uint8_t* edi_1
uint8_t temp0_3
temp0_3, edi_1 = __insb(arg5, (edx + 4).w, eflags_2)
*edi_1 = temp0_3
void* const edi_2 = eax
int32_t ebx_1 = arg9
int32_t edx_7 = arg10
void** ecx_1 = arg11
int32_t arg_20
char* esp = &arg_20
void* eax_7

if (not(c))
    *(arg7 + edi_2 + 0x3ec00040) += ebx_1:1.b
    eax_7 = &arg12[1]
else
    if (not(c))
        *ecx_1
        *arg12 |= arg12.b
    else
        *((arg12 << 2) + 0x80041) += edx_7:1.b
    
    char temp6_1 = ebx_1:1.b
    *arg12 = sbb.b(*arg12, arg12.b, temp6_1 + ebx_1:1.b u< temp6_1)
    *arg12 += arg12.b
    *arg12 += arg12.b
    *arg12 += arg12.b
    arg12[0x80000000] += arg12.b
    *arg12 += arg12.b
    void* arg_3c
    void* eax_2 = arg_3c
    int32_t temp0_4
    temp0_4, edi_2 = __insd(arg_20, arg16.w, eflags_2)
    *edi_2 = temp0_4
    void arg_40
    arg_3c = &arg_40
    esp = &arg_3c
    *eax_2 = adc.b(*eax_2, eax_2.b, arg12.b u>= 0xb2)
    eax_2.b = eax_2.b
    ebx_1:1.b = arg15:1.b * 2
    eax_2.b = eax_2.b
    ebx_1:1.b *= 2
    *eax_2 += eax_2
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2
    edx_7 = arg16 + *(arg17 + 0x67)
    int32_t eflags_3
    char temp0_5
    char temp1_3
    temp0_5, temp1_3, eflags_3 = __aam_immb(0x87, eax_2.b)
    void* eax_3
    eax_3.b = temp0_5
    eax_3:1.b = temp1_3
    ecx_1 = arg17 + 1
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    char temp9_1 = eax_3:1.b
    eax_3:1.b += edx_7:1.b
    void* temp0_6 = *ecx_1
    *ecx_1 = eax_3
    void* eax_4
    eax_4.b = adc.b(temp0_6.b, 0, temp9_1 + edx_7:1.b u< temp9_1)
    *eax_4 += eax_4.b
    arg6 f- fconvert.t(*eax_4)
    *(eax_4 - 0x43ffbfc1) += edx_7:1.b
    void* eax_6
    eax_6.b = (eax_4 + 2).b * 2
    eax_7 = eax_6 + 1

eax_7:1.b += eax_7.b
*(eax_7 + 0x403f) += ebx_1:1.b
*(esp + edi_2) += ebx_1.b
*(ebx_1 + edi_2 + 0x3ba80042) += ecx_1:1.b
void* eax_9
eax_9.b = (eax_7 + 2).b + (eax_7 + 2):1.b
*(edx_7 + 1)
*(esp + edi_2) += (edx_7 + 1).b
*(esp + edi_2 + 0x42) += (eax_9 + 1).b
*(ebx_1 + edi_2 + 0x42) += (eax_9 + 1):1.b
void* eax_10
eax_10.b = (eax_9 + 1).b + ebx_1:1.b
*(edx_7 + 2)
char temp3 = *eax_10
*eax_10 += (edx_7 + 2).b
*(esp - 5) = esp - 1
void* edi_4 = *(esp - 5)
int32_t esi_5 = *(esp - 1)
int32_t ebp_2 = *(esp + 3)
int16_t ebx_2 = (*(esp + 0xb)).w
int32_t edx_11 = *(esp + 0xf)
char* ecx_3 = *(esp + 0x13)
int32_t eax_11 = *(esp + 0x17)

if (temp3 + (edx_7 + 2).b u< temp3)
    int32_t eflags_4
    int16_t temp0_7
    temp0_7, eflags_4 = __arpl_memw_gpr16(*(ecx_3 + 0x63), eax_11.w)
    *(ecx_3 + 0x63) = temp0_7
    
    if (edx_7 == 0xfffffffd)
        jump(0x418868)
    
    jump("onLin")

*(edi_4 + 0x37ac0042) += eax_11.b
*(eax_11 + edi_4 + 0x3ad80042) += eax_11:1.b
*(edi_4 + esi_5 + 0x37b40042) += ebx_2:1.b
*(edx_11 + 3)
void* eax_12 = *(esp + 0x1b)
eax_12:1.b += eax_12.b
eax_12:1.b += ebx_2:1.b
*(edi_4 + 0x3d000042) += ecx_3:1.b
*(ebp_2 + edi_4 + 0x42) += ecx_3.b
*ecx_3 += eax_12.b
*(esp + 0x1b) = *eax_12
*(esp + 0x1b)
*(esp + 0x1f)
*(esp + 0x23)
*(esp + 0x2b)
*(esp + 0x2f)
*(esp + 0x33)
*(esp + 0x37)

if (eax_12 u>= 0x540c0042)
    jump(sub_4188e0+0x33)

jump(sub_4188e0-0x36)
