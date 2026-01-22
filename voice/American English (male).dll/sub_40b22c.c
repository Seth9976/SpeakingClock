// 函数: sub_40b22c
// 地址: 0x40b22c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

HMODULE hModule = GetModuleHandleA(sub_40b262+2)

if (hModule != 0)
    hModule = GetProcAddress(hModule, sub_40b262+0x12)
    data_413138 = hModule

if (data_413138 == 0)
    hModule = sub_406ff8
    data_413138 = sub_406ff8

return hModule
