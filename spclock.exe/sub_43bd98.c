// 函数: sub_43bd98
// 地址: 0x43bd98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
eax.b = arg2.b ^ 1
LRESULT result = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xb, eax & 0x7f, 0)
int32_t ebx
ebx.b = arg2.b ^ 1

if (ebx.b == 0)
    return result

return sub_457dd8(*(arg1 + 0x18))
