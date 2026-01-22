// 函数: sub_4a28b5
// 地址: 0x4a28b5
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
char temp1 = arg1[0x74]
arg1[0x74] += arg3:1.b
char* entry_ebx
void* __return_addr_1
void* esi_4
void* edi_1

if (temp1 == neg.b(arg3:1.b))
    __return_addr_1 = __return_addr
    *arg5
    arg1.b |= 0xa7
label_4a2932:
    arg3 = &arg3[1]
    arg1[0xec0046d9] += arg3.b
label_4a2939:
    *arg5
label_4a293c:
    entry_ebx.b = 0
label_4a293f:
    char temp3_1 = arg1.b
    char temp4_1 = arg1.b
    arg1.b *= 2
    
    if (temp3_1 == neg.b(temp4_1))
        arg1.b += entry_ebx.b
        *arg2
        entry_ebx:1.b += arg1:1.b
        arg5 = &arg5[1]
        goto label_4a294b
    
    *arg6 = *(arg5 + 1)
    edi_1 = &arg6[1]
    esi_4 = &arg5[1]
    
    if (temp3_1 != neg.b(temp4_1))
        goto label_4a29d3
    
    goto label_4a298b

char temp2_1 = *arg6
int32_t eflags
char temp0_1
temp0_1, eflags = __das(arg1.b, eflags)
arg1.b = temp0_1

if (arg3:1.b u> temp2_1)
    arg1.b = __in_al_dx(arg2.w, eflags)
    goto label_4a2939

if (arg3:1.b u> temp2_1)
    arg3.b -= *arg2
    *arg2 = arg3:1.b
    arg2 -= 1
    *arg1 += arg1.b
label_4a28f9:
    *arg1 += arg1.b
    arg1[0x74004a2a] += arg2:1.b
    void* eax = &arg1[*arg1]
    *(__return_addr_1 + 0x46) += arg3.b
    eax.b *= 2
    *arg2
    eax.b &= 0xd5
    *eax += arg3:1.b
    eax.b = *(entry_ebx + eax)
    eax:1.b += eax.b
    *(eax + 1) += (eax + 1):1.b
    *(__return_addr_1 + arg6) += entry_ebx.b
    *(((eax + 1) | 0x3c000047) + 0x300046d9) += arg2.b
    arg1 = ((eax + 1) | 0x3c000047) - 0x21a3ffb8
    arg5 += 3
    *arg6 += arg3.b
    goto label_4a2932

uint8_t temp0_2
temp0_2, arg6 = __insb(arg6, arg2.w, eflags)
*arg6 = temp0_2

if (arg3:1.b != temp2_1)
    goto label_4a293f

char* temp5_1 = arg1
arg1 -= 0x65746561

if (temp5_1 u>= 0x65746561)
    arg5 = arg8
    arg4 = arg9
    entry_ebx = arg10
    arg2 = arg11
    arg3 = arg12
    arg1 = arg13
    void arg_20
    __return_addr_1 = &arg_20
    int32_t cs
    int16_t temp0_3
    temp0_3, eflags = __arpl_memw_gpr16(*(cs + __return_addr + 0x6d), arg4.w)
    *(cs + __return_addr + 0x6d) = temp0_3
    *arg1 += arg1.b
    arg6 = __return_addr - 1
    
    if (add_overflow(__return_addr, 0xffffffff))
        goto label_4a293c
    
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 -= arg3:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1:1.b += (arg2 - 1).b
    arg3.b -= *(arg2 - 1)
    arg1.b -= 0x2a
    arg2 -= 2
    arg1[0x4a2a] += arg3.b
    goto label_4a28f9

*arg1 += arg3:1.b
*arg5
*(arg4 + 0x45) = *(arg4 + 0x45)
*arg2
arg2 = &arg2[1]
*arg1 += arg1.b
__out_immb_oeax(0x46, arg1, eflags)
label_4a294b:
*(arg6 + arg5 + 0x36d00042) += arg2:1.b
edi_1 = &arg6[1]
arg1[0x540046d3] += entry_ebx.b
*arg4 += 1
*(__return_addr_1 - 4) = arg1
*(__return_addr_1 - 8) = arg3
*(__return_addr_1 - 0xc) = arg2
*(__return_addr_1 - 0x10) = entry_ebx
*(__return_addr_1 - 0x14) = __return_addr_1 - 0x10
*(__return_addr_1 - 0x18) = arg4
*(__return_addr_1 - 0x1c) = arg5
*(__return_addr_1 - 0x20) = edi_1
__return_addr_1 -= 0x20
arg1[0xd4ac45ae] += entry_ebx:1.b
*entry_ebx += arg2:1.b
esi_4 = &arg5[1]
*(esi_4 * 9 + 0x45) += entry_ebx.b
arg1.b = (&arg1[0x4ac0046]).b + entry_ebx:1.b
arg1:1.b += entry_ebx:1.b
*arg1 += arg3:1.b
arg1.b = __in_al_immb(0x46, eflags)
arg1[0xffffffa1] += arg2:1.b
*(entry_ebx + esi_4 + 0x75a40047) += entry_ebx.b
arg4 += 5
label_4a298b:
arg2[arg4 << 1] += arg2:1.b
void* ebp_4 = arg4 + 1
char temp7_1 = *arg1
*arg1 += arg2:1.b

if (temp7_1 != neg.b(arg2:1.b) && temp7_1 + arg2:1.b u>= temp7_1)
    arg1:1.b += entry_ebx.b
else
    *(esi_4 + 0x46) += arg1.b
    *arg1 += arg1.b
    void* eax_5 = __in_oeax_immb(0x46, eflags)
    *(eax_5 + (edi_1 << 1) + 0x45) += arg3:1.b
    *(eax_5 - 0x19) += eax_5.b
    arg1 = *0xf6b00045
    arg1[0xfffffff7] += arg2:1.b
    arg4 = ebp_4 + 2
    arg2[((esi_4 + 1) << 3) + 0x45] += arg1:1.b
    *(edi_1 + ((esi_4 + 1) << 3) + 0x45) += arg2.b
    arg1[0x140046d2] += arg3.b
    __out_dx_oeax(arg2.w, arg1, eflags)
    esi_4 += 2
    *(edi_1 * 5 + 0x2e40045) += arg1:1.b
    *(arg2 + arg3) += arg3:1.b
    *arg1 += entry_ebx:1.b
    *(edi_1 + 2) |= arg1.b
label_4a29d3:
    arg1[0xffffffc0] += arg1:1.b
    ebp_4 = arg4 + 2
    arg1[0xdc00470b] += arg3:1.b

arg1.b |= 0x47
arg1[0x400045be] += entry_ebx.b
char* eax_6 = arg1 | 0xf89c0046
*(__return_addr_1 + arg2) += arg2.b
*(__return_addr_1 + arg3 - 0xaf3ffba) += arg2:1.b
*(esi_4 + arg3) += eax_6.b
*(esi_4 + 1 + ebp_4 + 2 - 0x3397ffb9) += arg2.b
*eax_6 += entry_ebx.b
undefined
