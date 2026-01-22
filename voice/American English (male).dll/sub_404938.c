// 函数: sub_404938
// 地址: 0x404938
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (*(arg1 + 0x10) == 0)
    uint8_t filename[0x108]
    GetModuleFileNameA(*(arg1 + 4), &filename, 0x105)
    int32_t edx_1
    edx_1.b = 1
    enum WIN32_ERROR eax_2 = sub_404b74(&filename)
    *(arg1 + 0x10) = eax_2
    
    if (eax_2 == NO_ERROR)
        *(arg1 + 0x10) = *(arg1 + 4)

return *(arg1 + 0x10)
