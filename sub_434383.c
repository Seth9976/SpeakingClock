// 函数: sub_434383
// 地址: 0x434383
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
*arg1 += arg1.b
char temp1 = *arg1
*arg1 += arg3.b
int32_t eflags
char* gsbase

if (temp1 + arg3.b u>= temp1)
    uint16_t* esi = __outsd(arg2, *arg4, arg4, eflags)
    *(gsbase + arg1) += arg2.b
    arg1[1] += arg2.b
    int16_t entry_ebx
    arg2:1.b += entry_ebx:1.b
    int32_t var_1 = 0xd4fe0000
    arg1[1] += (&arg1[1]).b
    arg1[1] += (&arg1[1]).b
    *arg3 = *arg3
    char temp2 = arg1[1]
    arg1[1] += (&arg1[1]).b
    arg1[1] = sbb.b(arg1[1], (&arg1[1]).b, temp2 + (&arg1[1]).b u< temp2)
    __outsb(arg2, *esi, esi, eflags)
    void* ebp_1 = arg7
    char* eax_1 = arg11
    __bound_gprv_mema32(ebp_1, *(ebp_1 + 0x64))
    *eax_1 += arg10:2.w:1.b
    int16_t ebx
    ebx:1.b = arg8:2.w:1.b * 2
    breakpoint

char* var_1_1 = arg1
int16_t edx_2 = arg9.w
char* arg_1f
int32_t* esp_1 = &arg_1f
char* eax_2
eax_2.b = *__return_addr
void* esi_4 = __return_addr + 1
eax_2.b |= 0x46
eax_2.b += arg10.b
*eax_2 += eax_2.b
*arg10 += 1
*eax_2 += eax_2.b
*eax_2 += eax_2.b
*eax_2 += eax_2.b
*arg10 = *arg10
char temp3 = *eax_2
*eax_2 += eax_2.b
char* eax_3 = sbb.d(eax_2, *eax_2, temp3 + eax_2.b u< temp3)
bool c_3 = unimplemented  {sbb eax, dword [eax]}
char temp6 = eax_3[0x61]
eax_3[0x61] = adc.b(temp6, edx_2.b, c_3)
bool c_4 = adc.b(temp6, edx_2.b, c_3) u< temp6 || (c_3 && adc.b(temp6, edx_2.b, c_3) == temp6)
bool z = adc.b(temp6, edx_2.b, c_3) == 0
char* eax_4
char* edx_3
uint16_t* esi_6

if (c_4)
    *arg10 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *arg10 = *arg10
    *eax_3 += eax_3.b
    char temp7_1 = *arg8
    *arg8 += arg10.b
    c_4 = temp7_1 + arg10.b u< temp7_1
    z = temp7_1 == neg.b(arg10.b)
    int16_t ds
    esi_6 = zx.d(ds)
    edx_3 = arg14
    eax_4 = arg16
    char* arg_37
    esp_1 = &arg_37
label_434495:
    
    if (c_4)
        *eax_4 += eax_4.b
        eax_4[0x80000000] += eax_4.b
        *eax_4 &= eax_4
        int32_t temp10 = *(eax_4 + 0x6f)
        *(eax_4 + 0x6f) |= edx_3
        __outsb(edx_3.w, *(gsbase + esi_6), esi_6, eflags)
        
        if ((temp10 | edx_3) != 0)
            jump(0x434511)
        
        jump(0x434511)
    
    __outsb(edx_3.w, *esi_6, esi_6, eflags)
    
    if (not(z))
        if (z)
            jump(0x434508)
        
        jump(0x43449c)
else
    uint16_t* esi_5 = __outsb(edx_2, *esi_4, esi_4, eflags)
    
    if (not(z))
        esi_6 = arg12
        edx_3 = arg16
        eax_4 = arg17
        void arg_3f
        esp_1 = &arg_3f
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg15 + 0x67), arg13.w)
        *(arg15 + 0x67) = temp0_1
        
        if (c_4)
            goto label_434495
        
        if (not(z))
            jump(0x434496)
        
        jump(0x434428)
    
    *eax_3 += eax_3.b
    char temp8_1 = eax_3[1]
    eax_3[1] += eax_3.b
    bool c_5 = temp8_1 + eax_3.b u< temp8_1
    eax_4 = sbb.d(eax_3, 0x61500b00, c_5)
    bool c_6 = unimplemented  {sbb eax, 0x61500b00}
    
    if (not(c_6))
        __outsb(edx_2, *esi_5, esi_5, eflags)
        
        if (sbb.d(eax_3, 0x61500b00, c_5) == 0)
            jump(0x4344b7)
        
        jump("olor")
    
    *arg10 = *arg10
    *eax_4 += eax_4.b
    *eax_4
    *eax_4 &= eax_4.b
    c_4 = false
int16_t cs
*(esp_1 - 4) = zx.d(cs)
*(esp_1 - 8) = eax_4
*(esp_1 - 8)
esp_1[2]

if (c_4)
    undefined

return sub_4344e2(esp_1[5], esp_1[3], esp_1[4], *esp_1, *(esp_1 - 4)) __tailcall
