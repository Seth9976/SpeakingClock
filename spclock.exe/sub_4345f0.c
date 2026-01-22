// 函数: sub_4345f0
// 地址: 0x4345f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint16_t* esi_12 = __outsd(arg2, *arg5, arg5, eflags)
uint16_t* esi = __outsb(arg2, *esi_12, esi_12, eflags)
arg1.b -= 0x71
*arg1 += arg2.b
*arg1 = &arg1[*arg1]
int32_t* eax = (*arg1)()
*eax += eax
char* eax_1
char* ecx_1
uint16_t edx
void* entry_ebx
eax_1, edx, ecx_1 = (*(arg6 + (entry_ebx << 2) + 0x45))()
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 = *eax_1
eax_1[0x4f070028] += eax_1.b
uint16_t* esi_1 = __outsb(edx, *esi, esi, eflags)
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, edx, eflags)
*edi = temp0
int32_t esp_1 = *(entry_ebx + 0x6c) * 0x4528f8
*ecx_1 &= eax_1.b
void* ebx
ebx:1.b = (entry_ebx + 1):1.b * 2
*ecx_1 &= eax_1.b
ebx:1.b *= 2
*eax_1 = &eax_1[*eax_1]
*eax_1 += eax_1.b
*eax_1 += eax_1.b
eax_1[0x80000000] += eax_1.b
*eax_1 -= eax_1
int16_t cs
*(esp_1 - 4) = zx.d(cs)
int32_t esp_2 = esp_1 - 4
void* edi_1 = edi - 1
uint16_t* esi_2 = __outsb(edx, *esi_1, esi_1, eflags)
uint16_t* esi_3 = __outsd(edx, *esi_2, esi_2, eflags)
uint16_t* esi_4 = __outsb(edx, *esi_3, esi_3, eflags)

if (ebx != 0xffffffff)
    if (ebx + 1 s< 0)
        *0x1e80045 -= eax_1:1.b
        goto label_4346b2
    
    *(esp_2 - 4) = eax_1
    __outsd(edx, *esi_4, esi_4, eflags)
    
    if (not(add_overflow(ebx, 1)))
        jump("p,qA")
    
    *eax_1 = &eax_1[*eax_1]
    undefined

*eax_1 += eax_1.b
char temp2_1 = eax_1[0x4f0a002c]
eax_1[0x4f0a002c] += eax_1.b
uint16_t* esi_6 = __outsb(edx, *esi_4, esi_4, eflags)
int32_t temp3_1 = esp_2
esp_2 += 1
esi_4 = __outsd(edx, *esi_6, esi_6, eflags)
int16_t temp0_1
temp0_1, eflags = __arpl_memw_gpr16(*(ebx + 0x45), arg4.w)
*(ebx + 0x45) = temp0_1
bool c_2

if (temp2_1 + eax_1.b u< temp2_1)
    eax_1.b &= 0x45
    *eax_1 += ecx_1.b
    *eax_1 = &eax_1[*eax_1]
    *eax_1 -= 1
    *eax_1 = &eax_1[*eax_1]
    *ecx_1 += 1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp4_1 = eax_1[0x4f090030]
    eax_1[0x4f090030] += eax_1.b
    c_2 = temp4_1 + eax_1.b u< temp4_1
else
    if (add_overflow(temp3_1, 1))
        if (temp3_1 != 0xffffffff && ecx_1 != 1)
            jump(0x4346d7)
        
        jump(0x4346d7)
    
label_4346b2:
    void* ebx_1
    ebx_1:1.b = (ebx + 1):1.b * 2
    eax_1, edx, ecx_1 = 0x24246ba()
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp5_1 = eax_1[0x4f0a002d]
    eax_1[0x4f0a002d] += eax_1.b
    c_2 = temp5_1 + eax_1.b u< temp5_1
    uint16_t* esi_7 = __outsb(edx, *esi_4, esi_4, eflags)
    int32_t temp6_1 = esp_2
    esp_2 += 1
    esi_4 = __outsd(edx, *esi_7, esi_7, eflags)
    int16_t temp0_2
    temp0_2, eflags = __arpl_memw_gpr16(*(ebx_1 + 0x4f), arg4.w)
    *(ebx_1 + 0x4f) = temp0_2
    
    if (temp6_1 != 0xffffffff && not(c_2))
        if (c_2)
            jump(0x434706)
        
        jump(0x4346d2)
    
    edi_1 -= 1

uint16_t* esi_8 = __outsb(edx, *esi_4, esi_4, eflags)
uint16_t* esi_9 = __outsb(edx, *esi_8, esi_8, eflags)

if (c_2)
    if (edi_1 == 0xffffffff)
        jump(sub_434768+0x8d)
    
    jump("iteInfo")

eax_1.b -= 0x71
eax_1.b += edx:1.b
*eax_1 = &eax_1[*eax_1]
*(esp_2 - 3) = eax_1
*eax_1 = &eax_1[*eax_1]
*(ecx_1 + 1) += 1
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 = *eax_1
eax_1[0x4f070031] += eax_1.b
uint16_t* esi_10 = __outsb(edx, *esi_9, esi_9, eflags)
__outsb(edx, *esi_10, esi_10, eflags)

if (arg4 == 0xfffffffe)
    jump("OnMouseActivate")

jump("r,qA")
