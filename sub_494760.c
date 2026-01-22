// 函数: sub_494760
// 地址: 0x494760
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t* eax = arg1[6]
eax[4] = 0
eax[5] = 0
sub_403c68(eax)
sub_403c68(arg1[9])
int32_t* eax_2 = arg1[7]
eax_2[2] = 0
eax_2[3] = 0
sub_403c68(eax_2)
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_41a6e0(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
