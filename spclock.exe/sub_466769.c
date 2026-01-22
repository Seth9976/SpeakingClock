// 函数: sub_466769
// 地址: 0x466769
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint8_t* edi
uint8_t temp0_8
temp0_8, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0_8
int32_t* gsbase
*(gsbase + arg1) = &arg1[*(gsbase + arg1)]
*arg1 += arg1.b
char* entry_ebx
*entry_ebx += arg1.b
*arg1 += arg1.b
arg1[0x67] += entry_ebx.b
uint16_t* esi = arg5 + 1
uint8_t temp1 = *edi
*edi += arg1.b

if (temp1 + arg1.b u>= temp1)
    *arg1 += arg1.b
    char temp2_1 = edi[0x69070046]
    edi[0x69070046] += arg3:1.b
    
    if (temp2_1 != neg.b(arg3:1.b))
        int16_t* edi_4
        int16_t temp0_4
        temp0_4, edi_4 = __insd(edi, arg2.w, eflags)
        *edi_4 = temp0_4
        uint16_t edx_2 = arg8.w
        int32_t arg_18
        int32_t ecx_1 = arg_18
        int16_t es
        arg9 = zx.d(es)
        int16_t* edi_6
        int16_t temp0_5
        temp0_5, edi_6 = __insd(__return_addr, edx_2, eflags)
        *edi_6 = temp0_5
        *arg7 += ecx_1
        arg8 = &arg_18:3
        int16_t* edi_7
        int16_t temp0_6
        temp0_6, edi_7 = __insd(edi_6, edx_2, eflags)
        *edi_7 = temp0_6
        uint16_t* esi_4 = arg_18
        __outsb(arg13, *esi_4, esi_4, eflags)
        
        if (arg14 - 1 s< 0)
            undefined
        
        jump(0x4667f2)
else
    uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x73), esi_1.w)
    *(arg4 + 0x73) = temp0
    arg1:1.b |= entry_ebx[(esi_1 << 1) + 0x53]
    uint8_t temp0_1
    temp0_1, edi = __insb(edi, arg2.w, eflags_1)
    *edi = temp0_1
    int16_t temp0_2
    temp0_2, eflags = __arpl_memw_gpr16(*(gsbase + arg4 + 0x64), esi_1.w)
    *(gsbase + arg4 + 0x64) = temp0_2
    char temp3_1 = entry_ebx[(esi_1 << 1) + 0x4e] | arg1:1.b
    entry_ebx[(esi_1 << 1) + 0x4e] = temp3_1
    esi = __outsd(arg2.w, *esi_1, esi_1, eflags)
    
    if (temp3_1 u>= 0)
        uint8_t* edi_2
        uint8_t temp0_3
        temp0_3, edi_2 = __insb(__return_addr, arg8.w, eflags)
        *edi_2 = temp0_3
        __outsb(arg15:1.w, *arg11, arg11, eflags)
        
        if ((arg9 | 0x72547364) u>= 0)
            jump(0x46680d)
        
        jump(0x46679d)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[(arg4 << 1) + 0x46] += arg3:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b

*arg1 += arg1.b
int16_t gs
*(arg1 + 0x46) = gs
arg1[(arg4 << 1) + 0x680046] += arg2.b
*arg1 += arg1.b
*(esi + 0x3ac00041) -= arg1.b
*(esi + edi + 0x33fc0040) += entry_ebx:1.b
arg1:1.b += arg1.b
arg1[0x403f] += entry_ebx:1.b
*(&__return_addr + edi) += entry_ebx.b
*(arg3 + (arg4 << 1) + 0x79040046) += (arg2 + 2):1.b
char temp4 = arg1[0x4000467e]
arg1[0x4000467e] += (arg2 + 2).b

if (temp4 + (arg2 + 2).b s< 0)
    if (temp4 == neg.b((arg2 + 2).b))
        jump(sub_4668f4+0x16)
    
    jump("mImageLis")

*(edi + esi + 1 + 0x36640042) += entry_ebx.b
*(edi + esi + 1 + 0x38a40042) += arg3:1.b
void* eax_5
eax_5.b = (&arg1[2]).b + entry_ebx.b
*(arg2 + 4)
int32_t eflags_2
char temp0_7
char temp1_1
temp0_7, temp1_1, eflags_2 = __aaa(eax_5.b, eax_5:1.b, eflags)
eax_5.b = temp0_7
eax_5:1.b = temp1_1
eax_5.b += eax_5:1.b
eax_5.b = adc.b(eax_5.b, 0x69, eax_5.b u< *(arg2 + 5))
char temp7 = *eax_5
*eax_5 += (arg2 + 5):1.b

if (temp7 == neg.b((arg2 + 5):1.b))
    jump(0x4668c1)

jump(0x46687b)
