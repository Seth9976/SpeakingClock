// 函数: sub_451184
// 地址: 0x451184
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404bdc(arg2, arg1)
int32_t edi = 1
int32_t result

while (true)
    result = sub_404e48(*arg2)
    
    if (edi s> result)
        break
    
    if (test_bit(*data_4ac4c4, zx.d(*(*arg2 + edi - 1))))
        edi += 1
    else if (*(*arg2 + edi - 1) == 0x26)
        char ebx_1
        
        if (*(data_4ac4e0 + 0xc) == 0)
            ebx_1 = 0
        else
            int32_t var_14
            
            if (edi s<= 1)
                var_14.b = 0
            else
                int64_t* ebp_1 = *arg2
                
                if (ebp_1 != 0)
                    ebp_1 = *(ebp_1 - 4)
                
                var_14.b = ebp_1 - edi s>= 2
            
            if (var_14.b == 0)
                var_14:1.b = 0
            else
                var_14:1.b = *(*arg2 + edi - 2) == 0x28
            
            if (var_14:1.b == 0)
                var_14:2.b = 0
            else
                var_14:2.b = *(*arg2 + edi + 1) == 0x29
            
            ebx_1 = var_14:2.b
        
        if (ebx_1 == 0)
            sub_4050c0(arg2, edi, 1)
        else
            sub_4050c0(arg2, edi - 1, 4)
    
    edi += 1

return result
