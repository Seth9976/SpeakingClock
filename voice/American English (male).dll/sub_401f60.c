// 函数: sub_401f60
// 地址: 0x401f60
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i = arg1
void* result

while (true)
    int32_t* ebx_1 = data_414608
    
    if (i s> ebx_1[2])
        ebx_1 = data_414610
        int32_t eax = ebx_1[2]
        
        if (i s> eax)
            ebx_1[2] = i
            
            do
                ebx_1 = ebx_1[1]
            while (i s> ebx_1[2])
            
            *(data_414610 + 8) = eax
            
            if (ebx_1 == data_414610)
                if (i s<= 0x1000)
                    ebx_1 = sub_401f34(i)
                
                if (i s> 0x1000 || ebx_1 == 0)
                    if (sub_401ed4(i) == 0)
                        return nullptr
                    
                    if (i s> data_414614)
                        continue
                    
                    data_414614 -= i
                    
                    if (data_414614 s< 0xc)
                        i += data_414614
                        data_414614 = 0
                    
                    int32_t* eax_5 = data_414618
                    data_414618 += i
                    *eax_5 = i | 2
                    result = &eax_5[1]
                    data_4145ac += 1
                    data_4145b0 += i - 4
                    break
            else
                data_414610 = ebx_1
    
    sub_401b0c(ebx_1)
    int32_t i_1 = ebx_1[2]
    void* eax_8 = i_1 - i
    
    if (eax_8 s< 0xc)
        i = i_1
        
        if (ebx_1 == data_414610)
            data_414610 = ebx_1[1]
        
        void* eax_12 = ebx_1 + i
        *eax_12 &= 0xfffffffe
    else
        sub_401d74(ebx_1 + i, eax_8)
    
    *ebx_1 = i | 2
    result = &ebx_1[1]
    data_4145ac += 1
    data_4145b0 += i - 4
    break

return result
