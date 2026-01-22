// 函数: sub_40aa78
// 地址: 0x40aa78
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* lpString1 = nullptr

if (arg1 != 0 && *arg1 != 0 && arg2 != 0 && *arg2 != 0)
    int32_t var_18 = sub_40706c(arg1)
    int32_t eax_3 = sub_40706c(arg2)
    lpString1 = sub_407120(arg1, arg2)
    
    while (true)
        if (lpString1 == 0 || eax_3 u> var_18 - (lpString1 - arg1))
            return nullptr
        
        int32_t var_14
        var_14.b = sub_40a7b4()
        
        if (var_14.b != 2 && CompareStringA(0x400, 0, lpString1, eax_3, arg2, eax_3) == CSTR_EQUAL)
            break
        
        if (var_14.b == 1)
            lpString1 += 1
        
        lpString1 = sub_407120(lpString1 + 1, arg2)
        continue

return lpString1
