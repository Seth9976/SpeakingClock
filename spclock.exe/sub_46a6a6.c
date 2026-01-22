// 函数: sub_46a6a6
// 地址: 0x46a6a6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[0x46e2] += arg1:1.b
*arg1 += arg1.b
*arg1 = *arg1
*arg1 += arg1.b
char temp1 = *arg2
*arg2 += arg3.b
bool p = unimplemented  {inc ecx}
bool a = unimplemented  {inc ecx}
bool z = arg3 == 0xffffffff
int32_t entry_ebx

if (z)
    int32_t eflags
    uint16_t esi = __outsd(arg2.w, *arg5, arg5, eflags)
    int32_t var_2 = entry_ebx
    int32_t eflags_1
    char temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x6f), esi)
    *(arg2 + 0x6f) = temp0
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg6, arg2.w, eflags_1)
    *edi = temp0_1
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(edi, arg2.w, eflags_1)
    *edi_1 = temp0_2
    *arg1 += arg2.b
    *(&arg1[1] * 2) += entry_ebx.b
    jump(*(arg1 + 1))

bool d
int32_t var_2_1 = (add_overflow(arg3, 1) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (arg3 + 1 s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    | (temp1 + arg3.b u< temp1 ? 1 : 0)
*(arg3 + 3) += arg2:1.b
entry_ebx:1.b *= 2
int32_t eflags_2
char temp0_3
char temp1_1
temp0_3, temp1_1, eflags_2 = __aam_immb(0xf3, arg1.b)
arg1.b = temp0_3
arg1:1.b = temp1_1
arg1:1.b += arg1.b
*(arg5 + 2)
arg1.b += *arg1
char temp3 = *arg1
*arg1 += arg1.b
char* eax_2 = sbb.d(arg1, *arg1, temp3 + arg1.b u< temp3) | *(arg2 + 0x6f)

if (eax_2 u>= 0)
    if (eax_2 u< 0)
        jump(0x46a7a1)
    
    jump(sub_46a634+0x11a)

char temp4 = *eax_2
*eax_2 += eax_2.b
arg5[1].b = sbb.b(arg5[1].b, 0, temp4 + eax_2.b u< temp4)
eax_2.b |= 0x43
uint8_t* edi_2
uint8_t temp0_4
temp0_4, edi_2 = __insb(arg6, arg2.w, eflags_2)
*edi_2 = temp0_4
*(*(arg4 + 0x6e) * 0x69654874 - 4) = 0x40105474
*(arg3 + 1 + (&arg5[1] << 1) + 0x45) += (arg3 + 1).b
*eax_2 += (arg3 + 1):1.b
char* eax_3 = __in_oeax_immb(0x46, eflags_2)
eax_3[0xffffffe2] += (arg3 + 1):1.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 = *eax_3
char temp5 = eax_3[0x430b001f]
eax_3[0x430b001f] += eax_3.b
uint8_t* edi_3
uint8_t temp0_5
temp0_5, edi_3 = __insb(edi_2, arg2.w, eflags_2)
*edi_3 = temp0_5
*(arg4 + 0x6e)
int32_t* esp_1 = *(arg4 + 0x6e) * 0x64695774
bool c_3 = unimplemented  {imul esp, dword [ebp+0x6e], 0x64695774}

if (temp5 != neg.b(eax_3.b))
    undefined

*esp_1
uint16_t* esi_4 = esp_1[1]
esp_1[2]
esp_1[4]
esp_1[6]
esp_1[7]
__outsb((esp_1[5]).w, *esi_4, esi_4, eflags_2)

if (not(c_3))
    jump("UseDockManager")

jump("arentColorValue")
