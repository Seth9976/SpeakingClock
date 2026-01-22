// 函数: sub_468792
// 地址: 0x468792
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
__out_dx_oeax(arg2.w, arg1, eflags)
*(arg1 - 0x57ffb96b) += 1
uint16_t* esi = arg5 + 1
char temp1 = *0x73754354
*0x73754354 += arg3.b
int32_t var_1
char* eax_2
int32_t edx
char* entry_ebx
void* eax_5

if (temp1 == neg.b(arg3.b))
    eax_5 = arg4 + 1
    *eax_5 += eax_5.b
label_468817:
    *(&var_1:1 + arg6) += entry_ebx.b
    *(entry_ebx + arg6 + 0x3ba80042) += arg3:1.b
    edx = arg2 + 1
    void* eax_6
    eax_6.b = (eax_5 + 1).b + (eax_5 + 1):1.b
    *edx
    eax_2 = eax_6 + 1
else
    int32_t temp0_1
    temp0_1, arg6 = __insd(arg6, arg2.w, eflags)
    *arg6 = temp0_1
    arg3 += 1
    int32_t eflags_1
    int16_t temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(arg3 + (arg1 << 1) + 0x6f), esi.w)
    *(arg3 + (arg1 << 1) + 0x6f) = temp0_2
    void* eax_1
    eax_1.b = 0x87
    esi = __outsb(arg2.w, *esi, esi, eflags_1) + 1
    *arg6 -= 0x79
    eax_2 = eax_1 | 0x73754354
    
    if ((eax_1 | 0x73754354) != 0)
        int32_t temp0_3
        temp0_3, arg6 = __insd(arg6, arg2.w, eflags_1)
        *arg6 = temp0_3
        int32_t eflags_2
        int16_t temp0_4
        temp0_4, eflags_2 = __arpl_memw_gpr16(*(arg3 + 1 + (arg1 << 1) + 0x6f), esi.w)
        *(arg3 + 1 + (arg1 << 1) + 0x6f) = temp0_4
        int32_t esi_2 = __outsb(arg2.w, *esi, esi, eflags_2)
        *(arg6 - 0x7b7fffba) = sbb.b(*(arg6 - 0x7b7fffba), eax_2.b, false)
        *entry_ebx += eax_2.b
        *eax_2 += (arg3 + 1).b
        arg3 += 2
        int32_t eflags_3
        int16_t temp0_5
        temp0_5, eflags_3 = __arpl_memw_gpr16(*(esi_2 + 1 + (arg1 << 1) + 0x4c), (esi_2 + 1).w)
        *(esi_2 + 1 + (arg1 << 1) + 0x4c) = temp0_5
        esi = *(entry_ebx + 0x74) * 0x88200000 + 1
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
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[0x18004688] += entry_ebx.b
        *eax_2 += eax_2.b
        eax_2[0xb0004187] += arg3.b
        *(esi + arg6 + 0x3ec00040) += entry_ebx:1.b
        void* eax_4
        eax_4:1.b = (&eax_2[2]):1.b + (&eax_2[2]).b
        eax_5 = eax_4 + 1
        *(eax_5 + 0x403e) += entry_ebx:1.b
        goto label_468817
    
    eax_2[0x3c] += eax_2.b
    edx = arg2 + 1
*(&var_1:1 + arg6) += edx.b
void arg_42
*(&arg_42 + arg6) += eax_2.b
*(entry_ebx + arg6 + 0x42) += eax_2:1.b
eax_2.b += entry_ebx:1.b
*(edx + 1)
eax_2:1.b += eax_2.b
*esi
long double result = arg7 * fconvert.t(*(esi - 0x7113ffba))
char temp3 = *eax_2
*eax_2 += eax_2.b
*(esi + 1) = var_1
eax_2.b = adc.b(eax_2.b, 0x8f, temp3 + eax_2.b u< temp3)
*eax_2 += arg3:1.b
*(esi + 2) = __return_addr
eax_2[0xffffff8f] += (edx + 1).b
*(&arg6[arg3] + 0x46) += eax_2:1.b
eax_2[0xffffff8f] += entry_ebx:1.b
*(&arg6[arg3] - 0x706fffba) += arg3.b
*(&arg6[arg3] - 0x7067ffba) += (edx + 1).b
*(&arg6[arg3] - 0x705fffba) += entry_ebx.b
*(&arg6[arg3] - 0x7057ffba) += eax_2:1.b
*(&arg6[arg3] - 0x704fffba) += arg3:1.b
*(&arg6[arg3] - 0x7047ffba) += (edx + 1):1.b
*entry_ebx += arg3.b
void arg_7
__return_addr = &arg_7
int32_t eflags_4
int16_t temp0_6
temp0_6, eflags_4 = __arpl_memw_gpr16(*(arg3 + 1 + (arg1 << 1) + 0x6f), (esi + 0xb).w)
*(arg3 + 1 + (arg1 << 1) + 0x6f) = temp0_6
void* esi_16 = __outsb((edx + 1).w, *(esi + 0xb), esi + 0xb, eflags_4)
*(esi_16 + 0x6b)
entry_ebx:1.b = 0xf9
*(entry_ebx - 0x740f7426) -= 1

if (eax_2 != 0)
    sub_468cb8(eax_2, esi_16 + 1)

char* edx_3
edx_3.b = entry_ebx.b & 0xfc
sub_423c9c(esi_16 + 1, edx_3)

if (entry_ebx.b s> 0)
    sub_40401c(esi_16 + 1)

*__return_addr
*(__return_addr + 4)
return result
