// 函数: sub_40d9e4
// 地址: 0x40d9e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
void** eax

if (arg2 s> 0)
    eax = arg1
    
    if (eax != 0)
        eax = *(eax - 4)
    
    eax.b = eax s< arg2
else
    eax.b = 1

if (eax.b == 0)
    if (arg2 s<= 1 || data_4af8d8 == 0)
        result = arg2
    else
        int32_t var_10
        sub_40d954(&var_10, arg2 - 1, arg1, &result)
        void** eax_3
        
        if (arg2 - 1 s<= var_10)
            eax_3 = arg1
            
            if (eax_3 != 0)
                eax_3 = *(eax_3 - 4)
            
            eax_3.b = eax_3 s<= result
        else
            eax_3.b = 1
        
        if (eax_3.b == 0)
            result += 1
        else
            result = 0

return result
