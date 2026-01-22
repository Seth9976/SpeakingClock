// 函数: sub_45353d
// 地址: 0x45353d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1:1.b += arg2:1.b
arg1.b |= 0x46
*arg1 += arg1:1.b
arg1.b |= 0x46
arg1.b += arg3:1.b
arg1.b += 0x46
*arg1 += arg3.b
int32_t eflags
int32_t eflags_1 = __cli(eflags)
void* ebp = arg4 + 1
char temp1 = arg1[0xc0045f3]
arg1[0xc0045f3] += arg3.b

if (arg3 == 0)
    arg2.b = sbb.b(arg2.b, arg1:1.b, temp1 + arg3.b u< temp1)
    ebp += 1
    *(arg6 * 9) += arg2.b
else
    char temp2_1 = *arg1
    *arg1 += arg2.b
    
    if (arg3 != 0)
        char temp8 = arg1[0x780045e0]
        arg1[0x780045e0] += arg1:1.b
        
        if (temp8 == neg.b(arg1:1.b) || arg3 != 1)
            undefined
        
        jump(0x453561)
    
    arg1.b = adc.b(arg1.b, 0xff, temp2_1 + arg2.b u< temp2_1)

char* entry_ebx
arg1:1.b += entry_ebx:1.b
arg1:1.b += arg1.b
*(ebp + 2)
arg1.b = adc.b(arg1.b, 0xb4, false)
arg1[0xfffffff8] += arg1.b
arg1:1.b += arg3:1.b
*(ebp + 5 + arg3 + 0x46) += arg3.b
entry_ebx[0x45] += entry_ebx:1.b
*entry_ebx += arg3.b
int32_t var_8 = arg6
int32_t* esp = &var_8
void* ebp_6 = *(arg5 + 0x43) * 0x72746e6f
uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags_1)
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, arg2.w, eflags_1)
*edi = temp0
int32_t eflags_2
char temp0_1
char temp1_1
temp0_1, temp1_1, eflags_2 = __aam_immb(0x35, arg1.b)
char* eax
eax.b = temp0_1
eax:1.b = temp1_1
*edi += eax.b
*(edi + (arg2 << 1) + 0x69)
int32_t edx = arg2 | *(edi + (arg2 << 1) + 0x69)
uint16_t* esi_1 = __outsb(edx.w, *esi, esi, eflags_2)
bool p = unimplemented  {inc ebx}
bool a = unimplemented  {inc ebx}
bool z = entry_ebx == 0xffffffff
uint16_t* esi_2 = __outsd(edx.w, *esi_1, esi_1, eflags_2)
uint8_t* esi_3 = __outsb(edx.w, *esi_2, esi_2, eflags_2)
char* ebp_9

if (z)
    eax:1.b =
        (&entry_ebx[1] s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    eax:1.b += (entry_ebx.w + 1):1.b
    int32_t var_c_1 = 0x45
    eax[0x6a] += arg3:1.b
    ebp_9 = ebp_6 + 3
    char temp9_1 = eax.b
    char temp10_1 = eax.b
    eax.b *= 2
    
    if (temp9_1 != neg.b(temp10_1))
        *edi = *esi_3
        
        if (temp9_1 != neg.b(temp10_1))
            jump(sub_45347e+0x26e)
        
        jump(sub_45347e+0x229)
    
    eax.b += (entry_ebx.w + 1).b
    *edx
    esp = 0xb4004237
    int32_t eflags_3
    char temp0_4
    char temp1_2
    temp0_4, temp1_2, eflags_3 = __aaa(eax.b, eax:1.b, eflags_2)
    eax.b = temp0_4
    eax:1.b = temp1_2
else
    uint16_t* esi_4 = __outsd(edx.w, *esi_3, esi_3, eflags_2)
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(edi, edx.w, eflags_2)
    *edi_1 = temp0_2
    eax.b ^= 0x32
    *(&var_8 + ebp_6 + 2) += eax:1.b
    ebp_9 = ebp_6 + 3
    char temp11_1 = *0x6f430800
    *0x6f430800 += arg3.b
    esi_3 = __outsb(edx.w, *esi_4, esi_4, eflags_2)
    
    if (temp11_1 != neg.b(arg3.b))
        __outsd(edx.w, *esi_3, esi_3, eflags_2)
        uint8_t* edi_2
        uint8_t temp0_3
        temp0_3, edi_2 = __insb(edi_1, edx.w, eflags_2)
        *edi_2 = temp0_3
        
        if (temp11_1 + arg3.b u>= temp11_1)
            jump(sub_45347e+0x177)
        
        jump(sub_45347e+0x177)
    
    *(edi_1 + esi_3 + 0x37b40042) += (entry_ebx.w + 1):1.b

eax.b += eax:1.b
*(edx + 1)
int16_t cs
*(esp - 4) = zx.d(cs)
char temp12 = eax[0x94004588]
eax[0x94004588] += (entry_ebx.w + 1).b
*ebp_9 = eax.b
TEB* fsbase
*(fsbase + ebp_9) = eax

if (not(add_overflow(temp12, (entry_ebx.w + 1).b)))
    jump(sub_45347e+0x24e)

jump(sub_45347e+0x209)
