// 函数: sub_47c838
// 地址: 0x47c838
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x269) != 0)
    uint32_t edx_1 = zx.d(*(arg1 + 0x269))
    char ecx_1 = edx_1.b
    char temp1_1
    
    if (ecx_1 != 1)
        temp1_1 = ecx_1 - 1
    
    if (ecx_1 == 1 || temp1_1 == 3)
        ecx_1 = 1
    else
        ecx_1 = 0
    
    char ecx_2
    
    if (ecx_1 == *(arg1 + 0x258))
        ecx_2 = edx_1.b
        char temp3_1
        
        if (ecx_2 != 2)
            temp3_1 = ecx_2 - 2
        
        if (ecx_2 == 2 || temp3_1 == 3)
            ecx_2 = 1
        else
            ecx_2 = 0
    
    if (ecx_1 != *(arg1 + 0x258) || ecx_2 != *(arg1 + 0x259)
            || *(((edx_1 & 0x7f) << 2) + &data_4abbb8) != *(arg1 + 0x25c) || *(arg1 + 0x275) != 0)
        *(arg1 + 0x269) = 0

return zx.d(*(arg1 + 0x269))
