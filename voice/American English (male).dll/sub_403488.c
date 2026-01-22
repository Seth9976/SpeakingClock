// 函数: sub_403488
// 地址: 0x403488
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t eax = *arg1

if (eax s> 0xc0000092)
    if (eax s> 0xc0000096)
        if (eax == 0xc00000fd)
            eax.b = 0xca
        else if (eax == 0xc000013a)
            eax.b = 0xd9
        else
            eax.b = 0xff
    else if (eax == 0xc0000096)
        eax.b = 0xda
    else if (eax == 0xc0000093)
        eax.b = 0xce
    else if (eax == 0xc0000094)
        eax.b = 0xc8
    else if (eax == 0xc0000095)
        eax.b = 0xd7
    else
        eax.b = 0xff
else if (eax == 0xc0000092)
    eax.b = 0xcf
else if (eax s> 0xc000008e)
    int32_t eax_1 = eax + 0x3fffff71
    
    if (eax_1 u< 2)
        eax.b = 0xcf
    else if (eax_1 == 2)
        eax.b = 0xcd
    else
        eax.b = 0xff
else if (eax == 0xc000008e)
    eax.b = 0xc8
else if (eax == 0xc0000005)
    eax.b = 0xd8
else if (eax == 0xc000008c)
    eax.b = 0xc9
else if (eax == 0xc000008d)
    eax.b = 0xce
else
    eax.b = 0xff

int32_t ecx
sub_4026b8(ecx, arg1[3])
noreturn
