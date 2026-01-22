// 函数: sub_42c818
// 地址: 0x42c818
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
var_c.b = arg2
uint8_t ebx_1 = (not.d(zx.d(arg1[2].b))).b & var_c.b
int32_t result = 0

if (0 != ebx_1)
    if ((ebx_1 & 1) != 0)
        int32_t edx_1
        result, edx_1 = (*(*arg1 + 0x14))(var_c)
        
        if (arg1[1] == 0)
            edx_1.b = 1
            result = sub_40451c(sub_40cf6c(sub_417654+0x48, edx_1, data_4ac15c))
    
    if ((ebx_1 & 2) != 0)
        result = sub_42c8b8(arg1)
    
    if ((ebx_1 & 4) != 0)
        result = sub_42c8e4(arg1)
    
    if ((ebx_1 & 8) != 0)
        result = sub_42c914(arg1)
    
    arg1[2].b |= ebx_1

return result
