// 函数: sub_486d02
// 地址: 0x486d02
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1
int32_t entry_ebx
entry_ebx:1.b *= 2
*arg1 += arg1
*arg1 += arg1.b
*arg1 += arg1.b
arg1[-0x20000000].b += arg1.b
void* eax = arg1 + *arg1
*(arg4 + 0x6e) |= arg3
int32_t var_4
__builtin_strncpy(&var_4, "ange", 4)
int32_t var_8 = entry_ebx + 1
int32_t ecx = sub_404074(eax, arg2)
void* eax_2 = *(eax + 4)

if (eax_2 != 0)
    ecx = sub_486e68(eax_2, eax)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_403c58(ecx, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(eax)
