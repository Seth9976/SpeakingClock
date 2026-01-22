// 函数: sub_40eaac
// 地址: 0x40eaac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result_1 = arg3
int32_t ecx = sub_40e774(*(arg1 + 0x20), &result_1)
BOOL result_2 = result_1
*(result_2 + 0xc) -= 1
BOOL result = result_1

if (*(result + 0xc) == 0)
    *(arg1 + 0x20)
    sub_40e7ec(ecx, &result_1)
    result = GetCurrentThreadId()
    
    if (result != *(arg1 + 0x24))
        result = sub_40e6d8(arg1 + 0xc)
        
        if (result == 0xffff)
            return sub_40e914(arg1)
        
        if (result s<= 0)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(result)
            result = divs.dp.d(edx_2:eax_5, 0xffff)
            
            if (mods.dp.d(edx_2:eax_5, 0xffff) == 0)
                return sub_40e914(arg1)

return result
