// 函数: sub_45ff5c
// 地址: 0x45ff5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = arg3[0x1d]

if (*(eax + 0x14) u<= 0)
    *arg2 = 0
else
    *arg2 = *(arg3[0x1d] + 0x14)

if (*(eax + 0x10) u<= 0)
    *arg1 = 0
else
    *arg1 = *(arg3[0x1d] + 0x10)

if (*(eax + 0xc) u<= 0)
    *arg5 = 0
else
    *arg5 = *(arg3[0x1d] + 0xc)

if (*(eax + 8) u<= 0)
    *arg4 = 0
else
    *arg4 = *(arg3[0x1d] + 8)

if ((*(arg3 + 0x52) & 0x10) != 0)
    int32_t eax_6 = *(arg3[0x1e] + 8) + *(arg3[0x1e] + 0x10)
    
    if (*arg2 s> 0)
        *arg2 += eax_6
    
    if (eax_6 s<= *arg5)
        *arg5 -= eax_6
    
    int32_t eax_9 = *(arg3[0x1e] + 0xc) + *(arg3[0x1e] + 0x14)
    
    if (*arg1 s> 0)
        *arg1 += eax_9
    
    if (eax_9 s<= *arg4)
        *arg4 -= eax_9

return (*(*arg3 + 0x38))(arg4, arg5)
