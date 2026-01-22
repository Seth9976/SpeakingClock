// 函数: sub_4a22c1
// 地址: 0x4a22c1
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
char temp1 = arg1[0x74]
arg1[0x74] += arg3:1.b
int32_t eflags
char* eax_1
char* entry_ebx
int32_t* esp
bool d

if (temp1 == neg.b(arg3:1.b))
    entry_ebx:1.b -= arg2.b
label_4a233a:
    arg5 += 1
    arg1:1.b += arg1.b
    arg1[1] += (&arg1[1]):1.b
    arg1 = (&arg1[1] | 0x3c000047) + 1
label_4a2347:
    *(esp + arg6) += entry_ebx.b
    arg1[0x300046d8] += arg2.b
    eax_1 = &arg1[0xde5c0047]
else
    char temp2_1 = *arg6
    char temp0_1
    temp0_1, eflags = __das(arg1.b, eflags)
    arg1.b = temp0_1
    
    if (arg3:1.b u> temp2_1)
        *(arg1 * 3) += entry_ebx:1.b
        goto label_4a2347
    
    if (arg3:1.b u> temp2_1)
        arg1.b += arg3:1.b
        int32_t var_4_1 = arg3 - 1
        d = true
        char* var_8 = arg1
        esp = &var_8
        arg3 = (arg3 - 1) & *arg2
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp3_1 = *arg1
        *arg1 += arg1.b
        *0x2454004a = sbb.b(*0x2454004a, arg1:1.b, temp3_1 + arg1.b u< temp3_1)
        arg2 -= 1
        arg3.b *= 2
        arg1.b &= 0x4a
        *arg1 += arg1.b
        *arg1 += arg1.b
        entry_ebx.b = (&entry_ebx[1]).b + arg2:1.b
        arg1.b &= 0x4a
        *(entry_ebx + arg1) += entry_ebx:1.b
        arg13 += arg3.b
        arg1.b *= 2
        *arg2
        arg1.b &= 0xd5
        arg5 += 1
        *arg1 += arg3:1.b
        arg1.b = *(entry_ebx + arg1)
        goto label_4a233a
    
    uint8_t temp0_2
    temp0_2, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_2
    
    if (arg3:1.b != temp2_1)
        arg1[0x300046d8] += arg2.b
        eax_1 = &arg1[0xde5c0047]
    else
        char* temp4_1 = arg1
        arg1 -= 0x65746561
        
        if (temp4_1 u< 0x65746561)
            goto label_4a2347
        
        arg5 = arg7
        arg4 = arg8
        arg2 = arg10
        arg3 = arg11
        int32_t arg_20
        esp = &arg_20
        int32_t eflags_1
        int32_t cs
        int16_t temp0_3
        temp0_3, eflags_1 = __arpl_memw_gpr16(*(cs + __return_addr + 0x6d), arg4.w)
        *(cs + __return_addr + 0x6d) = temp0_3
        int32_t eflags_2
        char temp0_4
        temp0_4, eflags_2 = __das(arg12.b, eflags_1)
        int32_t* eax
        eax.b = temp0_4
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(*(__return_addr + (arg4 << 1) + 0x63), arg4.w)
        *(__return_addr + (arg4 << 1) + 0x63) = temp0_5
        eax_1 = 0
        *eax_1 += eax_1.b
        arg6 = __return_addr - 1
        
        if (not(add_overflow(__return_addr, 0xffffffff)))
            __outsb(arg2.w, *arg5, arg5, eflags)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *data_4ac2fc
            return sub_47744c()
        
        *0xde5c0046 ^= eax_1.b

*arg6 += arg3.b
eax_1[0xec0046d9] += (arg3 + 1).b
*(arg5 + 1)
entry_ebx.b = 0
char temp5 = eax_1.b
char temp6 = eax_1.b
eax_1.b *= 2
void* esi_5
void* edi_1

if (temp5 != neg.b(temp6))
    if (d)
        *arg6 = arg5[1].b
        edi_1 = arg6 - 1
        esi_5 = arg5 + 1
    else
        *arg6 = arg5[1].b
        edi_1 = &arg6[1]
        esi_5 = arg5 + 3
    
    if (temp5 != neg.b(temp6))
        goto label_4a23fb
    
    goto label_4a23b3

eax_1.b = eax_1.b
*arg2
entry_ebx:1.b += eax_1:1.b
*(arg6 + arg5 + 3 + 0x36d00042) += arg2:1.b
edi_1 = &arg6[1]
eax_1[0x540046d3] = eax_1[0x540046d3]
*arg4 += 1
*(esp - 4) = eax_1
*(esp - 8) = arg3 + 1
*(esp - 0xc) = arg2
*(esp - 0x10) = entry_ebx
*(esp - 0x14) = esp - 0x10
*(esp - 0x18) = arg4
*(esp - 0x1c) = arg5 + 3
*(esp - 0x20) = edi_1
esp -= 0x20
eax_1[0xd4ac45ae] += entry_ebx:1.b
*entry_ebx += arg2:1.b
esi_5 = arg5 + 5
*(esi_5 * 9 + 0x45) = *(esi_5 * 9 + 0x45)
eax_1.b = (&eax_1[0x4ac0046]).b + entry_ebx:1.b
eax_1:1.b += entry_ebx:1.b
*eax_1 += (arg3 + 1):1.b
eax_1.b = __in_al_immb(0x46, eflags)
eax_1[0xffffffa1] += arg2:1.b
*(entry_ebx + esi_5 + 0x75a40047) = *(entry_ebx + esi_5 + 0x75a40047)
arg4 += 5
label_4a23b3:
arg2[arg4 << 1] += arg2:1.b
void* ebp_4 = arg4 + 1
char temp8_1 = *eax_1
*eax_1 += arg2:1.b

if (temp8_1 != neg.b(arg2:1.b) && temp8_1 + arg2:1.b u>= temp8_1)
    eax_1:1.b += entry_ebx.b
else
    *(esi_5 + 0x46) += eax_1.b
    *eax_1 += eax_1.b
    void* eax_8 = __in_oeax_immb(0x46, eflags)
    *(eax_8 + (edi_1 << 1) + 0x45) += (arg3 + 1):1.b
    *(eax_8 - 0x19) += eax_8.b
    eax_1 = *0xf6b00045
    eax_1[0xfffffff7] += arg2:1.b
    arg4 = ebp_4 + 2
    arg2[((esi_5 + 1) << 3) + 0x45] += eax_1:1.b
    *(edi_1 + ((esi_5 + 1) << 3) + 0x45) += arg2.b
    eax_1[0x140046d2] += (arg3 + 1).b
    __out_dx_oeax(arg2.w, eax_1, eflags)
    esi_5 += 2
    *(edi_1 * 5 + 0x2e40045) += eax_1:1.b
    arg2[arg3 + 1] += (arg3 + 1):1.b
    *eax_1 += entry_ebx:1.b
    *(edi_1 + 2) |= eax_1.b
label_4a23fb:
    eax_1[0xffffffc0] += eax_1:1.b
    ebp_4 = arg4 + 2
    eax_1[0xdc00470b] += (arg3 + 1):1.b

eax_1.b |= 0x47
eax_1[0x400045be] += entry_ebx.b
char* eax_9 = eax_1 | 0xf89c0046
*(esp + arg2) += arg2.b
*(esp + arg3 + 1 - 0xaf3ffba) += arg2:1.b
*(esi_5 + arg3 + 1) += eax_9.b
*(esi_5 + 1 + ebp_4 + 2 - 0x3397ffb9) += arg2.b
*eax_9 += entry_ebx.b
undefined
