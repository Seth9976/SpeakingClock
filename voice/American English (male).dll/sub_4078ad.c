// 函数: sub_4078ad
// 地址: 0x4078ad
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i_4 = *(arg1 + 8)

if (i_4 u>= 0x12)
    i_4 = 0x12

int32_t i_2 = sx.d(*(arg1 - 0x2c))
char result
char* esi

if (i_2 s> 0)
    int32_t ebx_1 = 0
    
    if (*(arg1 + 0x10) != 2)
        ebx_1.b = 3
        int16_t eax_1
        eax_1.b = divu.dp.b(i_2.w - 1, 3)
        eax_1:1.b = modu.dp.b(i_2.w - 1, 3)
        ebx_1.b = eax_1:1.b
        ebx_1 += 1
    
    while (true)
        result = sub_407802(esi)
        *arg2 = result
        arg2 = &arg2[1]
        int32_t i_5 = i_2
        i_2 -= 1
        
        if (i_5 == 1)
            break
        
        int32_t temp4_1 = ebx_1
        ebx_1 -= 1
        
        if (temp4_1 == 1)
            result = *(arg1 - 6)
            
            if (result != 0)
                *arg2 = result
                arg2 = &arg2[1]
                ebx_1.b = 3
else
    result = 0x30
    *arg2 = 0x30
    arg2 = &arg2[1]

int32_t i_3 = i_4

if (i_3 != 0)
    result = *(arg1 - 5)
    
    if (result != 0)
        *arg2 = result
        arg2 = &arg2[1]
    
    if (i_2 != 0)
        int32_t i
        
        do
            *arg2 = 0x30
            arg2 = &arg2[1]
            int32_t i_6 = i_3
            i_3 -= 1
            
            if (i_6 == 1)
                return 0x30
            
            i = i_2
            i_2 += 1
        while (i != 0xffffffff)
    
    int32_t i_1
    
    do
        result = sub_407802(esi)
        *arg2 = result
        arg2 = &arg2[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
