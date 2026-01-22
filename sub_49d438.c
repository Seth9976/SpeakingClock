// 函数: sub_49d438
// 地址: 0x49d438
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg2:1.b |= 0x49
*(arg6 + (arg3 << 3) - 0x5d77ffb7) += arg2:1.b
*(arg5 + ((arg3 - 1) << 3)) += (arg3 - 1):1.b
int32_t entry_ebx
*(arg1 - 0x2f) += entry_ebx.b
*(arg1 - 0x2f) += arg1:1.b
*(arg4 * 5 + 0x49) += arg1:1.b
arg1.b += (arg3 - 4).b
int32_t ecx_4
int16_t es
ecx_4, es = __les_gprz_memp(*(arg3 - 4))
arg1:1.b = arg1.b
*(arg1 - 0x3b) += arg2.b
arg1:1.b *= 2
arg1.b += entry_ebx:1.b
int32_t ecx_8
int16_t es_1
ecx_8, es_1 = __les_gprz_memp(*(ecx_4 - 3))
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
char temp1 = *(arg1 + 0x340049c6)
*(arg1 + 0x340049c6) += entry_ebx:1.b
bool p = unimplemented  {add byte [eax+0x340049c6], bh}
bool a = unimplemented  {add byte [eax+0x340049c6], bh}
arg1:1.b = (temp1 + entry_ebx:1.b s< 0 ? 1 : 0) << 7 | (temp1 == neg.b(entry_ebx:1.b) ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (temp1 + entry_ebx:1.b u< temp1 ? 1 : 0)
*(arg6 + (entry_ebx << 2)) += entry_ebx:1.b
arg1:1.b *= 2
*(arg4 + 4 + ((ecx_8 - 4) << 3) + 0x540d0049) += arg1:1.b
*arg4 = arg1
int32_t edi = *arg4
uint16_t* esi = *(arg4 + 4)
int16_t edx = (*(arg4 + 0x14)).w
int32_t eax = *(arg4 + 0x1c)
__outsb(edx, *esi, esi, eflags)
uint8_t* edi_1
uint8_t temp0_1
temp0_1, edi_1 = __insb(edi, edx, eflags)
*edi_1 = temp0_1
*edi_1 += eax.b
*(arg4 + 0x1c) = eax | 0x444d4c54
int32_t edi_2 = *(arg4 + 0x1c)
uint16_t* esi_2 = *(arg4 + 0x20)
int32_t ebp = *(arg4 + 0x24)
char* edx_1 = *(arg4 + 0x30)
char ecx_13 = (*(arg4 + 0x34)).b
int32_t eax_2 = *(arg4 + 0x38)
__outsb(edx_1.w, *esi_2, esi_2, eflags)
uint8_t* edi_3
uint8_t temp0_2
temp0_2, edi_3 = __insb(edi_2, edx_1.w, eflags)
*edi_3 = temp0_2
int32_t esp_7 = *(arg4 + 0x3c + (ebp << 1) - 0x24) * 0x49d2 + 4
*edx_1 += ecx_13 - 1
eax_2.b |= 0x4c
*(esp_7 - 3) = eax_2
int32_t edi_4 = *(esp_7 - 3)
uint16_t* esi_4 = *(esp_7 + 1)
int32_t ebp_2 = *(esp_7 + 5)
*(esp_7 + 0xd)
int16_t edx_2 = (*(esp_7 + 0x11)).w
*(esp_7 + 0x15)
char* eax_3 = *(esp_7 + 0x19)
__outsb(edx_2, *esi_4, esi_4, eflags)
uint8_t* edi_5
uint8_t temp0_3
temp0_3, edi_5 = __insb(edi_4, edx_2, eflags)
*edi_5 = temp0_3
*(esp_7 + 0x1d + (ebp_2 << 1) + 0x3d)
eax_3.b += eax_3:1.b
eax_3.b += *eax_3
jump(eax_3)
