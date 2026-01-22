// 函数: sub_41c3b4
// 地址: 0x41c3b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_1c = 0
uint32_t esi = 0
int32_t var_18 = arg1[7] - 1

if (0 s<= var_18)
    do
        uint32_t ebx_3 = (var_18 + esi) u>> 1
        *(arg1[6] + (ebx_3 << 3))
        int32_t var_14 = (*(*arg1 + 0x34))(arg2, arg3, var_1c, var_18, var_14)
        
        if (var_14 s>= 0)
            var_18 = ebx_3 - 1
            
            if (var_14 == 0)
                var_1c = 1
                
                if (*(arg1 + 0x25) != 1)
                    esi = ebx_3
        else
            esi = ebx_3 + 1
    while (esi s<= var_18)

*arg3 = esi
return zx.d(var_1c)
