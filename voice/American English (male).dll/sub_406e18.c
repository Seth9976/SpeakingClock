// 函数: sub_406e18
// 地址: 0x406e18
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi_1 = arg2 & 3

if (esi_1 u<= 2 && (arg2 & 0xf0) u<= 0x40)
    return CreateFileA(sub_403e88(arg1), *((esi_1 << 2) + &data_413144), 
        *(((arg2 & 0xf0) u>> 4 << 2) + &data_413150), nullptr, OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, nullptr)

return 0xffffffff
