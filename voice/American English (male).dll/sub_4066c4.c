// 函数: sub_4066c4
// 地址: 0x4066c4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* entry_ebx
bool c
*entry_ebx = adc.d(*entry_ebx, arg1, c)
int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags)
arg1.b = temp0
arg1:1.b = temp1
arg1.b ^= 4
*arg1 += arg1.b
char temp1_1 = *arg1
*arg1 += arg1.b
*arg1 = adc.b(*arg1, arg1.b, temp1_1 + arg1.b u< temp1_1)
void* eax = arg1 - 1
*eax += eax.b
char temp2 = *eax
*eax += eax.b
*eax = adc.b(*eax, eax.b, temp2 + eax.b u< temp2)
char temp3 = *(entry_ebx + 0x79) | arg2.b
*(entry_ebx + 0x79) = temp3

if (temp3 u>= 0)
    *(eax + 0x67) += eax:1.b
    *((eax + 1) * 2) += (eax + 1).b
    (eax + 1)[arg2] += arg3.b
    *(eax + 2 + arg5 + 0x30c80040) += entry_ebx:1.b
    eax:1.b = (eax + 3):1.b + arg3.b
else if (temp3 != 0)
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg6, arg2.w, eflags_1)
    *edi = temp0_1
    
    if (temp3 u>= 0)
        jump(sub_40660c+0x62)
    
    jump(0x4066e3)

*eax ^= eax.b
*eax <<= 1
void* eax_3
eax_3:1.b = (eax + 1):1.b + (eax + 1).b
*eax_3 ^= eax_3.b
*(arg5 + arg4 + 0x40) += eax_3:1.b
char temp4 = *(eax_3 + 0x130040b2)
*(eax_3 + 0x130040b2) += arg2:1.b
void* const* var_4 = &__return_addr
void* const** var_8 = &var_4
int32_t var_c
__builtin_strncpy(&var_c, "read", 4)
uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags_1)
void var_d
int32_t eflags_2
int16_t temp0_2
temp0_2, eflags_2 = __arpl_memw_gpr16(*(arg3 + 0x6c), &var_d)
*(arg3 + 0x6c) = temp0_2
__outsd(arg2.w, *esi, esi, eflags_2)

if (entry_ebx == 0xffffffff)
    if (entry_ebx == 0xffffffff)
        undefined
    
    jump(0x406773)

if (entry_ebx != 0xffffffff && arg3 != 1)
    *(arg4 + 0x53)
    *(arg4 + 0x53)
    bool c_5 = unimplemented  {imul esi, dword [ebp+0x53], 0x68636e79}
    
    if (c_5)
        jump(sub_4068bc+0xf)
    
    jump(sub_4067b4+0xa8)

*0x4067b43f = sbb.d(*0x4067b43f, arg6, temp4 + arg2:1.b u< temp4)
*(eax_3 * 2) += (arg3 - 1):1.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
void* eax_6
eax_6.b = (eax_3 + 1).b + arg2.b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1) += (eax_6 + 1).b
*(eax_6 + 1 + (arg4 << 1)) += (entry_ebx.w + 1):1.b
*(eax_6 + 2) += arg2:1.b
*(eax_6 + 2) += (eax_6 + 2).b
char temp7 = *(eax_6 + 2)
*(eax_6 + 2) += (eax_6 + 2).b
*(eax_6 + 2) = adc.d(*(eax_6 + 2), eax_6 + 2, temp7 + (eax_6 + 2).b u< temp7)
*(eax_6 - 0x2fffbfae) += (eax_6 + 3):1.b
*(eax_6 + 3) ^= (eax_6 + 3).b
int32_t esi_2
int16_t es
esi_2, es = __les_gprz_memp(*(eax_6 + 3))
*(eax_6 + 0x64004053) += arg2:1.b
*((esi_2 << 2) + 0x94004070) += arg2.b
*(0x94004030 + (arg2 << 1)) += ((eax_6 + 4).w + 1):1.b

if (arg4 != 1)
    jump(sub_406898+0x15)

jump(sub_4067b4+0x8d)
