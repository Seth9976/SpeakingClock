// 函数: sub_403c5c
// 地址: 0x403c5c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t var_c = arg3
char* edi = arg2
bool cond:1 = false

while (arg3 != 0)
    char temp0_1 = *edi
    cond:1 = 0 != temp0_1
    edi = &edi[1]
    arg3 -= 1
    
    if (0 == temp0_1)
        break

if (not(cond:1))
    arg3 = not.d(arg3)

return sub_403adc(arg1, arg2, arg3 + var_c) __tailcall
