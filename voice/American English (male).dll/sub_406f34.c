// 函数: sub_406f34
// 地址: 0x406f34
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i = sub_403c88(arg2)
char* eax_3 = sub_403e88(arg1)

for (; i s> 0; i -= 1)
    int32_t ebx
    ebx.b = *(arg2 + i - 1)
    
    if (ebx.b != 0 && sub_40710c(eax_3, ebx.b) != 0)
        if (sub_40a790(arg2, i) != 2)
            break
        
        i -= 1

return i
