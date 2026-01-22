// 函数: sub_4013ec
// 地址: 0x4013ec
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* ebx = arg1
int32_t* edi = ebx

do
    int32_t esi_1 = *arg2
    int32_t* result = ebx[2]
    
    if (esi_1 u>= result && esi_1 + arg2[1] u<= result + ebx[3])
        if (esi_1 != result)
            int32_t edi_1 = arg2[1]
            
            if (esi_1 + edi_1 != result + ebx[3])
                int32_t ecx_6 = *arg2 + arg2[1]
                int32_t var_18 = ecx_6
                int32_t var_14 = ebx[2] + ebx[3] - ecx_6
                ebx[3] = esi_1 - result
                
                if (sub_401334(ebx, &var_18).b == 0)
                    return nullptr
            else
                ebx[3] -= edi_1
        else
            ebx[2] += arg2[1]
            ebx[3] -= arg2[1]
            
            if (ebx[3] == 0)
                sub_401364(ebx)
        
        result.b = 1
        return result
    
    ebx = *ebx
while (edi != ebx)

return nullptr
