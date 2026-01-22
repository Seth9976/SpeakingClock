// 函数: sub_493594
// 地址: 0x493594
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0x14]
*(eax + 0x38) = 0
*(eax + 0x3c) = 0
void* eax_1 = arg1[0x15]
*(eax_1 + 0x38) = 0
*(eax_1 + 0x3c) = 0
void* eax_2 = arg1[0x17]
*(eax_2 + 0x38) = 0
*(eax_2 + 0x3c) = 0
void* eax_3 = arg1[0x16]
*(eax_3 + 0x38) = 0
*(eax_3 + 0x3c) = 0
sub_403c68(arg1[0x14])
sub_403c68(arg1[0x15])
sub_403c68(arg1[0x16])
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_486e08(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
