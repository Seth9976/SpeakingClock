// 函数: sub_402d20
// 地址: 0x402d20
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result = 0

if (GetKeyboardType(0) == 7)
    int32_t eax_2 = GetKeyboardType(1) & 0xff00
    
    if (eax_2 == 0xd00 || eax_2 == 0x400)
        result.b = 1

return result
