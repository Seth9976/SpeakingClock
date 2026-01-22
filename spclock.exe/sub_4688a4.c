// 函数: sub_4688a4
// 地址: 0x4688a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0x17]

if (eax != 0)
    sub_468cb8(eax, arg1)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_423c9c(arg1, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
