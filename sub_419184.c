// 函数: sub_419184
// 地址: 0x419184
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax_1 = sub_41906c(arg1, arg3)
int32_t __saved_ebp

if (eax_1 == 0)
    sub_4190f4(&__saved_ebp)
sub_418b78(eax_1)
void** result = *(*(arg1 + 4) + 8) - 1

if (result s>= 0)
    void* i_1 = result + 1
    int32_t var_18_1 = 0
    void* i
    
    do
        result = sub_41a0f4(*(arg1 + 4), var_18_1)
        void** result_1 = result
        
        if (result_1 != eax_1)
            result = result_1[1]
            
            if (result != 0)
                int32_t j = result[2] - 1
                
                if (j s>= 0)
                    do
                        void* eax_10 = sub_41a0f4(result_1[1], j)
                        result = sub_403e94(eax_10, arg2)
                        
                        if (result.b != 0)
                            result = sub_41906c(arg1, eax_10)
                            
                            if (result == eax_1)
                                sub_419fe8(result_1[1], j)
                                result = sub_419f9c(*(eax_1 + 4), eax_10)
                        
                        j -= 1
                    while (j != 0xffffffff)
        
        var_18_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
