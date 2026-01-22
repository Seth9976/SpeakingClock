// 函数: sub_40b5cc
// 地址: 0x40b5cc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_c = arg3
sub_40b318(*(arg1 + 0x20), &var_c)
int32_t* eax_1 = var_c
eax_1[3] += 1
int32_t ebx
ebx.b = var_c[3] u> 1
uint32_t result = GetCurrentThreadId()

if (result != *(arg1 + 0x24) && ebx.b == 0)
    sub_40b4c0(arg1)
    
    while (true)
        result = sub_40b294(arg1 + 0xc)
        
        if (result s> 0)
            break
        
        if (sub_40b288(arg1 + 0xc) == 0xffff)
            sub_40b4b4(arg1)
        
        Sleep(0)
        sub_40b4c0(arg1)

return result
