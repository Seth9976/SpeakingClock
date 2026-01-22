// 函数: sub_4573e8
// 地址: 0x4573e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 != arg3)
    char ebx_1
    
    if ((arg1[7].b & 1) == 0)
        ebx_1 = 0x1f
    else
        ebx_1 = arg1[0x23].b
    
    int32_t ebp_1
    
    if ((ebx_1 & 1) == 0)
        ebp_1 = arg1[0x10]
    else
        ebp_1 = MulDiv(arg1[0x10], arg2, arg3)
    
    int32_t var_1c_1
    
    if ((ebx_1 & 2) == 0)
        var_1c_1 = arg1[0x11]
    else
        var_1c_1 = MulDiv(arg1[0x11], arg2, arg3)
    
    int32_t var_18_1
    
    if ((ebx_1 & 4) == 0 || (*(arg1 + 0x51) & 1) != 0)
        var_18_1 = arg1[0x12]
    else if ((ebx_1 & 1) == 0)
        var_18_1 = MulDiv(arg1[0x12], arg2, arg3)
    else
        var_18_1 = MulDiv(arg1[0x10] + arg1[0x12], arg2, arg3) - ebp_1
    
    int32_t var_14_1
    
    if ((ebx_1 & 8) == 0 || (*(arg1 + 0x51) & 2) != 0)
        var_14_1 = arg1[0x13]
    else if ((ebx_1 & 2) == 0)
        var_14_1 = MulDiv(arg1[0x13], arg2, arg3)
    else
        var_14_1 = MulDiv(arg1[0x11] + arg1[0x13], arg2, arg3) - var_1c_1
    
    sub_45728c(arg1, arg2, arg3)
    (*(*arg1 + 0x88))(var_14_1, var_18_1)
    
    if (0 != (ebx_1 & 5))
        *(arg1 + 0x175) = MulDiv(*(arg1 + 0x175), arg2, arg3)
    
    if (0 != (ebx_1 & 0xa))
        *(arg1 + 0x179) = MulDiv(*(arg1 + 0x179), arg2, arg3)
    
    if (*(arg1 + 0x59) == 0 && (ebx_1 & 0x10) != 0)
        void* ebx_2 = arg1[0x1a]
        sub_42b618(ebx_2, MulDiv(sub_42b5fc(ebx_2), arg2, arg3))

arg1[0x23].b = 0
return 0
