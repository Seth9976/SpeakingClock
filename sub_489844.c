// 函数: sub_489844
// 地址: 0x489844
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
*(sx.d(arg1.w) - 1) += (sx.d(arg1.w) - 1).b
char* eax_1
eax_1:1.b = (sx.d(arg1.w) - 1):1.b + arg2.b
*(sx.d(eax_1.w) + 0x6fffffff) += (sx.d(eax_1.w) - 1).b
char* ecx
ecx.b = *(sx.d(eax_1.w) - 1)
*arg2 s>>= 0x42
int32_t entry_ebx
*(arg3 + arg4 + 0x33fc0040) += entry_ebx:1.b
char* eax_3
eax_3:1.b = (sx.d(eax_1.w) - 1):1.b + (sx.d(eax_1.w) - 1).b
eax_3[0x403f] += entry_ebx:1.b
*(&__return_addr + arg4) += entry_ebx.b
*ecx += entry_ebx.b
void* eax_6
eax_6.b = (&eax_3[1]).b + (&arg2[1]):1.b
*arg3 - *arg4
int32_t esi = arg3 + 4
int32_t edi = arg4 + 4
*(edi + (entry_ebx << 2) + 0x48) += entry_ebx:1.b
*(eax_6 - 0x5f) += eax_6:1.b
*(edi + esi + 0x36640042) += entry_ebx.b
void* eax_7
eax_7.b = (eax_6 - 1).b + (&ecx[1]):1.b
*(eax_7 - 1 + edi + 0x3ad80042) += (eax_7 - 1):1.b
*(edi + esi + 0x37b40042) += entry_ebx:1.b
void* eax_8
eax_8.b = (eax_7 - 1).b + (eax_7 - 1):1.b
arg2[4]
int32_t eflags_1
char temp0_1
char temp1
temp0_1, temp1, eflags_1 = __aam_immb(0xa0, eax_8.b)
eax_8.b = temp0_1
eax_8:1.b = temp1
char temp0_2 = *(eax_8 - 1)
*(eax_8 - 1) += (&arg2[4]).b
*(ecx + 1) = sbb.d(*(ecx + 1), &ecx[1], temp0_2 + (&arg2[4]).b u< temp0_2)
breakpoint
