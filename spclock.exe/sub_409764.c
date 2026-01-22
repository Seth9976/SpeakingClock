// 函数: sub_409764
// 地址: 0x409764
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t numberOfBytesRead = arg3

if (ReadFile(arg1, arg2, arg3, &numberOfBytesRead, nullptr) == 0)
    numberOfBytesRead = 0xffffffff

return numberOfBytesRead
