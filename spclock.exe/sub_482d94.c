// 函数: sub_482d94
// 地址: 0x482d94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_4803e0()
void* ebx_1
void* esi_1
ebx_1, esi_1 = sub_45b980(arg1, arg2)
sub_45b8ac(sub_482e83+1, esi_1)
int32_t ecx = *(ebx_1 + 0x26c)
int32_t eax_10

if (ecx == 0)
    int32_t eax_12
    eax_12.b = *(ebx_1 + 0x268) - *(ebx_1 + 0x264) s> 0x2710
    eax_10 = *((eax_12 & 0x7f) * 0xc + &data_4abc98 + (zx.d(*(ebx_1 + 0x252)) << 2))
else
    int32_t eax_6
    eax_6.b = divs.dp.d(sx.q(*(ebx_1 + 0x268) - *(ebx_1 + 0x264)), ecx) s> 0x2710
    eax_10 = *((eax_6 & 0x7f) * 0xc + &data_4abc98 + (zx.d(*(ebx_1 + 0x252)) << 2))

*(esi_1 + 4) = eax_10 | *(esi_1 + 4) | *((zx.d(*(ebx_1 + 0x250)) << 2) + &data_4abc90)
    | *((zx.d(*(ebx_1 + 0x251)) << 2) + &data_4abcb0) | 0x40
int32_t result = (*(esi_1 + 0x24) & 0xfffffffc) | 8
*(esi_1 + 0x24) = result

if (*(ebx_1 + 0x260) == 0)
    *(esi_1 + 4) |= 0x80

if (*(ebx_1 + 0x280) != 0)
    *(esi_1 + 4) |= 0x20

if (*(ebx_1 + 0x274) != 0)
    *(esi_1 + 4) |= 0x100

return result
