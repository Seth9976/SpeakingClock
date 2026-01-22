// 函数: sub_4756d0
// 地址: 0x4756d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = *(arg1 + 0x30)

if (result != 0)
    if (*(arg1 + 0x94) == 0)
        HWND var_10 = result
        int32_t var_c
        var_c.b = arg2
        EnumWindows(sub_475658, &var_10)
        result = *(arg1 + 0x90)
        
        if (*(result + 8) != 0)
            HWND hWnd = GetWindow(var_10, GW_HWNDPREV)
            var_10 = hWnd
            
            if ((GetWindowLongA(hWnd, 0xffffffec) & 8) != 0)
                var_10 = 0xfffffffe
            
            result = *(arg1 + 0x90)
            int32_t i = *(result + 8) - 1
            
            if (i s>= 0)
                do
                    result = SetWindowPos(sub_41a0f4(*(arg1 + 0x90), i), var_10, 0, 0, 0, 0, 0x213)
                    i -= 1
                while (i != 0xffffffff)
    
    *(arg1 + 0x94) += 1

return result
