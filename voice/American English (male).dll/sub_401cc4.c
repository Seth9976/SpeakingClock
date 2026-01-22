// 函数: sub_401cc4
// 地址: 0x401cc4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* edi = arg2
char var_1c = 0
void** ebx = sub_401b70(arg1)

if (ebx != 0)
    int32_t ebp_1 = ebx[2]
    int32_t eax_2 = ebp_1 + ebx[3]
    
    if (eax_2 - (edi + arg1) s<= 0xc)
        edi = eax_2 - arg1
    
    void* var_1b
    
    if (arg1 - ebp_1 s>= 0xc)
        sub_4018dc(&arg1[1], edi - 4, &var_1b)
    else
        sub_4018dc(ebp_1, arg1 - ebx[2] + edi, &var_1b)
    
    void* ebp_2 = var_1b
    
    if (ebp_2 != 0)
        sub_401ba0(arg1, ebp_2 - arg1)
        int32_t var_17
        int32_t* eax_9 = ebp_2 + var_17
        
        if (eax_9 u< ebx[2] + ebx[3])
            sub_401bf4(eax_9, edi + arg1 - eax_9)
        
        sub_4013ec(ebx, &var_1b)
        var_1c = 1

void** result
result.b = var_1c
return result
