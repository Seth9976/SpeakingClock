// 函数: sub_4947b0
// 地址: 0x4947b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax
eax:1.b = 0x47
int32_t ecx = arg1 - 1
char* entry_ebx
*entry_ebx += eax.b
int16_t cs
uint32_t var_4 = zx.d(cs)
uint32_t* var_8 = &var_4
void arg_47
int32_t ebp_1 = *(&arg_47 + ((arg3 - 1) << 1)) * 0x6f697470
int32_t eflags
uint16_t* esi_1 = __outsb(arg2.w, *(arg4 + 1), arg4 + 1, eflags)
*eax += eax
*eax += eax.b
*arg2 += eax.b
*eax += eax.b
*(eax + 0xb004947) += arg2:1.b
uint16_t* esi_3 = __outsw(arg2.w, *esi_1, esi_1, eflags) + 1
void arg_41
int32_t ebp_2 = *(&arg_41 + (ebp_1 << 1)) * 0x72656e6e
int32_t esp_1 = &var_8 | *(esi_3 + 0x6f)
*(esp_1 - 4) = ecx
char* esp_2 = esp_1 - 4
void* eax_1
int32_t ecx_1

if (esp_1 == 0)
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x44), ebp_2.w)
    *(entry_ebx + 0x44) = temp0_1
    
    if (esp_1 u< 0)
        *eax += eax.b
        *(eax + 0x43) += ecx.b
        goto label_49484e
    
    bool cond:9_1
    
    if (esp_1 u> 0)
        eax |= 0x46444d4c
        cond:9_1 = eax == 0
    else
        esi_3 = __outsw(arg2.w, *esi_3, esi_3, eflags_1)
        arg5 = &arg5[1]
        
        if (esp_1 u< 0)
            goto label_494844
        
        if (esp_1 u>= 0)
            eax_1 = eax + 1
            goto label_494857
        
        arg2 = &arg2[1]
        void* esi_4 = *(ebp_2 * 3 + 0x61) * 0x4d4c0d70
        esp_2 = &esp_2[1]
        esi_3 = esi_4 + 1
        cond:9_1 = esi_4 == 0xffffffff
    
    int32_t ebp_3 = *(esp_2 + (ebp_2 << 1) + 0x4f) * 0x63656a62
    
    if (cond:9_1)
        char* edx_1
        edx_1.b = entry_ebx.b & 0xfc
        int32_t eax_9 = sub_41a6e0(esi_3, edx_1)
        
        if (entry_ebx.b s> 0)
            eax_9 = sub_40401c(esi_3)
        
        *esp_2
        *(esp_2 + 4)
        return eax_9
    
    eax += 1
    *(eax + (ecx << 1)) += ecx.b
    ecx_1 = ecx - 1
    *esi_3 += eax.b
    __andps_xmmxud_memxud(arg6, *(ebp_3 + (ecx_1 << 1) + 0x44))
    *(esp_2 + (ebp_3 << 1) + 0x4f)
    ebp_2 = *(esp_2 + (ebp_3 << 1) + 0x4f) * 0x6f697470
    bool c_1 = unimplemented  {imul ebp, dword [esp+ebp*2+0x4f], 0x6f697470}
    esi_3 = __outsb(arg2.w, *(esi_3 + 1), esi_3 + 1, eflags_1)
    
    if (not(c_1))
        arg5 = &arg5[1]
        goto label_494820
    
    eax.b = 0x47
    goto label_494820

while (true)
    eax -= 1
    entry_ebx = &entry_ebx[1]
label_49484e:
    ecx -= 1
    *(eax - 0x43ffbfc2) += arg2:1.b
    eax_1 = eax + 1
label_494857:
    eax_1.b *= 2
    void* eax_2
    eax_2:1.b = (eax_1 + 1):1.b + (eax_1 + 1).b
    *(eax_2 + 0x403f) += entry_ebx:1.b
    *(esp_2 + arg5) += entry_ebx.b
    *(eax_2 - 0xfffb6b4) += ecx:1.b
    *esi_3 - *arg5
    void* esi_6 = &esi_3[2]
    void* edi = &arg5[4]
    eax.b = (eax_2 + 2).b + entry_ebx:1.b
    *esi_6 - *edi
    void* esi_7 = esi_6 + 4
    arg5 = edi + 4
    eax.b += eax:1.b
    *eax += eax:1.b
    arg2 -= 2
    ecx_1 = ecx
    *esi_7 += ecx_1.b
    *(esp_2 - 4) = esp_2
    esp_2 -= 4
    esi_3 = esi_7 + 1
    ebp_2 = *(esp_2 + ((ebp_2 - 1) << 1) + 0x4f) * 0x63656a62
    
    if (esi_7 != 0xffffffff)
        break
    
