// 函数: sub_4042b8
// 地址: 0x4042b8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg3 == 0)
    return 

int32_t* ebx_1 = arg1
int32_t i_4 = arg3
arg1.b = *arg2
int32_t edx
edx.b = arg2[1]

if (arg1.b == 0xa || arg1.b == 0xb)
label_4042fe:
    int32_t i
    
    do
        *ebx_1 = 0
        ebx_1 = &ebx_1[1]
        i = i_4
        i_4 -= 1
    while (i s> 1)
else if (arg1.b == 0xc)
    int32_t i_1
    
    do
        *ebx_1 = 0
        ebx_1[1] = 0
        ebx_1[2] = 0
        ebx_1[3] = 0
        ebx_1 = &ebx_1[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 s> 1)
else
    int32_t ebp
    
    if (arg1.b == 0xd)
        int32_t var_10_1 = ebp
        int32_t i_2
        
        do
            ebx_1 += *(arg2 + edx + 2)
            *(arg2 + edx + 6)
            **(arg2 + edx + 0xa)
            sub_4042b8()
            i_2 = i_4
            i_4 -= 1
        while (i_2 s> 1)
    else
        if (arg1.b != 0xe)
            if (arg1.b == 0xf || arg1.b == 0x11)
                goto label_4042fe
            
            arg1.b = 2
            noreturn sub_402710(arg1) __tailcall
        
        int32_t var_10_2 = ebp
        int32_t i_3
        
        do
            int32_t* eax_1 = ebx_1
            ebx_1 += *(arg2 + edx + 2)
            sub_404288(eax_1, arg2)
            i_3 = i_4
            i_4 -= 1
        while (i_3 s> 1)
