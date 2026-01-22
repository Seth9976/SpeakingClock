// 函数: sub_424df1
// 地址: 0x424df1
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t** edx = arg2 + 1
*arg6 += arg3.b
int32_t* eax = arg1 | 0x6c654849
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, edx.w, eflags)
*edi = temp0
uint16_t* gsbase
int16_t temp0_1
temp0_1, eflags = __arpl_memw_gpr16(*(gsbase + edi + ((arg4 - 1) << 1) + 0x72), arg5.w)
*(gsbase + edi + ((arg4 - 1) << 1) + 0x72) = temp0_1
*eax = adc.d(*eax, eax, false)
int32_t temp3_1 = *(eax - 0x6d)
void* entry_ebx
*(eax - 0x6d) += entry_ebx
eax.b = 0xe
int32_t var_1
int32_t edi_1 = var_1
void* esp = &__return_addr:3
int32_t temp4_1 = rlc.d(*arg3, arg3.b, temp3_1 + entry_ebx u< temp3_1)
*arg3 = temp4_1
*0x4fc000b9 = eax

if (temp4_1 s>= 0)
    return sub_424dc4(eax) __tailcall

bool cond:3_1 = arg3.b u>= *arg3
void* eax_2 = eax - 1
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(edi_1, edx.w, eflags)
*edi_2 = temp0_2
bool c
bool z_1
bool s_1
bool o_1

if (not(add_overflow(eax, 0xffffffff)))
    arg5 = __outsb(edx.w, *arg5, arg5, eflags)
    
    if (eax != 1)
        if (not(cond:3_1))
            entry_ebx:1.b *= 2
        
        *(entry_ebx + 0x424e2cc0) -= 1
        *edi_2 += arg3.b
        int32_t* temp20_1 = arg3
        int32_t temp21_1 = arg3[0x12]
        arg3 |= arg3[0x12]
        c = false
        z_1 = (temp20_1 | temp21_1) == 0
        s_1 = (temp20_1 | temp21_1) s< 0
        o_1 = false
        uint8_t temp0_3
        temp0_3, edi_2 = __insb(edi_2, edx.w, eflags)
        *edi_2 = temp0_3
        goto label_424e34
    
label_424e87:
    bool c_4 = arg3.b u< *arg3
    void* temp14_1 = eax_2
    eax_2 -= 1
    uint8_t temp0_8
    temp0_8, edi_2 = __insb(edi_2, edx.w, eflags)
    *edi_2 = temp0_8
    
    if (add_overflow(temp14_1, 0xffffffff))
        goto label_424ed7
    
    __outsb(edx.w, *arg5, arg5, eflags)
    
    if (temp14_1 != 1)
        if (not(c_4))
            jump(0x424e9c)
        
        jump(0x424e93)
    
    *(arg4 + 0x48095e37) = rlc.d(*(arg4 + 0x48095e37), 1, c_4)
    bool o_7 = unimplemented  {rcl dword [ebp+0x48095e38], 0x1}
    uint8_t* edi_5
    uint8_t temp0_14
    temp0_14, edi_5 = __insb(edi_2, edx.w, eflags)
    *edi_5 = temp0_14
    
    if (o_7)
        jump(0x424f4a)
    
    jump(0x424f01)

arg5 = __outsd(edx.w, *arg5, arg5, eflags)
int16_t* edi_3
int16_t temp0_5
temp0_5, edi_3 = __insd(edi_2, edx.w, eflags)
*edi_3 = temp0_5
uint8_t temp0_6
temp0_6, edi_2 = __insb(edi_3, edx.w, eflags)
*edi_2 = temp0_6

if (add_overflow(eax_2, 0xffffffff))
    eax_2 = *arg5
    arg5 = &arg5[2]
label_424ec5:
    bool cond:5_1 = arg3.b u>= *arg3
    void* temp17_1 = eax_2
    eax_2 -= 1
    bool z_4 = temp17_1 == 1
    bool o_5 = add_overflow(temp17_1, 0xffffffff)
    uint8_t temp0_12
    temp0_12, edi_2 = __insb(edi_2, edx.w, eflags)
    *edi_2 = temp0_12
    
    if (o_5)
    label_424f15:
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 + 0x4f) += entry_ebx.b
        goto label_424f2e
    
    arg5 = __outsb(edx.w, *arg5, arg5, eflags)
    
    if (z_4)
        if (z_4 || temp17_1 - 1 s< 0 != o_5)
            goto label_424f37
        
        *eax_2 += eax_2.b
        return sub_426064(eax_2 - 0x24, edx) __tailcall
    
    if (not(cond:5_1))
        entry_ebx:1.b *= 2
        undefined
    
    arg5 -= 1
    edx += 1
