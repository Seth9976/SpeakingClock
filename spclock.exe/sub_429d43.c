// 函数: sub_429d43
// 地址: 0x429d43
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint16_t* esi_3 = __outsd(arg2.w, *arg5, arg5, eflags)
void* entry_ebx
void* esp
bool c
bool z

if (z || c)
    uint16_t* esi = __outsd(arg2.w + 1, *esi_3, esi_3, eflags)
    __outsd(arg2.w + 1, *esi, esi, eflags)
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg6, arg2.w + 1, eflags)
    *edi = temp0_1
    arg6 = __return_addr
    arg4 = arg8
    entry_ebx = arg9
    arg2 = arg10
    arg3 = arg11
    arg1 = arg12
    void arg_20
    esp = &arg_20
    esi_3 = __outsb(arg2.w, *arg7, arg7, eflags)

arg1.b = adc.b(arg1.b, *arg3, c)
*(esp - 4) = arg2
void* esp_1 = esp - 4
bool c_1 = arg1 u>= 0x9c9aadac
bool c_5
int16_t es

if (arg1 == 0x9c9aadac)
    if (c_1)
        *(esp_1 - 4) = zx.d(es)
        esp_1 -= 4
        goto label_429d5c
    
    arg2 += 1
    *(arg6 + 0x7d00429d) += arg3:1.b
label_429dc9:
    esp_1 += 4
    arg2 += 1
    *(arg2 + 0x100429d) += arg3.b
    *(arg1 + 0x63655254) += (arg1 + 0x63655254).b
    char temp4_1 = *(entry_ebx + 0x7ab8cd12)
    *(entry_ebx + 0x7ab8cd12) += (arg1 + 0x63655254):1.b
    c_5 = temp4_1 + (arg1 + 0x63655254):1.b u< temp4_1
else
    char* temp2_1 = arg3
    arg3 = &arg3[*(arg4 + 0x73)]
    c_1 = &temp2_1[*(arg4 + 0x73)] u< temp2_1
    *(esp_1 - 4) = zx.d(es)
    esp_1 -= 4
