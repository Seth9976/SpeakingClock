// 函数: sub_464cc4
// 地址: 0x464cc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u< 1)
    LRESULT ecx_1
    int32_t edx_2
    ecx_1, edx_2 = sub_464c08(arg1)
    
    if (*(arg1 + 0xd) != 0)
        sub_464c24(arg1)
        return 
    
    sub_464c54(arg1, edx_2, ecx_1)
else if (arg2 == 0x68 && *(arg1 + 0x20) != 0)
    if (*(arg1 + 0xd) == 0)
        *(arg1 + 0x10) = SendMessageA(*(arg1 + 0x18), *(arg1 + 0x14), 0, 0)
    else
        SystemParametersInfoA(SPI_GETWHEELSCROLLLINES, 0, arg1 + 0x10, 0)
