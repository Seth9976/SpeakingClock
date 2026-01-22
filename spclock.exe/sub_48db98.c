// 函数: sub_48db98
// 地址: 0x48db98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t edx
int32_t var_8 = edx
POINT var_10
enum GDI_REGION_TYPE result = sub_42c658(sub_430bec(arg1), &var_10)

if (var_10.x != 0xffffffff)
    if ((arg3.w & 0x1000) == 0x1000)
        char eax_5
        
        if ((*(*data_4ac21c + 0x3c) & 1) != 0)
            eax_5, ebp_1 = sub_48aff4()
        
        if ((*(*data_4ac21c + 0x3c) & 1) == 0 || eax_5 u>= 9)
            HPALETTE hPal = (*(*arg1 + 0x24))(0)
            SelectPalette(sub_42c73c(arg2), hPal)
            RealizePalette(sub_42c73c(arg2))
    
    if ((arg3.w & 0x80) != 0x80)
        sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
        result = sub_48dc9c(sub_430bec(arg1), ebp_1[-1], arg2, nullptr, ebp_1[2], ebp_1[3], arg3, 
            &ebp_1[-7])
    else
        sub_406c1c((*(*arg1 + 0x2c))(&ebp_1[-7], (*(*arg1 + 0x20))()), 0, 0)
        result = sub_48dc9c(nullptr, ebp_1[-1], arg2, arg1, ebp_1[2], ebp_1[3], arg3, &ebp_1[-7])

*ebp_1
return result
