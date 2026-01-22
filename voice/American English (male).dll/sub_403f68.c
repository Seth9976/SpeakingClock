// 函数: sub_403f68
// 地址: 0x403f68
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* edi = nullptr
void* result

if (arg2 s<= 0)
label_403fbd:
    result = arg1
    sub_4039ec(result)
    *arg1 = edi
else
    void* eax = *arg1
    
    if (eax == 0 || *(eax - 8) != 1)
        edi = sub_403ab0(arg2)
        void* eax_6 = *arg1
        
        if (eax_6 != 0)
            char* ecx_1 = *(eax_6 - 4)
            
            if (ecx_1 s>= arg2)
                ecx_1 = arg2
            
            sub_4027b0(eax_6, edi, ecx_1)
        
        goto label_403fbd
    
    void* var_10 = eax - 8
    sub_402668(&var_10, &arg2[9])
    result = var_10 + 8
    *arg1 = result
    *(result - 4) = arg2
    *(arg2 + result) = 0

return result
