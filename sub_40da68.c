// 函数: sub_40da68
// 地址: 0x40da68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (arg2 s> 0)
    int32_t eax = arg1
    
    if (eax != 0)
        eax = *(eax - 4)
    
    if (eax s< arg2)
        int32_t eax_2 = arg1
        
        if (eax_2 != 0)
            eax_2 = *(eax_2 - 4)
        
        arg2 = eax_2
    
    if (data_4af8d8 == 0)
        result = arg2
    else
        int32_t var_c
        sub_40d954(&var_c, arg2, arg1, &result)
        int32_t eax_5 = arg1
        
        if (eax_5 != 0)
            eax_5 = *(eax_5 - 4)
        
        if (eax_5 s< result)
            int32_t result_1 = arg1
            
            if (result_1 != 0)
                result_1 = *(result_1 - 4)
            
            result = result_1

return result
