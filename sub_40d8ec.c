// 函数: sub_40d8ec
// 地址: 0x40d8ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg1
int32_t result = 0

if (arg2 s> 0)
    arg1 = edi
    
    if (arg1 != 0)
        arg1 = *(arg1 - 4)
    
    arg1.b = arg1 s< arg2
else
    arg1.b = 1

if (arg1.b == 0)
    result = arg2
    
    if (data_4af8d8 != 0)
        void* ebx_1 = 1
        result = 0
        
        if (arg2 s>= 1)
            do
                if (not(test_bit(data_4aa800, zx.d(*(edi + ebx_1 - 1)))))
                    ebx_1 += 1
                else
                    ebx_1 = sub_40db38(edi, ebx_1)
                
                result += 1
            while (arg2 s>= ebx_1)

return result
