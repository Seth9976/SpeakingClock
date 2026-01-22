// 函数: sub_40970c
// 地址: 0x40970c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi_1 = arg2 & 3

if (esi_1 u<= 2 && (arg2 & 0xf0) u<= 0x40)
    return CreateFileA(sub_405018(arg1), *((esi_1 << 2) + &data_4aa834), 
        *(((arg2 & 0xf0) u>> 4 << 2) + &data_4aa840), nullptr, OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, nullptr)

return 0xffffffff
