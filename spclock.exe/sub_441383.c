// 函数: sub_441383
// 地址: 0x441383
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg3[arg5 << 1] += arg2:1.b
*arg1
*arg1 += arg3:1.b
bool p = unimplemented  {add byte [eax], ch}
char* entry_ebx

if (not(p))
    *arg2
    *arg2 += arg1.b
    entry_ebx:1.b += arg2.b
    jump(&__return_addr:1)

arg1.b += entry_ebx:1.b
arg1:1.b += entry_ebx:1.b
arg3[0x45] += arg1.b
arg1[0xffffffa1] += arg2:1.b
*arg1 += entry_ebx:1.b
int32_t var_4 = 0x45
uint16_t* var_6
void* esp = &var_6:2
*(arg4 + 4 + (arg5 << 1) + 0x6a340045) += arg1:1.b
char temp2 = *arg1
*arg1 += arg2:1.b
bool c = temp2 + arg2:1.b u< temp2
int32_t eflags
int32_t* ebp_6
bool c_1

if (temp2 != neg.b(arg2:1.b) && not(c))
    int16_t es = var_4.w
    var_6 = zx.d(es)
    int16_t* edi
    int16_t temp0_1
    temp0_1, edi = __insd(arg6, arg2.w, eflags)
    *edi = temp0_1
    arg6 = &var_6
    arg5 = var_6
    entry_ebx = arg8
    arg2 = arg9
    arg3 = arg10
    void arg_16
    esp = &arg_16
    arg1 = adc.d(arg11 + 1, *((arg11 + 1) * 2 - 0x10), c)
    *arg6 += arg3:1.b
    char temp3_1 = *arg1
    *arg1 += arg3.b
    c_1 = temp3_1 + arg3.b u< temp3_1
    ebp_6 = var_4 + 2
    bool c_3
    
    if (var_4 + 2 s< 0)
        arg1.b |= 0x2d
        void arg_17
        esp = &arg_17
        *arg3 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp6_1 = *arg1
        *arg1 += arg1.b
        c_3 = temp6_1 + arg1.b u< temp6_1
    label_44148a:
        char temp10 = *arg1
        *arg1 = adc.b(temp10, arg1.b, c_3)
        *(esp - 4) = zx.d(es)
        uint16_t* gsbase
        uint16_t* esi_2 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
        
        if (entry_ebx != 0xffffffff)
            if (adc.b(temp10, arg1.b, c_3) u< temp10
                    || (c_3 && adc.b(temp10, arg1.b, c_3) == temp10))
                *arg1 += arg1.b
                *arg1 = *arg1
                char temp19 = arg1[0x430b0011]
                arg1[0x430b0011] += arg1.b
                uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags)
                __outsb(arg2.w, *esi_3, esi_3, eflags)
                
                if (temp19 + arg1.b u>= temp19)
                    jump(&data_441524:3)
                
                jump(sub_4413ed+0xc6)
            
            int16_t ds
            *(esp - 8) = zx.d(ds)
            *(arg1 * 2) += arg2:1.b
            undefined
        
        char temp16 = *arg1
        *arg1 += arg3.b
        
        if (temp16 + arg3.b u>= temp16)
            *(esp - 3)
            *arg1 += arg1.b
            jump(*(arg1 * 2))
        
        *esi_2 += arg2.b
        *arg2 += arg2.b
        int32_t esi_5 = __outsb(arg2.w, *esi_2, esi_2, eflags)
        int32_t eflags_2
        int16_t temp0_5
        temp0_5, eflags_2 = __arpl_memw_gpr16(*(arg2 + 0x65), esi_5.w)
        *(arg2 + 0x65) = temp0_5
        int16_t* edi_1
        int16_t temp0_6
        temp0_6, edi_1 = __insd(arg6, arg2.w, eflags_2)
        *edi_1 = temp0_6
        __outsb(arg2.w, *(gsbase + esi_5), esi_5, eflags_2)
        
        if (arg3 == 1)
            jump(sub_4413ed+0x1df)
        
        jump(sub_4413ed+0x17e)
    
    char* temp7_1 = entry_ebx
    entry_ebx = &entry_ebx[1]
    
    if (temp7_1 == 0xffffffff)
    label_44147b:
        arg1 -= 0x10044
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp12_1 = *arg1
        *arg1 += arg1.b
        c_3 = temp12_1 + arg1.b u< temp12_1
        goto label_44148a
    
    uint8_t temp0_2
    temp0_2, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_2
else
    *(arg5 * 3 + 0x79f00045) += arg3:1.b
    arg1[(arg6 << 1) + 0x45] += arg3:1.b
    entry_ebx[(arg3 << 2) - 0x5e0bffbb] += arg1:1.b
    ebp_6 = arg4 + 7
    char temp5_1 = arg1.b
    arg1.b += arg3:1.b
    c_1 = temp5_1 + arg3:1.b u< temp5_1
    
    if (temp5_1 + arg3:1.b s< 0 == add_overflow(temp5_1, arg3:1.b))
        char temp8_1 = arg1:1.b
        char temp9_1 = arg1:1.b
        arg1:1.b *= 2
        
        if (temp8_1 s>= neg.b(temp9_1))
            goto label_441410
        
        *(&var_6:2 + (ebp_6 << 1)) += entry_ebx:1.b
        char temp14 = arg1:1.b
        char temp15 = arg1.b
        arg1:1.b += arg1.b
        
        if (temp14 s>= neg.b(temp15))
            jump(0x441414)
        
        jump(0x4413cf)
    
    if (c_1)
        goto label_44147b

void* eax_3
void* esp_4
int16_t ebp_10

if (not(c_1))
    entry_ebx:1.b *= 2
    *(esp - 4) = ebp_6
    ebp_10 = (esp - 4).w
    esp_4 = esp - 0x456c
    eax_3.b = __in_al_immb(0x69, eflags)
else
label_441410:
    *entry_ebx += entry_ebx.b
    *(esp - 4) = esp
    char* eax_2 = *ebp_6
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 = *eax_2
    *eax_2 += eax_2.b
    void** esp_1 = *(arg6 + 0x6e) * 0x451d68
    arg6 = *esp_1
    arg5 = esp_1[1]
    ebp_10 = (esp_1[2]).w
    entry_ebx = esp_1[4]
    arg2 = esp_1[5]
    arg3 = esp_1[6]
    char* eax_4 = esp_1[7]
    *eax_4 += eax_4.b
    eax_3 = eax_4 - 1
    esp_1[7] = 0x69e40045
    esp_4 = &esp_1[7]

*eax_3 += eax_3.b
*eax_3 += eax_3.b
*entry_ebx = *entry_ebx
*eax_3 += eax_3.b
int16_t cs
*(esp_4 - 4) = zx.d(cs)
char temp17 = *arg6
*arg6 += eax_3.b
__outsb(arg2.w, *arg5, arg5, eflags)
int32_t eflags_1
int16_t temp0_4
temp0_4, eflags_1 = __arpl_memw_gpr16(*(eax_3 + 0x6f), ebp_10 + 1)
*(eax_3 + 0x6f) = temp0_4

if (temp17 + eax_3.b u>= temp17)
    jump(0x44144f)

*eax_3 += eax_3.b
*(arg3 + 1) += 1
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
eax_3:1.b ^= 0xff
undefined
