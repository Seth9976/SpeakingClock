// 函数: sub_47b748
// 地址: 0x47b748
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
var_8:3.b = arg2
char result = sub_459658(arg1, var_8:3.b, arg3, arg4)

if (*(arg3 + 0x1a1) != 0)
    if (arg3[0x68].b != 0)
        var_8:2.b = 3
    else
        var_8:2.b = 0
    
    if (arg1 s>= 0 && arg1 s< sub_45714c(arg3) && arg4 s>= 0 && arg4 s<= sub_457190(arg3))
        if (arg3[0x68].b == 0)
            var_8:2.b = 2
        else
            var_8:2.b = 3
    
    result = var_8:2.b
    
    if (result != *(arg3 + 0x1b2))
        *(arg3 + 0x1b2) = var_8:2.b
        return (*(*arg3 + 0x80))()
else if (*(arg3 + 0x1b1) == 0)
    return sub_47b65c(arg3)

return result
