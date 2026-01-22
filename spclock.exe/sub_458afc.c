// 函数: sub_458afc
// 地址: 0x458afc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t eax_1 = (*(*arg1 + 0x54))()

if (eax_1.b != 0)
    arg1[0x28] = arg1[0x13]
    int32_t eax_3 = arg1[0x12]
    arg1[0x27] = eax_3
    return eax_3

if (arg1[0x25] != 0)
    if (arg1[0x24].b == 2 || *(arg1[0x25] + 0x5b) - 1 u< 2)
        eax_1 = arg1[0x13]
        arg1[0x2a] = eax_1
    else
        char temp1_1
        
        if (arg1[0x24].b != 1)
            eax_1.b = *(arg1[0x25] + 0x5b) - 3
            temp1_1 = eax_1.b
            eax_1.b -= 2
        
        if (arg1[0x24].b == 1 || temp1_1 u< 2)
            eax_1 = arg1[0x12]
            arg1[0x29] = eax_1

return eax_1
