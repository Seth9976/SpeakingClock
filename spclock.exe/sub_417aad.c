// 函数: sub_417aad
// 地址: 0x417aad
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg6
int32_t edi = arg6 + 1
arg5[arg4 * 2].b += (arg3 + 1):1.b
char* entry_ebx
*arg1 += entry_ebx:1.b
*edi
*(&arg5[arg4 * 2] + 0x41) += arg2:1.b
*entry_ebx += (arg3 + 3).b
int32_t eflags
uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
uint8_t* edi_2
uint8_t temp0
temp0, edi_2 = __insb(edi + 1, arg2, eflags)
*edi_2 = temp0
uint8_t* edi_3
uint8_t temp0_1
temp0_1, edi_3 = __insb(edi_2, arg2, eflags)
*edi_3 = temp0_1
int32_t eflags_1
int32_t gsbase
int16_t temp0_2
temp0_2, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg3 + 3 + (arg4 << 1) + 0x6f), esi.w)
*(gsbase + arg3 + 3 + (arg4 << 1) + 0x6f) = temp0_2
__outsb(arg2, *esi, esi, eflags_1)
breakpoint
