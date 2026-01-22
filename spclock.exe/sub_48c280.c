// 函数: sub_48c280
// 地址: 0x48c280
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0x17]

if (eax != 0)
    sub_428174(eax)
    sub_40eb14(&arg1[0x17])

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
