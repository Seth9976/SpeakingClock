// 函数: sub_47696c
// 地址: 0x47696c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t result = 0

if (PeekMessageA(arg2, nullptr, 0, 0, PM_NOREMOVE) != 0)
    HWND hWnd = *arg2
    BOOL eax_1
    
    if (hWnd != 0)
        eax_1 = IsWindowUnicode(hWnd)
    
    if (hWnd != 0 && eax_1 != 0)
        eax_1.b = 1
    else
        eax_1 = 0
    
    var_14.b = eax_1.b
    char eax_4
    
    if (var_14.b == 0)
        BOOL eax_5 = PeekMessageA(arg2, nullptr, 0, 0, PM_REMOVE)
        eax_4 = (sbb.d(eax_5, eax_5, eax_5 u< 1)).b + 1
    else
        BOOL eax_2 = PeekMessageW(arg2, nullptr, 0, 0, PM_REMOVE)
        eax_4 = (sbb.d(eax_2, eax_2, eax_2 u< 1)).b + 1
    
    if (eax_4 != 0)
        result.b = 1
        
        if (arg2[1] == 0x12)
            *(arg1 + 0xa4) = 1
        else
            var_14:1.b = 0
            
            if (*(arg1 + 0x102) != 0)
                *(arg1 + 0x104)
                (*(arg1 + 0x100))(var_14)
            
            if (sub_4785cc(arg1, arg2) == 0)
                sub_476830(arg1)
                
                if (sub_4766ec(arg1, arg2) == 0 && sub_47673c(arg1, arg2) == 0
                        && sub_4766a4(arg1, arg2) == 0)
                    TranslateMessage(arg2)
                    
                    if (var_14.b == 0)
                        DispatchMessageA(arg2)
                    else
                        DispatchMessageW(arg2)

return result
