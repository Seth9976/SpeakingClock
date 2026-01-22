// 函数: sub_40abf4
// 地址: 0x40abf4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_c = ebx
int32_t* CodePage
void* ebp
CodePage, ebp = sub_40ab80(data_414740)
BOOL result = GetCPInfo(CodePage, arg1 - 0x14)

for (int32_t i = 0; i s< 0xc; i += 2)
    result.b = (arg1 - 0x14)->LeadByte[i]
    result.b |= (arg1 - 0x14)->LeadByte[1 + i]
    
    if (result.b == 0)
        break
    
    result.b = (arg1 - 0x14)->LeadByte[i]
    ebx.b = (arg1 - 0x14)->LeadByte[1 + i]
    char temp0_1 = ebx.b
    ebx.b -= result.b
    
    if (temp0_1 u>= result.b)
        ebx += 1
        *(ebp - 1) = result.b
        char j
        
        do
            result.b = *(ebp - 1)
            result &= 0xff
            data_413114 |= 1 << (result u% 0x20)
            *(ebp - 1) += 1
            j = ebx.b
            ebx.b -= 1
        while (j != 1)

return result
