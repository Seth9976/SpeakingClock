// 函数: sub_480c70
// 地址: 0x480c70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_4803e0()
int32_t* ebx_1
int32_t esi
ebx_1, esi = sub_45b980(arg1, arg2)
sub_45b8ac(sub_480d67+1, arg2)
esi.w = 0xffc7
arg2[1] = *((sub_403e64(ebx_1, esi) & 0x7f) * 0x10 + &data_4abc5c + (zx.d(*(ebx_1 + 0x26e)) << 2))
    | arg2[1] | 0x2000000 | *((zx.d(*(ebx_1 + 0x26d)) << 2) + &data_4abc7c)
    | *((zx.d(*(ebx_1 + 0x263)) << 2) + &data_4abc88)

if (ebx_1[0x76].b == 0)
    arg2[1] |= 0x8000

if (ebx_1[0x98].b != 0)
    arg2[1] |= 0x200

if (*(ebx_1 + 0x261) != 0)
    arg2[1] |= 4

if (*(ebx_1 + 0x262) != 0 && (ebx_1[7].b & 0x10) == 0)
    arg2[1] |= 0x2000

if (ebx_1[0x9d].w != 0)
    arg2[1] |= 0x400

if (ebx_1[0x95].b != 0 && (ebx_1[7].b & 0x10) == 0)
    arg2[1] |= 0x40

if (ebx_1[0x9b].b != 0)
    arg2[1] |= 1

int32_t result = (arg2[9] & 0xfffffffc) | 8
arg2[9] = result
return result
