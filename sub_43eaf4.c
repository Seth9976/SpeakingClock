// 函数: sub_43eaf4
// 地址: 0x43eaf4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx_1
int32_t esi
ebx_1, esi = sub_45b980(arg1, arg2)
sub_45b8ac(sub_43eb68, arg2)
esi.w = 0xffc7
int32_t result =
    *((sub_403e64(ebx_1, esi) & 0x7f) * 0xc + &data_4ab084 + (zx.d(ebx_1[0x94].b) << 2)) | arg2[1]
    | 0x100 | *((zx.d(*(ebx_1 + 0x252)) << 2) + &data_4ab09c)
arg2[1] = result

if (ebx_1[0x96].b == 0)
    arg2[1] |= 0x80

arg2[9] &= 0xfffffffe
return result
