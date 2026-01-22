// 函数: sub_4496c4
// 地址: 0x4496c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HMODULE hModule = GetModuleHandleA("comctl32.dll")

if (hModule != 0)
    data_4b1c28 = GetProcAddress(hModule, "InitializeFlatSB")
    data_4b1c2c = GetProcAddress(hModule, "UninitializeFlatSB")
    data_4b1c20 = GetProcAddress(hModule, "FlatSB_GetScrollProp")
    data_4b1c24 = GetProcAddress(hModule, "FlatSB_SetScrollProp")
    int32_t eax_4 = GetProcAddress(hModule, "FlatSB_EnableScrollBar")
    data_4b1bfc = eax_4
    
    if (eax_4 == 0)
        data_4b1bfc = EnableScrollBar
    
    int32_t eax_5 = GetProcAddress(hModule, "FlatSB_ShowScrollBar")
    data_4b1c00 = eax_5
    
    if (eax_5 == 0)
        data_4b1c00 = ShowScrollBar
    
    int32_t eax_6 = GetProcAddress(hModule, "FlatSB_GetScrollRange")
    data_4b1c04 = eax_6
    
    if (eax_6 == 0)
        data_4b1c04 = GetScrollRange
    
    int32_t eax_7 = GetProcAddress(hModule, "FlatSB_GetScrollInfo")
    data_4b1c08 = eax_7
    
    if (eax_7 == 0)
        data_4b1c08 = GetScrollInfo
    
    int32_t eax_8 = GetProcAddress(hModule, "FlatSB_GetScrollPos")
    data_4b1c0c = eax_8
    
    if (eax_8 == 0)
        data_4b1c0c = GetScrollPos
    
    int32_t eax_9 = GetProcAddress(hModule, "FlatSB_SetScrollPos")
    data_4b1c10 = eax_9
    
    if (eax_9 == 0)
        data_4b1c10 = SetScrollPos
    
    int32_t eax_10 = GetProcAddress(hModule, "FlatSB_SetScrollInfo")
    data_4b1c14 = eax_10
    
    if (eax_10 == 0)
        data_4b1c14 = SetScrollInfo
    
    hModule = GetProcAddress(hModule, "FlatSB_SetScrollRange")
    data_4b1c18 = hModule
    
    if (hModule == 0)
        hModule = SetScrollRange
        data_4b1c18 = SetScrollRange

return hModule
