// 函数: sub_406cf4
// 地址: 0x406cf4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_8 = ecx
var_8:3.b = 0

if (arg2 s>= 0)
    int32_t i_1 = arg2 + 1
    int32_t* ebx_1 = arg1
    int32_t i
    
    do
        if (sub_406a3c(*(arg3 - 4), *ebx_1).b != 0)
            var_8:3.b = 1
            break
        
        ebx_1 = &ebx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1.b = var_8:3.b
return arg1
