// 函数: sub_40706c
// 地址: 0x40706c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi = arg1
int32_t i = 0xffffffff

while (i != 0)
    bool cond:0_1 = 0 != *edi
    edi += 1
    i -= 1
    
    if (not(cond:0_1))
        break

return 0xfffffffe - i
