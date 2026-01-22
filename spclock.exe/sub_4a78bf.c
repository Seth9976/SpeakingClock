// 函数: sub_4a78bf
// 地址: 0x4a78bf
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 -= 1
*arg1 += arg1.b
char temp1 = *(arg3 + 0x6e)
*(arg3 + 0x6e) += arg3.b
bool c = temp1 + arg3.b u< temp1
bool z = temp1 == neg.b(arg3.b)
int32_t eflags

if (c)
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(__return_addr, arg8.w, eflags)
    *edi_1 = temp0_1
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(edi_1, arg8.w, eflags)
    *edi_2 = temp0_2
    *arg8
    undefined

uint16_t* esi_1 = __outsd(arg2.w, *arg5, arg5, eflags)
int32_t* entry_ebx

if (z)
    entry_ebx[-0x1d0f1d0a] -= 1
    entry_ebx:1.b = adc.b(entry_ebx:1.b, entry_ebx:1.b, c)
    char* eax_1 = arg2
    *eax_1 += eax_1.b
    *(entry_ebx - 0x4a61173d) += __return_addr.b
    arg1 = *((*(entry_ebx - 0x3d))() + 0x3fc)
else
    if (not(z) && not(c))
        return sub_472f50(entry_ebx)
    
    int32_t esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    TEB* fsbase
    uint16_t* esi_3 = __outsd(arg2.w, *(fsbase + esi_2), esi_2, eflags)
    
    if (z || c)
        char temp2_1 = esi_3[0x3a].b & arg3:1.b
        esi_3[0x3a].b = temp2_1
        int32_t eflags_1
        int16_t temp0_3
        temp0_3, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x72), esi_3.w)
        *(arg4 + 0x72) = temp0_3
        
        if (temp2_1 u>= 0)
            __outsb(arg2.w, *esi_3, esi_3, eflags_1)
            
            if (temp2_1 == 0)
                undefined
            
            jump("ersion\run")
        
        *arg1 += arg1.b
return sub_49fcdc(arg1)
