// 函数: sub_403508
// 地址: 0x403508
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3
uint32_t esi_1 = arg3 u>> 2

if (esi_1 == 0)
label_403539:
    int32_t esi_4 = var_c & 3
    
    if (esi_4 != 0)
        arg3.b = *arg1
        
        if (arg3.b == *arg2)
            if (esi_4 == 1)
                return 
            
            arg3.b = *(arg1 + 1)
            
            if (arg3.b == *(arg2 + 1))
                if (esi_4 == 2)
                    return 
                
                arg3.b = *(arg1 + 2)
                *(arg2 + 2)
else
    while (true)
        arg3 = *arg1
        int32_t ebx_1 = *arg2
        
        if (arg3 == ebx_1)
            int32_t esi_2 = esi_1 - 1
            
            if (esi_1 == 1)
                arg1 = &arg1[1]
                arg2 = &arg2[1]
                goto label_403539
            
            arg3 = arg1[1]
            ebx_1 = arg2[1]
            
            if (arg3 == ebx_1)
                arg1 = &arg1[2]
                arg2 = &arg2[2]
                esi_1 = esi_2 - 1
                
                if (esi_2 == 1)
                    goto label_403539
                
                continue
        
        if (arg3.b != ebx_1.b)
            break
        
        break
