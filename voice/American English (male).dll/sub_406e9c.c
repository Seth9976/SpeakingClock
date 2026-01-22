// 函数: sub_406e9c
// 地址: 0x406e9c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t numberOfBytesRead = arg3

if (ReadFile(arg1, arg2, arg3, &numberOfBytesRead, nullptr) == 0)
    numberOfBytesRead = 0xffffffff

return numberOfBytesRead
