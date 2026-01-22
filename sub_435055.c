// 函数: sub_435055
// 地址: 0x435055
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
arg1[0x4f09002c] += arg1.b
int32_t eflags
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
int32_t eflags_1
void* entry_ebx
int16_t temp0
temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x64), (arg4 + 1).w)
*(entry_ebx + 0x64) = temp0
arg1.b &= 0x45
*arg1 += arg3.b
*arg1 = &arg1[*arg1]
*arg1 -= 1
*arg1 = &arg1[*arg1]
*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
char temp1 = arg1[0x4f09002d]
arg1[0x4f09002d] += arg1.b
uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags_1)
uint16_t* esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags_1)
void* esp_1 = &__return_addr:2

if (temp1 + arg1.b u>= temp1)
    trap(0xd)

*arg1 += arg1.b
arg1[0x80000000] += arg1.b
*arg1 ^= arg1.b
*(arg6 + 0x6e)
char* ecx = arg3 | *(arg6 + 0x6e)
bool c_1 = false
bool z = arg4 == 0xffffffff
uint16_t* esi_5 = __outsd(arg2.w, *esi_4, esi_4, eflags_1)

if (not(z))
    goto label_435179

uint16_t* ebp_3 = arg4
uint16_t* esi_6 = __outsd(arg2.w, *esi_5, esi_5, eflags_1)

if (arg4 == 0)
    goto label_435170

*ecx = sbb.b(*ecx, arg1:1.b, false)
void* ebp_4 = ebp_3 + 1
arg1.b += arg2.b
*arg1 += arg1.b
arg1, arg2, ecx = arg1()
*arg1 += arg1.b
*ecx += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
char temp8_1 = arg1[0x4f090031]
arg1[0x4f090031] += arg1.b
c_1 = temp8_1 + arg1.b u< temp8_1
uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags_1)
ebp_3 = ebp_4 - 1
bool o_1 = add_overflow(ebp_4, 0xffffffff)
esi_6 = __outsd(arg2.w, *esi_7, esi_7, eflags_1)
uint16_t* esi_8

if (ebp_4 != 1)
label_4351a0:
    uint16_t* esi_10 = __outsd(arg2.w, *esi_6, esi_6, eflags_1)
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x1c), ebp_3.w)
    *(entry_ebx + 0x1c) = temp0_1
    arg1.b &= 0x45
    *arg1 += arg1.b
    *arg1 = &arg1[*arg1]
    *arg1 += 1
    *arg1 = &arg1[*arg1]
    *ecx += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp11_1 = arg1[0x4f0b0035]
    arg1[0x4f0b0035] += arg1.b
    bool c_3 = temp11_1 + arg1.b u< temp11_1
    esi_8 = __outsb(arg2.w, *esi_10, esi_10, eflags_1)
    *(esp_1 - 3) = entry_ebx
    char* esp_5 = esp_1 - 3
    void* eax_3
    
    if (temp11_1 == neg.b(arg1.b))
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b = *0x4353
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(entry_ebx + (arg2 << 1) + 0x43) += entry_ebx.b
        *(esi_8 + 0x70004353) += ecx.b
        arg1.b += *arg1
        arg1.b += ecx:1.b
        *ebp_3 ^= arg1
        *arg2 s>>= 0x42
        *(esi_8 + arg6 + 0x33fc0040) += entry_ebx:1.b
        arg2 += 1
        arg1:1.b += arg1.b
        eax_3 = &arg1[1]
    else
        if (not(c_3))
            if (c_3)
                jump(0x435229)
            
            int80_t x87_r0
            return sub_4351c8(arg1, arg2, ecx, ebp_3, esi_8, arg6, x87_r0) __tailcall
        
        *(esp_5 - 4) = entry_ebx
        entry_ebx += 1
        arg1[2] += arg2:1.b
        *arg1 += arg1.b
        int32_t eax_1
        eax_1, arg2, ecx = 0xc0439776()
        *arg2
        esp_5 = 0xfc00403e
        void* eax_2 = eax_1 ^ *arg2
        int16_t es_1
        arg6, es_1 = __les_gprz_memp(*esi_8)
        eax_3 = eax_2 + 1
    
    *(eax_3 + 0x43b1) += arg2.b
    *(esp_5 + arg6) += entry_ebx.b
    arg1 = eax_3 + 1
    *(arg6 + 0x5300045) += arg1.b
    goto label_435266

uint16_t* var_2 = ebp_3
esp_1 = &var_2

if (o_1)
    entry_ebx:1.b *= 2
    *ecx ^= arg1.b
    entry_ebx:1.b *= 2
    *arg1 = &arg1[*arg1]
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    arg1 ^= *arg1
label_435170:
    arg1.b |= 0x4f
    c_1 = false
    esi_6 = __outsb(arg2.w, *esi_6, esi_6, eflags_1)
else if (o_1)
    *arg1 += entry_ebx:1.b
    *arg1 = &arg1[*arg1]
    undefined

uint16_t* temp10_1 = ebp_3
ebp_3 -= 1
esi_8 = __outsd(arg2.w, *esi_6, esi_6, eflags_1)
bool c_2

