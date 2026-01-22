// 函数: sub_43b92c
// 地址: 0x43b92c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_43ad7c(arg1, arg2)
int32_t esi
esi.w = 0xffc7
int32_t eax_7 = *((sub_403e64(arg1, esi) & 0x7f) * 0xc + &data_4aafcc + (zx.d(arg1[0x9d].b) << 2))
    | (arg2[1] & not.d(*((zx.d(*(arg1 + 0x276)) << 2) + &data_4aaff4))) | 4
int32_t result = eax_7 | *((zx.d(*(arg1 + 0x275)) << 2) + &data_4aafe4)
arg2[1] = result
return result
