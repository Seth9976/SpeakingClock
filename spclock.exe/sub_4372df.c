// 函数: sub_4372df
// 地址: 0x4372df
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1_1 = *arg2
*arg2 += arg1:1.b
int16_t* entry_ebx

if (temp1_1 != neg.b(arg1:1.b))
    arg1[2] += arg1:1.b
    *arg1 += arg1.b
    entry_ebx += 1
    arg1.b *= 2
    *arg2
    void* eax = arg1 ^ *arg2
    int16_t es_1
    arg6, es_1 = __les_gprz_memp(*arg5)
    *(&arg5[arg3] + 0x45) += entry_ebx:1.b
    *(eax + 1) += (eax + 1).b
    *(0xfc00403e + arg6) += entry_ebx.b
    arg1 = eax + 2
    *(arg6 + 0x5300045) += arg1.b
    arg5 += 1
    *(arg5 + (arg6 << 2)) += entry_ebx:1.b
    arg4 += 1
    *arg6 += arg3.b
    arg3 += 1
    *(&arg6[entry_ebx * 2] + 0x45) += arg2:1.b
    arg1[(arg6 << 2) + 0x45] += arg2.b
    *arg1 += entry_ebx:1.b

arg1.b += entry_ebx.b
*arg2
int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags)
arg1.b = temp0
arg1:1.b = temp1
arg1.b += arg1:1.b
arg2[1]
int32_t esp = 0xb4004238
void* ecx = arg3 - 1
int32_t eax_2
void* ebp_7
void* const esi

if (ecx != 0)
    ebp_7 = arg4 + 2
label_43737f:
    arg1[(arg6 << 1) + 0x45] += ecx:1.b
    *arg1 += arg1.b
    eax_2 = *0xf6b00045
    *(eax_2 - 9) += (&arg2[1]):1.b
    arg2[(arg5 << 3) + 0x46] += eax_2:1.b
    *(&arg6[arg5 * 4] + 0x45) += (&arg2[1]).b
    *(eax_2 + 0x780045a9) += (&arg2[1]):1.b
    ecx.b = 0x45
    *(arg6 * 5 - 0x1d9fffbb) += eax_2:1.b
    entry_ebx = &entry_ebx[1]
    *(esp + (arg6 << 2) + 0x45) += entry_ebx:1.b
    arg2[0xc03c0044] += entry_ebx.b
    *(eax_2 - 0x40) += eax_2:1.b
    eax_2:1.b += (&arg2[1]):1.b
    *(ebp_7 + 4) = rol.b(*(ebp_7 + 4), 0xf8)
    esi = 0xbe980045
    ebp_7 += 5
    *(eax_2 + 0xd) += eax_2.b
else
    *(arg6 * 9 + 0x45) += (&arg2[1]).b
    arg1[5] += arg1:1.b
    arg5 += 1
    *(arg1 + 0x1cb8427e) += ecx:1.b
    arg1.b += (&arg2[1]).b
    arg1.b += (&arg2[1]):1.b
    *(arg5 * 9 + 0x45) += entry_ebx.b
    arg1.b += entry_ebx:1.b
    arg1:1.b += entry_ebx:1.b
    *(ecx + 0x45) += arg1.b
    arg1[0xffffffa1] += (&arg2[1]):1.b
    *arg1 += entry_ebx:1.b
    *0xb4004234 = 0x45
    esp = 0xb4004234
    *(arg4 + 7 + (arg5 << 1) + 0x6a340045) += arg1:1.b
    ebp_7 = arg4 + 8
    char temp3_1 = *arg1
    *arg1 += (&arg2[1]):1.b
    
    if (temp3_1 != neg.b((&arg2[1]):1.b) && temp3_1 + (&arg2[1]):1.b u>= temp3_1)
        trap(0xd)
    
    char temp4_1 = arg1[0xf000460e]
    arg1[0xf000460e] += arg1.b
    
    if (temp4_1 + arg1.b s< 0)
        goto label_43737f
    
    eax_2 = sx.d(arg1.w)
    esi = 0xd400045

*(eax_2 + (arg6 << 3) - 0x2ed7ffbb) += entry_ebx.b
*(esp + ecx - 0xaf3ffba) += (&arg2[1]):1.b
*(esi + 1 + ecx) += eax_2.b
*(eax_2 + (arg6 << 3)) += eax_2.b
eax_2:1.b += entry_ebx.b
*entry_ebx
eax_2.b += eax_2:1.b
char temp5 = eax_2:1.b
eax_2:1.b += (&arg2[1]).b
bool cond:2

if (temp5 == neg.b((&arg2[1]).b) || ecx != 1)
    *(esp - 4) = esp
    
    if (arg2 != 0xfffffffe)
        goto label_4374ab
    
    if (arg2 == 0xfffffffe)
        int0_t ldtr
        *arg6 = __sldt_memw(ldtr)
    label_4374ab:
        uint16_t* esi_4 = __outsb((&arg2[2]).w, *(esi + 2), esi + 2, eflags_1)
        int32_t eflags_2
        int16_t temp0_2
        temp0_2, eflags_2 = __arpl_memw_gpr16(*(eax_2 + 0x6f), ebp_7.w + 3)
        *(eax_2 + 0x6f) = temp0_2
        
        if (temp5 + (&arg2[1]).b u>= temp5)
            int16_t gs
            *(arg6 + 0x41) = gs
            *arg6 += (entry_ebx + 1).b
            char* ebx_1
            ebx_1:1.b = (entry_ebx + 1):1.b * 2
            void* edx_1
            edx_1:1.b = (&arg2[2]):1.b + ebx_1:1.b
            
            if ((&arg2[2]):1.b + ebx_1:1.b s< 0)
                jump(0x437505)
            
            jump(0x4374c0)
        
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 = *eax_2
        char temp8 = *(eax_2 + 0x430b0013)
        *(eax_2 + 0x430b0013) += eax_2.b
        bool c_3 = temp8 + eax_2.b u< temp8
        uint16_t* esi_5 = __outsd((&arg2[2]).w, *esi_4, esi_4, eflags_2)
        __outsb((&arg2[2]).w, *esi_5, esi_5, eflags_2)
        
        if (not(c_3))
            *(esp - 4)
            *eax_2 += eax_2.b
            jump(*(eax_2 * 2))
        
        if (c_3)
            jump(0x43759a)
        
        jump("ints")
    
    int32_t esi_3 = __outsb((&arg2[2]).w, *(esi + 2), esi + 2, eflags_1)
    eax_2.b |= 0x73
    arg2[(esi_3 << 1) + 0x370045] += (&arg2[2]).b
    entry_ebx[0x3b].b |= (&arg2[2]).b
    cond:2 = entry_ebx == 0xfffffffd
else
    *eax_2 += (ecx - 1).b
    *0x7b006b0 += eax_2.b
    eax_2.b = 0x11
    cond:2 = esp == 1
    
    if (ecx == 2)
        *(entry_ebx + 1) += (entry_ebx + 1):1.b
        eax_2.b = 0x22
        
        if (ecx == 2)
            jump(0x437450)
        
        jump(0x43740d)

if (cond:2)
    undefined

jump(0x43744a)
