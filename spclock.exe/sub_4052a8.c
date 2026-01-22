// 函数: sub_4052a8
// 地址: 0x4052a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t* edi = nullptr
void* result

if (arg2 s<= 0)
label_4052fd:
    result = arg1
    sub_404b88(result)
    *arg1 = edi
else
    void* eax = *arg1
    
    if (eax == 0 || *(eax - 8) != 1)
        edi = sub_404c4c(arg2)
        int64_t* eax_6 = *arg1
        
        if (eax_6 != 0)
            char* ecx_1 = *(eax_6 - 4)
            
            if (ecx_1 s>= arg2)
                ecx_1 = arg2
            
            sub_4030d0(eax_6, edi, ecx_1)
        
        goto label_4052fd
    
    void* var_10 = eax - 8
    sub_402edc(&var_10, &arg2[9])
    result = var_10 + 8
    *arg1 = result
    *(result - 4) = arg2
    *(arg2 + result) = 0

return result
