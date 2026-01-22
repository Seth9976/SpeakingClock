// 函数: sub_407912
// 地址: 0x407912
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
ebx.b = *(arg1 - 0xd)
int16_t ecx = 3

if (*(arg1 - 0x2a) != 0)
    ebx.b = *(arg1 - 0xe)
    ecx = 0x40f

if (ebx.b u> ecx.b)
    ebx.b = ecx.b

ebx.b += ecx:1.b
char* ebx_2 = ebx * 5 + 0x407975 + *(arg1 - 0x14)
char result

for (int32_t i = 5; i != 0; i -= 1)
    result = *ebx_2
    
    if (result == 0x40)
        break
    
    if (result == 0x24)
        sub_407966(arg1)
    else if (result == 0x2a)
        result = sub_4078ad(arg1, arg2)
    else
        *arg2 = result
        arg2 = &arg2[1]
    
    ebx_2 = &ebx_2[1]

return result
