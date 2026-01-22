// 函数: sub_476b18
// 地址: 0x476b18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT hWnd
int32_t lParam

if (*(arg1 + 0xac) != 0)
    hWnd = *(arg1 + 0xb0)
    int32_t edi_2 = *(hWnd + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            hWnd = sub_41a0f4(*(arg1 + 0xb0), esi_1)
            
            if (*hWnd == lParam && arg2 == *(hWnd + 4))
                sub_402ec4(hWnd)
                return sub_419fe8(*(arg1 + 0xb0), esi_1)
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    hWnd = *(arg1 + 0x30)
    
    if (hWnd != 0)
        return SendMessageA(hWnd, 0xb020, 1, &lParam)
return hWnd
