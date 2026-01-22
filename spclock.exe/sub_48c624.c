// 函数: sub_48c624
// 地址: 0x48c624
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg2:1.b -= arg1.b
char* entry_ebx
*entry_ebx += (arg1 - 1).b
void* eax_1 = (arg1 - 1) | 0x444d4c54

if (eax_1 u< 0)
    goto label_48c692

int32_t eflags
int16_t temp0_1
temp0_1, arg5 = __insd(arg5, arg2, eflags)
*arg5 = temp0_1
char* var_4_1 = entry_ebx
char* eax_2 = eax_1 + *eax_1
*eax_2 += eax_2.b
eax_2.b &= 0xc6
eax_1 = eax_2 - 1
char temp1_1 = *eax_1
*eax_1 += arg3.b
bool c_1 = temp1_1 + arg3.b u< temp1_1
bool z_1 = temp1_1 == neg.b(arg3.b)
bool o_1 = add_overflow(temp1_1, arg3.b)
char* ecx
char* ebp
int16_t edx
int32_t ebx
int32_t* esp
uint16_t* esi_4
int16_t* edi_2
uint16_t* gsbase

if (not(c_1))
    *entry_ebx += (eax_1 - 1).b
    eax_1 = (eax_1 - 1) | 0x444d4c54
label_48c692:
    arg3 += 1
    uint8_t* edi_1
    uint8_t temp0_3
    temp0_3, edi_1 = __insb(arg5, arg2, eflags)
    *edi_1 = temp0_3
    esp = *(edi_1 + 0x6e) * 0x746e656d
    *eax_1 += eax_1
label_48c69d:
    *eax_1 += eax_1.b
    *eax_1 += arg3.b
    *eax_1 += eax_1.b
    char temp2_1 = *(eax_1 + 0x90048c6)
    *(eax_1 + 0x90048c6) += arg3.b
    bool c_2 = temp2_1 + arg3.b u< temp2_1
    bool z_2 = temp2_1 == neg.b(arg3.b)
    bool o_2 = add_overflow(temp2_1, arg3.b)
    edi_2 = *esp
    uint16_t* esi_3 = esp[1]
    ebp = esp[2]
    ebx = esp[4]
    edx = (esp[5]).w
    ecx = esp[6]
    int16_t eax_4 = (esp[7]).w
    esp[7] = &esp[8]
    esi_4 = __outsd(edx, *esi_3, esi_3, eflags)
    char* eax_5
    char* edx_1
    char* ebx_1
    void* esp_4
    uint16_t* esi_6
    int32_t edi_3
    
    if (not(o_2))
        if (z_2)
            ecx[0x67]
            eax_4:1.b |= ecx[0x67]
            o_1 = false
            esp[6] = &esp[7]
            goto label_48c6c2
        
        edi_3 = esp[7]
        uint16_t* esi_5 = esp[8]
        ebp = esp[9]
        ebx_1 = esp[0xb]
        edx_1 = esp[0xc]
        ecx = esp[0xd]
        eax_5 = esp[0xe]
        esp[0xe] = &esp[0xf]
        esp_4 = &esp[0xe]
        esi_6 = __outsd(edx_1.w, *esi_5, esi_5, eflags)
        
        if (o_2)
            goto label_48c6fe
        
        __outsb(edx_1.w, *(gsbase + esi_6), esi_6, eflags)
        
        if (z_2)
            jump(0x48c722)
        
        jump(0x48c6bd)
    
    edi_3 = esp[7]
    esi_6 = esp[8]
    ebp = esp[9]
    ebx_1 = esp[0xb]
    edx_1 = esp[0xc]
    ecx = esp[0xd]
    eax_5 = esp[0xe]
    esp_4 = &esp[0xf]
label_48c6fe:
    uint16_t* esi_10 = __outsd(edx_1.w + 1, *esi_6, esi_6, eflags)
    
    if (edx_1 == 0xffffffff)
        edi_3.w += 1
        TEB* fsbase
        
        if (not(c_2))
            *(fsbase + ebp + 0x6e)
            *(fsbase + ebp + 0x6e)
            bool c_3 = unimplemented  {imul esp, dword [fs:ebp+0x6e], 0x4d4c0874}
            
            if (c_3)
                jump(0x48c7e6)
            
            jump(sub_48c73e+0x47)
        
        *(esp_4 - 4) = esp_4
        
        if (c_2)
            if (edi_3 == 0xffffffff)
                jump(sub_48c7f6+0x90)
            
            jump(sub_48c73e+0x106)
        
        *(fsbase + ebp + 0x6d)
        uint8_t* edi_8
        uint8_t temp0_5
        temp0_5, edi_8 = __insb(edi_3 + 1, edx_1.w + 1, eflags)
        *edi_8 = temp0_5
        *(gsbase + eax_5) = &eax_5[*(gsbase + eax_5)]
        *eax_5 += eax_5.b
        *ecx += ecx.b
        *eax_5 += eax_5.b
        eax_5:1.b += (edx_1.w + 1).b
        undefined
    
    int32_t esi_11 = __outsd(edx_1.w + 1, *esi_10, esi_10, eflags)
    int16_t temp0_4
    temp0_4, edi_2 = __insd(edi_3, edx_1.w + 1, eflags)
    *edi_2 = temp0_4
    __outsb(edx_1.w + 1, *(gsbase + esi_11), esi_11, eflags)
    
    if (ebx_1 == 0xffffffff)
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
    
    if (not(c_2))
        jump(0x48c70a)
else
    uint16_t* esi_1 = __outsd(arg2, *(arg4 + 1), arg4 + 1, eflags)
    
    if (not(z_1))
        __outsd(arg2, *esi_1, esi_1, eflags)
        int16_t* edi
        int16_t temp0_2
        temp0_2, edi = __insd(arg5, arg2, eflags)
        *edi = temp0_2
        int16_t es
        *0xfffffffc = zx.d(es)
        esp = 0xfffffffc
        
        if (not(c_1))
            goto label_48c69d
        
        if (z_1)
            jump(sub_48c658+4)
        
        jump(sub_48c588+0xcd)
    
    edi_2 = *nullptr
    esi_4 = *4
    ebp = *8
    ebx = *0x10
    edx = (*0x14).w
    ecx = *0x18
    *0x1c
    *0x1c = 0x20
label_48c6c2:
    int32_t esi_8 = __outsd(edx, *esi_4, esi_4, eflags)
    
    if (not(o_1))
        *(edi_2 + 0x68)
        __outsb(edx, *(gsbase + esi_8), esi_8, eflags)
        
        if (ebx == 0xffffffff)
            jump(sub_48c658+0xde)
        
        jump(0x48c6d1)
char temp7 = ebp[(ecx << 1) + 0x44] | ecx.b
ebp[(ecx << 1) + 0x44] = temp7

if (temp7 u< 0)
    jump(0x48c77f)

jump(0x48c71e)
