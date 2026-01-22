// 函数: sub_414d40
// 地址: 0x414d40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg3
var_8.b = arg2
uint32_t result
result.b = 1

if (arg3 == 0xe)
    char edx_5 = data_4aaa08
    
    if (edx_5 u< 1)
        sub_410068()
    else
        if (edx_5 == 1)
            return zx.d(data_4aaa50)
        
        if (edx_5 == 2)
            if (arg1.b != 2 || var_8.b != 2)
                arg1 = 0
            else
                arg1.b = 1
            
            return zx.d((&data_4aaa50)[arg1 & 0x7f])
else if (arg3 == 0xf)
    char edx_6 = data_4aaa08
    
    if (edx_6 u< 1)
        sub_410068()
    else
        if (edx_6 == 1)
            return zx.d(data_4aaa52)
        
        if (edx_6 == 2)
            if (arg1.b != 2 || var_8.b != 2)
                arg1.b = 1
            else
                arg1 = 0
            
            return zx.d((&data_4aaa52)[arg1 & 0x7f])
else if (arg3 - 0x10 u< 4)
    char edx_7 = data_4aaa0c
    
    if (edx_7 u< 1)
        sub_410068()
    else
        if (edx_7 == 1)
            return zx.d(*((arg3 << 1) + &data_4aaa34))
        
        if (edx_7 == 2)
            if (arg1.b != 2)
                result.b = 2
            else
                if (var_8.b != 2)
                    return 0
                
                result.b = 1
else
    sub_410014()

return result
