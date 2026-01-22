// 函数: sub_401480
// 地址: 0x401480
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t dwSize

if (arg1 s>= 0x100000)
    dwSize = (arg1 + 0xffff) & 0xffff0000
else
    dwSize = 0x100000

arg2[1] = dwSize
int32_t* result = VirtualAlloc(nullptr, dwSize, MEM_RESERVE, PAGE_NOACCESS)
*arg2 = result

if (result != 0)
    result = sub_401334(&data_4145e4, arg2)
    
    if (result.b == 0)
        VirtualFree(*arg2, 0, MEM_RELEASE)
        result = nullptr
        *arg2 = 0

return result
