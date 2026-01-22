// 函数: sub_421098
// 地址: 0x421098
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3
var_c.b = arg2
int32_t result = 0

if (0 != var_c.b)
    var_c:1.b = var_c.b | 0xf0
    int32_t ecx
    result, ecx = sub_420654(arg1, &var_c:1, 1)
    
    if ((var_c.b & 2) != 0)
        return sub_420fbc(arg1, arg3, ecx)

return result
