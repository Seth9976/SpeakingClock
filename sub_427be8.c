// 函数: sub_427be8
// 地址: 0x427be8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_2
int32_t i_1 = i_2
int32_t result = sub_405cb0(*(arg1 + 4)) - 1

if (result s>= 0)
    i_1 = result + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* j_1
        
        for (int32_t* j = *(*(arg1 + 4) + (edi_1 << 2)); j != 0; j = j_1)
            j_1 = *j
            sub_405a5c(j)
        
        result = *(arg1 + 4)
        *(result + (edi_1 << 2)) = 0
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
