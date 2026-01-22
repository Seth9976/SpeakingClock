// 函数: sub_40ddf4
// 地址: 0x40ddf4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
BOOL result = GetCPInfo(0, arg1 - 0x14)

for (int32_t i = 0; i s< 0xc; i += 2)
    result.b = (arg1 - 0x14)->LeadByte[i] | (arg1 - 0x14)->LeadByte[1 + i]
    
    if (result.b == 0)
        break
    
    result = zx.d((arg1 - 0x14)->LeadByte[i])
    char ebx_1 = (arg1 - 0x14)->LeadByte[1 + i]
    
    if (ebx_1 u>= result.b)
        char j_1 = ebx_1 - result.b + 1
        var_8:3.b = result.b
        char j
        
        do
            result = zx.d(var_8:3.b)
            data_4aa800 |= 1 << (result u% 0x20)
            var_8:3.b += 1
            j = j_1
            j_1 -= 1
        while (j != 1)

return result
