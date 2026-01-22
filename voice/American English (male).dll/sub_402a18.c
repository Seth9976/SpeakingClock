// 函数: sub_402a18
// 地址: 0x402a18
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg1
int32_t edi = arg2
uint32_t i = zx.d(arg3)

while (i != 0)
    bool cond:0_1 = *esi == *edi
    esi += 1
    edi += 1
    i -= 1
    
    if (not(cond:0_1))
        break
