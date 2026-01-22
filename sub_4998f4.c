// 函数: sub_4998f4
// 地址: 0x4998f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = arg1[0xaa]

if (eax != 0)
    sub_499030(eax)

arg1[0xaa] = arg2

if (arg2 != 0)
    sub_423408(arg2, arg1)
    sub_499024(arg1[0xaa])

int16_t result = arg1[7].w & 0xb

if (0 != result)
    return result

return (*(*arg1 + 0x80))()
