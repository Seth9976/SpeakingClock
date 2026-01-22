// 函数: sub_451e22
// 地址: 0x451e22
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[arg5 << 1] += arg2:1.b
*(arg1 * 2) += arg1.b
void* entry_ebx
char temp1 = *(entry_ebx + 0x6f) | arg1.b
*(entry_ebx + 0x6f) = temp1
int32_t eflags
uint16_t* esi = __outsb(arg2, *arg4, arg4, eflags)

if (temp1 != 0)
    __outsd(arg2, *esi, esi, eflags)
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg5, arg2, eflags)
    *edi = temp0
    
    if (temp1 u>= 0)
        jump(0x451e3e)
    
    jump(0x451e3a)

*(arg1 * 2) += arg2.b
char* ecx_1 = arg9
char* arg_1d
char* eax = arg_1d
*ecx_1 += eax.b
*eax += eax.b
*arg7 += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*arg7 += eax.b
*eax += ecx_1.b
*(arg6 + 0x57)
int32_t ebp = *(arg6 + 0x57) * 0x68746469
bool c = unimplemented  {imul ebp, dword [esi+0x57], 0x68746469}
*arg6 = rrc.b(*arg6, 1, c)
*ecx_1 += eax.b
int32_t edx_1 = arg8 | *(ebp + 1 + (ecx_1 << 1) + 0x61)

if (edx_1 u>= 0)
    *(arg6 + 0x53)
    *eax += eax.b
    *eax += eax.b
    undefined

arg7[(edx_1 << 1) + 0x550c0046] += edx_1.b
eax[0x8004653] += (ecx_1.w + 1):1.b
arg_1d = arg7
char temp3 = *eax
*eax += (ecx_1.w + 1).b
arg9 = &arg_1d

if (temp3 + (ecx_1.w + 1).b u< temp3)
    jump(sub_451eec+0xd1)

jump(sub_451eec+0x6a)
