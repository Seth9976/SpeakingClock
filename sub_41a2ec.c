// 函数: sub_41a2ec
// 地址: 0x41a2ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s> 0x7ffffff)
    *ebx
    ebx, esi = sub_41a080(esi, data_4ac1b4)

if (esi s> ebx[3])
    sub_41a2b0(ebx, esi)

int32_t result = ebx[2]

if (esi s<= result)
    int32_t ebp_2 = result - 1
    
    if (esi s<= ebp_2)
        int32_t i_1 = esi - ebp_2 - 1
        int32_t i
        
        do
            result = sub_419fe8(ebx, ebp_2)
            ebp_2 -= 1
            i = i_1
            i_1 += 1
        while (i != 0xffffffff)
else
    result = sub_403578(ebx[1] + (result << 2), (esi - result) * 4, 0)

ebx[2] = esi
return result
