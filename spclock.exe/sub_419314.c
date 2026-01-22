// 函数: sub_419314
// 地址: 0x419314
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 4)
int32_t i = *(result + 8) - 1

if (i s>= 0)
    do
        int32_t* eax_1 = sub_41a0f4(*(arg1 + 4), i)
        sub_418ea0(eax_1, arg2)
        result = eax_1[3]
        
        if (*(result + 8) == 0)
            sub_403c68(eax_1)
            result = sub_419fe8(*(arg1 + 4), i)
        
        i -= 1
    while (i != 0xffffffff)

return result
