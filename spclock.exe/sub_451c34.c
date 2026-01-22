// 函数: sub_451c34
// 地址: 0x451c34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* entry_ebx
char* ebx_3 = entry_ebx + 1
bool z_1 = entry_ebx == 0xffffffff
int32_t eflags
uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
bool c

if (z_1)
    if (not(z_1) && not(c))
        ebx_3[(esi_1 << 1) + 0x44]
        __outsd(arg2.w, *esi_1, esi_1, eflags)
        
        if (arg4 == 1)
            jump(0x451d1d)
        
        jump(0x451cb8)
    
    *arg2 += arg3.b
    ebx_3[(arg1 << 1) + 0x61]
    ebx_3[(arg1 << 1) + 0x61] |= arg2.b
    bool p = unimplemented  {or byte [ebx+eax*2+0x61], dl}
    
    if (true)
        uint16_t ebp_8 = 1 - (*(arg6 + 0x6e)).w * 0x3f75
        *ebx_3 += arg1.b
        bool cond:3 = (arg2 | *(arg3 + (arg1 << 1) + 0x6e)) u< 0
        int32_t eflags_1
        int16_t temp0_3
        temp0_3, eflags_1 = __arpl_memw_gpr16(*(arg1 + 0x6f), ebp_8)
        *(arg1 + 0x6f) = temp0_3
        
        if (cond:3)
            jump(sub_451d5a+0x1f)
        
        jump(0x451d2e)
    
    if (not(p))
        undefined
    
    arg1.b *= 2
    void** esp
    *(esp - 4) = arg1
    *(esp - 8) = arg3
    *(esp - 0xc) = arg2
    *(esp - 0x10) = ebx_3
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = arg4 + 2
    *(esp - 0x1c) = esi_1
    *(esp - 0x20) = arg6
    char temp11 = *arg1
    *arg1 += arg2.b
    *(esp - 0x24) = esp - 0x20
    *(esp - 0x28) = ebx_3
    *(arg2 + 0x65)
    
    if (temp11 == neg.b(arg2.b))
        jump(sub_451d5a+0x120)
    
    jump(sub_451d5a+0xae)

__outsd(arg2.w, *esi_1, esi_1, eflags)
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0
char* arg_1c
void arg_72

if (not(c))
    arg2.b |= *(&arg_72 + (arg1 << 1))
    void* const __return_addr_2 = __return_addr
    arg_1c = arg10
    
    if (arg2.b != 0)
        if (arg2.b == 0)
            jump(0x451ced)
        
        jump(sub_45171c+0x56c)
    
    int16_t es
    arg12 = zx.d(es)
    TEB* fsbase
    char temp8 = arg10[0x6f] | ((*(fsbase + __return_addr_2 + (arg8 << 1) + 0x63)).b * 0x6b)
    arg10[0x6f] = temp8
    __outsb(arg11.w, *arg7, arg7, eflags)
    
    if (temp8 == 0)
        jump(sub_451d5a+0xc)
    
    jump(sub_451d5a-0x66)

arg1.b = sbb.b(arg1.b, 0x45, c)
*ebx_3 += arg1.b
*(&arg_72 + (arg1 << 1)) |= arg2
void* const __return_addr_1 = __return_addr
uint16_t edx = arg11.w
char* eax = arg_1c
__outsd(edx, *arg7, arg7, eflags)
int32_t* gsbase
*(gsbase + eax) = &eax[*(gsbase + eax)]
*eax += eax.b
*arg12 += eax.b
*eax += eax.b
int32_t arg_20
*(&arg_20 + arg10) += arg10:1.b
*eax += arg12.b
int16_t* edi_1
int16_t temp0_1
temp0_1, edi_1 = __insd(__return_addr_1, edx, eflags)
*edi_1 = temp0_1
int32_t edi_2 = arg_20
__outsb(arg16, *arg13, arg13, eflags)

if (arg8 == 1)
    uint8_t* edi_3
    uint8_t temp0_2
    temp0_2, edi_3 = __insb(edi_2, arg16, eflags)
    *edi_3 = temp0_2
    void arg_40
    
    if ((&arg_40 | *(arg14 * 3 + 0x41)) != 0)
        jump(sub_45171c+0x5bf)
    
    jump(sub_45171c+0x54b)

arg18 = arg14
*arg17
void var_44e0
void* var_44e4 = &var_44e0

if (arg17 + *arg17 u< arg17)
    jump(0x451d2f)

jump(0x451cce)
