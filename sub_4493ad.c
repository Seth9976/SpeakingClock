// 函数: sub_4493ad
// 地址: 0x4493ad
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x6f) += arg3:1.b
int32_t eflags
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg5, arg2, eflags)
*edi = temp0
int16_t* edi_1
int16_t temp0_1
temp0_1, edi_1 = __insd(edi, arg2, eflags)
*edi_1 = temp0_1
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(edi_1, arg2, eflags)
*edi_2 = temp0_2
void* const __return_addr_1 = __return_addr
__return_addr = 0x706c65
*arg3 += arg3.b
*(entry_ebx + 0x6f) += arg3:1.b
int16_t* edi_3
int16_t temp0_3
temp0_3, edi_3 = __insd(__return_addr_1, arg2, eflags)
*edi_3 = temp0_3
int16_t* edi_4
int16_t temp0_4
temp0_4, edi_4 = __insd(edi_3, arg2, eflags)
*edi_4 = temp0_4
uint8_t* edi_5
uint8_t temp0_5
temp0_5, edi_5 = __insb(edi_4, arg2, eflags)
*edi_5 = temp0_5
*(arg4 + 0x65)
bool c = unimplemented  {imul ebp, dword [esi+0x64], 0x6c706552}
char ecx = arg10.b
char* eax = arg11
void arg_24
int32_t eflags_1
int16_t temp0_6
temp0_6, eflags_1 = __arpl_memw_gpr16(*arg8, &arg_24)
*arg8 = temp0_6
arg11 = arg6
__outsb(arg9.w, *arg7, arg7, eflags_1)
arg10 = eax

if (c)
    *eax += eax.b
    eax[0x64004ab6] += eax:1.b
    return eax

int32_t eflags_2
int16_t temp0_7
temp0_7, eflags_2 = __arpl_memw_gpr16(*(eax + 0x74), arg9.w)
*(eax + 0x74) = temp0_7

if (c)
    *0xa0004ab6 -= 0x4a
    int32_t eax_1
    eax_1:1.b = 0xb6
    *0xa000b6b6 += ecx
    char ecx_1
    int16_t es
    ecx_1, es = __les_gprz_memp(*(arg9 - 1))
    *0xa000b6b6 -= 0x4a
    *0xa000b6b6 -= 0x4a
    eax_1.b = 0xb6
    eax_1:1.b = 0xb6 + ecx_1
    return eax_1

int32_t cs
eax[0x25 + cs]
eax[cs]
*arg6 += ecx
*eax += eax.b
eax.b *= 2
int32_t edx
edx:1.b = 0x4a
eax:1.b += eax.b
*eax += eax.b
return eax
