// 函数: sub_46fe4c
// 地址: 0x46fe4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = sub_45ee70(arg1)

if (*(arg1 + 0x1d9) != 0)
    result = sub_46fe34(arg1)
    
    if (result == arg1[0x1c])
        return sub_457978(arg1, 0xff00000f)
else if (arg1[0x1c] == 0xff00000f)
    return sub_457978(arg1, sub_46fe34(arg1))

return result
