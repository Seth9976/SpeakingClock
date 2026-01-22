// 函数: sub_41a11c
// 地址: 0x41a11c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx_1 = arg1[3]
int32_t ecx_1

if (edx_1 s> 0x40)
    int32_t ecx = edx_1
    
    if (ecx s< 0)
        ecx += 3
    
    ecx_1 = ecx s>> 2
else if (edx_1 s<= 8)
    ecx_1 = 4
else
    ecx_1 = 0x10

return sub_41a2b0(arg1, ecx_1 + edx_1)
