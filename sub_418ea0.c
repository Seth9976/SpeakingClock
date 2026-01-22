// 函数: sub_418ea0
// 地址: 0x418ea0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = *(*(arg1 + 0xc) + 8) - 1

if (i s>= 0)
    do
        if (sub_418e80(sub_41a0f4(*(arg1 + 0xc), i), arg2) != 0)
            sub_419fe8(*(arg1 + 0xc), i)
        
        i -= 1
    while (i != 0xffffffff)

void* result = *(arg1 + 4)

if (result != 0)
    int32_t i_1 = *(result + 8) - 1
    
    if (i_1 s>= 0)
        do
            result = sub_418e80(sub_41a0f4(*(arg1 + 4), i_1), arg2)
            
            if (result.b != 0)
                result = sub_419fe8(*(arg1 + 4), i_1)
            
            i_1 -= 1
        while (i_1 != 0xffffffff)

int32_t* ebx_2 = *(arg1 + 8)

if (ebx_2 != 0)
    result = (*(*ebx_2 + 0x14))() - 1
    
    if (result s>= 0)
        void* i_2 = result
        
        do
            result = sub_418e80((*(**(arg1 + 8) + 0x18))(), arg2)
            
            if (result.b != 0)
                result = (*(**(arg1 + 8) + 0x48))()
            
            i_2 -= 1
        while (i_2 != 0xffffffff)

return result
