// 函数: sub_429fba
// 地址: 0x429fba
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_4 = *(arg1 - 0x2bffbd19)
int32_t eflags
__out_immb_oeax(0x42, arg1, eflags)
*arg1 += arg3.b
int32_t* var_8 = &var_4
char* var_c = arg1
void* entry_ebx
*(entry_ebx + 0x74)
char temp1 = (&arg1[1]):1.b
void* eax
eax:1.b = (&arg1[1]):1.b + arg2.b
bool p = unimplemented  {add ah, dl}
bool a = unimplemented  {add ah, dl}
eax:1.b = (temp1 + arg2.b s< 0 ? 1 : 0) << 7 | (temp1 == neg.b(arg2.b) ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (temp1 + arg2.b u< temp1 ? 1 : 0)
*arg6 += eax.b
char temp2 = *(eax + ((arg2 + 1) << 1) + 0x69)
*(eax + ((arg2 + 1) << 1) + 0x69) |= (arg2 + 1).b
bool p_1 = unimplemented  {or byte [eax+edx*2+0x69], dl}
bool a_1 = undefined
int32_t eflags_1
int16_t temp0
temp0, eflags_1 = __arpl_memw_gpr16(*(arg4 + (arg5 << 1) + 0x72), arg5.w)
*(arg4 + (arg5 << 1) + 0x72) = temp0
void* esp_1 = eax
char* eax_1
eax_1:1.b = ((temp2 | (arg2 + 1).b) s< 0 ? 1 : 0) << 7 | ((temp2 | (arg2 + 1).b) == 0 ? 1 : 0) << 6
    | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
*(arg3 + (arg6 << 1)) += (arg2 + 2):1.b
*eax_1 += eax_1.b
char temp3 = *eax_1
*eax_1 += (arg3 + 1).b

if (temp3 + (arg3 + 1).b u< temp3)
    goto label_42a04d

if (add_overflow(arg6, 1))
    *eax_1 += eax_1.b
else
    void* esp_2 = *(entry_ebx + 0x73) * 0x40900000
    eax_1.b = *0x42
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    eax_1.b = *0x80042
    *eax_1 += eax_1.b
    arg7 f- fconvert.t(*eax_1)
    eax_1[0xbc00403f] += (arg2 + 2):1.b
    void* eax_3
    eax_3.b = (&eax_1[2]).b * 2
    void* eax_4
    eax_4:1.b = (eax_3 + 1):1.b + (eax_3 + 1).b
    *(eax_4 + 0x403f) += entry_ebx:1.b
    *(esp_2 + 1 + &arg6[1]) += entry_ebx.b
    *(eax_4 + 0x3e) += entry_ebx.b
    *(eax_4 + 0xc004036) += (eax_4 + 3):1.b
    *(esp_2 - 3) = esp_2 + 1
    *(esp_2 - 7) = entry_ebx
    *(esp_2 - 0xb) = 0x64657261
    esp_1 = esp_2 - 0xb
label_42a04d:
    int16_t* edi_1
    int16_t temp0_2
    temp0_2, edi_1 = __insd(&arg6[1], (arg2 + 2).w, eflags_1)
    *edi_1 = temp0_2
    *esp_1
    *(esp_1 + 4)
    *(esp_1 + 8)
    *(esp_1 + 0x10)
    *(esp_1 + 0x14)
    *(esp_1 + 0x18)
    eax_1.b = *0x42a0

*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 += eax_1.b
eax_1[0x240042] += eax_1:1.b
*eax_1 += eax_1.b
trap(0xd)
