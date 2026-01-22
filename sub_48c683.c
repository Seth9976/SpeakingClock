// 函数: sub_48c683
// 地址: 0x48c683
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg4 - 0x3973ffc0) += arg3
char* entry_ebx
*entry_ebx += (arg1 - 2).b
int32_t* eax_1 = (arg1 - 2) | 0x444d4c54
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg5, arg2, eflags)
*edi = temp0
int32_t* esp = *(edi + 0x6e) * 0x746e656d
*eax_1 += eax_1
*eax_1 += eax_1.b
*eax_1 += arg3 + 1
*eax_1 += eax_1.b
char temp1 = *(eax_1 + 0x90048c6)
*(eax_1 + 0x90048c6) += arg3 + 1
bool c = temp1 + arg3 + 1 u< temp1
bool z = temp1 == neg.b(arg3 + 1)
bool o = add_overflow(temp1, arg3 + 1)
int16_t* edi_1 = *esp
uint16_t* esi = esp[1]
esp[2]
int32_t ebx = esp[4]
int16_t edx = (esp[5]).w
char* ecx_1 = esp[6]
int16_t eax_2 = (esp[7]).w
esp[7] = &esp[8]
uint16_t* esi_1 = __outsd(edx, *esi, esi, eflags)
char* eax_3
char* edx_1
char* ebx_1
void* esp_4
char* ebp
uint16_t* esi_3
int32_t edi_2
uint16_t* gsbase

if (o)
    edi_2 = esp[7]
    esi_3 = esp[8]
    ebp = esp[9]
    ebx_1 = esp[0xb]
    edx_1 = esp[0xc]
    ecx_1 = esp[0xd]
    eax_3 = esp[0xe]
    esp_4 = &esp[0xf]
else
    if (z)
        ecx_1[0x67]
        eax_2:1.b |= ecx_1[0x67]
        esp[6] = &esp[7]
        int32_t esi_5 = __outsd(edx, *esi_1, esi_1, eflags)
        *(edi_1 + 0x68)
        __outsb(edx, *(gsbase + esi_5), esi_5, eflags)
        
        if (ebx == 0xffffffff)
            jump(sub_48c658+0xde)
        
        jump(0x48c6d1)
    
    edi_2 = esp[7]
    uint16_t* esi_2 = esp[8]
    ebp = esp[9]
    ebx_1 = esp[0xb]
    edx_1 = esp[0xc]
    ecx_1 = esp[0xd]
    eax_3 = esp[0xe]
    esp[0xe] = &esp[0xf]
    esp_4 = &esp[0xe]
    esi_3 = __outsd(edx_1.w, *esi_2, esi_2, eflags)
    
    if (not(o))
        __outsb(edx_1.w, *(gsbase + esi_3), esi_3, eflags)
        
        if (z)
            jump(0x48c722)
        
        jump(0x48c6bd)

uint16_t* esi_7 = __outsd(edx_1.w + 1, *esi_3, esi_3, eflags)

if (edx_1 == 0xffffffff)
    edi_2.w += 1
    TEB* fsbase
    
    if (not(c))
        *(fsbase + ebp + 0x6e)
        *(fsbase + ebp + 0x6e)
        bool c_1 = unimplemented  {imul esp, dword [fs:ebp+0x6e], 0x4d4c0874}
        
        if (c_1)
            jump(0x48c7e6)
        
        jump(sub_48c73e+0x47)
    
    *(esp_4 - 4) = esp_4
    
    if (c)
        if (edi_2 == 0xffffffff)
            jump(sub_48c7f6+0x90)
        
        jump(sub_48c73e+0x106)
    
    *(fsbase + ebp + 0x6d)
    uint8_t* edi_7
    uint8_t temp0_2
    temp0_2, edi_7 = __insb(edi_2 + 1, edx_1.w + 1, eflags)
    *edi_7 = temp0_2
    *(gsbase + eax_3) = &eax_3[*(gsbase + eax_3)]
    *eax_3 += eax_3.b
    *ecx_1 += ecx_1.b
    *eax_3 += eax_3.b
    eax_3:1.b += (edx_1.w + 1).b
    undefined

int32_t esi_8 = __outsd(edx_1.w + 1, *esi_7, esi_7, eflags)
int16_t temp0_1
temp0_1, edi_1 = __insd(edi_2, edx_1.w + 1, eflags)
*edi_1 = temp0_1
__outsb(edx_1.w + 1, *(gsbase + esi_8), esi_8, eflags)

if (ebx_1 != 0xffffffff)
    if (c)
        char temp6 = ebp[(ecx_1 << 1) + 0x44] | ecx_1.b
        ebp[(ecx_1 << 1) + 0x44] = temp6
        
        if (temp6 u< 0)
            jump(0x48c77f)
        
        jump(0x48c71e)
    
    jump(0x48c70a)

*esp_4
*(esp_4 + 4)
*(esp_4 + 8)
*(esp_4 + 0x10)
*(esp_4 + 0x14)
*(esp_4 + 0x18)
*(esp_4 + 0x1c)

if (add_overflow(ebx_1, 1))
    jump(sub_48c73e+0x7e)

jump(sub_48c73e+0x32)
