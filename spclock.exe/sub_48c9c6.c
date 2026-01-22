// 函数: sub_48c9c6
// 地址: 0x48c9c6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint16_t* esi_2 = __outsd(arg2, *arg5, arg5, eflags)
void* entry_ebx
arg1:1.b |= *(entry_ebx + (esi_2 << 1) + 0x53)

if (arg1:1.b != 0)
    __outsb(arg2, *esi_2, esi_2, eflags)
    
    if (arg1:1.b u< 0)
        jump(0x48ca36)
    
    jump(0x48c9d2)

__bound_gprv_mema32(arg4, *(arg3 + 0x74))
*(entry_ebx + 0x70) |= arg2:1.b
*esi_2 ^= esi_2.w
__bound_gprv_mema32(arg4, *(arg3 + 0x74))
char temp0 = *(arg4 + (arg3 << 1) + 0x44) | arg3.b
*(arg4 + (arg3 << 1) + 0x44) = temp0

if (temp0 u< 0)
    undefined

jump(0x48ca41)
