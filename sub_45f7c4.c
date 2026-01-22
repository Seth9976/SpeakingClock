// 函数: sub_45f7c4
// 地址: 0x45f7c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t* i = arg1
var_c.b = 0
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_46bf14(i)

if (eax_1 != 0)
    for (; eax_1 != i; i = i[0xc])
        if (*(i + 0x57) == 0)
            return zx.d(var_c.b)
        
        if ((*(*i + 0x50))(var_c) == 0)
            return zx.d(var_c.b)
    
    var_c.b = 1

return zx.d(var_c.b)
