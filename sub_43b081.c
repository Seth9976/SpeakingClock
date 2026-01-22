// 函数: sub_43b081
// 地址: 0x43b081
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx_1

if (*data_4ac1d0 == 0)
    int32_t ebx_2 = arg1[-0x10]
    int32_t eax_2 = arg1[-0x1e]
    
    if (ebx_2 s> eax_2)
        ebx_2 = eax_2
    
    int32_t eax_4 = GetSystemMetrics(SM_CYBORDER) * 2
    
    if (ebx_2 s< 0)
        ebx_2 += 3
    
    ebx_1 = eax_4 * 2 + (ebx_2 s>> 2)
else
    int32_t ebx
    
    if (*(arg1[-1] + 0x1d9) == 0)
        ebx = 6
    else
        ebx = 8
    
    ebx_1 = ebx * GetSystemMetrics(SM_CYBORDER)

int32_t result = sub_456efc(arg1[-1], arg1[-0x1e] + ebx_1)
*arg1
return result
