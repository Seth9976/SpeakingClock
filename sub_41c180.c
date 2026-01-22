// 函数: sub_41c180
// 地址: 0x41c180
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
int32_t edx
edx.b = arg2.b & 0xfc
sub_41b190(arg1, edx)
int32_t eax_1 = arg1[7]

if (eax_1 != 0)
    sub_405724(arg1[6], 0x417cfc, eax_1)

arg1[7] = 0
int32_t result = (*(*arg1 + 0x28))()

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
