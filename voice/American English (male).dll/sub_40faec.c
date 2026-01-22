// 函数: sub_40faec
// 地址: 0x40faec
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s> 0x7ffffff)
    *ebx
    ebx, esi = sub_40fa00(esi, data_413474)

if (esi s> ebx[3])
    sub_40fab0(ebx, esi)

int32_t result = ebx[2]

if (esi s<= result)
    int32_t ebp_2 = result - 1
    
    if (esi s<= ebp_2)
        int32_t i_1 = esi - ebp_2 - 1
        int32_t i
        
        do
            result = sub_40f964(ebx, ebp_2)
            ebp_2 -= 1
            i = i_1
            i_1 += 1
        while (i != 0xffffffff)
else
    result = sub_4028b8(ebx[1] + (result << 2), (esi - result) << 2, 0)

ebx[2] = esi
return result
