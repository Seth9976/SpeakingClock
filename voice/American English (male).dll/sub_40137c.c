// 函数: sub_40137c
// 地址: 0x40137c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_14 = arg3
int32_t* ebx = *arg1
*arg3 = *arg2
arg3[1] = arg2[1]

do
    int32_t* edi_1 = *ebx
    int32_t eax_1 = *arg3
    
    if (eax_1 == ebx[2] + ebx[3])
        sub_401364(ebx)
        *arg3 = ebx[2]
        arg3[1] += ebx[3]
    else if (eax_1 + arg3[1] == ebx[2])
        sub_401364(ebx)
        arg3[1] += ebx[3]
    
    ebx = edi_1
while (arg1 != ebx)

char result = sub_401334(arg1, arg3)

if (result == 0)
    result = 0
    *arg3 = 0

return result
