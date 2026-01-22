// 函数: sub_484ed8
// 地址: 0x484ed8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1d60 == 0)
    data_4b1d60 = LoadLibraryA(sub_484f46+2)
    
    if (data_4b1d60 u<= 0x20)
        data_4b1d60 = 0

sub_43b92c(arg1, arg2)
sub_45b8ac(sub_484f46+0x12, arg2)
int32_t result = arg2[1] | *((zx.d(arg1[0xa0].b) << 2) + &data_4abcd4)
    | *((zx.d(arg1[0xaa].b) << 2) + &data_4abcdc)
arg2[1] = result
arg2[9] &= 0xfffffffc
return result
