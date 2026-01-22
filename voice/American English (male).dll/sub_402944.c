// 函数: sub_402944
// 地址: 0x402944
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char* esi = arg1
char* var_10 = arg1
void* esi_1

if (arg1 == 0)
label_4029ba:
labelid_1:
    esi_1 = &esi[1] - var_10
else
    arg1 = nullptr
    int32_t ebx_1
    
    do
        ebx_1.b = *esi
        esi = &esi[1]
    while (ebx_1.b == 0x20)
    
    int16_t ecx
    ecx:1.b = 0
    
    if (ebx_1.b == 0x2d)
        ecx:1.b = 1
        ebx_1.b = *esi
        esi = &esi[1]
    else if (ebx_1.b == 0x2b)
        ebx_1.b = *esi
        esi = &esi[1]
    
    if (ebx_1.b == 0x24 || ebx_1.b == 0x78 || ebx_1.b == 0x58)
    label_4029d4:
        ebx_1.b = *esi
        esi = &esi[1]
        
        if (ebx_1.b == 0)
            goto label_4029ba
        
        do
            if (ebx_1.b u>= 0x61)
                ebx_1.b -= 0x20
            
            ebx_1.b -= 0x30
            
            if (ebx_1.b u> 9)
                ebx_1.b -= 0x11
                
                if (ebx_1.b u> 5)
                    goto label_4029c4_2
                
                ebx_1.b += 0xa
            
            if (arg1 u> 0xfffffff)
                goto label_4029c4_2
            
            arg1 = (arg1 << 4) + ebx_1
            ebx_1.b = *esi
            esi = &esi[1]
        while (ebx_1.b != 0)
        
        ecx:1.b -= 1
        esi_1 = nullptr
    else if (ebx_1.b != 0x30)
        if (ebx_1.b != 0)
        label_4029ae:
            
            do
                ebx_1.b -= 0x30
                
                if (ebx_1.b u> 9)
                    goto label_4029c4_2
                
                if (arg1 u> 0xccccccc)
                    goto label_4029c4_2
                
                arg1 = arg1 * 0xa + ebx_1
                ebx_1.b = *esi
                esi = &esi[1]
            while (ebx_1.b != 0)
            
            goto label_4029b0
        
    label_4029c4:
        esi_1 = esi - var_10
    else
        ebx_1.b = *esi
        esi = &esi[1]
        
        if (ebx_1.b == 0x78 || ebx_1.b == 0x58)
            goto label_4029d4
        
        if (ebx_1.b != 0)
            goto label_4029ae
        
    label_4029b0:
        char temp1_1 = ecx:1.b
        ecx:1.b -= 1
        
        if (temp1_1 == 1)
            bool s_1 = neg.d(arg1) s< 0
            
            if (neg.d(arg1) == 0 || s_1 != neg.d(arg1) == 0x80000000 || s_1)
                esi_1 = nullptr
            else
            label_4029c4_1:
                esi_1 = esi - var_10
        else if (arg1 s>= 0)
            esi_1 = nullptr
        else
        label_4029c4_2:
            esi_1 = esi - var_10

*arg2 = esi_1
