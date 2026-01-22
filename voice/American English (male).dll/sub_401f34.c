// 函数: sub_401f34
// 地址: 0x401f34
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result = 0

if (arg1 s< 0)
    arg1 += 3

int32_t i = arg1 s>> 2

if (i s<= 0x400)
    do
        result = *(data_41461c + (i << 2) - 0xc)
        
        if (result != 0)
            break
        
        i += 1
    while (i != 0x401)

return result
