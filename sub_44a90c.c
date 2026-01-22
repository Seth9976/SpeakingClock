// 函数: sub_44a90c
// 地址: 0x44a90c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
var_8:1.b = arg2
var_8:2.w = arg1
int16_t result = 0

if (var_8:3.b == 0)
    result = var_8:2.w
    
    if ((var_8:1.b & 1) != 0)
        result += 0x2000
    
    if ((var_8:1.b & 4) != 0)
        result += 0x4000
    
    if ((var_8:1.b & 2) != 0)
        return result - 0x8000

return result
