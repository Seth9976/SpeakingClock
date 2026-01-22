// 函数: sub_406ec8
// 地址: 0x406ec8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t numberOfBytesWritten = arg3

if (WriteFile(arg1, arg2, arg3, &numberOfBytesWritten, nullptr) == 0)
    numberOfBytesWritten = 0xffffffff

return numberOfBytesWritten
