// 函数: sub_456b54
// 地址: 0x456b54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg3
char eax = *(arg1 + 0x5b)

if (arg2 != eax)
    var_10.b = eax
    *(arg1 + 0x5b) = arg2
    sub_4568c8(arg1, *(zx.d(arg2) + 0x4ab868))
    
    if ((arg1[7].b & 1) == 0 && ((arg1[7].b & 0x10) == 0 || arg1[0xc] != 0) && arg2 != 6
            && var_10.b != 6)
        if (var_10.b - 1 u< 2 != arg2 - 3 u< 2)
        label_456bf5:
            
            if (var_10.b == 0 || arg2 != 0)
                int32_t esi
                esi.w = 0xffee
                sub_403e64(arg1, esi)
            else
                arg1[0x61]
                arg1[0x60]
                (*(*arg1 + 0x88))(arg1[0x63], arg1[0x62])
        else
            char eax_5 = var_10.b
            
            if (eax_5 == 0)
                goto label_456bf5
            
            if (eax_5 == 5 || arg2 == 0 || arg2 == 5)
                goto label_456bf5
            
            arg1[0x11]
            arg1[0x10]
            (*(*arg1 + 0x88))(arg1[0x12], arg1[0x13])

return (*(*arg1 + 0x5c))(var_10)
