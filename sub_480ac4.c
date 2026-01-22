// 函数: sub_480ac4
// 地址: 0x480ac4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = *(arg1 + 0x18)
edi[0x9e].b = arg2.b
int32_t eax
eax.b = arg2.b ^ 1
LRESULT result = SendMessageA(sub_45f888(edi), 0xb, eax & 0x7f, 0)
int32_t ebx
ebx.b = arg2.b ^ 1

if (ebx.b == 0)
    return result

(*(**(arg1 + 0x18) + 0x80))()
return sub_481360(*(arg1 + 0x18))
