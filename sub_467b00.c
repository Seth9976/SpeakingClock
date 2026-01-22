// 函数: sub_467b00
// 地址: 0x467b00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1
int32_t edx_1
eax_1, edx_1 = (**arg1)()
int32_t eax_3
int32_t edx_3
eax_3, edx_3 = (**arg2)(eax_1, edx_1)
bool cond:0 = edx_3 != edx_1

if (edx_3 == edx_1)
    cond:0 = eax_3 != eax_1

if (not(cond:0))
    int32_t eax_6 = (**arg1)()
    
    if (sub_408e34(arg1[1], arg2[1], eax_6) != 0)
        return 1

return 0