label_429d5c:
    
    if (c_1)
        if (c_1)
            goto label_429dc9
        
        void* esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
        char temp6 = *esi_4
        *esi_4 += arg3:1.b
        bool c_2 = temp6 + arg3:1.b u< temp6
        int32_t temp7 = *(arg1 + 0x63655254)
        *(arg1 + 0x63655254) = adc.d(temp7, arg1 + 0x63655254, c_2)
        bool p = unimplemented  {adc dword [eax], eax}
        bool a = unimplemented  {adc dword [eax], eax}
        bool o = unimplemented  {adc dword [eax], eax}
        *arg6 = *esi_4
        bool d
        *(esp_1 - 4) = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
            | (adc.d(temp7, arg1 + 0x63655254, c_2) s< 0 ? 1 : 0) << 7
            | (adc.d(temp7, arg1 + 0x63655254, c_2) == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
            | (p ? 1 : 0) << 2 | (adc.d(temp7, arg1 + 0x63655254, c_2) u< temp7
            || (c_2 && adc.d(temp7, arg1 + 0x63655254, c_2) == temp7) ? 1 : 0)
        *(arg1 + 0x63655254 + arg2 + 1 + 0x40) += arg3:1.b
        char temp8 = *(arg1 + 0x63655254)
        *(arg1 + 0x63655254) += (arg1 + 0x63655254).b
        *(arg1 + 0x63655254) = adc.b(*(arg1 + 0x63655254), (arg1 + 0x63655254).b, 
            temp8 + (arg1 + 0x63655254).b u< temp8)
        *(arg1 + 0x63655254) += (arg1 + 0x63655254).b
        *(arg1 + 0x63655254) += (arg1 + 0x63655254).b
        breakpoint
    
    char temp5_1 = *(arg1 + 0x63655254)
    *(arg1 + 0x63655254) += (arg1 + 0x63655254).b
    c_5 = temp5_1 + (arg1 + 0x63655254).b u< temp5_1
    *0x7ab8cd12 = arg1 + 0x63655254
int32_t eflags_1
char temp0_2
char temp1_1
temp0_2, temp1_1, eflags_1 = __aam_immb(0x11, (arg1 + 0x63655254).b)
int32_t* eax
eax.b = temp0_2
eax:1.b = temp1_1
*(arg6 + 0x60) = ror.b(*(arg6 + 0x60), 0xb2)
bool c0
bool c1
bool c2
bool c3
*(arg4 + (entry_ebx << 2) + 0x240042) =
    (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
*eax += eax.b
*eax += eax.b
*eax += eax.b
eax.b += (sbb.d(arg2, 0, c_5) + 1).b
bool d_1 = test_bit(*esp_1, 0xa)
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
esi_3[entry_ebx * 2 + 0x21].b += entry_ebx:1.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
void* esi_6
void* edi_2

if (d_1)
    *arg6 = *esi_3
    edi_2 = arg6 - 1
    esi_6 = esi_3 - 1
else
    *arg6 = *esi_3
    edi_2 = arg6 + 1
    esi_6 = esi_3 + 1

*(esi_6 + (entry_ebx << 2) + 0x280042) += arg3:1.b
*eax += eax.b
eax.b = 0x78
*(eax - 0x4fffbfc2) += (sbb.d(arg2, 0, c_5) + 3):1.b
eax.b = 0xf0
void* eax_1
eax_1:1.b = (eax + 1):1.b + (eax + 1).b
*(eax_1 + 0x403f) += entry_ebx:1.b
*(esp_1 + 4 + edi_2) += entry_ebx.b
void* eax_3
eax_3.b = (eax_1 + 2).b + (eax_1 + 2):1.b
*esi_6 - *edi_2
void* esi_7
void* edi_3

if (d_1)
    esi_7 = esi_6 - 1
    edi_3 = edi_2 - 1
else
    esi_7 = esi_6 + 1
    edi_3 = edi_2 + 1

eax_3.b += (sbb.d(arg2, 0, c_5) + 3):1.b
*esi_7 - *edi_3
void* esi_8
void* edi_4

if (d_1)
    esi_8 = esi_7 - 4
    edi_4 = edi_3 - 4
else
    esi_8 = esi_7 + 4
    edi_4 = edi_3 + 4

*(arg4 + (entry_ebx << 3) - 0x58f3ffbe) += eax_3.b
*(eax_3 - 0x57) += eax_3.b
*((entry_ebx << 3) + 0x33a00042) += (sbb.d(arg2, 0, c_5) + 3).b
void* eax_4
eax_4.b = (eax_3 + 1).b + (sbb.d(arg2, 0, c_5) + 3).b
*(sbb.d(arg2, 0, c_5) + 3)
eax_4.b = *0xa0004033
*eax_4
char* eax_5
eax_5.b = sbb.b((eax_4 ^ *eax_4).b, 0xdf, false)
char temp11 = *eax_5
*eax_5 += eax_5:1.b
bool cond:0 = temp11 != neg.b(eax_5:1.b)
*(sbb.d(arg2, 0, c_5) + 4)
eax_5.b = *0xa8004033
*(sbb.d(arg2, 0, c_5) + 4)
eax_5.b = *0xc004033

if (cond:0 && arg3 != 0xfffffffc)
    *edi_4 += eax_5.b
    char temp12 = *(edi_4 + (eax_5 << 1) + 0x72)
    *(edi_4 + (eax_5 << 1) + 0x72) |= (sbb.d(arg2, 0, c_5) + 4).b + 1
    *(esp_1 + 4)
    *(esp_1 + 8)
    *(esp_1 + 0xc)
    *(esp_1 + 0x18)
    *(esp_1 + 0x1c)
    *(esp_1 + 0x20)
    *(*(esp_1 + 0x14) + 0x3c)
    
    if ((temp12 | ((sbb.d(arg2, 0, c_5) + 4).b + 1)) s>= 0)
        jump(0x429f0e)
    
    jump(0x429ecd)

*eax_5 += (&arg3[4]):1.b
char temp13 = eax_5[0x3c004033]
eax_5[0x3c004033] += eax_5:1.b

if (temp13 != neg.b(eax_5:1.b) && arg3 != 0xfffffffd)
    int32_t eflags_2
    int16_t temp0_4
    temp0_4, eflags_2 = __arpl_memw_gpr16(*(esi_8 + (entry_ebx << 2)), edi_4.w)
    *(esi_8 + (entry_ebx << 2)) = temp0_4
    arg3[3 + (edi_4 << 1)] += ((sbb.d(arg2, 0, c_5) + 5).w + 1):1.b
    *eax_5 += eax_5.b
    char temp14 = *eax_5
    *eax_5 += (&arg3[3]).b + 1
    
    if (temp14 + (&arg3[3]).b + 1 u< temp14)
        jump(sub_429eaa+0x8b)
    
    jump("phics")

eax_5:1.b += entry_ebx.b
*(sbb.d(arg2, 0, c_5) + 5)
entry_ebx:1.b -= entry_ebx.b
*(edi_4 + (entry_ebx << 3) + 0x33a00042) += ((sbb.d(arg2, 0, c_5) + 5).w + 1):1.b
eax_5[0xa0004034] += (&eax_5[1]):1.b
void* eax_7
eax_7.b = *0x10004033

if (&eax_5[1] != *(eax_5 + 1) && arg3 != 0xfffffffe)
    return sub_429ee5(eax_7) __tailcall

jump(0x429ea3)
