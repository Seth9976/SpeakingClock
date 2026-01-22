// 函数: sub_4096e0
// 地址: 0x4096e0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char** Arguments = nullptr
void buffer
uint32_t i

for (i = FormatMessageA(
        FORMAT_MESSAGE_ARGUMENT_ARRAY | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, 
        nullptr, arg1, 0, &buffer, 0x100, Arguments); i s> 0; i -= 1)
    char edx = *(&Arguments:3 + i)
    
    if (edx u>= 0x21 && edx != 0x2e)
        break

sub_403adc(arg2, &buffer, i)
return arg2
