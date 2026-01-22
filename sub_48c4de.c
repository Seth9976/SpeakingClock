// 函数: sub_48c4de
// 地址: 0x48c4de
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint16_t* esi_2 = __outsd(arg2, *arg4, arg4, eflags)
uint16_t* esi = __outsb(arg2, *esi_2, esi_2, eflags)
int32_t entry_ebx
int32_t gsbase
char temp1 = *(gsbase + entry_ebx + (esi << 1) + 0x53)
*(gsbase + entry_ebx + (esi << 1) + 0x53) |= arg3:1.b
bool z = (temp1 | arg3:1.b) == 0
*(esi + 0x67)
int32_t ebp = *(esi + 0x67) * 0x6c09656c
bool c = unimplemented  {imul ebp, dword [esi+0x67], 0x6c09656c}

if (c)
    __outsd(arg2, *esi, esi, eflags)
    
    if (not(z) && not(c))
        if (c)
            jump(sub_48c413+0x155)
        
        jump(sub_48c413+0x147)
    
    if (c)
        jump(0x48c558)
    
    jump(0x48c4f3)

if (not(z))
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg5, arg2, eflags)
    *edi = temp0
    
    if (not(c))
        undefined
    
    jump(0x48c540)

int16_t cs
uint32_t var_4 = zx.d(cs)
uint8_t* edi_1
uint8_t temp0_1
temp0_1, edi_1 = __insb(arg5, arg2, eflags)
*edi_1 = temp0_1

if (not(c))
    int32_t var_8 = entry_ebx
    
    if (ebp == 0xffffffff)
        jump(sub_48c624+6)
    
    jump(sub_48c5a1+0x10)

*(esi + 0x64)
*(esi + 0x64)
bool c_1 = unimplemented  {imul ebp, dword [esi+0x64], 0x6f42776f}

if (c_1)
    jump(sub_48c5a1+0x1a)

jump(0x48c557)
