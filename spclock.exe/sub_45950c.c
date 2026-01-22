// 函数: sub_45950c
// 地址: 0x45950c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t var_20 = *arg2
int32_t var_1c = *arg3

if (sub_458934(arg1, &var_20, &var_1c) != 0)
    int32_t var_18 = var_20
    int32_t var_14 = var_1c
    
    if (arg1[0x17].b == 0)
        result.b = 1
    else if (sub_4588c8(arg1, &var_18, &var_14) == 0 || var_18 != var_20 || var_14 != var_1c)
        if (sub_458934(arg1, &var_18, &var_14) != 0)
            result.b = 1
        else
            result = 0
    else
        result.b = 1
    
    if (result.b != 0)
        *arg2 = var_18
        *arg3 = var_14

return result
