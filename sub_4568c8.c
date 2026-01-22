// 函数: sub_4568c8
// 地址: 0x4568c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
var_c.b = arg2
char result = var_c.b

if (result != *(arg1 + 0x61))
    char ebx_1 = *(arg1 + 0x61)
    result = var_c.b
    *(arg1 + 0x61) = result
    
    if ((arg1[7].b & 1) == 0)
        if (3 == ebx_1 || 3 != *(arg1 + 0x61) || (arg1[0x60] == arg1[0x10]
                && arg1[0x61] == arg1[0x11] && arg1[0x62] == arg1[0x12]
                && arg1[0x63] == arg1[0x13]))
            return sub_456cdc(arg1)
        
        arg1[0x61]
        arg1[0x60]
        return (*(*arg1 + 0x88))(arg1[0x63], arg1[0x62])

return result
