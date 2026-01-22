// 函数: sub_420600
// 地址: 0x420600
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = sub_41c874(*(arg1 + 4))

if (result s<= arg2 && arg2 s<= *(arg1 + 0x10) + result)
    *(arg1 + 0x10) = arg2 - result
    return result

sub_420728(arg1)
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(arg2)
return sub_41c894(*(arg1 + 4), eax_3, edx_2)
