// 函数: sub_419a14
// 地址: 0x419a14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9

if (arg4 s< 0)
label_419a47:
    var_9 = 0
else
    int32_t esi_1 = arg4 + 1
    int32_t* ebx_1 = arg1
    
    while (arg3 != *ebx_1)
        ebx_1 = &ebx_1[2]
        int32_t temp1_1 = esi_1
        esi_1 -= 1
        
        if (temp1_1 == 1)
            goto label_419a47
    
    var_9 = 1
    sub_404bdc(arg2, ebx_1[1])

return zx.d(var_9)
