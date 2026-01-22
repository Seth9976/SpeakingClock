// 函数: sub_401041
// 地址: 0x401041
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg1 ^= arg1.b
*arg1 <<= 1
void* eax
eax:1.b = (&arg1[1]):1.b + (&arg1[1]).b
*eax ^= eax.b
*(arg5 + arg4 + 0x40) += eax:1.b
*(eax + 0x700402e) += eax:1.b
void* const* var_4 = &__return_addr
__bound_gprv_mema32(arg4, *(arg2 + 0x65))
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(arg7, arg5.w)
arg7 = temp0
*(arg6 - 1) += (eax + 1).b
void* var_6 = &var_4:2
__bound_gprv_mema32(arg4, *(arg2 + 0x65))
int32_t eflags_1
void* entry_ebx
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(eax + 1 + (entry_ebx << 1) + 0x10), arg5.w)
*(eax + 1 + (entry_ebx << 1) + 0x10) = temp0_1
*(eax + 2) += (eax + 2).b
*(eax + 2) += (eax + 2).b
*(eax + 2) += (eax + 2).b
char temp1 = *arg5
*arg5 += (eax + 2).b
void* var_a = entry_ebx

if (temp1 + (eax + 2).b s< 0)
    if (temp1 == neg.b((eax + 2).b))
        jump(sub_4010d1+0x11)
    
    jump(0x40107d)

char temp2 = *(eax + 2)
*(eax + 2) += (eax + 2).b
*(eax + 2) = rlc.d(*(eax + 2), 1, temp2 + (eax + 2).b u< temp2)
*(eax + 3) += arg3.b
*(eax + 3) += (eax + 3).b
*(eax + 3) += (eax + 3).b
*(eax + 3) += (eax + 3).b
*(arg4 + 0x114c0040) += arg3.b
char temp3 = arg3:1.b
arg3:1.b += entry_ebx.b
*(eax + 4) = adc.b(*(eax + 4), (eax + 4).b, temp3 + entry_ebx.b u< temp3)
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
*(eax + 4) += (eax + 4).b
char temp4 = *(eax + 4)
*(eax + 4) += (eax + 4).b
*(eax + 4) = adc.d(*(eax + 4), eax + 4, temp4 + (eax + 4).b u< temp4)
void* eax_6
eax_6.b = (eax + 4).b
*eax_6 += eax_6.b
eax_6.b |= 0x10
*(eax_6 + 1 + &arg5[1] + 0x4f940040) += entry_ebx:1.b
*(eax_6 - 0x2fffbfaf) += (eax_6 + 2):1.b
*(eax_6 + 2) ^= (eax_6 + 2).b
uint16_t* esi_1
int16_t es_1
esi_1, es_1 = __les_gprz_memp(*(eax_6 + 2))
*(eax_6 + 0x64004052) += arg2:1.b
*(eax_6 + 0x11004032) += (eax_6 + 4):1.b
void var_b
void* var_f = &var_b
__outsb(arg2.w, *esi_1, esi_1, eflags_1)

if (arg3 != 1)
    jump(0x401152)

entry_ebx:1.b s>>= 0x25
void* var_13 = eax_6 + 4
int32_t var_17 = arg3 - 1
*(entry_ebx + 0x4c25ffc0) += arg3.b
int32_t var_1b = arg3
*(entry_ebx + 0x4825ffc0) += (arg3 + 1).b
int32_t var_1f = arg3 + 1
*(entry_ebx + 0x4425ffc0) += (arg3 + 2).b
int32_t var_23 = arg3 + 2
*(entry_ebx + 0x4025ffc0) += (arg3 + 3).b
int32_t var_27 = arg3 + 3
*(entry_ebx + 0x3c25ffc0) += (arg3 + 4).b
int32_t var_2b = arg3 + 4
*(entry_ebx + 0x3825ffc0) += (arg3 + 5).b
int32_t var_2f = arg3 + 5
*(entry_ebx + 0x3425ffc0) += (arg3 + 6).b
int32_t var_33 = arg3 + 6
*(entry_ebx - 0x7fda0040) += (arg3 + 7).b
int32_t var_37 = arg3 + 7
*(entry_ebx + 0x3025ffc0) += (arg3 + 8).b
int32_t var_3b = arg3 + 8
*(entry_ebx + 0x2c25ffc0) += (arg3 + 9).b
int32_t var_3f = arg3 + 9
*(entry_ebx + 0x2825ffc0) += (arg3 + 0xa).b
int32_t var_43 = arg3 + 0xa
*(entry_ebx - 0x67da0040) += (arg3 + 0xb).b
int32_t var_47 = arg3 + 0xb
*(entry_ebx - 0x6bda0040) += (arg3 + 0xc).b
int32_t var_4b = arg3 + 0xc
*(entry_ebx - 0x6fda0040) += (arg3 + 0xd).b
int32_t var_4f = arg3 + 0xd
*(entry_ebx + 0x2425ffc0) += (arg3 + 0xe).b
int32_t var_53 = arg3 + 0xe
*(entry_ebx + 0x2025ffc0) += (arg3 + 0xf).b
int32_t var_57 = arg3 + 0xf
*(entry_ebx - 0x57da0040) += (arg3 + 0x10).b
int32_t var_5b = arg3 + 0x10
*(entry_ebx - 0x5bda0040) += (arg3 + 0x11).b
int32_t var_5f = arg3 + 0x11
*(entry_ebx - 0x5fda0040) += (arg3 + 0x12).b
int32_t var_63 = arg3 + 0x12
*(entry_ebx + 0x1c25ffc0) += (arg3 + 0x13).b
int32_t var_67 = arg3 + 0x13
*(entry_ebx + 0x1825ffc0) += (arg3 + 0x14).b
int32_t var_6b = arg3 + 0x14
*(entry_ebx + 0x1425ffc0) += (arg3 + 0x15).b
int32_t var_6f = arg3 + 0x15
*(entry_ebx + 0x1025ffc0) += (arg3 + 0x16).b
int32_t var_73 = arg3 + 0x16
*(entry_ebx - 0x3b7cac40) += (arg3 + 0x16).b + 1
*(eax_6 + 4 + (arg4 << 3) + 0x59) += arg2.b
undefined
