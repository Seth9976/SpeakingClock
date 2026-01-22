// 函数: sub_405a98
// 地址: 0x405a98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp = 1
uint32_t result = 0
int32_t var_18 = 0

if (arg1 != 0)
    while (arg1[ebp - 1] == 0x20)
        ebp += 1
    
    char var_14_1 = 0
    char eax_1 = arg1[ebp - 1]
    
    if (eax_1 == 0x2d)
        var_14_1 = 1
        ebp += 1
    else if (eax_1 == 0x2b)
        ebp += 1
    
    int32_t ebx
    ebx.b = 1
    uint32_t eax_6
    
    if (arg1[ebp - 1] == 0x24)
    label_405b24:
        
        if (arg1[ebp - 1] == 0x30)
            ebp += 1
        
        ebp += 1
        
        while (true)
            uint32_t ecx_1 = zx.d(arg1[ebp - 1])
            eax_6.b = ecx_1.b - 0x30
            char temp0_1 = eax_6.b
            eax_6.b -= 0xa
            int32_t edi_2
            
            if (temp0_1 u< 0xa)
                edi_2 = zx.d(ecx_1.b) - 0x30
            else
                eax_6.b -= 7
                char temp2_1 = eax_6.b
                eax_6.b -= 6
                
                if (temp2_1 u< 6)
                    edi_2 = zx.d(ecx_1.b) - 0x37
                else
                    eax_6.b -= 0x1a
                    char temp5_1 = eax_6.b
                    eax_6.b -= 6
                    
                    if (temp5_1 u>= 6)
                        break
                    
                    edi_2 = zx.d(ecx_1.b) - 0x57
            
            if (var_18 != 0)
                if (var_18 s< 0)
                    break
            else if (result u< 0)
                break
            
            if (var_18 != 0xfffffff)
                if (var_18 s> 0xfffffff)
                    break
            else if (result u> 0xffffffff)
                break
            
            int32_t eax_8
            int32_t edx
            edx:eax_8 = sx.q(edi_2)
            uint32_t eax_10 = result << 4
            int32_t edx_3 =
                adc.d(var_18 << 4 | result u>> 0xffffffe4, edx, eax_10 + eax_8 u< eax_10)
            result = eax_10 + eax_8
            var_18 = edx_3
            ebp += 1
            ebx = 0
        
        if (var_14_1 != 0)
            int32_t edx_6 = neg.d(adc.d(var_18, 0, result != 0))
            result = neg.d(result)
            var_18 = edx_6
    else
        if (sub_40332c(arg1[ebp - 1]) == 0x58)
            goto label_405b24
        
        char eax_5
        
        if (arg1[ebp - 1] == 0x30)
            eax_5 = sub_40332c(arg1[ebp])
        
        if (arg1[ebp - 1] == 0x30 && eax_5 == 0x58)
            goto label_405b24
        
        while (true)
            eax_6.b = arg1[ebp - 1] - 0x30
            char temp1_1 = eax_6.b
            eax_6.b -= 0xa
            
            if (temp1_1 u>= 0xa)
                break
            
            int32_t edi_6 = zx.d(arg1[ebp - 1]) - 0x30
            
            if (var_18 != 0)
                if (var_18 s< 0)
                    break
            else if (result u< 0)
                break
            
            if (var_18 != 0xccccccc)
                if (var_18 s> 0xccccccc)
                    break
            else if (result u> 0xcccccccc)
                break
            
            int32_t eax_14
            int32_t ecx
            int32_t edx_8
            eax_14, ecx, edx_8 = sub_405a74(ecx, var_18, result, 0xa, 0)
            int32_t eax_16
            int32_t edx_9
            edx_9:eax_16 = sx.q(edi_6)
            result = eax_16 + eax_14
            var_18 = adc.d(edx_9, edx_8, eax_16 + eax_14 u< eax_16)
            ebp += 1
            ebx = 0
        
        if (var_14_1 != 0)
            int32_t edx_13 = neg.d(adc.d(var_18, 0, result != 0))
            result = neg.d(result)
            var_18 = edx_13
        
        bool cond:2_1 = var_18 == 0
        
        if (var_18 == 0)
            cond:2_1 = result == 0
        
        if (not(cond:2_1))
            if (var_18 != 0)
                eax_6.b = var_18 s< 0
            else
                eax_6.b = result u< 0
            
            if (eax_6.b != var_14_1)
                ebp -= 1
    
    eax_6.b = arg1[ebp - 1] != 0
    ebx.b |= eax_6.b
    
    if (ebx.b == 0)
        *arg2 = 0
    else
        *arg2 = ebp
else
    *arg2 = 1

return result
