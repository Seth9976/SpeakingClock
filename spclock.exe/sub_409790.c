// 函数: sub_409790
// 地址: 0x409790
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t numberOfBytesWritten = arg3

if (WriteFile(arg1, arg2, arg3, &numberOfBytesWritten, nullptr) == 0)
    numberOfBytesWritten = 0xffffffff

return numberOfBytesWritten
