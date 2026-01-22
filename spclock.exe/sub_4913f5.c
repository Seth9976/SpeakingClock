// 函数: sub_4913f5
// 地址: 0x4913f5
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2.b
sub_404074(arg3, arg2)
sub_403c68(*(arg3 + 0x40))
sub_40eb14(&arg3[0x54])
sub_40eb14(&arg3[0x58])
sub_40eb14(&arg3[0x60])
sub_40eb14(&arg3[0xa0])

if (*data_4abfa4 == 0)
    CloseHandle(*(arg3 + 0xa8))

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_423380(arg3, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg3)
