// 函数: sub_451494
// 地址: 0x451494
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

bool c
char eax = adc.b(arg1, 0x45, c)
*arg3 += eax
eax |= 0x54
int32_t eflags
__outsd(arg2, *arg5, arg5, eflags)
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(__return_addr, arg9.w, eflags)
*edi_1 = temp0
int32_t arg_1c = arg9

if (eax u< 0)
    uint8_t* edi_2
    uint8_t temp0_1
    temp0_1, edi_2 = __insb(edi_1, arg9.w, eflags)
    *edi_2 = temp0_1
    
    if (arg4 == 1)
        undefined
    
    jump(0x4514a7)

uint16_t* esi_2 = __outsd(arg9.w, *arg6, arg6, eflags)
uint16_t* esi_3 = __outsb(arg9.w, *esi_2, esi_2, eflags)

if (arg8 != 0xffffffff)
    __outsd(arg9.w, *esi_3, esi_3, eflags)
    uint8_t* edi_3
    uint8_t temp0_2
    temp0_2, edi_3 = __insb(edi_1, arg9.w, eflags)
    *edi_3 = temp0_2
    
    if (eax u>= 0)
        jump(sub_4514c9-0x1a)
    
    jump(sub_4514c9+0x59)

char ecx_1
int16_t es
ecx_1, es = __les_gprz_memp(*(arg10 + 0x45))
char temp3 = *(arg8 + 1)
*(arg8 + 1) += ecx_1
arg10 = &arg_1c

if (temp3 + ecx_1 u< temp3)
    jump(sub_4514c9+0x131)

jump(sub_4514c9+0xd0)
