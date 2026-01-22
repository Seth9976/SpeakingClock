// 函数: sub_40f7e8
// 地址: 0x40f7e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

sub_403160(arg1, arg2)
DeleteCriticalSection(&arg1[2])
int32_t ebp_1 = *(arg1[1] + 8) - 1

if (ebp_1 s>= 0)
    int32_t i_1 = ebp_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_402eb0(sub_40fa54(arg1[1], edi_1))
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_402ea0(sub_402eb0(arg1[1]), edx_1)

if (arg2.b s<= 0)
    return result

return sub_403148(arg1)
