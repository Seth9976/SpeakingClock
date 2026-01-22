// 函数: sub_40e6b2
// 地址: 0x40e6b2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
int32_t esp_1 = *(arg3 + 0x72) * 0x6e
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

if (edi_2 == 0xffffffff)
    arg1.b &= 0x8b
    0x5ccce646()
    bool p = unimplemented  {inc esp}
    
    if (not(p))
        jump(0x8b5c7317)
    
    undefined

void* entry_ebx
*(entry_ebx + 0x6b)
*(entry_ebx + 0x6b)
bool o = unimplemented  {imul esi, dword [ebx+0x6b], 0x65657246}
*(esp_1 - 4) = entry_ebx

if (o)
    jump(sub_40e700+0x33)

jump("ceExA")
