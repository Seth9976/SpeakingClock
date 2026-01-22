// 函数: sub_40dce0
// 地址: 0x40dce0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* lpString1 = nullptr

if (arg1 != 0 && *arg1 != 0 && arg2 != 0 && *arg2 != 0)
    void* var_18 = sub_409c4c(arg1)
    void* eax_3 = sub_409c4c(arg2)
    lpString1 = sub_409e38(arg1, arg2)
    
    while (true)
        if (lpString1 == 0 || eax_3 u> var_18 - (lpString1 - arg1))
            return nullptr
        
        int32_t var_14
        var_14.b = sub_40d8b0()
        
        if (var_14.b != 2 && CompareStringA(0x400, 0, lpString1, eax_3, arg2, eax_3) == CSTR_EQUAL)
            break
        
        if (var_14.b == 1)
            lpString1 += 1
        
        lpString1 = sub_409e38(lpString1 + 1, arg2)
        continue

return lpString1
