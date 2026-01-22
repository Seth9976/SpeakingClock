// 函数: sub_451274
// 地址: 0x451274
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404b88(arg2)
int32_t ebx = 1
int32_t* result = arg1

if (result != 0)
    result = *(result - 4)

int32_t* result_1 = result

if (result_1 s>= 1)
    do
        result = data_4ac4c4
        
        if (test_bit(*result, zx.d(*(arg1 + ebx - 1))))
            ebx += 1
        else if (*(arg1 + ebx - 1) == 0x26)
            void* eax_3 = result_1 - ebx
            result = eax_3 - 1
            
            if (eax_3 s>= 1)
                ebx += 1
                
                if (*(arg1 + ebx - 1) != 0x26)
                    result = arg2
                    *(arg1 + ebx - 1)
                    sub_404d70()
        
        ebx += 1
    while (result_1 s>= ebx)

return result
