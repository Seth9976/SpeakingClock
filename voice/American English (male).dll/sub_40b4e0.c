// 函数: sub_40b4e0
// 地址: 0x40b4e0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_14 = arg3
int32_t result
result.b = 1
uint32_t eax = GetCurrentThreadId()

if (eax != *(arg1 + 0x24))
    sub_40b49c(arg1)
    int32_t ebp_1 = *(arg1 + 0x28)
    sub_40b318(*(arg1 + 0x20), &var_14)
    result.b = var_14[3] u> 0
    
    if (result.b != 0)
        sub_40b288(arg1 + 0xc)
    
    while (sub_40b2a8(arg1 + 0xc, 0xffff0001) != 0xffff)
        if (sub_40b2a8(arg1 + 0xc, 0xffff) != 0)
            sub_40b4d0(arg1)
    
    sub_40b49c(arg1)
    
    if (result.b != 0)
        sub_40b294(arg1 + 0xc)
    
    *(arg1 + 0x24) = eax
    result.b = sub_40b288(arg1 + 0x28) - 1 == ebp_1

*(arg1 + 0x1c) += 1
return result
