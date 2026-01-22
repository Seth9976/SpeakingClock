// 函数: sub_404d80
// 地址: 0x404d80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ecx_1 = nullptr

if (arg2 != 0)
    char* var_4_1 = arg2
    
    while (0 != *arg2)
        if (0 != arg2[1])
            if (0 != arg2[2])
                if (0 == arg2[3])
                    arg2 = &arg2[1]
                else
                    arg2 = &arg2[4]
                    continue
            
            arg2 = &arg2[1]
        
        arg2 = &arg2[1]
        break
    
    char* ecx = arg2
    arg2 = var_4_1
    ecx_1 = ecx - arg2

void** eax
return sub_404c78(eax, arg2, ecx_1) __tailcall
