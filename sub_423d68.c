// 函数: sub_423d68
// 地址: 0x423d68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == arg1[0x10] && arg3 == arg1[0x11])
    return arg3

int32_t esi_2 = *(arg1[0x14] + 8) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        (*(*sub_41a0f4(arg1[0x14], edi_1) + 0x10))(arg2, arg3)
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x10] = arg2
arg1[0x11] = arg3
return (*(*arg1 + 0x30))()
