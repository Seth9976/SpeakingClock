// 函数: sub_432e98
// 地址: 0x432e98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
char* eax
eax.b = __in_al_immb(0x2e, eflags)
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
eax:1.b += arg1:1.b
*(eax * 2) += eax.b
*eax += eax.b
arg6 f- fconvert.t(*eax)
eax[0xbc00403f] += arg2:1.b
void* eax_2
eax_2.b = (&eax[2]).b * 2
void* eax_3
eax_3:1.b = (eax_2 + 1):1.b + (eax_2 + 1).b
void* entry_ebx
*(eax_3 + 0x403f) += (entry_ebx + 2):1.b
*(&__return_addr + arg5) += (entry_ebx + 2).b
*(eax_3 + 0x3e) += (entry_ebx + 2).b
void* eax_6 = eax_3 + 3
*(arg5 + arg3 + 0x43) += eax_6:1.b
*(eax_6 + 0x2f) += arg1:1.b
char temp1 = *arg4
*arg4 += arg1.b
void* var_8 = entry_ebx + 3
uint16_t* esi

if (temp1 + arg1.b s>= 0)
    esi = __outsd(arg2.w, *arg4, arg4, eflags)
else
    int32_t eflags_1
    char temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(eax_6 + 0x72), arg3.w)
    *(eax_6 + 0x72) = temp0
    esi = __outsd(arg2.w, *arg4, arg4, eflags_1)
    __bound_gprv_mema32(arg3, *(arg2 + 0x65))
    int32_t eflags_2
    char temp0_1
    temp0_1, eflags_2 = __arpl_memw_gpr16(*(eax_6 + (arg2 << 2) + 0x48), esi.w)
    *(eax_6 + (arg2 << 2) + 0x48) = temp0_1
    int32_t eflags_3
    char temp0_2
    temp0_2, eflags_3 = __das(eax_6.b, eflags_2)
    eax_6.b = temp0_2
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *(eax_6 + 0x2f) += arg2.b
    *(eax_6 * 2) += (entry_ebx + 5).b
    *eax_6 += eax_6.b
    int32_t eax_7 = sx.d(eax_6.w)
    *(eax_7 - 0x43ffbfc2) += arg2:1.b
    void* eax_8
    eax_8.b = (eax_7 + 1).b * 2
    void* eax_9
    eax_9:1.b = (eax_8 + 1):1.b + (eax_8 + 1).b
    *(eax_9 + 0x403f) += (entry_ebx + 6):1.b
    *(&var_8 + arg5 - 1) += (entry_ebx + 6).b
    *(arg5 - 1 + arg3 + 0x2fdc0043) += arg1:1.b
    eax_6.b = (eax_9 + 2).b + arg1:1.b
    int32_t eflags_4
    char temp0_3
    temp0_3, eflags_4 = __das(eax_6.b, eflags_3)
    eax_6.b = temp0_3
    char temp2_1 = *eax_6
    *eax_6 += arg2.b
    int32_t* var_c = &var_8
    
    if (temp2_1 + arg2.b u< temp2_1)
        *(entry_ebx - 0x31d7f24) -= 1
    label_432fc7:
        int32_t eax_13 = sub_403c58(arg1, arg2)
        
        if ((entry_ebx + 9).b s<= 0)
            return eax_13
        
        return sub_40401c(esi)
    
    if (entry_ebx == 0xfffffff7)
        arg2.b = (entry_ebx + 9).b & 0xfc
        goto label_432fc7
    
    int32_t eflags_5
    char temp0_4
    temp0_4, eflags_5 = __arpl_memw_gpr16(*(arg1 + 0x6c), &var_c)
    *(arg1 + 0x6c) = temp0_4
    void* var_10 = entry_ebx + 9
    int32_t gsbase
    char temp0_5
    temp0_5, eflags = __arpl_memw_gpr16(*(gsbase + arg1 + (arg3 << 1) + 0x6f), esi.w)
    *(gsbase + arg1 + (arg3 << 1) + 0x6f) = temp0_5

__outsb(arg2.w, *esi, esi, eflags)
return eax_6
