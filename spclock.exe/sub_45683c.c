// 函数: sub_45683c
// 地址: 0x45683c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (*(arg1 + 0x57) != 0)
    int32_t esi
    esi.w = 0xffd7
    HPALETTE hPal = sub_403e64(arg1, esi)
    
    if (hPal != 0)
        HDC eax_2 = (*(*arg1 + 0x48))(arg2)
        uint32_t eax_3
        eax_3.b = arg2 ^ 1
        char temp0_1 = eax_3.b
        eax_3.b = neg.b(eax_3.b)
        HPALETTE hPal_1 = SelectPalette(eax_2, hPal, sbb.d(eax_3, eax_3, temp0_1 != 0))
        
        if (RealizePalette(eax_2) != 0)
            (*(*arg1 + 0x80))()
        
        SelectPalette(eax_2, hPal_1, 0xffffffff)
        HWND hWnd
        ReleaseDC(hWnd, eax_2)
        result.b = 1

return result
