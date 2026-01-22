// 函数: sub_499c5c
// 地址: 0x499c5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x25d) = 0

if (*(arg1 + 0x263) != 0)
    char eax_1 = (*(*arg1 + 0xe8))()
    
    if (eax_1 != 0)
        eax_1 = (*(*arg1 + 0xe0))()
        
        if (eax_1 != 0)
            int32_t eax_8 = (*data_4ac2d0)(sub_45f888(arg1), *(arg2 + 4), 0)
            
            if (eax_8 == 0)
                *(arg1 + 0x25d) = 1
            
            *(arg2 + 0xc) = 1
            return eax_8
    
    if (arg1[0xac].b == 1)
        *(arg2 + 0xc) = 1
        return eax_1

char eax_10 = (*(*arg1 + 0x154))()

if (eax_10 == 0)
    return sub_45db28(arg1, arg2)

*(arg2 + 0xc) = 1
return eax_10
