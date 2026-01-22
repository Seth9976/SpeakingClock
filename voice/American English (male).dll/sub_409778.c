// 函数: sub_409778
// 地址: 0x409778
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t lCData = arg3

if (GetLocaleInfoA(arg1, arg2, &lCData, 2) s<= 0)
    return arg3

int32_t eax
eax.b = lCData.b
return eax
