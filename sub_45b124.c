// 函数: sub_45b124
// 地址: 0x45b124
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1
int32_t i = sub_45b7f4(*(arg1 - 4)) - 1

if (i s>= 0)
    do
        void* eax_3 = sub_45b7b8(*(arg1 - 4), i)
        void* eax_5
        
        if (*(eax_3 + 0x5b) == 0)
            eax_5 = sub_45b7b8(*(arg1 - 4), i)
        
        if (*(eax_3 + 0x5b) != 0 || 3 != *(eax_5 + 0x61))
            return result
        
        i -= 1
    while (i != 0xffffffff)

return 0
