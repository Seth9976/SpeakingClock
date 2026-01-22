// 函数: sub_46292c
// 地址: 0x46292c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0
int32_t eax_1 = sub_461c40(arg2, 1)
int32_t eax_3 = sub_461c40(arg2, 2)

if (*(arg3 + 0x1c) == 0)
    if (*arg1 s>= eax_3 && *arg1 s<= *(arg3 + 0x18) + eax_3 && eax_1 s<= arg1[1]
            && eax_1 + sub_461cc4(arg2, 1) s>= arg1[1])
        var_9 = 1
        
        if (arg1[1] s>= *(*(arg2 + 4) + 0x44) + 0xf)
            *arg4 = 2
        else
            *arg4 = 0x14
else if (eax_1 s<= arg1[1] && arg1[1] s<= eax_1 + *(arg3 + 0x18) && *arg1 s>= eax_3
        && sub_461cc4(arg2, 2) + eax_3 s>= *arg1)
    var_9 = 1
    void* eax_10 = *(arg2 + 4)
    
    if (*(eax_10 + 0x40) + *(eax_10 + 0x48) - 0xf s>= *arg1)
        *arg4 = 2
    else
        *arg4 = 0x14

return zx.d(var_9)
