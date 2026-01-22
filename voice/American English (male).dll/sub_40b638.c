// 函数: sub_40b638
// 地址: 0x40b638
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

BOOL result_1 = arg3
int32_t ecx = sub_40b318(*(arg1 + 0x20), &result_1)
BOOL result_2 = result_1
*(result_2 + 0xc) -= 1
BOOL result = result_1

if (*(result + 0xc) == 0)
    *(arg1 + 0x20)
    sub_40b390(ecx, &result_1)
    result = GetCurrentThreadId()
    
    if (result != *(arg1 + 0x24))
        result = sub_40b288(arg1 + 0xc)
        
        if (result == 0xffff)
            return sub_40b4b4(arg1)
        
        if (result s<= 0)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(result)
            result = divs.dp.d(edx_2:eax_5, 0xffff)
            
            if (mods.dp.d(edx_2:eax_5, 0xffff) == 0)
                return sub_40b4b4(arg1)

return result
