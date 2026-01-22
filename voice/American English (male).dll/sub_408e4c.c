// 函数: sub_408e4c
// 地址: 0x408e4c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char var_d = 0
*arg4 = 0
sub_408e28(arg3, arg2)
int32_t i = *arg2
int32_t esi = 0

for (; i s<= sub_403c88(arg3); i += 1)
    int32_t eax_6
    eax_6.b = *(arg3 + i - 1)
    eax_6.b -= 0x30
    char temp1_1 = eax_6.b
    eax_6.b -= 0xa
    
    if (temp1_1 u>= 0xa)
        break
    
    if (esi.w u>= 0x3e8)
        break
    
    int16_t edx_1
    edx_1.b = *(arg3 + i - 1)
    int32_t eax_4
    eax_4.w = (esi * 0xa).w + edx_1 - 0x30
    esi = eax_4

if (i s> *arg2)
    *arg4 = i.b - (*arg2).b
    *arg2 = i
    *arg1 = esi.w
    var_d = 1

int32_t* result
result.b = var_d
return result
