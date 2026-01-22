// 函数: sub_44a228
// 地址: 0x44a228
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*(arg2 + 0x600044) += arg3:1.b
*arg1 += arg1.b
*(arg3 + 0x3ac00044) -= arg1:1.b
int16_t entry_ebx
*(arg5 + arg6 + 0x33fc0040) += entry_ebx:1.b
arg1:1.b += arg1.b
arg1[0x403f] += entry_ebx:1.b
*(0x44a2 + arg6) += entry_ebx.b
void* eax_1
eax_1.b = (&arg1[2]).b + arg3.b
*(eax_1 * 2 - 0x10)
*arg6 += arg3.b
*eax_1 += (arg3 + 1).b
eax_1.b += *arg4
*arg6 = *arg5
void* edi = &arg6[1]
void* esi = &arg5[1]
eax_1.b += *arg4
eax_1.b = *esi
void* esi_1 = esi + 1
int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aaa(eax_1.b, eax_1:1.b, eflags)
eax_1.b = temp0
eax_1:1.b = temp1
*(eax_1 + edi + 0x3ad80042) += eax_1:1.b
*(edi + esi_1 + 0x37b40042) += entry_ebx:1.b
eax_1.b += eax_1:1.b
eax_1.b = sbb.b(eax_1.b, 0xf7, eax_1.b u< *(arg2 + 6))
eax_1.b += (arg2 + 6):1.b
*arg4 += eax_1
*arg4 |= eax_1.b - 1
*edi = eax_1.b - 1
*(arg3 + 1) += (arg3 + 1).b
*0x449f = 0x44a3
void* edx_6 = *0x44b3
*(edx_6 + 0x9070044) s>>= 0x54
int32_t edi_1 = *0x44bf
uint16_t* esi_2 = *0x44c3
char* ebx = *0x44cf
int32_t edx_7 = *0x44d3
char* ecx_1 = *0x44d7
char* eax_3 = *0x44db
int32_t ebp = *(esi_2 + 0x4d) * 0x70756e65
*0xa1e40044 = eax_3.b
int16_t* esp = 0x44e0
*ebx += ecx_1.b
char temp2 = *0x756e654d
*0x756e654d += eax_3.b

if (temp2 + eax_3.b u< temp2)
    *(0x44e0 + (ebx << 2)) += eax_3.b
    *eax_3 += eax_3:1.b
    *0x44e1
    esp = 0x44e3
    ebp += 1

*eax_3 += edx_7:1.b
int16_t es_2 = *esp
void* esp_1 = &esp[1]
*ecx_1 += eax_3.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 = *eax_3
*eax_3 += eax_3.b
char* eax_5 = &eax_3[*eax_3] | *(ecx_1 + 0x75)
void* esp_2
bool c_3

if (eax_5 == 0)
label_44a367:
    *(esp_1 - 4) = zx.d(es_2)
    *eax_5 += ecx_1.b
    edx_7 += 1
    eax_5 = *(ecx_1 + ((ebp + 1) << 1) + 0x4d) * 0xa865646f
    *(esp_1 - 8) = 0x480046
    esp_1 -= 8
label_44a378:
    ebx:1.b *= 2
    *(esp_1 - 4) = 0x1004502
    esp_2 = esp_1 - 4
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 = *eax_5
    char temp4_1 = eax_5[0x49060007]
    eax_5[0x49060007] += eax_5.b
    c_3 = temp4_1 + eax_5.b u< temp4_1
else
    char* temp3_1 = eax_5
    eax_5 -= 1
    uint16_t* esi_3 = __outsd(edx_7.w, *esi_2, esi_2, eflags_1)
    
    if (temp3_1 == 1)
        goto label_44a367
    
    if (temp3_1 - 1 s>= 0)
        *eax_5 += ecx_1.b
        goto label_44a378
    
    eax_5.b -= 0x64
    esp_2 = esp_1 + 1
    eax_5[edi_1 + 0x45] += eax_5.b
    eax_5[edi_1 + 0x45] += edx_7.b
    *ecx_1 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 = *eax_5
    *eax_5 += eax_5.b
    char temp5_1 = eax_5.b
    eax_5.b = eax_5.b
    bool c_2 = temp5_1 u>= 0
    int32_t temp6_1 = *(ecx_1 + 0x75)
    *(ecx_1 + 0x75) = adc.d(temp6_1, eax_5, c_2)
    c_3 = adc.d(temp6_1, eax_5, c_2) u< temp6_1 || (c_2 && adc.d(temp6_1, eax_5, c_2) == temp6_1)
    
    if (adc.d(temp6_1, eax_5, c_2) != 0)
        int32_t ebp_2 = *(esi_3 + 0x65) * 0x75646552
        int32_t eflags_2
        int16_t temp0_1
        temp0_1, eflags_2 = __arpl_memw_gpr16(*(ecx_1 + (ebp_2 << 1) + 0x6f), esi_3.w)
        *(ecx_1 + (ebp_2 << 1) + 0x6f) = temp0_1
        __outsb(edx_7.w, *esi_3, esi_3, eflags_2)
        *eax_5 += edx_7.b
        *(&eax_5[1] * 2) += ebx.b
        undefined

int32_t* edi_2
int32_t temp0_2
temp0_2, edi_2 = __insd(edi_1, edx_7.w, eflags_1)
*edi_2 = temp0_2
*esp_2
*(esp_2 + 4)
*(esp_2 + 8)
*(esp_2 + 0x10)
*(esp_2 + 0x14)
*(esp_2 + 0x18)
char* eax_7 = *(esp_2 + 0x1c)
*eax_7 = adc.b(*eax_7, eax_7.b, c_3)
eax_7[1] += (&eax_7[1]).b
undefined
