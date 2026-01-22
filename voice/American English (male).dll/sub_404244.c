// 函数: sub_404244
// 地址: 0x404244
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx = 0

if (arg2 s> 0)
    ebx = sub_403fd4(arg2)
    BSTR eax_3 = sub_404168(*arg1)
    
    if (eax_3 s> 0)
        if (arg2 s< eax_3)
            eax_3 = arg2
        
        sub_4027b0(*arg1, ebx, eax_3 * 2)

return sub_403fec(arg1, ebx)
