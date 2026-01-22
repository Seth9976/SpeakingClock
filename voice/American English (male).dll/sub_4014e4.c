// 函数: sub_4014e4
// 地址: 0x4014e4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg3[1] = 0x100000
int32_t* result = VirtualAlloc(arg1, 0x100000, MEM_RESERVE, PAGE_READWRITE)
*arg3 = result

if (result == 0)
    uint32_t dwSize = (arg2 + 0xffff) & 0xffff0000
    arg3[1] = dwSize
    result = VirtualAlloc(arg1, dwSize, MEM_RESERVE, PAGE_READWRITE)
    *arg3 = result

if (*arg3 != 0)
    result = sub_401334(&data_4145e4, arg3)
    
    if (result.b == 0)
        VirtualFree(*arg3, 0, MEM_RELEASE)
        result = nullptr
        *arg3 = 0

return result
