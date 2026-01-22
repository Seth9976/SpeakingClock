// 函数: sub_40dbb8
// 地址: 0x40dbb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp = arg1
int32_t result = 0

if (arg3 s> 0)
    arg1 = arg2
    
    if (arg1 != 0)
        arg1 = *(arg1 - 4)
    
    arg1.b = arg1 s< arg3
else
    arg1.b = 1

if (arg1.b == 0)
    arg1.b = sub_40d88c(arg2, arg3).b != 0
else
    arg1.b = 1

if (arg1.b == 0)
    result.b = sub_409e24(sub_405018(ebp), *(arg2 + arg3 - 1)) != 0

return result
