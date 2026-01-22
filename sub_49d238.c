// 函数: sub_49d238
// 地址: 0x49d238
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0xbd]
*(eax + 8) = 0
*(eax + 0xc) = 0
void* eax_1 = arg1[0xbe]
*(eax_1 + 8) = 0
*(eax_1 + 0xc) = 0
sub_40eb14(&arg1[0xbd])
sub_40eb14(&arg1[0xbe])
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_49c454(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
