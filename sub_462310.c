// 函数: sub_462310
// 地址: 0x462310
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)

if (arg1[0xc] != 0)
    void* eax = arg1[5]
    *(eax + 0x38) = arg1[0xc]
    *(eax + 0x3c) = arg1[0xd]
    arg1[0xc] = 0
    arg1[0xd] = 0

sub_4635a4(arg1, arg1[0x19])
int32_t edx_3
edx_3.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_403c68(arg1[4]), edx_3)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
