// 函数: sub_47673c
// 地址: 0x47673c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t eax = arg2[1]

if (eax u>= 0x100 && eax u<= 0x109)
    HWND hWnd = GetCapture()
    
    if (hWnd != 0)
        uint32_t lpdwProcessId
        GetWindowThreadProcessId(hWnd, &lpdwProcessId)
        uint32_t lpdwProcessId_1
        GetWindowThreadProcessId(*(arg1 + 0x30), &lpdwProcessId_1)
        
        if (lpdwProcessId == lpdwProcessId_1
                && SendMessageA(hWnd, arg2[1] + 0xbc00, arg2[2], arg2[3]) != 0)
            result.b = 1
    else
        HWND hWnd_1 = *arg2
        int32_t* eax_1 = *(arg1 + 0x44)
        
        if (eax_1 == 0 || hWnd_1 != eax_1[0xa7])
            while (sub_45428c(hWnd_1) == 0)
                if (hWnd_1 == 0)
                    break
                
                hWnd_1 = GetParent(hWnd_1)
            
            if (hWnd_1 == 0)
                hWnd_1 = *arg2
        else
            hWnd_1 = sub_45f888(eax_1)
        
        if (IsWindowUnicode(hWnd_1) == 0)
            if (SendMessageA(hWnd_1, arg2[1] + 0xbc00, arg2[2], arg2[3]) != 0)
                result.b = 1
        else if (SendMessageW(hWnd_1, arg2[1] + 0xbc00, arg2[2], arg2[3]) != 0)
            result.b = 1

return result
