// 函数: sub_469278
// 地址: 0x469278
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
var_10.b = arg2
char result = var_10.b

if (result != *(arg1 + 0x6a))
    void* eax = arg1[0x17]
    
    if (eax == 0)
    label_4692b2:
        int32_t esi_2 = *(arg1[0x14] + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                int32_t* eax_4 = *(*(arg1[0x14] + 4) + (edi_1 << 2))
                sub_403e18(eax_4, 0x468820)
                
                if (eax_4 != 0)
                    (*(*eax_4 + 0x54))(var_10)
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(arg1 + 0x6a) = var_10.b
        return (*(*arg1 + 0x30))(var_10)
    
    char edx = *(eax + 0x58)
    
    if (edx != 1)
        if (edx == 2)
            var_10.b = 1
        
        goto label_4692b2
    
    result = var_10.b
    *(arg1 + 0x6a) = result

return result
