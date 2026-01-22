// 函数: sub_403a30
// 地址: 0x403a30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (GetKeyboardType(0) == 7)
    int32_t eax_2 = GetKeyboardType(1) & 0xff00
    
    if (eax_2 == 0xd00 || eax_2 == 0x400)
        result.b = 1

return result
