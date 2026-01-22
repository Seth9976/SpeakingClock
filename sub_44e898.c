// 函数: sub_44e898
// 地址: 0x44e898
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 != 0 && (*(arg1 + 0x34) != 0 || *(arg1 + 0x6c) != 0))
    sub_44b814(arg1)

if (*(arg1 + 0x64) != 0)
    return sub_44e898(0)

int32_t* __saved_ecx_1 = *(arg1 + 4)
char result = sub_403df4(__saved_ecx_1, 0x44a270)

if (result == 0)
    return result

return sub_45081c(__saved_ecx_1)
