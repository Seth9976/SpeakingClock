// 函数: sub_402860
// 地址: 0x402860
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* ebx = arg1
int32_t result = 0
arg1.w = *(ebx + 4)

if (arg1.w u>= 0xd7b1 && arg1.w u<= 0xd7b3)
    arg1.w &= 0xd7b2
    
    if (arg1.w == 0xd7b2)
        result = (*(ebx + 0x1c))()
    
    if (result == 0)
        result = (*(ebx + 0x24))()
    
    if (result != 0)
        sub_40273c(result)
else if (ebx != 0x414048)
    sub_40273c(0x67)

return result
