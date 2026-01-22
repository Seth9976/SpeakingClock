// 函数: sub_471e24
// 地址: 0x471e24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *(arg2 + 8)

if (eax == 1)
    if (sub_46b8c0(sub_45f888(arg1)) == 0)
        if (IsZoomed(sub_45f888(arg1)) == 0)
            arg1[0x9d].b = 1
        else
            arg1[0x9d].b = 3
    else
        arg1[0x9d].b = 2
    
    return (*(*arg1 - 0x10))()

void* result = eax - 3

if (eax != 3)
    return (*(*arg1 - 0x10))()

if (arg1[0x9d].b != 0)
    ShowWindow(sub_45f888(arg1), *((zx.d(arg1[0x9d].b) << 2) + &data_4abaa4))
    arg1[0x9d].b = 0
    result = data_4b1ce0
    
    if (arg1 == *(result + 0x44))
        data_4b1cf0 = 0

return result