label_424ed7:
    *edi_2 += arg3.b
    eax_2.b |= 0x49
    bool cond:6_1 = eax_2.b u< 0
    void* temp18_1 = eax_2
    eax_2 -= 1
    uint8_t temp0_13
    temp0_13, edi_2 = __insb(edi_2, edx.w, eflags)
    *edi_2 = temp0_13
    
    if (add_overflow(temp18_1, 0xffffffff))
        goto label_424f2d
    
    uint16_t* esi_1 = *(esp + 4)
    __outsb((*(esp + 0x14)).w, *esi_1, esi_1, eflags)
    *(esp + 0x20)
    *(esp + 0x24)
    *(esp + 0x28)
    *(esp + 0x30)
    *(esp + 0x34)
    *(esp + 0x38)
    *(esp + 0x3c)
    
    if (cond:6_1)
        jump(0x424f33)
    
    jump(0x424ee7)

esp = *(arg4 + 0x76) * 0x114c7265
char temp19_1 = *arg3
*arg3 += eax_2.b
bool c_3 = temp19_1 + eax_2.b u< temp19_1
entry_ebx = eax_2
label_424e7b:
eax_2.b = 0xe
edi_2 = *esp
esp += 4
int32_t temp27_1 = *arg3
*arg3 = rlc.d(temp27_1, arg3.b, c_3)
c = unimplemented  {rcl dword [ecx], cl}
z_1 = rlc.d(temp27_1, arg3, c_3) == 0
s_1 = rlc.d(temp27_1, arg3, c_3) s< 0
o_1 = unimplemented  {rcl dword [ecx], cl}
*0x4fc000b9 = eax_2

if (s_1)
    goto label_424e87

label_424e34:

if (not(s_1))
    uint8_t temp0_10
    temp0_10, edi_2 = __insb(edi_2, edx.w, eflags)
    *edi_2 = temp0_10
    goto label_424eaa

if (not(z_1))
    jump(0x424e38)

int32_t* temp5_1 = arg3
int32_t temp6_1 = *(arg3 + 0x45)
bool cond:7_1 = c
arg3 = adc.d(temp5_1, temp6_1, cond:7_1)
c = adc.d(temp5_1, temp6_1, cond:7_1) u< temp5_1
    || (cond:7_1 && adc.d(temp5_1, temp6_1, cond:7_1) == temp5_1)

if (adc.d(temp5_1, temp6_1, cond:7_1) s< 0)
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    eax_2 = *esp
    esp += 4
label_424f2d:
    edi_2 -= 1
label_424f2e:
    edx += 1
    *(eax_2 * 2) += arg3.b
    *eax_2 += eax_2.b
    edi_2[0x40]
