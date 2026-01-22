// 函数: sub_4028d8
// 地址: 0x4028d8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t eax
int32_t edx
edx:eax = sx.q(arg1)
uint32_t i = (eax ^ edx) - edx
int32_t i_2 = 0
char var_24[0x14]

do
    int32_t edx_1 = 0
    uint8_t temp1_1 = (modu.dp.d(edx_1:i, 0xa)).b
    i = divu.dp.d(edx_1:i, 0xa)
    var_24[i_2] = temp1_1 + 0x30
    i_2 += 1
while (i != 0)

if (arg1 s< 0)
    var_24[i_2] = 0x2d
    i_2 += 1

*arg3 = i_2.b
char* edi_1 = &arg3[1]
int32_t ecx = arg2

if (ecx s> 0xff)
    ecx = 0xff

int32_t count = ecx - i_2

if (ecx s> i_2)
    edi_1[0xffffffff] += count.b
    i.b = 0x20
    edi_1 = __builtin_memset(edi_1, 0x20, count)

int32_t i_1

do
    void var_25
    i.b = *(&var_25 + i_2)
    *edi_1 = i.b
    edi_1 = &edi_1[1]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return i
