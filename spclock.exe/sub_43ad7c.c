// 函数: sub_43ad7c
// 地址: 0x43ad7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx_1
void* esi_1
ebx_1, esi_1 = sub_45b980(arg1, arg2)
sub_45b8ac(sub_43ae2b+1, esi_1)
uint32_t edx_2
edx_2.b = *(ebx_1 + 0x255) != 0
int32_t eax_6 = *(esi_1 + 4) | 0xc0 | *((zx.d(*(ebx_1 + 0x254)) << 2) + &data_4aaf74)
    | *(((edx_2 & 0x7f) << 2) + &data_4aaf9c) | *((zx.d(*(ebx_1 + 0x256)) << 2) + &data_4aafa4)
int32_t eax_9 = eax_6 | *((zx.d(*(ebx_1 + 0x25b)) << 2) + &data_4aafac)
    | *((zx.d(*(ebx_1 + 0x259)) << 2) + &data_4aafb8)
    | *((zx.d(*(ebx_1 + 0x25a)) << 2) + &data_4aafc0)
*(esi_1 + 4) = eax_9
void* result = data_4ac1d0

if (*result != 0 && *(ebx_1 + 0x1d9) != 0 && *(ebx_1 + 0x254) == 1)
    *(esi_1 + 4) &= 0xff7fffff
    *(esi_1 + 8) |= 0x200

return result