label_424f37:
    *(eax_2 - 0x43ffbfc2) += edx:1.b
    void* eax_6
    eax_6.b = (eax_2 + 1).b * 2
    void* eax_7
    eax_7:1.b = (eax_6 + 1):1.b + (eax_6 + 1).b
    *(eax_7 + 0x403f) += entry_ebx:1.b
    *(esp + edi_2) += entry_ebx.b
    *(eax_7 + 0x3e) += entry_ebx.b
    eax_2 = eax_7 + 3
    char temp22_1 = *((eax_2 << 1) + 0x706c6548)
    *((eax_2 << 1) + 0x706c6548) += edx.b
    *(esp - 4) = entry_ebx
    void* esp_4 = esp - 4
    TEB* fsbase
    
    if (temp22_1 + edx.b s>= 0)
        int16_t cs
        *(esp_4 - 4) = zx.d(cs)
        esp_4 -= 4
    label_424fd5:
        *eax_2 += eax_2.b
        *(esp_4 - 4) = arg4 - 1
        *(esp_4 - 8) = arg3
        *(esp_4 - 0xc) = entry_ebx
        *(esp_4 - 0x10) = arg5
        *(esp_4 - 0x14) = edi_2
        *(esp_4 - 8) = arg3
        int16_t esi_4 = (*(esp_4 + 8)).w
        sub_405008(*(esp_4 - 8))
        *(esp_4 - 0x18) = esp_4 - 4
        *(esp_4 - 0x1c) = 0x425f0e
        *(esp_4 - 0x20) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_4 - 0x20
        
        if (*(esp_4 - 8) != 0)
            sub_404bdc(eax_2 - 8, *(esp_4 - 8))
        
        if (esi_4 == 1)
            sub_425a88(eax_2 - 0x28, *(esp_4 + 4), *(esp_4 - 8))
            jump(0x425ef6)
        
        if (esi_4 == 2)
            jump(0x425ed3)
        
        jump(0x425ea8)
    
    if (temp22_1 == neg.b(edx.b))
        eax_2.b = rrc.b(eax_2.b, 0xe9, temp22_1 + edx.b u< temp22_1)
        arg3 = *0xc0830000 * 0xe41e9d8
        goto label_424fd5
    
    int16_t temp0_15
    temp0_15, edi_2 = __insd(edi_2, edx.w, eflags)
    *edi_2 = temp0_15
    
    if (arg4 s< 0)
        *(esp_4 - 4) = arg4
        *(esp_4 - 8) = 0
        *(esp_4 - 0xc) = 0
        *(esp_4 - 0x10) = 0
        *(esp_4 - 0x14) = entry_ebx
        *(esp_4 - 0x18) = arg5
        *(esp_4 - 0x1c) = edi_2
        *(esp_4 - 0x10) = edx
        *(esp_4 - 0x20) = esp_4 - 4
        *(esp_4 - 0x24) = j_sub_40443c
        *(esp_4 - 0x28) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_4 - 0x28
        
        if (arg3 == 0)
            jump(sub_425d34+0x33)
        
        jump(sub_425d34+0x29)
    
    if (add_overflow(arg4 - 1, 1))
        *(entry_ebx - 0x27fbdbbc) += eax_2.b
        jump(sub_40117b+0x5481)
else
    arg5 = __outsb(edx.w, *(gsbase + arg5), arg5, eflags)
    void* temp8_1 = eax_2
    eax_2 -= 1
    z_1 = temp8_1 == 1
    o_1 = add_overflow(temp8_1, 0xffffffff)
    uint8_t temp0_9
    temp0_9, edi_2 = __insb(edi_2, edx.w, eflags)
    *edi_2 = temp0_9
label_424eaa:
    
    if (not(o_1))
        uint8_t** esp_1 = *(arg4 + 0x76) * 0x4e5c7265
        edx += 1
        char temp15_1 = *arg3
        *arg3 += eax_2.b
        bool c_5 = temp15_1 + eax_2.b u< temp15_1
        int16_t temp0_11 = entry_ebx.w
        entry_ebx.w = eax_2.w
        eax_2.w = temp0_11
        eax_2.b = 0xe
        edi_2 = *esp_1
        esp = &esp_1[1]
        int32_t temp16_1 = *arg3
        *arg3 = rlc.d(temp16_1, arg3.b, c_5)
        bool c_6 = unimplemented  {rcl dword [ecx], cl}
        bool s_3 = rlc.d(temp16_1, arg3, c_5) s< 0
        *0x4fc000b9 = eax_2
        uint8_t* temp25_1
        
        for (; not(s_3); s_3 = temp25_1 - 1 s< 0)
            if (not(c_6))
                *eax_2 = adc.d(*eax_2, eax_2, c_6)
                int32_t temp26_1 = *(entry_ebx + (edx << 2) - 4)
                *(entry_ebx + (edx << 2) - 4) += esp
                c_3 = temp26_1 + esp u< temp26_1
                goto label_424e7b
            
            char temp23_1 = eax_2.b
            char temp24_1 = eax_2.b
            eax_2.b *= 2
            c_6 = temp23_1 + temp24_1 u< temp23_1
            temp25_1 = edi_2
            edi_2 -= 1
        
        goto label_424ec5
    
    if (not(z_1))
        if (not(c))
            eax_2 = *esp
            esp += 4
            edi_2 -= 1
        else
            entry_ebx:1.b *= 2
            *(arg4 + 0x4f58003f) -= 1
        
        edx += 1
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        goto label_424f15

*(edi_2 + 0x6e)
return *(eax_2 - 8)
