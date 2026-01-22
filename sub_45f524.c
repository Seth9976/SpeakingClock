// 函数: sub_45f524
// 地址: 0x45f524
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg2
BOOL result = *(arg1 + 0x30)

if (result != 0)
    void* edx = *(result + 0x1cc)
    
    if (edx != 0)
        esi -= *(edx + 8)
    
    result = sub_41a150(*(result + 0x1d0), arg1)
    BOOL result_1 = result
    
    if (result_1 s>= 0)
        int32_t* edx_2 = *(*(arg1 + 0x30) + 0x1d0)
        result = edx_2[2]
        
        if (esi s< 0)
            esi = nullptr
        
        if (result s<= esi)
            esi = result - 1
        
        if (result_1 != esi)
            sub_419fe8(edx_2, result_1)
            result = sub_41a170(*(*(arg1 + 0x30) + 0x1d0), esi, arg1)
    
    if (*(arg1 + 0x1b4) != 0)
        if (esi == 0)
            return SetWindowPos(*(arg1 + 0x1b4), 1, 0, 0, 0, 0, 0x3)
        
        int32_t* ebp_1 = *(*(arg1 + 0x30) + 0x1d0)
        result = ebp_1[2] - 1
        
        if (esi == result)
            return SetWindowPos(*(arg1 + 0x1b4), nullptr, 0, 0, 0, 0, 0x3)
        
        HWND hWndInsertAfter
        
        if (result_1 s< esi)
            hWndInsertAfter = sub_45f888(sub_41a0f4(ebp_1, esi + 1))
            return SetWindowPos(*(arg1 + 0x1b4), hWndInsertAfter, 0, 0, 0, 0, 0x3)
        
        if (result_1 s> esi)
            hWndInsertAfter = sub_45f888(sub_41a0f4(ebp_1, esi))
            return SetWindowPos(*(arg1 + 0x1b4), hWndInsertAfter, 0, 0, 0, 0, 0x3)

return result
