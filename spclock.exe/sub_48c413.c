// 函数: sub_48c413
// 地址: 0x48c413
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax_1 = arg1 - 1
*arg3 += eax_1.b
__bound_gprv_mema32(arg3, *(arg3 + 0x4e))
int32_t eflags
uint16_t* esi = __outsd(arg2.w, *arg3, arg3, eflags)
uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
int32_t* gsbase
*(gsbase + arg2 + 0x76)
int32_t var_1
*(gsbase + arg2 + 0x76) |= &var_1:1
int32_t* esp = &var_1
uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
void* var_5
int32_t arg_1b
void* edx
void* esp_2
void* esp_7
bool c_1

if (&var_1:1 != 1)
    *(arg2 + 0x6d)
    *(arg2 + 0x6d) |= eax_1:1.b
    void* entry_ebx
    
    if (entry_ebx == 0xffffffff)
        if (entry_ebx == 0xffffffff)
            __outsd(arg2.w + 1, *esi_2, esi_2, eflags)
            jump(0x48c55a)
        
        int16_t* edi_5
        int16_t temp0_4
        temp0_4, edi_5 = __insd(arg4, arg2.w, eflags)
        *edi_5 = temp0_4
        char temp8_1 = eax_1:1.b
        eax_1:1.b |= *(arg2 + 0x6d)
        c_1 = false
        bool z_2 = (temp8_1 | *(arg2 + 0x6d)) == 0
        var_5 = entry_ebx + 1
        esp_2 = &var_5
        
        if (not(z_2))
            goto label_48c497
        
        edx = arg6
        esp_7 = &arg_1b
        *(arg5 + 0x65)
    label_48c500:
        *(esp_7 - 4) = edx
        esp = esp_7 - 4
    
    void* edi_7 = *esp
    esp[2]
    edx = esp[5]
    esp[6]
    eax_1 = esp[7]
    *(esp[4] + 0x65)
    char temp6_1 = eax_1.b
    eax_1.b |= 0x6c
    int16_t cs
    *(&esp[8] - 4) = zx.d(cs)
    uint8_t temp0_6
    temp0_6, edi_7 = __insb(edi_7, edx.w, eflags)
    *edi_7 = temp0_6
    
    if ((temp6_1 | 0x6c) s>= 0)
        jump(0x48c621)
    
    *(gsbase + eax_1) = &eax_1[*(gsbase + eax_1)]
    *eax_1 += eax_1.b
    *edi_7 += eax_1.b
    *eax_1 += eax_1.b
    char temp15 = eax_1[0xd0048c5]
    eax_1[0xd0048c5] += eax_1:1.b
    
    if (temp15 == neg.b(eax_1:1.b))
        jump(sub_48c5a1+0x75)
    
    jump(sub_48c5a1+0x23)

TEB* fsbase
*(fsbase + arg2 + 0x76) |= eax_1:1.b
var_5 = arg2
void* const __return_addr_1 = __return_addr
int32_t* ebx = arg5
edx = arg6
void* ecx_1 = arg7
*(ebx + 0x65)
c_1 = unimplemented  {imul esi, dword [ebx+0x65], 0x76620e64}
uint16_t* esi_4 = *(ebx + 0x65) * 0x76620e64 + 1
void* esp_1
void* esi_5
int16_t* edi_1

if (c_1)
    esi_2 = arg8
    arg2 = arg11
    void arg_3b
    esp_2 = &arg_3b
label_48c497:
    __outsb(arg2.w, *esi_2, esi_2, eflags)
    edi_1 = *esp_2
    esi_5 = *(esp_2 + 4)
    __return_addr_1 = *(esp_2 + 8)
    ebx = *(esp_2 + 0x10)
    edx = *(esp_2 + 0x14)
    ecx_1 = *(esp_2 + 0x18)
    *(esp_2 + 0x1c)
    esp_7 = esp_2 + 0x20
    
    if (c_1)
        goto label_48c500
    
    int16_t es
    *(esp_7 - 4) = zx.d(es)
    esp_1 = esp_7 - 4
    __bound_gprv_mema32(__return_addr_1, *(__return_addr_1 + 0x45))
label_48c4a0:
    *(gsbase + __return_addr_1 + esi_5 + 0x6d) |= esp_1
else
    int16_t temp0_1
    temp0_1, edi_1 = __insd(var_5, edx.w, eflags)
    *edi_1 = temp0_1
    int32_t arg_17
    esp_1 = &arg_17:3
    esi_5 = __outsd(edx.w, *esi_4, esi_4, eflags)
    
    if (&arg_1b != 1 && not(c_1))
        goto label_48c4a0
    
    if (not(c_1))
        int16_t* edi_3
        int16_t temp0_2
        temp0_2, edi_3 = __insd(arg_17, arg10.w, eflags)
        *edi_3 = temp0_2
        arg12 = arg10
        *(arg15 + 0x65)
        bool c_2 = unimplemented  {imul esi, dword [ebx+0x65], 0x76620864}
        uint16_t* esi_7 = *(arg15 + 0x65) * 0x76620864 - 1
        __outsd(arg16, *esi_7, esi_7, eflags)
        
        if (c_2)
            jump(sub_48c396+0x12a)
        
        jump(sub_48c396+0xbd)
    
    *(gsbase + edx + 0x6d) |= &arg_17:3

*(esp_1 - 4) = edi_1
*(esi_5 + 0x64)
*(esi_5 + 0x64)
bool c_3 = unimplemented  {imul ebp, dword [esi+0x64], 0x873776f}

if (not(c_3))
    if (add_overflow(edi_1, 1))
        jump(sub_48c396+0x188)
    
    jump(sub_48c396+0x120)

__bound_gprv_mema32(ecx_1, *ebx)
uint8_t* edi_9
uint8_t temp0_5
temp0_5, edi_9 = __insb(edi_1 + 1, edx.w, eflags)
*edi_9 = temp0_5

if (not(c_3))
    jump(0x48c56c)

jump(sub_48c396+0x184)
