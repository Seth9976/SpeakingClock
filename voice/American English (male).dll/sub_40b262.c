// 函数: sub_40b262
// 地址: 0x40b262
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg1 += arg1.b
int32_t* esp = *(arg3 + 0x72) * 0x6e
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg5, arg2.w, eflags)
*edi = temp0
*arg2
uint8_t* edi_1
uint8_t temp0_1
temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
*edi_1 = temp0_1
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(edi_1, arg2.w, eflags)
*edi_2 = temp0_2
*arg1 += arg1.b
*arg1 += arg1.b
int32_t esi_1

if (edi_2 == 0xffffffff)
    esi_1 = 0
    goto label_40b2bf

void* entry_ebx
*(entry_ebx + 0x6b)
esi_1 = *(entry_ebx + 0x6b) * 0x65657246
bool o_1 = unimplemented  {imul esi, dword [ebx+0x6b], 0x65657246}
*(esp - 4) = entry_ebx
esp -= 4
int32_t ecx

if (not(o_1))
    int32_t eflags_1
    int16_t temp0_3
    temp0_3, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x45), esp.w)
    *(arg3 + 0x45) = temp0_3
    
    if (&edi_2[1] s>= 0)
        *(arg2 + 1) += entry_ebx:1.b
        int32_t eax_1 = *arg1
        *arg1 += arg2
        return eax_1 + 1
    
    char temp3_1 = arg1.b
    arg1.b -= 0x7b
    bool cond:1_1 = temp3_1 == 0x7b
    __in_oeax_dx(arg2.w, eflags_1)
    
    while (true)
        if (not(cond:1_1))
            do
                void** eax_4 = arg3
                arg3 = *arg3
                ecx = sub_402648(eax_4)
            while (arg3 != 0)
        
        esi_1 += 1
        
        if (esi_1 == 0x10)
            break
        
    label_40b2bf:
        arg3 = *(edi_2 + 1 + (esi_1 << 2) + 4)
        *(edi_2 + 1 + (esi_1 << 2) + 4) = 0
        cond:1_1 = arg3 == 0
    
    arg2 = entry_ebx

arg2.b &= 0xfc
int32_t result = sub_402ea0(ecx, arg2)

if (entry_ebx.b s> 0)
    result = sub_403148(&edi_2[1])

*esp
esp[1]
esp[2]
esp[3]
return result
