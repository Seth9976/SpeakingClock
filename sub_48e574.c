// 函数: sub_48e574
// 地址: 0x48e574
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t edx
int32_t var_8 = edx
SetRectEmpty(arg3)
POINT var_10
BOOL result = sub_42c658(sub_430bec(arg1), &var_10)

if (var_10.x != 0xffffffff)
    if ((arg4.w & 0x1000) != 0x1000)
    label_48e695:
        
        if ((arg4.w & 0x80) != 0x80)
            sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
            result, ebp_1 = sub_48df58(sub_430bec(arg1), ebp_1[-1], arg2, ebp_1[2], nullptr, 0, 
                ebp_1[3], arg4, &ebp_1[-7])
        else
            sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
            result, ebp_1 =
                sub_48df58(nullptr, ebp_1[-1], arg2, ebp_1[2], arg1, 0, ebp_1[3], arg4, &ebp_1[-7])
    else
        char eax_6
        
        if ((*(*data_4ac21c + 0x3c) & 1) != 0)
            eax_6, ebp_1 = sub_48aff4()
        
        if ((*(*data_4ac21c + 0x3c) & 1) != 0 && eax_6 u< 9)
            goto label_48e695
        
        HPALETTE hPal = (*(*arg1 + 0x24))(0)
        SelectPalette(sub_42c73c(arg2), hPal)
        RealizePalette(sub_42c73c(arg2))
        
        if ((arg4.w & 0x80) != 0x80)
            sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
            int32_t eax_30 = (*(*arg1 + 0x24))(ebp_1[3], arg4, &ebp_1[-7])
            result, ebp_1 = sub_48df58(sub_430bec(arg1), ebp_1[-1], arg2, ebp_1[2], nullptr, eax_30)
        else
            sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
            result, ebp_1 =
                sub_48df58(nullptr, ebp_1[-1], arg2, ebp_1[2], arg1, 0, ebp_1[3], arg4, &ebp_1[-7])

*ebp_1
return result
