// 函数: sub_408e34
// 地址: 0x408e34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ecx = arg3 ^ 0xffffffff
int32_t* i_1 = ecx + 9

if (ecx s> 0xfffffff7)
label_408e8a:
    
    if (i_1 s> 4)
        goto label_408e9a
    
    if (*(i_1 + arg1 + arg3 - 8) == *(i_1 + arg2 + arg3 - 8))
        i_1 = &i_1[1]
    label_408e9a:
        
        if (i_1 s> 6)
            goto label_408eac
        
        if (*(i_1 + arg1 + arg3 - 8) == *(i_1 + arg2 + arg3 - 8))
            i_1 += 2
        label_408eac:
            
            if (i_1 s> 7 || *(arg1 + arg3 - 1) == *(arg2 + arg3 - 1))
                return 1
else if (*(i_1 + arg1 + arg3 - 8) == *(i_1 + arg2 + arg3 - 8))
    void* ecx_1 = &i_1[1]
    void* ebx_3 = (i_1 + arg1 + arg3 - 8) & 3
    i_1 = ecx_1 - ebx_3
    
    if (ecx_1 s<= ebx_3)
        int32_t* i
        
        do
            if (*(i_1 + arg1 + arg3 - 8) != *(i_1 + arg2 + arg3 - 8))
                return 0
            
            if (*(i_1 + arg1 + arg3 - 8 + 4) != *(i_1 + arg2 + arg3 - 8 + 4))
                return 0
            
            int32_t* i_2 = i_1
            i_1 = &i_1[2]
            
            if (i_2 s> 0xfffffff8)
                break
            
            if (*(i_1 + arg1 + arg3 - 8) != *(i_1 + arg2 + arg3 - 8))
                return 0
            
            if (*(i_1 + arg1 + arg3 - 8 + 4) != *(i_1 + arg2 + arg3 - 8 + 4))
                return 0
            
            i = i_1
            i_1 = &i_1[2]
        while (i s<= 0xfffffff8)
    
    goto label_408e8a

return 0
