// 函数: sub_409894
// 地址: 0x409894
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = GetFileAttributesA(sub_405018(arg1))

if (result == 0xffffffff || (result.b & 0x10) == 0)
    return 0

result.b = 1
return result
