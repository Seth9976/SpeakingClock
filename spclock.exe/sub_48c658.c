// 函数: sub_48c658
// 地址: 0x48c658
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg6 + 0x68)
int32_t esp_11 = *(arg6 + 0x68) * 0x73660574
bool c_1 = unimplemented  {imul esp, dword [edi+0x68], 0x73660574}
bool o = unimplemented  {imul esp, dword [edi+0x68], 0x73660574}
*(esp_11 - 4) = esp_11
int32_t* esp = esp_11 - 4
int32_t eflags
uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
uint16_t* gsbase

if (not(o))
    arg4 -= 1
    int16_t* temp2_1 = arg6
    arg6 += 1
    o = add_overflow(temp2_1, 1)
    
    if (c_1)
        *esp
        int32_t esi_4 = esp[1]
        esp[2]
        esp[6]
        char* eax_4 = esp[7]
        bool cond:0 = esp[4] == 0xffffffff
        __outsb((esp[5]).w, *(gsbase + esi_4), esi_4, eflags)
        
        if (not(cond:0))
            jump(0x48c6d1)
        
        *eax_4 += eax_4.b
        undefined
    
    if (o)
        jump(sub_48c588+0x14b)

void* eax
char* entry_ebx

if (o)
    char* eax_6 = arg1 + *arg1
    *eax_6 += eax_6.b
    eax_6.b &= 0xc6
    eax = eax_6 - 1
    char temp3_1 = *eax
    *eax += arg3
    
    if (temp3_1 + arg3 u< temp3_1)
        __outsd(arg2, *esi, esi, eflags)
        
        if (temp3_1 == neg.b(arg3))
            jump(sub_48c683+0x3c)
        
        jump(sub_48c624+0x27)
else
    eax = arg1 - 1
    char temp4_1 = *esi
    *esi += eax.b
    int16_t cs
    *(esp - 4) = zx.d(cs)
    *(esp - 8) = esp - 4
    
    if (temp4_1 + eax.b u< temp4_1)
        __outsb(arg2, *(gsbase + esi + 1), esi + 1, eflags)
        
        if (esi == 0xffffffff)
            jump(sub_48c73e+5)
        
        jump(sub_48c588+0x156)
    
    int16_t temp0_1
    temp0_1, arg6 = __insd(arg6, arg2, eflags)
    *arg6 = temp0_1
    *(esp - 0xc) = entry_ebx
    *(arg4 + 0x72)
    *(arg4 - 0x3973ffc1) += arg3

*entry_ebx += (eax - 1).b
int32_t* eax_2 = (eax - 1) | 0x444d4c54
uint8_t* edi
uint8_t temp0_2
temp0_2, edi = __insb(arg6, arg2, eflags)
*edi = temp0_2
int32_t* esp_7 = *(edi + 0x6e) * 0x746e656d
*eax_2 += eax_2
*eax_2 += eax_2.b
*eax_2 += arg3 + 1
*eax_2 += eax_2.b
char temp7 = *(eax_2 + 0x90048c6)
*(eax_2 + 0x90048c6) += arg3 + 1
*esp_7
uint16_t* esi_2 = esp_7[1]
esp_7[2]
esp_7[4]
int16_t edx = (esp_7[5]).w
esp_7[6]
esp_7[7]
esp_7[7] = &esp_7[8]
__outsd(edx, *esi_2, esi_2, eflags)

if (add_overflow(temp7, arg3 + 1))
    jump(sub_48c683+0x78)

jump(sub_48c683+0x2c)
