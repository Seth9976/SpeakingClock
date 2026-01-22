// 函数: sub_48c8fe
// 地址: 0x48c8fe
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* const __return_addr_1 = __return_addr
uint16_t edx_2 = arg3
int32_t ecx_3 = arg4
uint16_t* esi = *(arg2 + 0x65) * 0x64740864
__builtin_strncpy(&arg4, "adow", 4)
int32_t temp1 = arg11
arg11 |= esi
bool z = (temp1 | esi) == 0
bool c
int32_t eflags

if (not(z))
    if (z)
        int16_t* edi_3
        int16_t temp0_2
        temp0_2, edi_3 = __insd(*(arg5 + 0x65) * 0x726f466c, edx_2, eflags)
        *edi_3 = temp0_2
        int32_t edi_4 = arg4
        char* eax_1 = arg10
        
        if (z)
            *eax_1 += eax_1.b
            *(eax_1 * 2) += eax_1.b
        else
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            eax_1.b = eax_1.b
        
        char temp8 = *eax_1
        *eax_1 += eax_1.b
        void* eax_2
        int32_t ecx_1
        int16_t edx_1
        eax_2, edx_1, ecx_1 = 0xa4912d8()
        
        if (temp8 + eax_1.b u< temp8)
            jump(0x48ca11)
        
        *(eax_2 + 1) += (eax_2 + 1).b
        char arg_38[0x2f]
        arg_38[edi_4] += arg7
        void* eax_4
        eax_4.b = (eax_2 + 2).b + ecx_1:1.b
        int32_t eflags_1
        int32_t eip
        eip, eflags_1 = __into(eflags)
        void* eax_5
        eax_5.b = (eax_4 - 1).b + edx_1:1.b
        *arg2 - *edi_4
        *eax_5 += eax_5:1.b
        trap(0x48)
    
    arg3 = &arg4
    __outsd(edx_2, *esi, esi, eflags)
    *(__return_addr_1 + 0x68)
    *(__return_addr_1 + 0x68)
    c = unimplemented  {imul esp, dword [edi+0x68], 0x4d4c0874}
else
    uint8_t temp0_1
    temp0_1, __return_addr_1 = __insb(__return_addr_1, edx_2, eflags)
    *__return_addr_1 = temp0_1
    *(esi + 0x65)
    int32_t ebp = *(esi + 0x65) * 0x45647409
    c = unimplemented  {imul ebp, dword [esi+0x65], 0x45647409}
    
    if ((temp1 | esi) s< 0)
        *(ebp + (ecx_3 << 1) + 0x44)
        *(ebp + (ecx_3 << 1) + 0x44) |= ecx_3.b
        c = false
    else if (not(c))
        void* eax
        eax.b = arg5.b | 0x74
        
        if (ebp + 1 s< 0)
            jump(sub_48c7f6+0x1a4)
        
        jump(0x48c926)

if (c)
    if (__return_addr_1 + 1 s< 0)
        jump(sub_48ca48+0x17)
    
    jump(0x48c9fa)

if (add_overflow(__return_addr_1, 1))
    jump(0x48ca01)

jump(sub_48c7f6+0x1a3)
