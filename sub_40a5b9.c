// 函数: sub_40a5b9
// 地址: 0x40a5b9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_40a5af(arg1, arg3)
int32_t count_1 = sx.d(*(arg1 - 0x2c))
int32_t edx = 0
int16_t result
int32_t count

if (count_1 s> *(arg1 + 0xc) || count_1 s< 0xfffffffd)
    count = 1
    edx = 1
label_40a5ec:
    
    while (true)
        result.b = *arg2
        arg2 = &arg2[1]
        result.b = result.b
        
        if (result.b == 0)
            result.b = 0x30
            arg3 = __builtin_memset(arg3, 0x30, count)
            break
        
        *arg3 = result.b
        arg3 = &arg3[1]
        count -= 1
        
        if (count == 0)
            result.b = *arg2
            arg2 = &arg2[1]
            result.b = result.b
            
            if (result.b == 0)
                goto label_40a60c
            
            result:1.b = result.b
            result.b = *(arg1 - 5)
            *arg3 = result
            arg3 = &arg3[2]
            goto label_40a600
    
label_40a60c:
    
    if (edx != 0)
        int32_t ecx_1 = *(arg1 + 8)
        
        if (ecx_1 u> 4)
            ecx_1 = 0
        
        int32_t ebx
        ebx.b = *(arg1 - 0x29)
        return sub_40a46c(0x45, sx.d(*(arg1 - 0x2c)) - 1, ecx_1, arg3)
else
    count = count_1
    
    if (count s> 0)
        goto label_40a5ec
    
    result.b = 0x30
    *arg3 = 0x30
    void* edi = &arg3[1]
    
    if (*arg2 != 0)
        result.b = *(arg1 - 5)
        *edi = result.b
        result.b = 0x30
        arg3 = __builtin_memset(edi + 1, 0x30, neg.d(count))
    label_40a600:
        
        while (true)
            result.b = *arg2
            arg2 = &arg2[1]
            result.b = result.b
            
            if (result.b == 0)
                break
            
            *arg3 = result.b
            arg3 = &arg3[1]
        
        goto label_40a60c
return result
