// 函数: sub_40b318
// 地址: 0x40b318
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_14 = ecx
char eax_1 = sub_40b300()
uint32_t eax_2 = GetCurrentThreadId()
int32_t eax_3
eax_3.b = eax_1
int32_t* i

for (i = *(arg1 + (eax_3 << 2) + 4); i != 0; i = *i)
    if (eax_2 == i[1])
        break

if (i == 0)
    i = sub_40b3a0(arg1)
    
    if (i == 0)
        i = sub_4068bc(0x10)
        i[1] = eax_2
        i[2] = 0x7fffffff
        *i = i
        int32_t eax_7
        eax_7.b = eax_1
        *i = sub_40b2a0(arg1 + (eax_7 << 2) + 4, i)

*arg2 = i
return arg2
