// 函数: sub_40972c
// 地址: 0x40972c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint8_t lCData[0x100]
int32_t eax = GetLocaleInfoA(arg3, arg2, &lCData, 0x100)

if (eax s<= 0)
    return sub_403a40(arg4, arg1)

sub_403adc(arg4, &lCData, eax - 1)
return arg4
