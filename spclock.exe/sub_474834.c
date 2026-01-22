// 函数: sub_474834
// 地址: 0x474834
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (arg3 == 1)
    result.b = sub_46e140(arg1) s< sub_46e140(arg2)
else if (arg3 == 2)
    result.b = sub_46e140(arg2) + *(arg2 + 0x4c) s< sub_46e140(arg1) + *(arg1 + 0x4c)
else if (arg3 == 3)
    result.b = sub_46e120(arg1) s< sub_46e120(arg2)
else if (arg3 == 4)
    result.b = sub_46e120(arg2) + *(arg2 + 0x48) s< sub_46e120(arg1) + *(arg1 + 0x48)

return result
