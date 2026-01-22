// 函数: sub_40c69c
// 地址: 0x40c69c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char** Arguments = nullptr
int64_t buffer[0x20]
uint32_t i

for (i = FormatMessageA(
        FORMAT_MESSAGE_ARGUMENT_ARRAY | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, 
        nullptr, arg1, 0, &buffer, 0x100, Arguments); i s> 0; i -= 1)
    char edx = *(&Arguments:3 + i)
    
    if (edx u>= 0x21 && edx != 0x2e)
        break

sub_404c78(arg2, &buffer, i)
return arg2
