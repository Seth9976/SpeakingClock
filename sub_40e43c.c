// 函数: sub_40e43c
// 地址: 0x40e43c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_8 = ebx
char* esi = arg1
int32_t result = 0

while (true)
    result = rol.d(result, 5)
    ebx.b = *esi
    
    if (ebx.b == 0)
        break
    
    if (ebx.b s>= 0x41 && ebx.b s<= 0x5a)
        ebx.b |= 0x20
    
    result.b ^= ebx.b
    esi = &esi[1]

return result
