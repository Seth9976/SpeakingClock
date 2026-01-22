// 函数: sub_4735dc
// 地址: 0x4735dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0
int32_t esi_1 = sub_423974(arg1) - 1

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* eax_3 = sub_423948(arg1, edi_1)
        
        if (sub_403df4(eax_3, 0x46851c) == 0)
            var_9 = sub_4735dc(arg2)
            
            if (var_9 != 0)
                break
        else if (sub_468d3c(eax_3, *(arg2 - 4)) != 0)
            var_9 = 1
            break
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.d(var_9)
