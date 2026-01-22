// 函数: sub_478b10
// 地址: 0x478b10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_46b8c0(*(arg1 + 0x30))

if (result != 0)
    data_4b1cf0 = 0
    SetActiveWindow(*(arg1 + 0x30))
    sub_47582c(arg1)
    sub_475988(arg1, 1)
    result = data_4b1ce4
    int32_t* esi_1 = *(result + 0x64)
    
    if (esi_1 != 0)
        result = SetFocus(sub_45f888(esi_1))
    
    if (*(arg1 + 0x14a) != 0)
        *(arg1 + 0x14c)
        return (*(arg1 + 0x148))()

return result
