// 函数: sub_406918
// 地址: 0x406918
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char* i = sub_403c88(arg1)
char result = sub_403f68(arg2, i)
void* edx_1 = arg1
char* esi_1 = *arg2

for (; i != 0; i -= 1)
    result = *edx_1
    
    if (result u>= 0x41 && result u<= 0x5a)
        result += 0x20
    
    *esi_1 = result
    edx_1 += 1
    esi_1 = &esi_1[1]

return result
