// 函数: sub_43e614
// 地址: 0x43e614
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_43e10c(arg1, arg2)
sub_45b8ac(sub_43e664, arg2)
int32_t esi
esi.w = 0xffc7
int32_t result = *(((sub_403e64(arg1, esi) & 0x7f) << 3) + &data_4ab064 + (zx.d(arg1[0x96].b) << 2))
    | arg2[1] | 5
arg2[1] = result
arg2[9] &= 0xfffffffc
return result