label_494820:
    ecx = ecx_1 - 1
    entry_ebx[0x494870c0] += ecx.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *(eax + (ecx << 1) + 0x49) += arg2.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
label_494844:
    *(eax + 0x49) = *(eax + 0x49)
    *eax += eax.b

char* eax_5 = esp_2 - 1
void* ecx_5 = ecx_1 - 1
*arg5 += eax_5.b
*(eax - 4) = zx.d(cs)
*(eax - 8) = eax - 4
void* esp_9 = eax - 8
int32_t ebp_6 = *(esp_9 + ((ebp_2 - 1) << 1) + 0x4f) * 0x63656a62

if (esi_3 == 0xffffffff)
    goto label_494915

entry_ebx[((eax_5 - 1) << 1) + 0x90049] += entry_ebx:1.b
eax_5 = (eax_5 - 1) | 0x46444d4c
*(esp_9 + (ebp_6 << 1) + 0x4f)

if (eax_5 != 0)
    eax_5[0x280048c6] += (ecx_5 - 1).b

*eax_5 += eax_5.b
*(eax_5 + 0x1004949) -= 1
*eax_5 += eax_5.b
*eax_5 += eax_5.b
*eax_5 += eax_5.b
*eax_5 = *eax_5
*eax_5 += eax_5.b
eax_5.b = eax_5.b
*(ecx_5 + 0x6b) |= eax_5
esp_9 = *(arg5 + 0x6e) * 0x746e656d
entry_ebx[0x340042] ^= entry_ebx.b
entry_ebx:1.b *= 2
eax_5.b = 0x49
ecx_5 -= 2
*ecx_5 += 0x49
*eax_5 += 0x49
*eax_5 += 0x49
*eax_5 += 0x49
*eax_5 = *eax_5
char temp7_1 = eax_5[0x42050005]
eax_5[0x42050005] += 0x49
bool c_2 = temp7_1 + 0x49 u< temp7_1

if (c_2)
    *eax_5 += 0x49
    *eax_5 += 0x49
    *eax_5 += 0x49
    *eax_5 = *eax_5
    goto label_49497e

if (not(c_2))
    *(eax_5 - 1) += (eax_5 - 1):1.b
    *(eax_5 - 1) += (eax_5 - 1).b
    jump(*(eax_5 + 0x1004943))

*(esp_9 - 4) = esp_9
*eax_5 = adc.b(*eax_5, 0x49, c_2)
eax_5.b = 0x49
entry_ebx:1.b *= 2
esp_9 = 0x1004949
*eax_5 += 0x49
*eax_5 += 0x49
*eax_5 += 0x49
label_494915:
*eax_5 += eax_5.b
*eax_5 += eax_5.b
*(esi_3 + 1) += eax_5.b
char temp5_1 = *arg5
*arg5 += eax_5.b
bool c_3 = temp5_1 + eax_5.b u< temp5_1

if (not(c_3))
    goto label_494987

void* esp_10
bool cond:11_1

if (arg5 == 1)
    *eax_5 += eax_5.b
label_49497e:
    *eax_5 += eax_5.b
    *eax_5 = &eax_5[*eax_5]
    eax_5 = &eax_5[0x6c797453]
label_494987:
    *(esp_9 - 4) = esi_3 + 1
    esp_10 = esp_9 - 4
    
    if (arg2.b != eax_5[0x28])
        eax_5[0x28] = arg2.b
        arg2.b = eax_5[0x20] - 3
        char temp8_1 = arg2.b
        arg2.b -= 2
        
        if (temp8_1 u< 2)
            cond:11_1 = eax_5[0x21] != 0
        label_4949a1:
            
            if (not(cond:11_1))
                void* esi_8
                esi_8.w = 0xfffc
                eax_5 = sub_403e64(eax_5, esi_8, nop)
    
    *esp_10
    return eax_5

*(esp_9 - 4) = esp_9
*eax_5 = adc.b(*eax_5, eax_5.b, c_3)
*eax_5 ^= eax_5.b
entry_ebx:1.b *= 2
esp_10 = 0x1004949
*eax_5 += eax_5.b
*ecx_5 += eax_5.b
*eax_5 += eax_5.b
*eax_5 += eax_5.b
*eax_5 += eax_5.b
*(arg5 - 1) += eax_5.b
char temp9_1 = *(arg5 - 1)
*(arg5 - 1) += eax_5.b

if (temp9_1 + eax_5.b u>= temp9_1)
    trap(0xd)

if (arg5 == 2)
    void* temp11_1 = *eax_5 & eax_5
    *eax_5 = temp11_1
    cond:11_1 = temp11_1 != 0
    goto label_4949a1

eax_5[0x49] |= ecx_5.b
*eax_5 += entry_ebx:1.b
*eax_5 += eax_5.b
undefined
