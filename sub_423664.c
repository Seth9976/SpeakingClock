// 函数: sub_423664
// 地址: 0x423664
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = arg3
var_14.b = arg3.b

if (var_14.b == 1 && arg2 != 0)
    sub_423648(arg1, arg2)

void* result = *(arg1 + 0x10)

if (result != 0)
    int32_t i = *(result + 8) - 1
    
    while (i s>= 0)
        (*(*sub_41a0f4(*(arg1 + 0x10), i) + 0x10))(var_14)
        i -= 1
        result = *(arg1 + 0x10)
        
        if (i s>= *(result + 8))
            result = *(arg1 + 0x10)
            i = *(result + 8) - 1

return result
