// 函数: sub_4321c4
// 地址: 0x4321c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_430e98(arg1)
sub_430878(arg1)
void* eax_2 = arg1[0xa]
int32_t result = *(eax_2 + 8)

if (result == *(eax_2 + 0x14))
    *(eax_2 + 0x14) = 0
    *(eax_2 + 0x2c) = 0

*(eax_2 + 8) = 0
return result
