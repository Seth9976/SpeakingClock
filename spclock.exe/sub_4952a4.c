// 函数: sub_4952a4
// 地址: 0x4952a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t* eax = arg1[0xc]
eax[2] = 0
eax[3] = 0
sub_403c68(eax)
int32_t* eax_1 = arg1[0xb]
eax_1[2] = 0
eax_1[3] = 0
sub_403c68(eax_1)
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_41a6e0(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