if (temp10_1 != 1)
    entry_ebx += 1
    char temp15_1 = *arg1
    *arg1 += ecx.b
    int32_t gsbase
    int16_t temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(gsbase + esi_8 + 0x6f), ecx.w)
    *(gsbase + esi_8 + 0x6f) = temp0_2
    
    if (temp15_1 + ecx.b u< temp15_1)
        *(arg6 + 0x5300045)
    label_435266:
        esi_6 = esi_8 + 1
        esi_6[arg6 * 2].b += entry_ebx:1.b
        ebp_3 += 1
        *arg6 += ecx.b
    else
        *(esp_1 + 4)
        ebp_3 = *(esp_1 + 8)
        *(esp_1 + 0x10)
        *(esp_1 + 0x18)
        *(esp_1 + 0x1c)
        uint8_t temp0_3
        temp0_3, arg6 = __insb(*esp_1, (*(esp_1 + 0x14)).w, eflags_1)
        *arg6 = temp0_3
        *(ebp_3 + 0x63)
        int32_t esp_7 = (esp_1 + 0x20) | *(ebp_3 + 0x63)
        c_2 = false
        *(esp_7 - 4) = ebp_3
        esp_1 = esp_7 - 4
    label_4351fe:
        arg6 = *esp_1
        esi_8 = *(esp_1 + 4)
        ebp_3 = *(esp_1 + 8)
        entry_ebx = *(esp_1 + 0x10)
        arg2 = *(esp_1 + 0x14)
        ecx = *(esp_1 + 0x18)
        arg1 = *(esp_1 + 0x1c)
        
        if (not(c_2))
            goto label_435266
        
        *(ebp_3 + 0x63)
        bool z_5 = ((esp_1 + 0x20) | *(ebp_3 + 0x63)) == 1
        void* esi_11 = __outsd(arg2.w, *esi_8, esi_8, eflags_1)
        
        if (z_5)
            jump(sub_4351c8+0x42)
        
        *esi_11 - *arg6
        esi_6 = esi_11 + 4
        arg6 += 4
    
    ecx = &ecx[1]
    *(arg6 + (entry_ebx << 2) + 0x45) += arg2:1.b
    arg1[(arg6 << 2) + 0x45] += arg2.b
    *arg1 += entry_ebx:1.b
    ebp_3 += 1
    arg1.b += entry_ebx.b
else
    void* temp16_1 = esp_1
    esp_1 -= 1
    z = temp16_1 == 1
label_435179:
    arg6 = *esp_1
    uint16_t* esi_9 = *(esp_1 + 4)
    entry_ebx = *(esp_1 + 0x10)
    arg2 = *(esp_1 + 0x14)
    ecx = *(esp_1 + 0x18)
    arg1 = *(esp_1 + 0x1c)
    
    if (z || c_1)
        *arg1 += arg1.b
        arg1.b += *arg1
        *arg1 += arg1.b
        breakpoint
    
    arg1.b &= 0x26
    ebp_3 = *(esp_1 + 8) + 1
    arg1.b += arg2:1.b
    *arg1 += arg1.b
    *(esp_1 + 0x1c) = arg1
    *arg1 += arg1.b
    *ecx += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp6_1 = arg1[0x4f0b0034]
    arg1[0x4f0b0034] += arg1.b
    c_2 = temp6_1 + arg1.b u< temp6_1
    esi_6 = __outsb(arg2.w, *esi_9, esi_9, eflags_1)
    *(esp_1 + 0x18) = entry_ebx
    esp_1 += 0x18
    
    if (temp6_1 == neg.b(arg1.b))
        goto label_4351fe
    
    if (not(c_2))
        goto label_4351a0
    
    if (not(c_2))
        if (not(c_2))
            jump(0x4351a2)
        
        jump(sub_4351c8+0x4f)
*arg2
int32_t eflags_2
char temp0_4
char temp1_1
temp0_4, temp1_1, eflags_2 = __aaa(arg1.b, arg1:1.b, eflags_1)
arg1.b = temp0_4
arg1:1.b = temp1_1
arg1.b += arg1:1.b
*(arg2 + 1)
arg1[0xff540043] -= 0x45
arg1[5] += arg1:1.b
*(arg1 + 0x1cb8427d) += ecx:1.b
arg1.b += (arg2 + 1).b
arg1.b += (arg2 + 1):1.b
*((esi_6 + 1) * 9 + 0x45) += entry_ebx.b
arg1.b += entry_ebx:1.b
arg1:1.b += entry_ebx:1.b
ecx[0x45] += arg1.b
arg1[0xffffffa1] += (arg2 + 1):1.b
*arg1 += entry_ebx:1.b
*0xb4004233 = 0x45
ecx[(&ebp_3[3] << 2) + 0x43] += entry_ebx.b
*(arg2 + 1 + (&ebp_3[3] << 1)) += (arg2 + 1):1.b
char temp17 = *arg1
*arg1 += (arg2 + 1):1.b

if (temp17 != neg.b((arg2 + 1):1.b) && temp17 + (arg2 + 1):1.b u>= temp17)
    trap(0xd)

char temp20 = arg1[0xf000460e]
arg1[0xf000460e] += arg1.b

if (temp20 + arg1.b s>= 0)
    jump(sub_43521c+0x100)

jump(sub_43521c+0xbb)
