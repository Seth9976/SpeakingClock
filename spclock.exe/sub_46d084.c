// 函数: sub_46d084
// 地址: 0x46d084
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg3 != arg2)
    if ((*(arg1 + 0x1c) & 1) == 0)
        *(*(arg1 + 0x250) + 0x1e) = 1
        *(*(arg1 + 0x254) + 0x1e) = 1
    
    sub_46c7a0(*(arg1 + 0x250), 0)
    sub_46c7a0(*(arg1 + 0x254), 0)
    
    if (*(arg1 + 0x258) == 0)
        void* ebp_1 = *(arg1 + 0x250)
        
        if (*(ebp_1 + 0x1e) != 0)
            MulDiv(*(ebp_1 + 0x10), arg2, arg3)
            sub_46c8f0(ebp_1)
        
        void* ebp_2 = *(arg1 + 0x254)
        
        if (*(ebp_2 + 0x1e) != 0)
            MulDiv(*(ebp_2 + 0x10), arg2, arg3)
            sub_46c8f0(ebp_2)

*(*(arg1 + 0x250) + 0x1e) = 0
void* result = *(arg1 + 0x254)
*(result + 0x1e) = 0
return result
