// 函数: sub_445500
// 地址: 0x445500
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0x11]

if (eax != 0)
    sub_424aac(eax)

void* eax_1 = arg1[0x10]

if (eax_1 != 0)
    *(eax_1 + 0x250) = 0

sub_40eb14(&arg1[0x10])
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
